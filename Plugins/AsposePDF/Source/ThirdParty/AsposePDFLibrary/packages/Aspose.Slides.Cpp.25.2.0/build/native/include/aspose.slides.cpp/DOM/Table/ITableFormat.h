#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFillFormat;
class ITableFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a table.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITableFormat : public virtual System::Object
{
    typedef ITableFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a table fill properties object.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillFormat() = 0;
    /// <summary>
    /// Gets the transparency of the fill color.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Transparency() = 0;
    /// <summary>
    /// Sets the transparency of the fill color.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Transparency(float value) = 0;
    
    /// <summary>
    /// Gets effective table formatting properties with inheritance and table styles applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ITableFormatEffectiveData">ITableFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITableFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


