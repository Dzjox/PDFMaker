#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IPresentationText.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISlideText;
class PresentationFactory;
namespace TextExtraction
{
class Result;
} // namespace TextExtraction
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the text extracted from the presentation
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PresentationText : public Aspose::Slides::IPresentationText
{
    typedef PresentationText ThisType;
    typedef Aspose::Slides::IPresentationText BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::TextExtraction::Result;
    friend class Aspose::Slides::PresentationFactory;
    /// @endcond
    
public:

    /// <summary>
    /// An array of <see cref="Aspose::Slides::ISlideText">ISlideText</see> contains a presentation's text.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<ISlideText>> get_SlidesText() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API PresentationText(System::ArrayPtr<System::SharedPtr<ISlideText>> slidesText);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PresentationText, CODEPORTING_ARGS(System::ArrayPtr<System::SharedPtr<ISlideText>> slidesText));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::String ToString_();
    /// @endcond
    
private:

    System::ArrayPtr<System::SharedPtr<ISlideText>> m_slidesText;
    
};

} // namespace Slides
} // namespace Aspose


