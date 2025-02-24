#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataWorksheet;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents cell for chart data.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartDataCell : public virtual System::Object
{
    typedef IChartDataCell ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the index of the row of worksheet in which the cell is located.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Row() = 0;
    /// <summary>
    /// Returns the index of the column of worksheet in which the cell is located.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Column() = 0;
    /// <summary>
    /// Gets the value of a cell.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// workbook->GetCell(0, u"F2")->set_Value(System::ObjectExt::Box<double>(-2.5));
    /// workbook->GetCell(0, u"G3")->set_Value(System::ObjectExt::Box<double>(6.3));
    /// </code>
    /// </example>    
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_Value() = 0;
    /// <summary>
    /// Sets the value of a cell.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// workbook->GetCell(0, u"F2")->set_Value(System::ObjectExt::Box<double>(-2.5));
    /// workbook->GetCell(0, u"G3")->set_Value(System::ObjectExt::Box<double>(6.3));
    /// </code>
    /// </example>    
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value(System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Gets the formula in A1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"B2");
    /// cell->set_Formula(u"1 + SUM(F2:H5)");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Formula() = 0;
    /// <summary>
    /// Sets the formula in A1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"B2");
    /// cell->set_Formula(u"1 + SUM(F2:H5)");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Formula(System::String value) = 0;
    /// <summary>
    /// Gets the formula in R1C1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"C2");
    /// cell->set_R1C1Formula(u"MAX(R2C6:R5C8) / 3");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_R1C1Formula() = 0;
    /// <summary>
    /// Sets the formula in R1C1-style.
    /// </summary>
    /// <example>
    /// <code>
    /// auto cell = workbook->GetCell(0, u"C2");
    /// cell->set_R1C1Formula(u"MAX(R2C6:R5C8) / 3");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_R1C1Formula(System::String value) = 0;
    /// <summary>
    /// Gets the worksheet.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartDataWorksheet">IChartDataWorksheet</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataWorksheet> get_ChartDataWorksheet() = 0;
    /// <summary>
    /// Determines whether the cell is hidden.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsHidden() = 0;
    /// <summary>
    /// Gets the custom display format of numbers and dates. 
    /// If value is empty will be used PresetNumberFormat value.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentNullException">Thrown if value is <c>null</c>.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_CustomNumberFormat() = 0;
    /// <summary>
    /// Sets the custom display format of numbers and dates. 
    /// If value is empty will be used PresetNumberFormat value.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentNullException">Thrown if value is <c>null</c>.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CustomNumberFormat(System::String value) = 0;
    /// <summary>
    /// Gets the built-in display format of numbers and dates. Preset number must be in [0..22] or [37..49].
    /// Read <see cref="uint8_t"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// 0	General
    /// 1	0
    /// 2	0.00
    /// 3	#,##0
    /// 4	#,##0.00
    /// 5	$#,##0;$-#,##0
    /// 6	$#,##0;[Red]$-#,##0
    /// 7	$#,##0.00;$-#,##0.00
    /// 8	$#,##0.00;[Red]$-#,##0.00
    /// 9	0%
    /// 10	0.00%
    /// 11	0.00E+00
    /// 12	# ?/?
    /// 13	# /
    /// 14	m/d/yy
    /// 15	d-mmm-yy
    /// 16	d-mmm
    /// 17	mmm-yy
    /// 18	h:mm AM/PM
    /// 19	h:mm:ss AM/PM
    /// 20	h:mm
    /// 21	h:mm:ss
    /// 22	m/d/yy h:mm
    /// 37	#,##0;-#,##0
    /// 38	#,##0;[Red]-#,##0
    /// 39	#,##0.00;-#,##0.00
    /// 40	#,##0.00;[Red]-#,##0.00
    /// 41	_ * #,##0_ ;_ * "_ ;_ @_
    /// 42	_ $* #,##0_ ;_ $* "_ ;_ @_
    /// 43	_ * #,##0.00_ ;_ * "??_ ;_ @_
    /// 44	_ $* #,##0.00_ ;_ $* "??_ ;_ @_
    /// 45	mm:ss
    /// 46	h :mm:ss
    /// 47	mm:ss.0
    /// 48	##0.0E+00
    /// 49	@
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_PresetNumberFormat() = 0;
    /// <summary>
    /// Sets the built-in display format of numbers and dates. Preset number must be in [0..22] or [37..49].
    /// Write <see cref="uint8_t"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// 0	General
    /// 1	0
    /// 2	0.00
    /// 3	#,##0
    /// 4	#,##0.00
    /// 5	$#,##0;$-#,##0
    /// 6	$#,##0;[Red]$-#,##0
    /// 7	$#,##0.00;$-#,##0.00
    /// 8	$#,##0.00;[Red]$-#,##0.00
    /// 9	0%
    /// 10	0.00%
    /// 11	0.00E+00
    /// 12	# ?/?
    /// 13	# /
    /// 14	m/d/yy
    /// 15	d-mmm-yy
    /// 16	d-mmm
    /// 17	mmm-yy
    /// 18	h:mm AM/PM
    /// 19	h:mm:ss AM/PM
    /// 20	h:mm
    /// 21	h:mm:ss
    /// 22	m/d/yy h:mm
    /// 37	#,##0;-#,##0
    /// 38	#,##0;[Red]-#,##0
    /// 39	#,##0.00;-#,##0.00
    /// 40	#,##0.00;[Red]-#,##0.00
    /// 41	_ * #,##0_ ;_ * "_ ;_ @_
    /// 42	_ $* #,##0_ ;_ $* "_ ;_ @_
    /// 43	_ * #,##0.00_ ;_ * "??_ ;_ @_
    /// 44	_ $* #,##0.00_ ;_ $* "??_ ;_ @_
    /// 45	mm:ss
    /// 46	h :mm:ss
    /// 47	mm:ss.0
    /// 48	##0.0E+00
    /// 49	@
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PresetNumberFormat(uint8_t value) = 0;
    
    /// <summary>
    /// If the cell contains a formula, the value will be updated base on that formula. 
    /// </summary>
    /// <param name="updateValues">If false, no actual calculation will be performed. Use true for possible exceptions check.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Calculate(bool updateValues) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


