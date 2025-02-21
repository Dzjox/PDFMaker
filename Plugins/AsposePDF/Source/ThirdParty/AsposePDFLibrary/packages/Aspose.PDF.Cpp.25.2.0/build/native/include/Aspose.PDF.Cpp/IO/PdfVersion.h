#pragma once


namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum represents version of pdf file.
/// </summary>
enum class PdfVersion
{
    /// Adobe version 1.0
    v_1_0,
    /// Adobe version 1.1
    v_1_1,
    /// Adobe version 1.2
    v_1_2,
    /// Adobe version 1.3
    v_1_3,
    /// Adobe version 1.4
    v_1_4,
    /// Adobe version 1.5
    v_1_5,
    /// Adobe version 1.6
    v_1_6,
    /// Adobe version 1.7
    v_1_7,
    /// ISO Standard PDF 2.0
    v_2_0
};

/// <summary>
/// Extra methods for enum <see cref="PdfVersion"></see>.
/// </summary>
class PdfVersionMethods
{
    typedef PdfVersionMethods ThisType;
    
public:

    /// <summary>
    /// Converts version to string format.
    /// </summary>
    /// <param name="version">The Version.</param>
    /// <returns>Version in the string format '0.0'.</returns>
    static System::String GetString(PdfVersion version);
    
public:
    PdfVersionMethods() = delete;
};

} // namespace Pdf
} // namespace Aspose


