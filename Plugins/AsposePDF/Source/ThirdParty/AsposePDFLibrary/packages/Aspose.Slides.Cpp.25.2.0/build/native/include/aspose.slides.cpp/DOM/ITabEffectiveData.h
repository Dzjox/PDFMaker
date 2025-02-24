#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/icomparable.h>

#include "DOM/ITab.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITab;
enum class TabAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective text's tabulation stop properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ITabEffectiveData : public System::IComparable<System::SharedPtr<Aspose::Slides::ITab>>
{
    typedef ITabEffectiveData ThisType;
    typedef System::IComparable<System::SharedPtr<Aspose::Slides::ITab>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns position of a tab.
    /// Assigning this property can change tab's index in collection and invalidate Enumerator.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Position() = 0;
    /// <summary>
    /// Returns align style of a tab.
    /// Read-only <see cref="TabAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TabAlignment get_Alignment() = 0;
    
};

} // namespace Slides
} // namespace Aspose


