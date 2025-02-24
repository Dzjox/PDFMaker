#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICellFormatEffectiveData;
class IFillFormat;
class ILineFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a table cell.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICellFormat : public virtual System::Object
{
    typedef ICellFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a cell fill properties object.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillFormat() = 0;
    /// <summary>
    /// Returns a left border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_BorderLeft() = 0;
    /// <summary>
    /// Returns a top border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_BorderTop() = 0;
    /// <summary>
    /// Returns a right border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_BorderRight() = 0;
    /// <summary>
    /// Returns a bottom border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_BorderBottom() = 0;
    /// <summary>
    /// Returns a top-left to bottom-right diagonal line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_BorderDiagonalDown() = 0;
    /// <summary>
    /// Returns a bottom-left to top-right diagonal line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_BorderDiagonalUp() = 0;
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
    /// Gets effective table cell formatting properties with inheritance and table styles applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ICellFormatEffectiveData">ICellFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICellFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


