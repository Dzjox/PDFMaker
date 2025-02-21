#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/TextBoxField.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Forms
{
class Field;
} // namespace Forms
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Field for file select box element.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FileSelectBoxField final : public Aspose::Pdf::Forms::TextBoxField
{
    typedef FileSelectBoxField ThisType;
    typedef Aspose::Pdf::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::Field;
    
protected:

    FileSelectBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FileSelectBoxField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~FileSelectBoxField();
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


