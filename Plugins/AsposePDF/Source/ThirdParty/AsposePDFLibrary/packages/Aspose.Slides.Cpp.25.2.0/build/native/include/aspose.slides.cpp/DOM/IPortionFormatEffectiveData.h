#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IBasePortionFormatEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IHyperlink;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective text portion formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IPortionFormatEffectiveData : public virtual Aspose::Slides::IBasePortionFormatEffectiveData
{
    typedef IPortionFormatEffectiveData ThisType;
    typedef Aspose::Slides::IBasePortionFormatEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns bookmark identifier.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_BookmarkId() = 0;
    /// <summary>
    /// Returns the hyperlink defined for mouse click.
    /// Read-only <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> get_HyperlinkClick() = 0;
    /// <summary>
    /// Returns the hyperlink defined for mouse over.
    /// Read-only <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> get_HyperlinkMouseOver() = 0;
    
};

} // namespace Slides
} // namespace Aspose


