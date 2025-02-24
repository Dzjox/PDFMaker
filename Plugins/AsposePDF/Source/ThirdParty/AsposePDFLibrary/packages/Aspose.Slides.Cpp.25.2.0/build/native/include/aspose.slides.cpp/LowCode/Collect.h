#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Presentation;
class Shape;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
} // namespace Generic
} // namespace Collections
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace LowCode {

/// <summary>
/// Represents a group of methods intended to collect model objects of different types from <see cref="Presentation"></see>.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
///       
/// for (auto& shape : Collect::Shapes(pres))
/// {
///     // ... change shape formatting or other properties
/// }
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS Collect
{
    typedef Collect ThisType;
    
public:

    /// <summary>
    /// Collects all instances of <see cref="Shape"></see> in the <see cref="Presentation"></see>. 
    /// </summary>
    /// <param name="pres">Presentation to collect shapes</param>
    /// <returns>Collection of all shapes that contain in the presentation</returns>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// for (auto& shape : Collect::Shapes(pres))
    /// {
    ///     // if the shape is AutoShape, add a black solid border
    ///     if (System::ObjectExt::Is<AutoShape>(shape))
    ///     {
    ///         auto autoShape = System::AsCast<AutoShape>(shape);
    ///         autoShape->get_LineFormat()->set_Style(LineStyle::Single);
    ///         autoShape->get_LineFormat()->set_Width(10.f);
    ///         autoShape->get_LineFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    ///         autoShape->get_LineFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(Color::get_Black());
    ///     }
    /// }
    ///         
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>         
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Shape>>> Shapes(System::SharedPtr<Presentation> pres);
    
public:
    Collect() = delete;
};

} // namespace LowCode
} // namespace Slides
} // namespace Aspose


