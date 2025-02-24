#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IHeadingPair.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class DocumentProperties_PPT;
namespace Serialization
{
class ExtendedDocPropertiesPartParser;
} // namespace Serialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a 'Heading pair' property of the document. 
/// It indicates the group name of document parts and the number of parts in group.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HeadingPair final : public Aspose::Slides::IHeadingPair
{
    typedef HeadingPair ThisType;
    typedef Aspose::Slides::IHeadingPair BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DocumentProperties_PPT;
    friend class Aspose::Slides::Serialization::ExtendedDocPropertiesPartParser;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the group name of document parts.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Returns the number of parts in group.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
protected:

    /// @cond
    /// <summary>
    /// Returns the group name of document parts.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Returns the number of parts in group.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Count(int32_t value);
    
    ASPOSE_SLIDES_LOCAL_API HeadingPair(System::String name, int32_t count);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HeadingPair, CODEPORTING_ARGS(System::String name, int32_t count));
    
private:

    System::String pr_Name;
    int32_t pr_Count;
    
};

} // namespace Slides
} // namespace Aspose


