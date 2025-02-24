#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/IAxisFormat.h>

#include "DOM/PVI/IPVIObject.h"
#include "DOM/DomObject.h"
#include "DOM/Chart/Axis.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class EffectFormat;
class FillFormat;
class IDOMObject;
class IEffectFormat;
class IFillFormat;
class ILineFormat;
class IPresentationComponent;
class LineFormat;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class AxisFormatPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class AxisFormatPPTXUnsupportedProps;
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
/// Represents chart format properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AxisFormat final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Axis>>, public Aspose::Slides::Charts::IAxisFormat, public Aspose::Slides::IPVIObject
{
    typedef AxisFormat ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Axis>> BaseType;
    typedef Aspose::Slides::Charts::IAxisFormat BaseType1;
    typedef Aspose::Slides::IPVIObject BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxisFormatPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns fill style properties of an axis.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_Fill() override;
    /// <summary>
    /// Returns line style properties of an axis.
    /// Read-only <see cref="ILineFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_Line() override;
    /// <summary>
    /// Returns effects used for an axis.
    /// Read-only <see cref="IEffectFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_Effect() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::AxisFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() override;
    
    ASPOSE_SLIDES_LOCAL_API AxisFormat(System::SharedPtr<Axis> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AxisFormat, CODEPORTING_ARGS(System::SharedPtr<Axis> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~AxisFormat();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    
    System::SharedPtr<FillFormat> m_fillFmt;
    System::SharedPtr<LineFormat> m_lineFmt;
    System::SharedPtr<EffectFormat> m_effectFmt;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::AxisFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


