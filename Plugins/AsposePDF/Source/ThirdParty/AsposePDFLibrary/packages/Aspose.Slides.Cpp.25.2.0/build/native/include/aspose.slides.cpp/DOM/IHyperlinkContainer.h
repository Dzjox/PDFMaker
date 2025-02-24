#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IHyperlink;
class IHyperlinkManager;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents hyperlink object.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IHyperlinkContainer : public virtual System::Object
{
    typedef IHyperlinkContainer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the hyperlink defined for mouse click.
    /// Read <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> get_HyperlinkClick() = 0;
    /// <summary>
    /// Sets the hyperlink defined for mouse click.
    /// Write <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HyperlinkClick(System::SharedPtr<IHyperlink> value) = 0;
    /// <summary>
    /// Returns the hyperlink defined for mouse over.
    /// Read <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlink> get_HyperlinkMouseOver() = 0;
    /// <summary>
    /// Sets the hyperlink defined for mouse over.
    /// Write <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HyperlinkMouseOver(System::SharedPtr<IHyperlink> value) = 0;
    /// <summary>
    /// Hyperlinks manager
    /// Read-only <see cref="Aspose::Slides::IHyperlinkManager">IHyperlinkManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlinkManager> get_HyperlinkManager() = 0;
    
};

} // namespace Slides
} // namespace Aspose


