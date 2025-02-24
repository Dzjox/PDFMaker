#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IFontSubstRule.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FontSubstCondition;
class IFontData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents font subtituition information
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontSubstRule : public Aspose::Slides::IFontSubstRule
{
    typedef FontSubstRule ThisType;
    typedef Aspose::Slides::IFontSubstRule BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Font to substitute.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_SourceFont() override;
    /// <summary>
    /// Font to use for substitution.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontData> get_DestFont() override;
    /// <summary>
    /// Rule to apply for substitution.
    /// Read-only <see cref="FontSubstCondition"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FontSubstCondition get_ReplaceFontCondition() override;
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <param name="sourceFont">Source font.</param>
    /// <param name="destFont">Destination font.</param>
    ASPOSE_SLIDES_SHARED_API FontSubstRule(System::SharedPtr<IFontData> sourceFont, System::SharedPtr<IFontData> destFont);
    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <param name="sourceFont">Source font.</param>
    /// <param name="destFont">Destination font.</param>
    /// <param name="fontSubstRule">Font subst rule.</param>
    ASPOSE_SLIDES_SHARED_API FontSubstRule(System::SharedPtr<IFontData> sourceFont, System::SharedPtr<IFontData> destFont, FontSubstCondition fontSubstRule);
    
private:

    System::SharedPtr<IFontData> m_sourceFont;
    System::SharedPtr<IFontData> m_destFont;
    FontSubstCondition m_fontSubstRule;
    
};

} // namespace Slides
} // namespace Aspose


