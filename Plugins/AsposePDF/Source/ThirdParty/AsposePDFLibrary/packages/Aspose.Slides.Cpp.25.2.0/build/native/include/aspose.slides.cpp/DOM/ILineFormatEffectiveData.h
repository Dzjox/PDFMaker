#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/array.h>
#include <cstdint>

#include "DOM/ILineParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILineFillFormatEffectiveData;
class ISketchFormatEffectiveData;
enum class LineAlignment : int8_t;
enum class LineArrowheadLength : int8_t;
enum class LineArrowheadStyle : int8_t;
enum class LineArrowheadWidth : int8_t;
enum class LineCapStyle : int8_t;
enum class LineDashStyle : int8_t;
enum class LineJoinStyle : int8_t;
enum class LineStyle : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective line formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::ILineFormat">ILineFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ILineFormatEffectiveData : public Aspose::Slides::ILineParamSource
{
    typedef ILineFormatEffectiveData ThisType;
    typedef Aspose::Slides::ILineParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ObjectExt;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the fill format of a line.
    /// Read-only <see cref="Aspose::Slides::ILineFillFormatEffectiveData">ILineFillFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFillFormatEffectiveData> get_FillFormat() = 0;
    /// <summary>
    /// Returns the sketch format of a line.
    /// Read-only <see cref="Aspose::Slides::ISketchFormatEffectiveData">ISketchFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISketchFormatEffectiveData> get_SketchFormat() = 0;
    /// <summary>
    /// Returns the width of a line.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Width() = 0;
    /// <summary>
    /// Returns the line dash style.
    /// Read-only <see cref="LineDashStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineDashStyle get_DashStyle() = 0;
    /// <summary>
    /// Returns the custom dash pattern.
    /// Read-only <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> get_CustomDashPattern() = 0;
    /// <summary>
    /// Returns the line cap style.
    /// Read-only <see cref="LineCapStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineCapStyle get_CapStyle() = 0;
    /// <summary>
    /// Returns the line style.
    /// Read-only <see cref="LineStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineStyle get_Style() = 0;
    /// <summary>
    /// Returns the line alignment.
    /// Read-only <see cref="LineAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineAlignment get_Alignment() = 0;
    /// <summary>
    /// Returns the lines join style.
    /// Read-only <see cref="LineJoinStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineJoinStyle get_JoinStyle() = 0;
    /// <summary>
    /// Returns the miter limit of a line.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MiterLimit() = 0;
    /// <summary>
    /// Returns the arrowhead style at the beginning of a line.
    /// Read-only <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadStyle get_BeginArrowheadStyle() = 0;
    /// <summary>
    /// Returns the arrowhead style at the end of a line.
    /// Read-only <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadStyle get_EndArrowheadStyle() = 0;
    /// <summary>
    /// Returns the arrowhead width at the beginning of a line.
    /// Read-only <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadWidth get_BeginArrowheadWidth() = 0;
    /// <summary>
    /// Returns the arrowhead width at the end of a line.
    /// Read-only <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadWidth get_EndArrowheadWidth() = 0;
    /// <summary>
    /// Returns the arrowhead length at the beginning of a line.
    /// Read-only <see cref="LineArrowheadLength"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadLength get_BeginArrowheadLength() = 0;
    /// <summary>
    /// Returns the arrowhead length at the end of a line.
    /// Read-only <see cref="LineArrowheadLength"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadLength get_EndArrowheadLength() = 0;
    
    /// <summary>
    /// Determines whether the two ILineFormatEffectiveData instances are equal.
    /// </summary>
    /// <param name="lf">The ILineFormatEffectiveData to compare with the current ILineFormatEffectiveData.</param>
    /// <returns><b>true</b> if the specified ILineFormatEffectiveData is equal to the current ILineFormatEffectiveData; otherwise, <b>false</b>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Equals(System::SharedPtr<ILineFormatEffectiveData> lf) = 0;
    
};

} // namespace Slides
} // namespace Aspose


