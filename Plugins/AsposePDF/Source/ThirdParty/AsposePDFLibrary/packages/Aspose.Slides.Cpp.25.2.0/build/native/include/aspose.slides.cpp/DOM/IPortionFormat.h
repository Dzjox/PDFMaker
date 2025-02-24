#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IHyperlinkContainer.h"
#include "DOM/IBasePortionFormat.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPortionFormatEffectiveData;
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
/// This class contains the text portion formatting properties. Unlike <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see>, all properties of this class are writeable.
/// </summary>
/// <remarks><para>This class is used to return and manipulate text portion formatting properties defined for the particular portion. This means that
/// no inheritance is applied when getting values so for the majority of cases you will get values meaning "undefined".</para>
/// <para>In order to get the effective formatting parameter values including inherited you need to use <see cref="IPortionFormat::GetEffective"></see> method 
/// which returns a <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see> instance.</para></remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IPortionFormat : public virtual Aspose::Slides::IBasePortionFormat, public Aspose::Slides::IHyperlinkContainer
{
    typedef IPortionFormat ThisType;
    typedef Aspose::Slides::IBasePortionFormat BaseType;
    typedef Aspose::Slides::IHyperlinkContainer BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns bookmark identifier.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_BookmarkId() = 0;
    /// <summary>
    /// Sets bookmark identifier.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BookmarkId(System::String value) = 0;
    /// <summary>
    /// Determines whether the smart tag should be cleaned. No inheritance applied.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SmartTagClean() = 0;
    /// <summary>
    /// Determines whether the smart tag should be cleaned. No inheritance applied.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SmartTagClean(bool value) = 0;
    
    /// <summary>
    /// Gets effective portion formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


