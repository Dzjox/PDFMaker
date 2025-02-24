#pragma once

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Ink
{
class IInkBrush;
} // namespace Ink
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Ink {

/// <summary>
/// Represents handwritten line in an Ink object.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInkTrace : public virtual System::Object
{
    typedef IInkTrace ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets Brush for the IInkLine <see cref="Aspose::Slides::Ink::IInkBrush">IInkBrush</see>
    /// Read-only.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::SharedPtr<IInkBrush> brush = traces[0]->get_Brush();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IInkBrush> get_Brush() = 0;
    /// <summary>
    /// Gets points for the IInkLine <see cref="System::Drawing::PointF"></see>
    /// Read-only.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::ArrayPtr<System::Drawing::PointF> points = traces[0]->get_Points();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::Drawing::PointF> get_Points() = 0;
    
};

} // namespace Ink
} // namespace Slides
} // namespace Aspose


