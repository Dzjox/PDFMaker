#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/ISlidesPicture.h>

#include "DOM/PVI/IPVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace ImageCache
{
class ImageCacheInfo;
} // namespace ImageCache
} // namespace Foundation
namespace Slides
{
class BulletFormat;
class BulletFormatImpl;
namespace Drawing
{
class RenderContext;
} // namespace Drawing
namespace Effects
{
class IImageTransformOperation;
class IImageTransformOperationCollection;
class ImageTransformOperationCollection;
} // namespace Effects
class IBaseSlide;
class IDOMObject;
class IPictureEffectiveData;
class IPPImage;
class IPresentation;
class IPresentationComponent;
class ISlideComponent;
class LineParamArguments;
namespace OdpSerialization
{
namespace PartParser
{
class ShapeOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class PictureFillFormat;
class PictureFillFormatImpl;
class PictureFillParam;
class PictureImpl;
namespace PptSerialization
{
class BackgroundPPTSerialization;
class PicturePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class PicturePPTXSerialization;
class SvgBlipPPTXSerialization;
} // namespace PartParser
class PptxSerializationContext;
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class PicturePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class SizeF;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a picture in a presentation.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Picture final : public Aspose::Slides::IPVIObject, public Aspose::Slides::ISlidesPicture
{
    typedef Picture ThisType;
    typedef Aspose::Slides::IPVIObject BaseType;
    typedef Aspose::Slides::ISlidesPicture BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureFillParam;
    friend class Aspose::Slides::PptxSerialization::PartParser::SvgBlipPPTXSerialization;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::PictureFillFormatImpl;
    friend class Aspose::Slides::OdpSerialization::PartParser::ShapeOdpDeserialization;
    friend class Aspose::Slides::PictureFillFormat;
    friend class Aspose::Slides::PptSerialization::PicturePPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PicturePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    friend class Aspose::Slides::BulletFormat;
    friend class Aspose::Slides::PptSerialization::BackgroundPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the embedded image.
    /// Read <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPPImage> get_Image() override;
    /// <summary>
    /// Sets the embedded image.
    /// Write <see cref="Aspose::Slides::IPPImage">IPPImage</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Image(System::SharedPtr<IPPImage> value) override;
    /// <summary>
    /// Returns of sets linked image's URL.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LinkPathLong() override;
    /// <summary>
    /// Returns of sets linked image's URL.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinkPathLong(System::String value) override;
    /// <summary>
    /// Returns the collection of image transform effects.
    /// Read-only <see cref="Aspose::Slides::Effects::IImageTransformOperationCollection">IImageTransformOperationCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IImageTransformOperationCollection> get_ImageTransform() override;
    /// <summary>
    /// Returns the presentation. 
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    /// <summary>
    /// Returns the parent slide of a picture.
    /// Read-only <see cref="Aspose::Slides::IBaseSlide">IBaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    
    /// <summary>
    /// Compares with specified object.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>True if objects are equal, otherwise false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns hash.
    /// </summary>
    /// <returns>Hash.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns image transform operation at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Effects::IImageTransformOperation> get_ImageTransformOperation(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    ASPOSE_SLIDES_LOCAL_API System::String get_LinkPathLongInternal();
    ASPOSE_SLIDES_LOCAL_API void set_LinkPathLongInternal(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PicturePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    
    System::Event<void()> PictureChanged;
    
    ASPOSE_SLIDES_LOCAL_API Picture(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Picture, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Picture> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IPictureEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Foundation::ImageCache::ImageCacheInfo> GetTransformedImageImpl(System::SharedPtr<LineParamArguments> arg, System::Drawing::SizeF tileSize, System::SharedPtr<Drawing::RenderContext> rc, System::SharedPtr<IBaseSlide> slide, bool cropped, System::SharedPtr<PictureFillFormat> fillprop);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Picture();
    
private:

    System::SharedPtr<PictureImpl> m_realObject;
    bool m_isParentWrapperInitialized;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    System::SharedPtr<Effects::ImageTransformOperationCollection> m_transform;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::PicturePPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void OnPictureChanged();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Effects::ImageTransformOperationCollection> GetOrCreateTransform();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureImpl> GetOrCreatePictureImpl();
    ASPOSE_SLIDES_LOCAL_API void LazyInitialization();
    
};

} // namespace Slides
} // namespace Aspose


