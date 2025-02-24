#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IMasterHandoutSlideHeaderFooterManager.h>

#include "DOM/BaseHandoutNotesSlideHeaderFooterManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class MasterHandoutSlide;
enum class PlaceholderType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of the master handout slide placeholders, including header placeholder.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS MasterHandoutSlideHeaderFooterManager : public Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager, public Aspose::Slides::IMasterHandoutSlideHeaderFooterManager
{
    typedef MasterHandoutSlideHeaderFooterManager ThisType;
    typedef Aspose::Slides::BaseHandoutNotesSlideHeaderFooterManager BaseType;
    typedef Aspose::Slides::IMasterHandoutSlideHeaderFooterManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MasterHandoutSlide;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API MasterHandoutSlideHeaderFooterManager(System::SharedPtr<MasterHandoutSlide> masterHandoutSlide);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MasterHandoutSlideHeaderFooterManager, CODEPORTING_ARGS(System::SharedPtr<MasterHandoutSlide> masterHandoutSlide));
    ASPOSE_SLIDES_SHARED_API void AddPlaceholder(PlaceholderType placeholderType) override;
    
private:

    System::WeakPtr<MasterHandoutSlide> m_masterHandoutSlide;
    
};

} // namespace Slides
} // namespace Aspose


