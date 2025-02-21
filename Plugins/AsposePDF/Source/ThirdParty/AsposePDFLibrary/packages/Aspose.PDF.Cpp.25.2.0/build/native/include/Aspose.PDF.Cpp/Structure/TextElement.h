#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

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
class OperatorCollection;
namespace Structure
{
class ElementFactory;
} // namespace Structure
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Structure {

/// <summary>
/// General text element of document logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextElement : public Aspose::Pdf::Structure::Element
{
    typedef TextElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Structure::ElementFactory;
    
public:

    /// <summary>
    /// Gets the value of text structure element.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text();
    
protected:

    TextElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent));
    
    TextElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent));
    
private:

    static System::SharedPtr<OperatorCollection> GetPageOperators(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    static System::String FindTextInPageOperators(System::SharedPtr<OperatorCollection> operators, System::String value);
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose


