#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class TeXConverter;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to TeX format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TeXSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef TeXSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::TeXConverter;
    
public:

    /// <summary>
    /// Property for <see cref="_outDirectoryPath"></see> parameter.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OutDirectoryPath() const;
    /// <summary>
    /// Property for <see cref="_outDirectoryPath"></see> parameter.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutDirectoryPath(System::String value);
    /// <summary>
    /// Returns the number of pages after conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PagesCount() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TeXSaveOptions"></see> class. 
    /// </summary>
    ASPOSE_PDF_SHARED_API TeXSaveOptions();
    
    /// <summary>
    /// Adds a font ancoding to the font encoding list
    /// </summary>
    /// <param name="fontEncs">The font encs.</param>
    ASPOSE_PDF_SHARED_API void AddFontEncs(const System::ArrayPtr<System::String>& fontEncs);
    /// <summary>
    /// Clears the font encoding list
    /// </summary>
    ASPOSE_PDF_SHARED_API void ClearFontEncs();
    
protected:

    /// <summary>
    /// Returns the number of pages after conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PagesCount(int32_t value);
    System::String get_OutputPath() const;
    void set_OutputPath(System::String value);
    
    /// <summary>
    /// Gets font encodings list
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetFontEncs();
    
private:

    /// <summary>
    /// Output directory path for help files.
    /// </summary>
    /// <remarks>
    /// E.g. for converting APSImages it is needed that the image should belongs to the same directory as output TEX file. 
    /// </remarks>
    System::String _outDirectoryPath;
    /// <summary>
    /// List of additional (to T1) font encodings
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> _fontEncList;
    int32_t _pagesCount;
    System::String _outputPath;
    
};

/// @deprecated Use TeXSaveOptions instead
/// <summary>
/// Save options for export to TeX format.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LaTeXSaveOptions : public Aspose::Pdf::TeXSaveOptions
{
    typedef LaTeXSaveOptions ThisType;
    typedef Aspose::Pdf::TeXSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Pdf
} // namespace Aspose


