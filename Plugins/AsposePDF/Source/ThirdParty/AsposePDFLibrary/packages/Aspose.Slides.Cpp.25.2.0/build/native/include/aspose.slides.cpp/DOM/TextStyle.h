#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>
#include <system/event.h>
#include <system/array.h>
#include <DOM/ITextStyle.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "DOM/IStyleColorOwner.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
class BaseSlide;
class IDOMObject;
class IParagraphFormat;
class ITextStyleEffectiveData;
class LayoutTemplates;
class LayoutTemplatesContext;
class MasterHandoutSlideManager;
class MasterNotesSlide;
class MasterNotesSlideManager;
class MasterSlide;
class MasterSlideCollection;
class MasterSlideTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class OdpStylesPartParser;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphFormat;
class PlaceholderCollection;
namespace PptBinaryFile
{
namespace MsPpt
{
enum class TextTypeEnum;
} // namespace MsPpt
} // namespace PptBinaryFile
namespace PptSerialization
{
class MasterSlidePPTSerialization;
class MasterSlideRoundTripSerialization;
class PptSlideDeserializationContext;
class PptTextFrameSerializationContext;
class TextFormatPPTSerialization;
class TextFramePPTSerialization;
class TextStyleDeserializationContext;
class TextStylePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class TextStylePPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Presentation;
class PresentationTemplate;
class Table;
class TextFrame;
class TextFrameFormat;
class TextFrameFormatImpl;
class TextStyleEffectiveData;
class TextStyleImpl;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// This class contains the text style formatting properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextStyle final : public Aspose::Slides::PVIObject, public Aspose::Slides::ITextStyle, public Aspose::Slides::IStyleColorOwner
{
    typedef TextStyle ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ITextStyle BaseType1;
    typedef Aspose::Slides::IStyleColorOwner BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::TextFrameFormat;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::TextStyleImpl;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptTextFrameSerializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::PptSerialization::TextStyleDeserializationContext;
    friend class Aspose::Slides::PptSerialization::MasterSlideRoundTripSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::MasterNotesSlide;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::MasterSlideCollection;
    friend class Aspose::Slides::PlaceholderCollection;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::TextFrameFormatImpl;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TextStylePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::MasterSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextStylePPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::PresentationTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::LayoutTemplates;
    /// @endcond
    
public:

    /// <summary>
    /// Default paragraph propertiies.
    /// Read-only <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraphFormat> get_DefaultParagraphFormat() override;
    
    /// <summary>
    /// If level of style exist returns it, otherwise returns null.
    /// </summary>
    /// <param name="index">Zero-based index of level. Must lay in 0..8 interval.</param>
    /// <returns>Formatting of level <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraphFormat> GetLevel(int32_t index) override;
    /// <summary>
    /// Gets effective text style formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ITextStyleEffectiveData">ITextStyleEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting some of effective text style properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto shape = AsCast<IAutoShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto effectiveTextStyle = shape->get_TextFrame()->get_TextFrameFormat()->get_TextStyle()->GetEffective();
    /// 
    /// for (int32_t i = 0; i <= 8; i++)
    /// {
    ///     auto effectiveStyleLevel = effectiveTextStyle->GetLevel(i);
    ///     Console::WriteLine(String(u"= Effective paragraph formatting for style level #") + i + u" =");
    /// 
    ///     Console::WriteLine(String(u"Depth: ") + effectiveStyleLevel->get_Depth());
    ///     Console::WriteLine(String(u"Indent: ") + effectiveStyleLevel->get_Indent());
    ///     Console::WriteLine(String(u"Alignment: ") + ObjectExt::ToString(effectiveStyleLevel->get_Alignment()));
    ///     Console::WriteLine(String(u"Font alignment: ") + ObjectExt::ToString(effectiveStyleLevel->get_FontAlignment()));
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITextStyleEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextStyleImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<ParagraphFormat>> get_Levels();
    ASPOSE_SLIDES_LOCAL_API System::Nullable<PptBinaryFile::MsPpt::TextTypeEnum> get_PptTextType();
    ASPOSE_SLIDES_LOCAL_API void set_PptTextType(System::Nullable<PptBinaryFile::MsPpt::TextTypeEnum> value);
    ASPOSE_SLIDES_LOCAL_API bool get_RoundTripRequired();
    
    System::Event<void(System::SharedPtr<ParagraphFormat>)> StyleChanged;
    
    ASPOSE_SLIDES_LOCAL_API TextStyle(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextStyle, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void InitializeOutlineLevel(int32_t levelInternalIndex);
    ASPOSE_SLIDES_LOCAL_API void InitializeOutlineLevel(int32_t levelInternalIndex, System::SharedPtr<ParagraphFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<TextStyle> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<TextStyleEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDefinedDataFrom(System::SharedPtr<TextStyle> source);
    ASPOSE_SLIDES_LOCAL_API void CombineFrom(System::SharedPtr<TextStyle> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IParagraphFormat> GetOrCreateLevel(int32_t index);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> GetCombinedDefaults(System::SharedPtr<ParagraphFormat> paraProps);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> GetCombinedLevel(int32_t index, System::SharedPtr<ParagraphFormat> paraProps);
    ASPOSE_SLIDES_LOCAL_API void DropLevels();
    ASPOSE_SLIDES_LOCAL_API bool EqualFormatting(System::SharedPtr<TextStyle> style);
    static ASPOSE_SLIDES_LOCAL_API void CheckIndexRestrictions(int32_t index);
    ASPOSE_SLIDES_LOCAL_API void ScaleSizes(float scalingCoef);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TextStyleEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TextStyle();
    
private:

    System::SharedPtr<ParagraphFormat> m_defaultParagraphFormat;
    System::ArrayPtr<System::SharedPtr<ParagraphFormat>> m_defaultLevels;
    System::SharedPtr<TextStyleEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API bool IsSingleLevelStyle(System::SharedPtr<TextStyle> style);
    
};

} // namespace Slides
} // namespace Aspose


