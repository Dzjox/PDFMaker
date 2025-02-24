#pragma once
// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved

#include <system/object_ext.h>
#include <system/enumerator_adapter.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/ISlideCollection.h>
#include <DOM/ISlide.h>
#include <DOM/IShapeCollection.h>
#include <DOM/IShape.h>
#include <DOM/IPresentation.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Drawing
{
class ImageCanvas;
} // namespace Drawing
namespace Export
{
class RenderingFontsInfoMockCanvas;
} // namespace Export
class FontsManager;
class IBaseSlide;
class IFindResultCallback;
class IGroupShape;
class IParagraph;
class ITextFrame;
class ITextSearchOptions;
class PortionFormat;
class Presentation;
enum class ShapesAlignmentType;
class TextParam;
class TextSerachData;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
namespace Drawing2D
{
class GraphicsPath;
} // namespace Drawing2D
class PointF;
class StringFormat;
} // namespace Drawing
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Util {

/// <summary>
/// Offer methods which help to search shapes and text in a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideUtil
{
    typedef SlideUtil ThisType;
    
    /// @cond
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::Drawing::ImageCanvas;
    friend class Aspose::Slides::Export::RenderingFontsInfoMockCanvas;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:

    /// <summary>
    /// Find shape by alternative text in a PPTX presentation.
    /// </summary>
    /// <param name="pres">Scanned presentation.</param>
    /// <param name="altText">Alternative text of a shape.</param>
    /// <returns>Shape or null.</returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> FindShape(System::SharedPtr<IPresentation> pres, System::String altText);
    /// <summary>
    /// Find shape by alternative text on a slide in a PPTX presentation.
    /// </summary>
    /// <param name="slide">Scanned slide.</param>
    /// <param name="altText">Alternative text of a shape.</param>
    /// <returns>Shape or null.</returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> FindShape(System::SharedPtr<IBaseSlide> slide, System::String altText);
    /// <summary>
    /// Changes the placement of all shapes on the slide. Aligns shapes to the margins or the edge of the slide
    /// or align them relative to each other.
    /// </summary>
    /// <param name="alignmentType">Determines which type of alignment will be applied.</param>
    /// <param name="alignToSlide">If true, shapes will be aligned relative to the slide edges.</param>
    /// <param name="slide">Parent slide.</param>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SlideUtil::AlignShapes(Aspose::Slides::ShapesAlignmentType::AlignBottom, true, pres->get_Slides()->idx_get(0));
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void AlignShapes(ShapesAlignmentType alignmentType, bool alignToSlide, System::SharedPtr<IBaseSlide> slide);
    /// <summary>
    /// Changes the placement of selected shapes on the slide. Aligns shapes to the margins or the edge of the slide
    /// or align them relative to each other.
    /// </summary>
    /// <param name="alignmentType">Determines which type of alignment will be applied.</param>
    /// <param name="alignToSlide">If true, shapes will be aligned relative to the slide edges.</param>
    /// <param name="slide">Parent slide.</param>
    /// <param name="shapeIndexes">Indexes of shapes to be aligned.</param>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto shape1 = slide->get_Shapes()->idx_get(0);
    /// auto shape2 = slide->get_Shapes()->idx_get(1);
    /// SlideUtil::AlignShapes(Aspose::Slides::ShapesAlignmentType::AlignBottom, false, pres->get_Slides()->idx_get(0),
    ///     System::MakeArray<int32_t>({
    ///         slide->get_Shapes()->IndexOf(shape1),
    ///         slide->get_Shapes()->IndexOf(shape2)
    ///     }));
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void AlignShapes(ShapesAlignmentType alignmentType, bool alignToSlide, System::SharedPtr<IBaseSlide> slide, System::ArrayPtr<int32_t> shapeIndexes);
    /// <summary>
    /// Changes the placement of all shapes within group shape. Aligns shapes to the margins or the edge of the slide
    /// or align them relative to each other.
    /// </summary>
    /// <param name="alignmentType">Determines which type of alignment will be applied.</param>
    /// <param name="alignToSlide">If true, shapes will be aligned relative to the slide edges.</param>
    /// <param name="groupShape">Parent group shape.</param>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SlideUtil::AlignShapes(Aspose::Slides::ShapesAlignmentType::AlignLeft, false, System::ExplicitCast<Aspose::Slides::GroupShape>(pres->get_Slides()->idx_get(0)->get_Shapes()));
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void AlignShapes(ShapesAlignmentType alignmentType, bool alignToSlide, System::SharedPtr<IGroupShape> groupShape);
    /// <summary>
    /// Changes the placement of selected shapes within group shape. Aligns shapes to the margins or the edge of the slide
    /// or align them relative to each other.
    /// </summary>
    /// <param name="alignmentType">Determines which type of alignment will be applied.</param>
    /// <param name="alignToSlide">If true, shapes will be aligned relative to the slide edges.</param>
    /// <param name="groupShape">Parent group shape.</param>
    /// <param name="shapeIndexes">Indexes of shapes to be aligned.</param>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SlideUtil::AlignShapes(Aspose::Slides::ShapesAlignmentType::AlignLeft, false, System::ExplicitCast<Aspose::Slides::GroupShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)), System::MakeArray<int32_t>({0, 2}));
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void AlignShapes(ShapesAlignmentType alignmentType, bool alignToSlide, System::SharedPtr<IGroupShape> groupShape, System::ArrayPtr<int32_t> shapeIndexes);
    /// <summary>
    /// Finds and replaces text in presentation with given format
    /// </summary>
    /// <param name="presentation">Scanned presentation.</param>
    /// <param name="withMasters">Determines whether master slides should be scanned.</param>
    /// <param name="find">String value to find.</param>
    /// <param name="replace">String value to replace.</param>
    /// <param name="format">Format for replacing text portion. If null then will be used format of the first 
    /// character of the found string</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto format = System::MakeObject<PortionFormat>();
    /// format->set_FontHeight(24.0f);
    /// format->set_FontItalic(NullableBool::True);
    /// auto fillFormat = format->get_FillFormat();
    /// fillFormat->set_FillType(FillType::Solid);
    /// fillFormat->get_SolidFillColor()->set_Color(System::Drawing::Color::get_Red());
    /// 
    /// SlideUtil::FindAndReplaceText(pres, true, u"[this block] ", u"my text ", format);
    /// pres->Save(u"replaced", SaveFormat::Pptx);
    /// </code>
    /// </example>        
    static ASPOSE_SLIDES_SHARED_API void FindAndReplaceText(System::SharedPtr<IPresentation> presentation, bool withMasters, System::String find, System::String replace, System::SharedPtr<PortionFormat> format = nullptr);
    /// <summary>
    /// Returns all text frames on a slide in a PPTX presentation.
    /// </summary>
    /// <param name="slide">Scanned slide.</param>
    /// <returns>Array of <see cref="TextFrame"></see> objects.</returns>
    static ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ITextFrame>> GetAllTextBoxes(System::SharedPtr<IBaseSlide> slide);
    /// <summary>
    /// Returns all text frames in a PPTX presentation.
    /// </summary>
    /// <param name="pres">Scanned presentation.</param>
    /// <param name="withMasters">Determines whether master slides should be scanned.</param>
    /// <returns>Array of <see cref="TextFrame"></see> objects.</returns>
    static ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ITextFrame>> GetAllTextFrames(System::SharedPtr<IPresentation> pres, bool withMasters);
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ITextFrame>> GetAllTextFrames(System::SharedPtr<IPresentation> pres, System::ArrayPtr<int32_t> slides, bool withMasters);
    template <typename T>
    static System::SharedPtr<System::Collections::Generic::List<T>> GetAllShapes(System::SharedPtr<IPresentation> pres)
    {
        System::SharedPtr<System::Collections::Generic::List<T>> result = System::MakeObject<System::Collections::Generic::List<T>>();
        for (auto&& slide : System::IterateOver(pres->get_Slides()))
        {
            for (auto&& shape : System::IterateOver(slide->get_Shapes()))
            {
                if (System::ObjectExt::Is<T>(shape))
                {
                    result->Add(System::ExplicitCast<T>(shape));
                }
            }
        }
        
        return result;
    }
    
    static ASPOSE_SLIDES_LOCAL_API System::String GetAllText(System::SharedPtr<IPresentation> pres, System::ArrayPtr<int32_t> slides);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IShape> FindShape(System::SharedPtr<IShapeCollection> shapes, uint32_t shapeId);
    static ASPOSE_SLIDES_LOCAL_API void AddStringNetCoreNonWindows(System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> path, System::String text, System::SharedPtr<TextParam> textParam, System::Drawing::PointF point, System::SharedPtr<System::Drawing::StringFormat> stringFormat);
    static ASPOSE_SLIDES_LOCAL_API void HighlightText(System::SharedPtr<Presentation> pres, System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback);
    static ASPOSE_SLIDES_LOCAL_API void HighlightRegex(System::SharedPtr<Presentation> pres, System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::Drawing::Color highlightColor, System::SharedPtr<IFindResultCallback> callback);
    static ASPOSE_SLIDES_LOCAL_API void ReplaceText(System::SharedPtr<Presentation> pres, System::String oldText, System::String newText, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback);
    static ASPOSE_SLIDES_LOCAL_API void ReplaceRegex(System::SharedPtr<Presentation> pres, System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::String newText, System::SharedPtr<IFindResultCallback> callback);
    /// @endcond
    
private:

    static ASPOSE_SLIDES_LOCAL_API void FindAndReplaceText(System::SharedPtr<ITextFrame> textFrame, System::String find, System::String replace, System::SharedPtr<PortionFormat> format);
    static ASPOSE_SLIDES_LOCAL_API void FindAndReplaceText(System::SharedPtr<IParagraph> paragraph, System::String find, System::String replace, System::SharedPtr<PortionFormat> format);
    static ASPOSE_SLIDES_LOCAL_API void AlignShapes(ShapesAlignmentType alignmentType, bool alignToSlide, System::SharedPtr<IShapeCollection> shapes, System::ArrayPtr<int32_t> shapeIndexes);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IShape> FindShape(System::SharedPtr<IShapeCollection> shapes, System::String altText);
    static ASPOSE_SLIDES_LOCAL_API void GetAllTextFrames(System::SharedPtr<IShapeCollection> shapes, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ITextFrame>>> tframes);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextSerachData> FindText(System::SharedPtr<Presentation> pres, System::String text, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextSerachData> FindRegex(System::SharedPtr<Presentation> pres, System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::SharedPtr<IFindResultCallback> callback);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextSerachData> FindText(System::SharedPtr<Presentation> pres, System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::SharedPtr<IFindResultCallback> callback);
    
public:
    SlideUtil() = delete;
};

} // namespace Util
} // namespace Slides
} // namespace Aspose


