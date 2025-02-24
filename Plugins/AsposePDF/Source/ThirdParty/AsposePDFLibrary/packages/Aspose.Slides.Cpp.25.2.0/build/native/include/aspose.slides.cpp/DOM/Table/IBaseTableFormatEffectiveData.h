#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFillFormatEffectiveData;
class ILineFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Base interface for immutable objects which contain effective table formatting properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBaseTableFormatEffectiveData : public virtual System::Object
{
    typedef IBaseTableFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns fill format effective value.
    /// Read-only <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> get_FillFormat() = 0;
    /// <summary>
    /// Returns left border line format effective value.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_BorderLeft() = 0;
    /// <summary>
    /// Returns top border line format effective value.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_BorderTop() = 0;
    /// <summary>
    /// Returns right border line format effective value.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_BorderRight() = 0;
    /// <summary>
    /// Returns bottom border line format effective value.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_BorderBottom() = 0;
    /// <summary>
    /// Returns down diagonal line format effective value.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_BorderDiagonalDown() = 0;
    /// <summary>
    /// Returns up diagonal line format effective value.
    /// Read-only <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> get_BorderDiagonalUp() = 0;
    
};

} // namespace Slides
} // namespace Aspose


