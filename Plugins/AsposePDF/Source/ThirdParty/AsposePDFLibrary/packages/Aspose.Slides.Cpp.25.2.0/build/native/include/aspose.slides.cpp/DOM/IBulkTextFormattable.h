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
/// Represents an object with possibility of bulk setting child text elements' formats.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBulkTextFormattable : public virtual System::Object
{
    typedef IBulkTextFormattable ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Sets defined portion format properties to all element's portions.
    /// </summary>
    /// <param name="source">IPortionFormat object with necessary properties set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetTextFormat(System::SharedPtr<IPortionFormat> source) = 0;
    /// <summary>
    /// Sets defined paragraph format properties to all element's paragraphs.
    /// </summary>
    /// <param name="source">IParagraphFormat object with necessary properties set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetTextFormat(System::SharedPtr<IParagraphFormat> source) = 0;
    /// <summary>
    /// Sets defined text frame format properties to all element's text frames.
    /// </summary>
    /// <param name="source">ITextFrameFormat object with necessary properties set.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetTextFormat(System::SharedPtr<ITextFrameFormat> source) = 0;
    
};

} // namespace Slides
} // namespace Aspose


