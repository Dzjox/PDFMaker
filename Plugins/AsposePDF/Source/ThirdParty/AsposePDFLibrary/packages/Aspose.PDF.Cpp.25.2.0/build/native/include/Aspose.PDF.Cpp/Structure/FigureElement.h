#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using PdfImage = Aspose.Pdf.Drawing.PdfImage;

// C# preprocessor directive: #endif


#include "Aspose.PDF.Cpp/Structure/Element.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Structure
{
class ElementFactory;
} // namespace Structure
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Image;
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Structure {

/// <summary>
/// Class representing logical structure figure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FigureElement : public Aspose::Pdf::Structure::Element
{
    typedef FigureElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Structure::ElementFactory;
    
public:

    /// <summary>
    /// Gets the value of figure structure element.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Drawing::Image> get_Image();
    
protected:

    FigureElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FigureElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent));
    
    FigureElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FigureElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent));
    
private:

    static System::SharedPtr<System::Drawing::Image> FindImageOnPage(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> enginePage, System::String value);
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose


