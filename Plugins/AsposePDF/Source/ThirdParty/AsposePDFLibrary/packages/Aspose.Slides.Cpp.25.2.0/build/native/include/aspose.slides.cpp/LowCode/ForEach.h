#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class LayoutSlide;
class MasterSlide;
class Paragraph;
class Portion;
class Presentation;
class Shape;
class Slide;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace LowCode {

/// <summary>
/// Represents a group of methods intended to iterate over different <see cref="Presentation"></see> model objects.
/// These methods can be useful if you need to iterate and change some Presentation' elements formatting or content,
///  e.g. change each portion formatting. 
/// </summary>
/// <example>
/// <code>
/// auto presentation = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// auto lambda = [](SharedPtr<Portion> portion, SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index) -> void
/// {
///     portion->get_PortionFormat()->set_LatinFont(System::MakeObject<FontData>(u"Times New Roman"));
/// };
/// auto callback = std::function<void(SharedPtr<Portion> portion, SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
/// 
/// ForEach::Portion(presentation, callback);
/// 
/// presentation->Save(u"pres-out.pptx", SaveFormat::Pptx);
/// </code>
/// </example> 
class ASPOSE_SLIDES_SHARED_CLASS ForEach
{
    typedef ForEach ThisType;
    
public:

    /// <summary>
    /// Callback that will be invoked for each <see cref="ForEach::Slide"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="slide">Current iterated slide</param>
    /// <param name="index">Index of the current slide</param>
    using ForEachSlideCallback = System::MulticastDelegate<void(System::SharedPtr<Aspose::Slides::Slide>, int32_t)>;
    
    /// <summary>
    /// Callback that will be invoked for each <see cref="ForEach::MasterSlide"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="masterSlide">Current iterated master slide</param>
    /// <param name="index">Index of the current master slide</param>
    using ForEachMasterSlideCallback = System::MulticastDelegate<void(System::SharedPtr<Aspose::Slides::MasterSlide>, int32_t)>;
    
    /// <summary>
    /// Callback that will be invoked for each <see cref="ForEach::LayoutSlide"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="layoutSlide">Current iterated layout slide</param>
    /// <param name="index">Index of the current layout slide</param>
    using ForEachLayoutSlideCallback = System::MulticastDelegate<void(System::SharedPtr<Aspose::Slides::LayoutSlide>, int32_t)>;
    
    /// <summary>
    /// Callback that will be invoked for each <see cref="ForEach::Shape"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="slide"></param>
    /// <param name="index"></param>
    using ForEachShapeCallback = System::MulticastDelegate<void(System::SharedPtr<Aspose::Slides::Shape>, System::SharedPtr<BaseSlide>, int32_t)>;
    
    /// <summary>
    /// Callback that will be invoked for each <see cref="ForEach::Paragraph"></see> on the <see cref="BaseSlide"></see>.
    /// </summary>
    /// <param name="para">Current iterated paragraph</param>
    /// <param name="slide">Current iterated slide</param>
    /// <param name="index">Index of the current paragraph on the slide</param>
    using ForEachParagraphCallback = System::MulticastDelegate<void(System::SharedPtr<Aspose::Slides::Paragraph>, System::SharedPtr<BaseSlide>, int32_t)>;
    
    /// <summary>
    /// Callback that will be invoked for each <see cref="ForEach::Portion"></see> in the <see cref="ForEach::Paragraph"></see> on the <see cref="BaseSlide"></see>.
    /// </summary>
    /// <param name="portion">Current iterated portion</param>
    /// <param name="para">Current iterated paragraph</param>
    /// <param name="slide">Current iterated slide</param>
    /// <param name="index">Index of the current portion in the paragraph</param>
    using ForEachPortionCallback = System::MulticastDelegate<void(System::SharedPtr<Aspose::Slides::Portion>, System::SharedPtr<Aspose::Slides::Paragraph>, System::SharedPtr<BaseSlide>, int32_t)>;
    
    
public:

    /// <summary>
    /// Iterate each <see cref="ForEach::Slide"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="pres">Presentation to iterate slides</param>
    /// <param name="forEachSlide">Callback that will be invoked for each slide</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto callback = std::function<void(SharedPtr<Slide> slide, int32_t index)>([](SharedPtr<Slide> slide, int32_t index)
    /// {
    ///     slide->set_Name(String::Format(u"Slide #{0}", index));
    /// });
    /// 
    /// ForEach::Slide(pres, callback);
    /// </code>
    /// </example>         
    static ASPOSE_SLIDES_SHARED_API void Slide(System::SharedPtr<Presentation> pres, ForEach::ForEachSlideCallback forEachSlide);
    /// <summary>
    /// Iterate each <see cref="ForEach::MasterSlide"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="pres">Presentation to iterate master slides</param>
    /// <param name="forEachMasterSlide">Callback that will be invoked for each master slide</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto callback = std::function<void(SharedPtr<MasterSlide> slide, int32_t index)>([](SharedPtr<MasterSlide> slide, int32_t index)
    /// {
    ///     slide->set_Name(String::Format(u"MasterSlide #{0}", index));
    /// });
    /// 
    /// ForEach::MasterSlide(pres, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void MasterSlide(System::SharedPtr<Presentation> pres, ForEach::ForEachMasterSlideCallback forEachMasterSlide);
    /// <summary>
    /// Iterate each <see cref="ForEach::LayoutSlide"></see> in the <see cref="Presentation"></see>.
    /// </summary>
    /// <param name="pres">Presentation to iterate layout slides</param>
    /// <param name="forEachLayoutSlide">Callback that will be invoked for each layout slide</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto callback = std::function<void(SharedPtr<LayoutSlide> layoutSlide, int32_t index)>([](SharedPtr<LayoutSlide> layoutSlide, int32_t index)
    /// {
    ///     layoutSlide->set_Name(String::Format(u"LayoutSlide #{0}", index));
    /// });
    /// 
    /// ForEach::LayoutSlide(pres, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void LayoutSlide(System::SharedPtr<Presentation> pres, ForEach::ForEachLayoutSlideCallback forEachLayoutSlide);
    /// <summary>
    /// Iterate each <see cref="ForEach::Shape"></see> in the <see cref="Presentation"></see>.
    /// <remarks>Shapes will be iterated in all type of slides - <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see> and <see cref="ForEach::LayoutSlide"></see></remarks>
    /// </summary>
    /// <param name="pres">Presentation to iterate layout shapes</param>
    /// <param name="forEachShape">Callback that will be invoked for each shape</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto lambda = [](SharedPtr<Shape> shape, SharedPtr<BaseSlide> slide, int32_t index) -> void
    /// {
    ///     System::Console::WriteLine(u"{0}, index: {1}", shape->get_Name(), index);
    /// };
    /// auto callback = std::function<void(SharedPtr<Shape> shape, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
    /// 
    /// ForEach::Shape(pres, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Shape(System::SharedPtr<Presentation> pres, ForEach::ForEachShapeCallback forEachShape);
    /// <summary>
    /// Iterate each <see cref="ForEach::Shape"></see> in the <see cref="Presentation"></see>.
    /// <remarks>Shapes will be iterated in all type of slides - <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see>, <see cref="ForEach::LayoutSlide"></see> and <see cref="NotesSlide"></see> if needed.</remarks>
    /// </summary>
    /// <param name="pres">Presentation to iterate layout shapes</param>
    /// <param name="includeNotes">Flag that indicates whether NotesSlides should be included in processing.</param>
    /// <param name="forEachShape">Callback that will be invoked for each shape</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto lambda = [](SharedPtr<Shape> shape, SharedPtr<BaseSlide> slide, int32_t index) -> void
    /// {
    ///     System::Console::WriteLine(u"{0}, index: {1}", shape->get_Name(), index);
    /// };
    /// auto callback = std::function<void(SharedPtr<Shape> shape, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
    /// 
    /// ForEach::Shape(pres, true, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Shape(System::SharedPtr<Presentation> pres, bool includeNotes, ForEach::ForEachShapeCallback forEachShape);
    /// <summary>
    /// Iterate each <see cref="ForEach::Shape"></see> in the <see cref="BaseSlide"></see>.
    /// <remarks><see cref="BaseSlide"></see> is the base type for <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see> and <see cref="ForEach::LayoutSlide"></see></remarks>
    /// </summary>
    /// <param name="baseSlide">Slide to iterate layout shapes</param>
    /// <param name="forEachShape">Callback that will be invoked for each shape</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// ForEach::Slide(pres, std::function<void(SharedPtr<Slide> slide, int32_t index)>([](SharedPtr<Slide> slide, int32_t index)
    /// {
    ///     auto lambda = [](SharedPtr<Shape> shape, SharedPtr<BaseSlide> baseSlide, int32_t shapeIndex)
    ///     {
    ///         System::Console::WriteLine(u"{0}, index: {1}", shape->get_Name(), shapeIndex);
    ///     };
    /// 
    ///     auto callback = std::function<void(SharedPtr<Shape> shape, SharedPtr<BaseSlide> baseSlide, int32_t shapeIndex)>(lambda);
    /// 
    ///     ForEach::Shape(slide, callback);
    /// }));
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Shape(System::SharedPtr<BaseSlide> baseSlide, ForEach::ForEachShapeCallback forEachShape);
    /// <summary>
    /// Iterate each <see cref="ForEach::Paragraph"></see> in the <see cref="Presentation"></see>.
    /// <remarks>Shapes will be iterated in all type of slides - <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see> and <see cref="ForEach::LayoutSlide"></see></remarks>
    /// </summary>
    /// <param name="pres">Presentation to iterate paragraphs</param>
    /// <param name="forEachParagraph">Callback that will be invoked for each paragraph</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto lambda = [](SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)
    /// {
    ///     System::Console::WriteLine(u"{0}, index: {1}", para->get_Text(), index);
    /// };
    /// auto callback = std::function<void(SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
    /// 
    /// ForEach::Paragraph(pres, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Paragraph(System::SharedPtr<Presentation> pres, ForEach::ForEachParagraphCallback forEachParagraph);
    /// <summary>
    /// Iterate each <see cref="ForEach::Paragraph"></see> in the <see cref="Presentation"></see>.
    /// <remarks>Shapes will be iterated in all type of slides - <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see>, <see cref="ForEach::LayoutSlide"></see> and <see cref="NotesSlide"></see></remarks>
    /// </summary>
    /// <param name="pres">Presentation to iterate paragraphs</param>
    /// <param name="includeNotes">Flag that indicates whether NotesSlides should be included in processing.</param>
    /// <param name="forEachParagraph">Callback that will be invoked for each paragraph</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto lambda = [](SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)
    /// {
    ///     System::Console::WriteLine(u"{0}, index: {1}", para->get_Text(), index);
    /// };
    /// auto callback = std::function<void(SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
    /// 
    /// ForEach::Paragraph(pres, true, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Paragraph(System::SharedPtr<Presentation> pres, bool includeNotes, ForEach::ForEachParagraphCallback forEachParagraph);
    /// <summary>
    /// Iterate each <see cref="ForEach::Portion"></see> in the <see cref="Presentation"></see>.
    /// <remarks>Portions will be iterated in all type of slides - <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see> and <see cref="ForEach::LayoutSlide"></see></remarks>
    /// </summary>
    /// <param name="pres">Presentation to iterate portions</param>
    /// <param name="forEachPortion">Callback that will be invoked for each portion</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto lambda = [](SharedPtr<Portion> portion, SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)
    /// {
    ///     System::Console::WriteLine(u"{0}, index: {1}", portion->get_Text(), index);
    /// };
    /// auto callback = std::function<void(SharedPtr<Portion> portion, SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
    /// 
    /// ForEach::Portion(pres, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Portion(System::SharedPtr<Presentation> pres, ForEach::ForEachPortionCallback forEachPortion);
    /// <summary>
    /// Iterate each <see cref="ForEach::Portion"></see> in the <see cref="Presentation"></see>.
    /// <remarks>Portions will be iterated in all type of slides - <see cref="ForEach::Slide"></see>, <see cref="ForEach::MasterSlide"></see>, <see cref="ForEach::LayoutSlide"></see> and <see cref="NotesSlide"></see></remarks>
    /// </summary>
    /// <param name="pres">Presentation to iterate portions</param>
    /// <param name="includeNotes">Flag that indicates whether NotesSlides should be included in processing.</param>
    /// <param name="forEachPortion">Callback that will be invoked for each portion</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto lambda = [](SharedPtr<Portion> portion, SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)
    /// {
    ///     System::Console::WriteLine(u"{0}, index: {1}", portion->get_Text(), index);
    /// };
    /// auto callback = std::function<void(SharedPtr<Portion> portion, SharedPtr<Paragraph> para, SharedPtr<BaseSlide> slide, int32_t index)>(lambda);
    /// 
    /// ForEach::Portion(pres, true, callback);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void Portion(System::SharedPtr<Presentation> pres, bool includeNotes, ForEach::ForEachPortionCallback forEachPortion);
    
public:
    ForEach() = delete;
};

} // namespace LowCode
} // namespace Slides
} // namespace Aspose


