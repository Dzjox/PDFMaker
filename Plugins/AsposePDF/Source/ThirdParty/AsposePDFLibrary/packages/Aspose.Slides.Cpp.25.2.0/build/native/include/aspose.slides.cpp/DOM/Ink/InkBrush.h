#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/color.h>
#include <DOM/Ink/IInkBrush.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Ink
{
class InkAnnotation;
class InkAnnotationXML;
enum class InkBrushTipType;
class InkDoubleProperty;
class InkLayout;
class InkProperty;
enum class InkRasterOpType;
class InkUtil;
} // namespace Ink
namespace PptxSerialization
{
namespace PartParser
{
class InkBrushSerialization;
class InkContextSerialization;
class InkDefinitionSerialization;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Ink {

/// <summary>
/// Represents an inkBrush object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InkBrush : public Aspose::Slides::Ink::IInkBrush
{
    typedef InkBrush ThisType;
    typedef Aspose::Slides::Ink::IInkBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Ink::InkLayout;
    friend class Aspose::Slides::Ink::InkUtil;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkBrushSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkContextSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkDefinitionSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the brush color for a line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::SharedPtr<IInkBrush> brush = traces[0]->get_Brush();
    /// System::Drawing::Color brushColor = brush->get_Color();
    /// brush->set_Color(System::Drawing::Color::get_Red());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::Drawing::Color get_Color() override;
    /// <summary>
    /// Sets the brush color for a line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::SharedPtr<IInkBrush> brush = traces[0]->get_Brush();
    /// System::Drawing::Color brushColor = brush->get_Color();
    /// brush->set_Color(System::Drawing::Color::get_Red());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Color(System::Drawing::Color value) override;
    /// <summary>
    /// Gets the brush size for a line in points.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::SharedPtr<IInkBrush> brush = traces[0]->get_Brush();
    /// System::Drawing::SizeF brushSize = brush->get_Size();
    /// brush->set_Size(System::Drawing::SizeF(5.0f, 10.0f));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::Drawing::SizeF get_Size() override;
    /// <summary>
    /// Sets the brush size for a line in points.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::SharedPtr<IInkBrush> brush = traces[0]->get_Brush();
    /// System::Drawing::SizeF brushSize = brush->get_Size();
    /// brush->set_Size(System::Drawing::SizeF(5.0f, 10.0f));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Size(System::Drawing::SizeF value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API InkBrushTipType get_Tip();
    ASPOSE_SLIDES_LOCAL_API void set_Tip(InkBrushTipType value);
    ASPOSE_SLIDES_LOCAL_API InkRasterOpType get_RasterOp();
    ASPOSE_SLIDES_LOCAL_API void set_RasterOp(InkRasterOpType value);
    ASPOSE_SLIDES_LOCAL_API System::String get_Id();
    ASPOSE_SLIDES_LOCAL_API void set_Id(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_BrushRef();
    ASPOSE_SLIDES_LOCAL_API void set_BrushRef(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotation>>> get_Annotations();
    ASPOSE_SLIDES_LOCAL_API void set_Annotations(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotation>>> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotationXML>>> get_AnnotationsXML();
    ASPOSE_SLIDES_LOCAL_API void set_AnnotationsXML(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotationXML>>> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InkDoubleProperty> get_Width();
    ASPOSE_SLIDES_LOCAL_API void set_Width(System::SharedPtr<InkDoubleProperty> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InkDoubleProperty> get_Height();
    ASPOSE_SLIDES_LOCAL_API void set_Height(System::SharedPtr<InkDoubleProperty> value);
    ASPOSE_SLIDES_LOCAL_API int32_t get_Transparency();
    ASPOSE_SLIDES_LOCAL_API void set_Transparency(int32_t value);
    ASPOSE_SLIDES_LOCAL_API bool get_AntiAliased();
    ASPOSE_SLIDES_LOCAL_API void set_AntiAliased(bool value);
    ASPOSE_SLIDES_LOCAL_API bool get_FitToCurve();
    ASPOSE_SLIDES_LOCAL_API void set_FitToCurve(bool value);
    ASPOSE_SLIDES_LOCAL_API bool get_IgnorePressure();
    ASPOSE_SLIDES_LOCAL_API void set_IgnorePressure(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkProperty>>> get_UnusedProperties();
    ASPOSE_SLIDES_LOCAL_API void set_UnusedProperties(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkProperty>>> value);
    
    ASPOSE_SLIDES_LOCAL_API InkBrush();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InkBrush, CODEPORTING_ARGS());
    
private:

    System::String m_id;
    System::String m_brushRef;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotation>>> m_annotations;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotationXML>>> m_annotationsXML;
    System::SharedPtr<InkDoubleProperty> m_width;
    System::SharedPtr<InkDoubleProperty> m_height;
    System::Drawing::Color m_color;
    int32_t m_transparency;
    InkBrushTipType m_tip;
    InkRasterOpType m_rasterOp;
    bool m_antiAliased;
    bool m_fitToCurve;
    bool m_ignorePressure;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkProperty>>> m_unusedProperties;
    
};

} // namespace Ink
} // namespace Slides
} // namespace Aspose


