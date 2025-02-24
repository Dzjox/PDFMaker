#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IAdjustValue.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AdjustValueCollection;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class AdjustValueUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a geometry shape's adjustment value.
/// These values affect shape's form.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AdjustValue : public Aspose::Slides::IAdjustValue
{
    typedef AdjustValue ThisType;
    typedef Aspose::Slides::IAdjustValue BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::AdjustValueCollection;
    /// @endcond
    
public:

    /// <summary>
    /// Returns ajustment value "as is".
    /// Read <see cref="int64_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int64_t get_RawValue() override;
    /// <summary>
    /// Sets ajustment value "as is".
    /// Write <see cref="int64_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RawValue(int64_t value) override;
    /// <summary>
    /// Returns value, interpreting it as angle in degrees.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_AngleValue() override;
    /// <summary>
    /// Sets value, interpreting it as angle in degrees.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AngleValue(float value) override;
    /// <summary>
    /// Returns a name of this adjustment value.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API AdjustValue(System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AdjustValueUnsupportedProps> adjustValueData);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AdjustValue, CODEPORTING_ARGS(System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AdjustValueUnsupportedProps> adjustValueData));
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AdjustValueUnsupportedProps> m_adjustValueData;
    
};

} // namespace Slides
} // namespace Aspose


