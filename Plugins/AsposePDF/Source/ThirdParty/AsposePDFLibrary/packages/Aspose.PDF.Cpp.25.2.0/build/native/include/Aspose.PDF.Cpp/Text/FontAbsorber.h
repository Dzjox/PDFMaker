#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Text
{
class FontCollection;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents an absorber object of fonts.
/// Performs search for fonts and provides access to search results via <see cref="FontAbsorber::Fonts"></see> collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontAbsorber : public System::Object
{
    typedef FontAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="Font"></see> objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FontCollection> get_Fonts() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FontAbsorber"></see> that performs search for fonts of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API FontAbsorber();
    
    /// <summary>
    /// Performs  search in the specified range of pages of the document.
    /// </summary>
    /// <param name="pdf">Pdf pocument object.</param>
    /// <param name="startPage">Pdf pocument start page.</param>
    /// <param name="pageCount">Pdf document page count</param>
    virtual ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Document> pdf, int32_t startPage, int32_t pageCount);
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <param name="pdf">Pdf pocument object.</param>
    virtual ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Document> pdf);
    
private:

    System::SharedPtr<FontCollection> fontCollection;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


