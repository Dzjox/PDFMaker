#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IField.h>

#include "DOM/Portion.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BulletFormatEffectiveData;
namespace Charts
{
class DataLabelRenderContext;
} // namespace Charts
class FieldType;
class IBaseSlide;
class IFieldType;
class IPresentation;
class LayoutTemplates;
class MasterSlideTemplate;
class NotesTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class ParagraphOdpDeserialization;
class PortionOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphFormat;
class ParagraphFormatEffectiveData;
namespace PptxSerialization
{
namespace PartParser
{
class DrsShapePartParser;
class ParagraphCollectionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class StyleColorGetter;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class FieldPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
class Guid;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a field.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Field final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Portion>>, public Aspose::Slides::IField
{
    typedef Field ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Portion>> BaseType;
    typedef Aspose::Slides::IField BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::StyleColorGetter;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpDeserialization;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::LayoutTemplates;
    /// @endcond
    
public:

    /// <summary>
    /// Returns field's type.
    /// Read <see cref="Aspose::Slides::IFieldType">IFieldType</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFieldType> get_Type() override;
    /// <summary>
    /// Sets field's type.
    /// Write <see cref="Aspose::Slides::IFieldType">IFieldType</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(System::SharedPtr<IFieldType> value) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::FieldPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::Guid get_Guid();
    ASPOSE_SLIDES_LOCAL_API void set_Guid(System::Guid value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Portion> get_Parent();
    
    ASPOSE_SLIDES_LOCAL_API Field(System::SharedPtr<Portion> parentImmediate, System::SharedPtr<Field> field);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Field, CODEPORTING_ARGS(System::SharedPtr<Portion> parentImmediate, System::SharedPtr<Field> field));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Field(System::SharedPtr<Portion> parentImmediate, System::SharedPtr<FieldType> fieldType);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Field, CODEPORTING_ARGS(System::SharedPtr<Portion> parentImmediate, System::SharedPtr<FieldType> fieldType));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Field();
    
private:

    System::SharedPtr<IFieldType> _type;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::FieldPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::ParagraphFormat> get_ParagraphFormat();
    ASPOSE_SLIDES_LOCAL_API void set_ParagraphFormat(System::SharedPtr<Aspose::Slides::ParagraphFormat> value);
    /// <summary>
    /// Returns the parent slide of a paragraph.
    /// Read-only <see cref="Aspose::Slides::BaseSlide">BaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a paragraph.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Field> field);
    
};

} // namespace Slides
} // namespace Aspose


