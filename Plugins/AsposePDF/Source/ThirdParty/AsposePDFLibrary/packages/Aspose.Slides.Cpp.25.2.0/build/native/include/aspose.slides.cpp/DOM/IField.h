#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFieldType;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a field.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IField : public Aspose::Slides::ISlideComponent
{
    typedef IField ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns field's type.
    /// Read <see cref="Aspose::Slides::IFieldType">IFieldType</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFieldType> get_Type() = 0;
    /// <summary>
    /// Sets field's type.
    /// Write <see cref="Aspose::Slides::IFieldType">IFieldType</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(System::SharedPtr<IFieldType> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


