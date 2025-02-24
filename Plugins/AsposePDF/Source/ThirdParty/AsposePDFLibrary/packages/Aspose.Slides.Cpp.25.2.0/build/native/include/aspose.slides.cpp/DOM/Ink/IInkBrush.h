#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class Color;
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Ink {

/// <summary>
/// Represents trace brush.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInkBrush : public virtual System::Object
{
    typedef IInkBrush ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_Color() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Color(System::Drawing::Color value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::SizeF get_Size() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Size(System::Drawing::SizeF value) = 0;
    
};

} // namespace Ink
} // namespace Slides
} // namespace Aspose


