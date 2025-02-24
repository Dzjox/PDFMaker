#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISvgShapeFormattingController.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ISvgTSpan;
} // namespace Export
class IPortion;
class ITextFrame;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Controls SVG shape and text generation.
/// </summary>
/// <example>Example:
/// <code>
/// class CustomSvgShapeFormattingController : public Aspose::Slides::Export::ISvgShapeAndTextFormattingController
/// {
/// public:
///     CustomSvgShapeFormattingController(int32_t shapeStartIndex = 0)
///         : m_shapeIndex(shapeStartIndex), m_portionIndex(0), m_tspanIndex(0)
///     {
///     }
/// 
///     void FormatShape(System::SharedPtr<Aspose::Slides::Export::ISvgShape> svgShape, System::SharedPtr<IShape> shape) override
///     {
///         svgShape->set_Id(System::String::Format(u"shape-{0}", m_shapeIndex++));
///         m_portionIndex = m_tspanIndex = 0;
///     }
/// 
///     void FormatText(System::SharedPtr<Aspose::Slides::Export::ISvgTSpan> svgTSpan, System::SharedPtr<IPortion> portion, System::SharedPtr<ITextFrame> textFrame) override
///     {
///         int32_t paragraphIndex = 0;
///         int32_t portionIndex = 0;
///         for (int32_t i = 0; i < textFrame->get_Paragraphs()->get_Count(); i = i + 1)
///         {
///             portionIndex = textFrame->get_Paragraphs()->idx_get(i)->get_Portions()->IndexOf(portion);
///             if (portionIndex > -1)
///             {
///                 paragraphIndex = i;
///                 break;
///             }
///         }
///         if (m_portionIndex != portionIndex)
///         {
///             m_tspanIndex = 0;
///             m_portionIndex = portionIndex;
///         }
///         svgTSpan->set_Id(System::String::Format(u"paragraph-{0}_portion-{1}_{2}", paragraphIndex, m_portionIndex, m_tspanIndex++));
///     }
/// private:
///     int32_t m_shapeIndex, m_portionIndex, m_tspanIndex;
/// };
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS ISvgShapeAndTextFormattingController : public Aspose::Slides::Export::ISvgShapeFormattingController
{
    typedef ISvgShapeAndTextFormattingController ThisType;
    typedef Aspose::Slides::Export::ISvgShapeFormattingController BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// This function is called before rendering of text portion to SVG to allow user to control resulting SVG.
    /// </summary>
    /// <param name="svgTSpan">Object to control SVG tspan generation.</param>
    /// <param name="portion">Source portion.</param>
    /// <param name="textFrame">Source portion text frame.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void FormatText(System::SharedPtr<ISvgTSpan> svgTSpan, System::SharedPtr<IPortion> portion, System::SharedPtr<ITextFrame> textFrame) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


