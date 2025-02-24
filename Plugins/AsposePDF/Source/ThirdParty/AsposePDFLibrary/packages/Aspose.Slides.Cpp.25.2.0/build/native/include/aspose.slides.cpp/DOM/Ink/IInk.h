#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "DOM/IGraphicalObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Ink
{
class IInkTrace;
} // namespace Ink
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Ink {

/// <summary>
/// Represents an ink object on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IInk : public virtual Aspose::Slides::IGraphicalObject
{
    typedef IInk ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets all traces containing in the IInk element <see cref="Aspose::Slides::Ink::IInkTrace">IInkTrace</see>.
    /// Read-only.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<Aspose::Slides::Ink::IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IInkTrace>> get_Traces() = 0;
    
};

} // namespace Ink
} // namespace Slides
} // namespace Aspose


