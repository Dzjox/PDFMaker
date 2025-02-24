#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IParagraphFormat;
class IPortionFormat;
class ITextFrameFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allows to create formats via COM interface.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFormatFactory : public virtual System::Object
{
    typedef IFormatFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see>.
    /// </summary>
    /// <returns>New portion format.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormat> CreatePortionFormat() = 0;
    /// <summary>
    /// Creates new <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.
    /// </summary>
    /// <returns>New paragraph format.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormat> CreateParagraphFormat() = 0;
    /// <summary>
    /// Creates new <see cref="Aspose::Slides::ITextFrameFormat">ITextFrameFormat</see>.
    /// </summary>
    /// <returns>New text frame format.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrameFormat> CreateTextFrameFormat() = 0;
    
};

} // namespace Slides
} // namespace Aspose


