#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IPictureFrame.h>

#include "DOM/GeometryShape.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AudioFrame;
namespace Charts
{
class Chart;
} // namespace Charts
class IDOMObject;
class IPictureFillFormat;
class IPictureFrameLock;
class IPPImage;
class ISvgImage;
namespace OdpSerialization
{
namespace PartParser
{
class ShapeOdpSerialization;
class StylePartsOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class PictureFillFormat;
class PictureFrameLayout;
namespace PptSerialization
{
class PptGroupShapeSerializationContext;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class PictureFramePPTXSerialization;
} // namespace PartParser
class PptxSerializationContext;
} // namespace PptxSerialization
class ShapeCollection;
enum class ShapeType;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class PictureFramePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class VideoFrame;
class ZoomObjectLayout;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a frame with a picture inside.
/// </summary>
/// <example>
/// The following examples shows how to change Audio Frame Thumbnail.
/// <code>
/// auto presentation = System::MakeObject<Presentation>();
/// auto slide = presentation->get_Slides()->idx_get(0);
/// 
/// // Adds an audio frame to the slide with a specified position and size.
/// auto audioStream = System::MakeObject<System::IO::FileStream>(u"sample2.mp3", System::IO::FileMode::Open, System::IO::FileAccess::Read);
/// auto audioFrame = slide->get_Shapes()->AddAudioFrameEmbedded(150.0f, 100.0f, 50.0f, 50.0f, audioStream);
/// audioStream->Dispose();
/// 
/// // Adds an image to presentation resources.
/// auto imageStream = System::IO::File::OpenRead(u"eagle.jpeg");
/// auto audioImage = presentation->get_Images()->AddImage(imageStream);
/// imageStream->Dispose();
/// 
/// // Sets the image for the audio frame.
/// audioFrame->get_PictureFormat()->get_Picture()->set_Image(audioImage);
/// 
/// //Saves the modified presentation to disk
/// presentation->Save(u"example_out.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS PictureFrame : public Aspose::Slides::GeometryShape, public virtual Aspose::Slides::IPictureFrame
{
    typedef PictureFrame ThisType;
    typedef Aspose::Slides::GeometryShape BaseType;
    typedef Aspose::Slides::IPictureFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureFrameLayout;
    friend class Aspose::Slides::ZoomObjectLayout;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::AudioFrame;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::VideoFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::PictureFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    /// @endcond
    
public:

    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IPictureFrameLock">IPictureFrameLock</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFrameLock> get_PictureFrameLock() override;
    /// <summary>
    /// <para>Returns the AutoShape type for a PictureFrame.
    /// There are allowable all items of the set <see cref="Slides::ShapeType"></see>, 
    /// except all sorts of lines:</para>
    /// <para>    ShapeType::Line,</para>
    /// <para>    ShapeType::StraightConnector1,</para>
    /// <para>    ShapeType::BentConnector2,</para>
    /// <para>    ShapeType::BentConnector3,</para>
    /// <para>    ShapeType::BentConnector4,</para>
    /// <para>    ShapeType::BentConnector5,</para>
    /// <para>    ShapeType::CurvedConnector2,</para>
    /// <para>    ShapeType::CurvedConnector3,</para>
    /// <para>    ShapeType::CurvedConnector4,</para>
    /// <para>    ShapeType::CurvedConnector5.</para>
    /// Read <see cref="Slides::ShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::ShapeType get_ShapeType() override;
    /// <summary>
    /// <para>Sets the AutoShape type for a PictureFrame.
    /// There are allowable all items of the set <see cref="Slides::ShapeType"></see>, 
    /// except all sorts of lines:</para>
    /// <para>    ShapeType::Line,</para>
    /// <para>    ShapeType::StraightConnector1,</para>
    /// <para>    ShapeType::BentConnector2,</para>
    /// <para>    ShapeType::BentConnector3,</para>
    /// <para>    ShapeType::BentConnector4,</para>
    /// <para>    ShapeType::BentConnector5,</para>
    /// <para>    ShapeType::CurvedConnector2,</para>
    /// <para>    ShapeType::CurvedConnector3,</para>
    /// <para>    ShapeType::CurvedConnector4,</para>
    /// <para>    ShapeType::CurvedConnector5.</para>
    /// Write <see cref="Slides::ShapeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShapeType(Aspose::Slides::ShapeType value) override;
    /// <summary>
    /// Returns the PictureFillFormat object for a picture frame.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFillFormat> get_PictureFormat() override;
    /// <summary>
    /// Returns the scale of height(relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_RelativeScaleHeight() override;
    /// <summary>
    /// Sets the scale of height(relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RelativeScaleHeight(float value) override;
    /// <summary>
    /// Returns the scale of width (relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_RelativeScaleWidth() override;
    /// <summary>
    /// Sets the scale of width (relative to original picture size) of the picture frame. Value 1.0 corresponds to 100%.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RelativeScaleWidth(float value) override;
    
protected:

    /// @cond
    System::SharedPtr<PictureFillFormat> m_picFillFormat;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISvgImage> get_MsFormattedSvg() const;
    ASPOSE_SLIDES_LOCAL_API void set_MsFormattedSvg(System::SharedPtr<ISvgImage> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PictureFramePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<Aspose::Slides::ShapeType, Aspose::Slides::ShapeType>> ShapeTypes;
    
    ASPOSE_SLIDES_LOCAL_API PictureFrame(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PictureFramePPTXUnsupportedProps> pptxUnsupportedProps);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PictureFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PictureFramePPTXUnsupportedProps> pptxUnsupportedProps));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API PictureFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PictureFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetImage(System::SharedPtr<IPPImage> image);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void OnWidthChanged(float newWidth) override;
    ASPOSE_SLIDES_SHARED_API void OnHeightChanged(float newHeight) override;
    /// <summary>
    /// Sets all formats to NotDefined state. For shapes with placeholders this will cause default state.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Reset() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~PictureFrame();
    
private:

    System::SharedPtr<ISvgImage> pr_MsFormattedSvg;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


