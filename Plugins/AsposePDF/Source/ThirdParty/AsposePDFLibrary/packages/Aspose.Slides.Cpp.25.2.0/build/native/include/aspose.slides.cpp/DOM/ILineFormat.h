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
class ILineFillFormat;
class ILineFormatEffectiveData;
class ISketchFormat;
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
/// Represents format of a line.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILineFormat : public Aspose::Slides::ILineParamSource
{
    typedef ILineFormat ThisType;
    typedef Aspose::Slides::ILineParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ObjectExt;
    /// @endcond
    
public:

    /// <summary>
    /// Returns true if line format is not defined (as just created, default).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsFormatNotDefined() = 0;
    /// <summary>
    /// Returns the fill format of a line.
    /// Read-only <see cref="Aspose::Slides::ILineFillFormat">ILineFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFillFormat> get_FillFormat() = 0;
    /// <summary>
    /// Returns the sketch format of a line.
    /// Read-only <see cref="Aspose::Slides::ISketchFormat">ISketchFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISketchFormat> get_SketchFormat() = 0;
    /// <summary>
    /// Returns the width of a line.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Width() = 0;
    /// <summary>
    /// Sets the width of a line.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Width(double value) = 0;
    /// <summary>
    /// Returns the line dash style.
    /// Read <see cref="LineDashStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineDashStyle get_DashStyle() = 0;
    /// <summary>
    /// Sets the line dash style.
    /// Write <see cref="LineDashStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DashStyle(LineDashStyle value) = 0;
    /// <summary>
    /// Returns the custom dash pattern.
    /// Read <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<float> get_CustomDashPattern() = 0;
    /// <summary>
    /// Sets the custom dash pattern.
    /// Write <see cref="float"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CustomDashPattern(System::ArrayPtr<float> value) = 0;
    /// <summary>
    /// Returns the line cap style.
    /// Read <see cref="LineCapStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineCapStyle get_CapStyle() = 0;
    /// <summary>
    /// Sets the line cap style.
    /// Write <see cref="LineCapStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CapStyle(LineCapStyle value) = 0;
    /// <summary>
    /// Returns the line style.
    /// Read <see cref="LineStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineStyle get_Style() = 0;
    /// <summary>
    /// Sets the line style.
    /// Write <see cref="LineStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Style(LineStyle value) = 0;
    /// <summary>
    /// Returns the line alignment.
    /// Read <see cref="LineAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineAlignment get_Alignment() = 0;
    /// <summary>
    /// Sets the line alignment.
    /// Write <see cref="LineAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Alignment(LineAlignment value) = 0;
    /// <summary>
    /// Returns the lines join style.
    /// Read <see cref="LineJoinStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineJoinStyle get_JoinStyle() = 0;
    /// <summary>
    /// Sets the lines join style.
    /// Write <see cref="LineJoinStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_JoinStyle(LineJoinStyle value) = 0;
    /// <summary>
    /// Returns the miter limit of a line.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MiterLimit() = 0;
    /// <summary>
    /// Sets the miter limit of a line.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MiterLimit(float value) = 0;
    /// <summary>
    /// Returns the arrowhead style at the beginning of a line.
    /// Read <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadStyle get_BeginArrowheadStyle() = 0;
    /// <summary>
    /// Sets the arrowhead style at the beginning of a line.
    /// Write <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BeginArrowheadStyle(LineArrowheadStyle value) = 0;
    /// <summary>
    /// Returns the arrowhead style at the end of a line.
    /// Read <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadStyle get_EndArrowheadStyle() = 0;
    /// <summary>
    /// Sets the arrowhead style at the end of a line.
    /// Write <see cref="LineArrowheadStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndArrowheadStyle(LineArrowheadStyle value) = 0;
    /// <summary>
    /// Returns the arrowhead width at the beginning of a line.
    /// Read <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadWidth get_BeginArrowheadWidth() = 0;
    /// <summary>
    /// Sets the arrowhead width at the beginning of a line.
    /// Write <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BeginArrowheadWidth(LineArrowheadWidth value) = 0;
    /// <summary>
    /// Returns the arrowhead width at the end of a line.
    /// Read <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadWidth get_EndArrowheadWidth() = 0;
    /// <summary>
    /// Sets the arrowhead width at the end of a line.
    /// Write <see cref="LineArrowheadWidth"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndArrowheadWidth(LineArrowheadWidth value) = 0;
    /// <summary>
    /// Returns the arrowhead length at the beginning of a line.
    /// Read <see cref="LineArrowheadLength"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadLength get_BeginArrowheadLength() = 0;
    /// <summary>
    /// Sets the arrowhead length at the beginning of a line.
    /// Write <see cref="LineArrowheadLength"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BeginArrowheadLength(LineArrowheadLength value) = 0;
    /// <summary>
    /// Returns the arrowhead length at the end of a line.
    /// Read <see cref="LineArrowheadLength"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LineArrowheadLength get_EndArrowheadLength() = 0;
    /// <summary>
    /// Sets the arrowhead length at the end of a line.
    /// Write <see cref="LineArrowheadLength"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndArrowheadLength(LineArrowheadLength value) = 0;
    
    /// <summary>
    /// Determines whether the two LineFormat instances are equal.
    /// </summary>
    /// <param name="lineFormat">The LineFormat to compare with the current LineFormat.</param>
    /// <returns>
    /// <b>true</b> if the specified LineFormat is equal to the current LineFormat; 
    /// otherwise, <b>false</b>.
    /// </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Equals(System::SharedPtr<ILineFormat> lineFormat) = 0;
    /// <summary>
    /// Gets effective line formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ILineFormatEffectiveData">ILineFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


