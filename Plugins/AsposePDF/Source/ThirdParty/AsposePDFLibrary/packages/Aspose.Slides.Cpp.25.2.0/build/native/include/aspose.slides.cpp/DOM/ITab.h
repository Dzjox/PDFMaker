#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/icomparable.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class TabAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a tabulation for a text.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITab : public System::IComparable<System::SharedPtr<Aspose::Slides::ITab>>
{
    typedef ITab ThisType;
    typedef System::IComparable<System::SharedPtr<Aspose::Slides::ITab>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns position of a tab.
    /// Assigning this property can change tab's index in collection and invalidate Enumerator.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Position() = 0;
    /// <summary>
    /// Sets position of a tab.
    /// Assigning this property can change tab's index in collection and invalidate Enumerator.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(double value) = 0;
    /// <summary>
    /// Returns align style of a tab.
    /// Read <see cref="TabAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TabAlignment get_Alignment() = 0;
    /// <summary>
    /// Sets align style of a tab.
    /// Write <see cref="TabAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Alignment(TabAlignment value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


