#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IBackground.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BackgroundEffectiveData;
class BackgroundImpl;
enum class BackgroundType : int8_t;
class BaseSlide;
class ColorFormat;
class EffectFormat;
class FillFormat;
class IBackgroundEffectiveData;
class IBaseSlide;
class IColorFormat;
class IDOMObject;
class IEffectFormat;
class IFillFormat;
class IPresentation;
class MasterNotesSlideManager;
namespace PptSerialization
{
class BackgroundPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class BackgroundPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BackgroundPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BackgroundPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
namespace View
{
class BaseSlideView;
} // namespace View
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents background of a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Background final : public Aspose::Slides::PVIObject, public Aspose::Slides::IBackground
{
    typedef Background ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IBackground BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::View::BaseSlideView;
    friend class Aspose::Slides::BackgroundEffectiveData;
    friend class Aspose::Slides::BackgroundImpl;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::PptxSerialization::PartParser::BackgroundPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::BackgroundPPTSerialization;
    friend class Aspose::Slides::MasterNotesSlideManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a type of background fill.
    /// Read <see cref="BackgroundType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BackgroundType get_Type() override;
    /// <summary>
    /// Returns a type of background fill.
    /// Write <see cref="BackgroundType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Type(BackgroundType value) override;
    /// <summary>
    /// Returns a FillFormat for BackgroundType::OwnBackground fill.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
    /// <summary>
    /// Returns a EffectFormat for BackgroundType::OwnBackground fill.
    /// Read-only <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectFormat> get_EffectFormat() override;
    /// <summary>
    /// Return a ColorFormat for a BackgroundType::Themed fill.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_StyleColor() override;
    /// <summary>
    /// Returns an index of BackgroundType::Themed fill in background theme collection.
    /// 0 means no fill.
    /// 1..999 - index.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint16_t get_StyleIndex() override;
    /// <summary>
    /// Returns an index of BackgroundType::Themed fill in background theme collection.
    /// 0 means no fill.
    /// 1..999 - index.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_StyleIndex(uint16_t value) override;
    /// <summary>
    /// Returns the parent slide of a shape.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a slide.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    /// <summary>
    /// Gets effective background data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IBackgroundEffectiveData">IBackgroundEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting effective background properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto effectiveBackground = pres->get_Slides()->idx_get(0)->get_Background()->GetEffective();
    /// Console::WriteLine(String(u"Background fill type: ") + ObjectExt::ToString(effectiveBackground->get_FillFormat()->get_FillType()));
    /// Console::WriteLine(String(u"Any effects applied: ") + !effectiveBackground->get_EffectFormat()->get_IsNoEffects());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBackgroundEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BackgroundImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::BackgroundPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::BackgroundPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BaseSlide> get_SlideInternal();
    
    ASPOSE_SLIDES_LOCAL_API Background(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Background, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BackgroundEffectiveData> GetEffectiveInternal();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Background();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<BaseSlide> m_parentImmediate;
    System::SharedPtr<Aspose::Slides::FillFormat> m_fillFormat;
    System::SharedPtr<Aspose::Slides::EffectFormat> m_effectFormat;
    System::SharedPtr<ColorFormat> m_styleColor;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::BackgroundPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::BackgroundPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<BackgroundEffectiveData> m_effective;
    
};

} // namespace Slides
} // namespace Aspose


