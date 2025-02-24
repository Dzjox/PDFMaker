#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/Theme/IEffectStyle.h>

#include "DOM/Theme/Styles/EffectStyleCollection.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class EffectFormat;
class IEffectFormat;
class IThreeDFormat;
namespace Theme
{
class IEffectStyleEffectiveData;
} // namespace Theme
class ThreeDFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents an effect style.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS EffectStyle : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Theme::EffectStyleCollection>>, public Aspose::Slides::Theme::IEffectStyle
{
    typedef EffectStyle ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Theme::EffectStyleCollection>> BaseType;
    typedef Aspose::Slides::Theme::IEffectStyle BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Theme::EffectStyleCollection;
    /// @endcond
    
public:

    /// <summary>
    /// Returns an effect format.
    /// Read-only <see cref="IEffectFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_EffectFormat() override;
    /// <summary>
    /// Returns an 3d format.
    /// Read-only <see cref="IThreeDFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThreeDFormat> get_ThreeDFormat() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> EffectStyleChanged;
    
    ASPOSE_SLIDES_LOCAL_API EffectStyle(System::SharedPtr<EffectStyleCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(EffectStyle, CODEPORTING_ARGS(System::SharedPtr<EffectStyleCollection> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<EffectStyle> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IEffectStyleEffectiveData> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~EffectStyle();
    
private:

    System::SharedPtr<Aspose::Slides::EffectFormat> m_effectFormat;
    System::SharedPtr<Aspose::Slides::ThreeDFormat> m_3dFormat;
    
    ASPOSE_SLIDES_LOCAL_API void OnEffectStyleChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


