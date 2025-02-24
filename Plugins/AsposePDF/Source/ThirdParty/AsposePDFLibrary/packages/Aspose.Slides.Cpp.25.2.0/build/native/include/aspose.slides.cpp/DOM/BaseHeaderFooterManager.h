#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IBaseHeaderFooterManager.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
class BaseSlide;
class BaseSlideHeaderFooterManager;
enum class PlaceholderType : int8_t;
class PresentationHeaderFooterManager;
class Shape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager which holds behavior of the footer, date-time, page number placeholders for all slide types.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseHeaderFooterManager : public virtual Aspose::Slides::IBaseHeaderFooterManager, public Aspose::Slides::IDOMObject
{
    typedef BaseHeaderFooterManager ThisType;
    typedef Aspose::Slides::IBaseHeaderFooterManager BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::BaseSlideHeaderFooterManager;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API BaseHeaderFooterManager(System::SharedPtr<IDOMObject> parentImmediate);
    
    static ASPOSE_SLIDES_LOCAL_API void UpdatePlaceholderCollection(System::SharedPtr<BaseSlide> slide);
    static ASPOSE_SLIDES_LOCAL_API void AddPlaceholderToSlide(System::SharedPtr<BaseSlide> slide, System::SharedPtr<Shape> placeholderShape);
    static ASPOSE_SLIDES_LOCAL_API void CopyPlaceholderFromParent(System::SharedPtr<BaseSlide> slide, System::SharedPtr<BaseSlide> placeholdersCarrier, PlaceholderType type);
    static ASPOSE_SLIDES_LOCAL_API void RemovePlaceholder(System::SharedPtr<BaseSlide> slide, PlaceholderType phType);
    /// @endcond
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
    static ASPOSE_SLIDES_LOCAL_API void CopyPlaceholderContent(System::SharedPtr<AutoShape> sourceShape, System::SharedPtr<AutoShape> destenationShape);
    
};

} // namespace Slides
} // namespace Aspose


