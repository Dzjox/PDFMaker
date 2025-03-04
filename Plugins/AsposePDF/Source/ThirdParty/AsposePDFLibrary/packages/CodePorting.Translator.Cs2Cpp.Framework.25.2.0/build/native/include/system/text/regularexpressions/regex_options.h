/// @file system/text/regularexpressions/regex_options.h
#ifndef _RegExOptions_h_
#define _RegExOptions_h_

#include "system/enum_helpers.h"

namespace System { namespace Text { namespace RegularExpressions {

/// Regex options.
enum class RegexOptions {
    /// Default behavior.
    None=0,
    /// Compile regex for performance. Always done by default.
    Compiled=1,
    /// Use culture-invariant matching. Ignored.
    CultureInvariant=2,
    /// Use ECMAScript syntax. Ignored.
    ECMAScript=4,
    /// Explicit capturing only. Ignored.
    ExplicitCapture=8,
    /// Ignore case when matching.
    IgnoreCase=16,
    /// Ignore whitespaces in pattern. Unsupported.
    IgnorePatternWhitespace=32,
    /// Treat '^' and '$' as beginning and end of line, not whole string.
    Multiline=64,
    /// Right-to-left matching. Unsupported.
    RightToLeft=128,
    /// Makes '.' match any character without exceptions (normally, newline characters are not matched).
    Singleline=256
};

/// @cond
/// Declaration of template arithmetic operators for values of the RegexOptions enum type.
DECLARE_ENUM_OPERATORS(System::Text::RegularExpressions::RegexOptions);
/// Import of global operators into current namespace.
DECLARE_USING_GLOBAL_OPERATORS
/// @endcond
}}} //namepsace System::Text::RegularExpressions

/// Inserts using declaratios for arithmetic operators declared in namespace System::Text::RegularExpressions.
DECLARE_USING_ENUM_OPERATORS(System::Text::RegularExpressions);

#endif // _RegExOptions_h_

