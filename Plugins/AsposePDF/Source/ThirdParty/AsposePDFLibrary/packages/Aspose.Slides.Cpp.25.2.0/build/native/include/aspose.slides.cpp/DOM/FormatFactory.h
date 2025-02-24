#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IFormatFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS FormatFactory : public Aspose::Slides::IFormatFactory
{
    typedef FormatFactory ThisType;
    typedef Aspose::Slides::IFormatFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Format factory static instance.
    /// Read-only <see cref="Aspose::Slides::FormatFactory">FormatFactory</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FormatFactory> get_Instance();
    
    /// <summary>
    /// Creates new <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see>.
    /// </summary>
    /// <returns>New portion format.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormat> CreatePortionFormat() override;
    /// <summary>
    /// Creates new <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.
    /// </summary>
    /// <returns>New paragraph format.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraphFormat> CreateParagraphFormat() override;
    /// <summary>
    /// Creates new <see cref="Aspose::Slides::ITextFrameFormat">ITextFrameFormat</see>.
    /// </summary>
    /// <returns>New text frame format.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextFrameFormat> CreateTextFrameFormat() override;
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FormatFactory> s_factory;
    
};

} // namespace Slides
} // namespace Aspose


