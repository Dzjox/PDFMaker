#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartWall.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/Chart.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Format;
class IFormat;
enum class PictureType;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartWallPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartWallPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents walls on 3d charts.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartWall : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>>, public Aspose::Slides::Charts::IChartWall
{
    typedef ChartWall ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>> BaseType;
    typedef Aspose::Slides::Charts::IChartWall BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartWallPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the walls thickness as a percentage of the largest 
    /// dimension of the plot volume.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Thickness() override;
    /// <summary>
    /// Sets the walls thickness as a percentage of the largest 
    /// dimension of the plot volume.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Thickness(int32_t value) override;
    /// <summary>
    /// Returns the wall fill, line, effect, 3d styles.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Return or sets the picture type.
    /// Read <see cref="Charts::PictureType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Charts::PictureType get_PictureType() override;
    /// <summary>
    /// Return or sets the picture type.
    /// Write <see cref="Charts::PictureType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PictureType(Aspose::Slides::Charts::PictureType value) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    int32_t m_thickness;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_wallFormat;
    Aspose::Slides::Charts::PictureType m_pictureType;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartWallPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API ChartWall(System::SharedPtr<Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartWall, CODEPORTING_ARGS(System::SharedPtr<Chart> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartWall();
    
private:

    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartWallPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


