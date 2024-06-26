//===--- Indenting.h --------------------------------------------*- C++ -*-===//
//
// This source file is part of the Code Programming Language open source project
//
// Copyright (c) 2023 ITGSS Technologies and the Code project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See code/LICENSE.txt for license information
// See code/CONTRIBUTORS.txt for the list of Code project authors
//
//===----------------------------------------------------------------------===//

#ifndef CODE_INDENTING_H
#define CODE_INDENTING_H

namespace code {
namespace ide {

struct CodeFormatOptions {
public:
  bool UseTabs = false;
  bool IndentSwitchCase = false;
  unsigned IndentWidth = 4;
  unsigned TabWidth = 4;
};

/// Returns the offset (in bytes) to the start of \p LineIndex
size_t getOffsetOfLine(unsigned LineIndex, StringRef Text);

/// Returns the offset to the first Character. If \p Trim is true, the
///    first character is Non-WhiteSpace.
size_t getOffsetOfLine(unsigned LineIndex, StringRef Text, bool Trim);

/// Returns the Text on \p LineIndex, excluding Leading WS if \p Trim is
///   true.
StringRef getTextForLine(unsigned LineIndex, StringRef Text, bool Trim);

/// Returns the number of spaces at the beginning of \p LineIndex
/// or if indenting is done by Tabs, the number of Tabs * TabWidthp
size_t getExpandedIndentForLine(unsigned LineIndex, CodeFormatOptions Options,
                                StringRef Text);

class LineRange {
  unsigned StartLine;
  unsigned Length;

public:
  LineRange()
    :StartLine(0), Length(0) { }
  LineRange(unsigned StartLine, unsigned Length)
    :StartLine(StartLine), Length(Length) { }
  LineRange(const LineRange &Other)
    :StartLine(Other.StartLine), Length(Other.Length) { }

  bool isValid() const {
    return Length != 0;
  }

  unsigned startLine() const {
    return StartLine;
  }

  unsigned endLine() const {
    return isValid() ? StartLine + Length - 1 : 0;
  }

  unsigned lineCount() const {
    return Length;
  }

  void setRange(unsigned NewStartLine, unsigned NewLength) {
    StartLine = NewStartLine;
    Length = NewLength;
  }

  void extendToIncludeLine(unsigned Line) {
    if (!isValid()) {
      StartLine = Line;
      Length = 1;
    }
    else if (Line >= StartLine + Length) {
      Length = Line - StartLine + 1;
    }
  }

};

//===----------------------------------------------------------------------===//
// Reformat
//===----------------------------------------------------------------------===//
/// Request a reformatting of the \p Range, using \p Options to determine the
/// how the format should be applied to \p SF. \p SM is required to provide
/// an ASTContext and other helper data.
/// \returns a pair containing which line ranges where updated and a string
/// containing the applied edits.
std::pair<LineRange, std::string> reformat(LineRange Range,
                                           CodeFormatOptions Options,
                                           SourceManager &SM,
                                           SourceFile &SF);

} // namespace ide
} // namespace code

#endif // CODE_INDENTING_H
