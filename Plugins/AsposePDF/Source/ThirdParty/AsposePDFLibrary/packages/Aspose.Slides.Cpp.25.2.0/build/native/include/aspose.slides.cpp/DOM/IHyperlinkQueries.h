#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IHyperlinkContainer;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Provide easy access to contained hyperlinks.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHyperlinkQueries : public virtual System::Object
{
    typedef IHyperlinkQueries ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Get all IHyperlinkContainer subobjects that contain not null HyperlinkClick.
    /// With given IHyperlinkContainer object you can manage its hyperlink (read, update or remove). See IHyperlinkContainer interface.
    /// </summary>
    /// <returns>All IHyperlinkContainer subobjects that contain not null HyperlinkClick</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<IHyperlinkContainer>>> GetHyperlinkClicks() = 0;
    /// <summary>
    /// Get all IHyperlinkContainer subobjects that contain not null HyperlinkMouseOver.
    /// With given IHyperlinkContainer object you can manage its hyperlink (read, update or remove). See IHyperlinkContainer interface.
    /// </summary>
    /// <returns>All IHyperlinkContainer subobjects that contain not null HyperlinkMouseOver</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<IHyperlinkContainer>>> GetHyperlinkMouseOvers() = 0;
    /// <summary>
    /// Get all IHyperlinkContainer subobjects that contain not null HyperlinkMouseOver.
    /// With given IHyperlinkContainer object you can manage its hyperlink (read, update or remove). See IHyperlinkContainer interface.
    /// </summary>
    /// <returns>All IHyperlinkContainer subobjects that contain not null HyperlinkMouseOver</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<IHyperlinkContainer>>> GetAnyHyperlinks() = 0;
    /// <summary>
    /// Removes all contained HyperlinkClick and HyperlinkMouseOver hyperlinks (in all IHyperlinkContainer subobjects).
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAllHyperlinks() = 0;
    
};

} // namespace Slides
} // namespace Aspose


