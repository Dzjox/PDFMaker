#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Enumeration describes elements in signature subject string.
/// </summary>
enum class SubjectNameElements
{
    /// <summary>
    /// Common Name.
    /// </summary>
    CN,
    /// <summary>
    /// Organization.
    /// </summary>
    O,
    /// <summary>
    /// Locality.
    /// </summary>
    L,
    /// <summary>
    /// Organizational Unit.
    /// </summary>
    OU,
    /// <summary>
    /// State or Province Name.
    /// </summary>
    S,
    /// <summary>
    /// Country.
    /// </summary>
    C,
    /// <summary>
    /// Email.
    /// </summary>
    E
};

class SignatureSubjectFormatter
{
    typedef SignatureSubjectFormatter ThisType;
    
public:

    static System::String FormatSubject(System::String subject, System::ArrayPtr<SubjectNameElements> format);
    
private:

    static const char16_t Separator;
    static const System::String SeparatorBig;
    static const System::String CN;
    static const System::String O;
    static const System::String L;
    static const System::String OU;
    static const System::String S;
    static const System::String C;
    static const System::String E;
    static System::SharedPtr<System::Collections::Generic::Dictionary<SubjectNameElements, System::String>> formatItems;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
public:
    SignatureSubjectFormatter() = delete;
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


