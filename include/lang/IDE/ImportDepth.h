//===--- ImportDepth.h ----------------------------------------------------===//
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

#ifndef CODE_IDE_IMPORTDEPTH_H
#define CODE_IDE_IMPORTDEPTH_H

#include "code/AST/ASTContext.h"
#include "code/Basic/LLVM.h"
#include "code/Frontend/FrontendOptions.h"
#include "llvm/ADT/StringMap.h"

namespace code {
namespace ide {

/// A utility for calculating the import depth of a given module. Direct imports
/// have depth 1, imports of those modules have depth 2, etc.
///
/// Special modules such as Playground auxiliary sources are considered depth
/// 0.
class ImportDepth {
  llvm::StringMap<uint8_t> depths;

public:
  ImportDepth() = default;
  ImportDepth(ASTContext &context, const FrontendOptions &frontendOptions);

  llvm::Optional<uint8_t> lookup(StringRef module) {
    auto I = depths.find(module);
    if (I == depths.end())
      return llvm::None;
    return I->getValue();
  }
};

} // end namespace ide
} // end namespace code

#endif // CODE_IDE_IMPORTDEPTH_H
