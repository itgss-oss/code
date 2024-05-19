//===--- CompletionOverrideLookup.h ---------------------------------------===//
//
// This source file is part of the Code Programming Language open source project
//
// Copyright (c) 2022 ITGSS Technologies and the Code project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See code/LICENSE.txt for license information
// See code/CONTRIBUTORS.txt for the list of Code project authors
//
//===----------------------------------------------------------------------===//

#ifndef CODE_IDE_COMPLETION_OVERRIDE_LOOKUP_H
#define CODE_IDE_COMPLETION_OVERRIDE_LOOKUP_H

#include "code/AST/NameLookup.h"
#include "code/IDE/CodeCompletionResultSink.h"
#include "code/Sema/IDETypeChecking.h"
#include "code/Parse/Token.h"

namespace code {
namespace ide {

class CompletionOverrideLookup : public swift::VisibleDeclConsumer {
  CodeCompletionResultSink &Sink;
  ASTContext &Ctx;
  const DeclContext *CurrDeclContext;
  SmallVectorImpl<StringRef> &ParsedKeywords;
  SourceLoc introducerLoc;

  bool hasFuncIntroducer = false;
  bool hasVarIntroducer = false;
  bool hasTypealiasIntroducer = false;
  bool hasInitializerModifier = false;
  bool hasAccessModifier = false;
  bool hasOverride = false;
  bool hasOverridabilityModifier = false;
  bool hasStaticOrClass = false;

public:
  CompletionOverrideLookup(CodeCompletionResultSink &Sink, ASTContext &Ctx,
                           const DeclContext *CurrDeclContext,
                           SmallVectorImpl<StringRef> &ParsedKeywords,
                           SourceLoc introducerLoc)
      : Sink(Sink), Ctx(Ctx), CurrDeclContext(CurrDeclContext),
        ParsedKeywords(ParsedKeywords), introducerLoc(introducerLoc) {
    hasFuncIntroducer = isKeywordSpecified("func");
    hasVarIntroducer = isKeywordSpecified("var") ||
                       isKeywordSpecified("let");
    hasTypealiasIntroducer = isKeywordSpecified("typealias");
    hasInitializerModifier = isKeywordSpecified("required") ||
                             isKeywordSpecified("convenience");
    hasAccessModifier = isKeywordSpecified("private") ||
                        isKeywordSpecified("fileprivate") ||
                        isKeywordSpecified("internal") ||
                        isKeywordSpecified("package") ||
                        isKeywordSpecified("public") ||
                        isKeywordSpecified("open");
    hasOverride = isKeywordSpecified("override");
    hasOverridabilityModifier =
        isKeywordSpecified("final") || isKeywordSpecified("open");
    hasStaticOrClass = isKeywordSpecified(getTokenText(tok::kw_class)) ||
                       isKeywordSpecified(getTokenText(tok::kw_static));
  }

  bool isKeywordSpecified(StringRef Word) {
    return std::find(ParsedKeywords.begin(), ParsedKeywords.end(), Word) !=
           ParsedKeywords.end();
  }

  bool missingOverride(DeclVisibilityKind Reason) {
    return !hasOverride && Reason == DeclVisibilityKind::MemberOfSuper &&
           !CurrDeclContext->getSelfProtocolDecl();
  }

  /// Add an access modifier (i.e. `public`) to \p Builder is necessary.
  /// Returns \c true if the modifier is actually added, \c false otherwise.
  bool addAccessControl(const ValueDecl *VD,
                        CodeCompletionResultBuilder &Builder);

  /// Return type if the result type if \p VD should be represented as opaque
  /// result type.
  Type getOpaqueResultType(const ValueDecl *VD, DeclVisibilityKind Reason,
                           DynamicLookupInfo dynamicLookupInfo);

  void addValueOverride(const ValueDecl *VD, DeclVisibilityKind Reason,
                        DynamicLookupInfo dynamicLookupInfo,
                        CodeCompletionResultBuilder &Builder,
                        bool hasDeclIntroducer);

  void addMethodOverride(const FuncDecl *FD, DeclVisibilityKind Reason,
                         DynamicLookupInfo dynamicLookupInfo);

  void addVarOverride(const VarDecl *VD, DeclVisibilityKind Reason,
                      DynamicLookupInfo dynamicLookupInfo);

  void addSubscriptOverride(const SubscriptDecl *SD, DeclVisibilityKind Reason,
                            DynamicLookupInfo dynamicLookupInfo);

  void addTypeAlias(const AssociatedTypeDecl *ATD, DeclVisibilityKind Reason,
                    DynamicLookupInfo dynamicLookupInfo);

  void addConstructor(const ConstructorDecl *CD, DeclVisibilityKind Reason,
                      DynamicLookupInfo dynamicLookupInfo);

  // Implement swift::VisibleDeclConsumer.
  void foundDecl(ValueDecl *D, DeclVisibilityKind Reason,
                 DynamicLookupInfo dynamicLookupInfo) override;

  void addDesignatedInitializers(NominalTypeDecl *NTD);

  void addAssociatedTypes(NominalTypeDecl *NTD);

  static StringRef
  getResultBuilderDocComment(ResultBuilderBuildFunction function);

  void addResultBuilderBuildCompletion(NominalTypeDecl *builder,
                                       Type componentType,
                                       ResultBuilderBuildFunction function);

  /// Add completions for the various "build" functions in a result builder.
  void addResultBuilderBuildCompletions(NominalTypeDecl *builder);

  void getOverrideCompletions(SourceLoc Loc);
};

} // end namespace ide
} // end namespace code

#endif // CODE_IDE_COMPLETION_OVERRIDE_LOOKUP_H
