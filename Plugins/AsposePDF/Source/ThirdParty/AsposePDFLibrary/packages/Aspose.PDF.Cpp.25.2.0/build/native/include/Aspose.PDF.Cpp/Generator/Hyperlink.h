#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BaseParagraph;
namespace LogicalStructure
{
class LinkElement;
} // namespace LogicalStructure
class PageGenerator;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents abstract hyperlink.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Hyperlink : public System::Object
{
    typedef Hyperlink ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseParagraph;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    ASPOSE_PDF_SHARED_API void cpp_set_link_element_to_weak();
    
protected:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> get_LinkElement() const;
    void set_LinkElement(System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> value);
    
    virtual ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> _linkElement;
    
};

} // namespace Pdf
} // namespace Aspose


