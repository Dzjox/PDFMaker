#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/Effects/IImageTransformOperationCollection.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IAlphaBiLevel;
class IAlphaCeiling;
class IAlphaFloor;
class IAlphaInverse;
class IAlphaModulate;
class IAlphaModulateFixed;
class IAlphaReplace;
class IBiLevel;
class IBlur;
class IColorChange;
class IColorReplace;
class IDuotone;
class IFillOverlay;
class IGrayScale;
class IHSL;
class IImageTransformOperation;
class ILuminance;
class ImageTransformOCollectionEffectiveData;
class ImageTransformOperationCollectionImpl;
class ITint;
} // namespace Effects
class FloatColor;
class IBaseSlide;
class IDOMObject;
class Picture;
class PictureImpl;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
class Image;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a collection of effects apllied to an image.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ImageTransformOperationCollection final : public Aspose::Slides::PVIObject, public Aspose::Slides::Effects::IImageTransformOperationCollection
{
    typedef ImageTransformOperationCollection ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::Effects::IImageTransformOperationCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PictureImpl;
    friend class Aspose::Slides::Picture;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the number of image effects in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <returns>
    /// true if the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only; otherwise, false.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool get_IsReadOnly() const override;
    
    /// <summary>
    /// Returns an <see cref="Aspose::Slides::Effects::ImageTransformOperation">ImageTransformOperation</see> from the collection by it's index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImageTransformOperation> idx_get(int32_t index) override;
    
    /// <summary>
    /// Removes an image effect from a collection at the specified index.
    /// </summary>
    /// <param name="index">Index of an image effect that should be deleted.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Adds the new Alpha Bi-Level effect to the end of a collection.
    /// </summary>
    /// <param name="threshold">The threshold value for the alpha bi-level effect.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaBiLevel> AddAlphaBiLevelEffect(float threshold) override;
    /// <summary>
    /// Adds the new Alpha Ceiling effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaCeiling> AddAlphaCeilingEffect() override;
    /// <summary>
    /// Adds the new Alpha Floor effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaFloor> AddAlphaFloorEffect() override;
    /// <summary>
    /// Adds the new Alpha Inverse effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaInverse> AddAlphaInverseEffect() override;
    /// <summary>
    /// Adds the new Alpha Modulate effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaModulate> AddAlphaModulateEffect() override;
    /// <summary>
    /// Adds the new Alpha Modulate Fixed effect to the end of a collection.
    /// </summary>
    /// <param name="amount">The percentage amount to scale the alpha.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaModulateFixed> AddAlphaModulateFixedEffect(float amount) override;
    /// <summary>
    /// Adds the new Alpha Replace effect to the end of a collection.
    /// </summary>
    /// <param name="alpha">The new opacity value.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaReplace> AddAlphaReplaceEffect(float alpha) override;
    /// <summary>
    /// Adds the new Bi-Level (black/white) effect to the end of a collection.
    /// </summary>
    /// <param name="threshold">the luminance threshold for the Bi-Level effect.
    /// Values greater than or equal to the threshold are set to white.
    /// Values lesser than the threshold are set to black.
    /// </param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBiLevel> AddBiLevelEffect(float threshold) override;
    /// <summary>
    /// Adds the new Blur effect to the end of a collection.
    /// </summary>
    /// <param name="radius">The radius of blur.</param>
    /// <param name="grow">
    /// Specifies whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// </param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBlur> AddBlurEffect(double radius, bool grow) override;
    /// <summary>
    /// Adds the new Color Change effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorChange> AddColorChangeEffect() override;
    /// <summary>
    /// Adds the new Color Replacement effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorReplace> AddColorReplaceEffect() override;
    /// <summary>
    /// Adds the new Duotone effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDuotone> AddDuotoneEffect() override;
    /// <summary>
    /// Adds the new Fill Overlay effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillOverlay> AddFillOverlayEffect() override;
    /// <summary>
    /// Adds the new Gray Scale effect to the end of a collection.
    /// </summary>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGrayScale> AddGrayScaleEffect() override;
    /// <summary>
    /// Adds the new Hue/Saturation/Luminance effect to the end of a collection.
    /// </summary>
    /// <param name="hue">The number of degrees by which the hue is adjusted.</param>
    /// <param name="saturation">The percentage by which the saturation is adjusted.</param>
    /// <param name="luminance">The percentage by which the luminance is adjusted.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHSL> AddHSLEffect(float hue, float saturation, float luminance) override;
    /// <summary>
    /// Adds the new Luminance effect to the end of a collection.
    /// </summary>
    /// <param name="brightness">The percent to change the brightness.</param>
    /// <param name="contrast">The percent to change the contrast.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILuminance> AddLuminanceEffect(float brightness, float contrast) override;
    /// <summary>
    /// Adds the new Tint effect to the end of a collection.
    /// </summary>
    /// <param name="hue">The hue towards which to tint.</param>
    /// <param name="amount">Specifies by how much the color value is shifted.</param>
    /// <returns>Index of the new image effect in a collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITint> AddTintEffect(float hue, float amount) override;
    /// <summary>
    /// Adds the new image effect to the end of a collection.
    /// </summary>
    /// <param name="operation">The image effect to add to the end of a collection.</param>
    ASPOSE_SLIDES_SHARED_API void Add(const System::SharedPtr<IImageTransformOperation>& operation) override;
    /// <summary>
    /// Removes all image effects from a collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    ASPOSE_SLIDES_SHARED_API bool Contains(const System::SharedPtr<IImageTransformOperation>& item) const override;
    /// <summary>
    /// Copies the elements of the <see cref="System::Collections::Generic::ICollection">ICollection</see> to an <see cref="System::Array"></see>, starting at a particular <see cref="System::Array"></see> index.
    /// </summary>
    /// <param name="array">The one-dimensional <see cref="System::Array"></see> that is the destination of the elements copied from <see cref="System::Collections::Generic::ICollection">ICollection</see>. The <see cref="System::Array"></see> must have zero-based indexing.</param><param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param><exception cref="System::ArgumentNullException"><paramref name="array"></paramref> is null.</exception><exception cref="System::ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception><exception cref="System::ArgumentException">The number of elements in the source <see cref="System::Collections::Generic::ICollection">ICollection</see> is greater than the available space from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.</exception>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IImageTransformOperation>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Removes the first occurrence of a specific object from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed from the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false. This method also returns false if <paramref name="item"></paramref> is not found in the original <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </returns>
    /// <param name="item">The object to remove from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param><exception cref="System::NotSupportedException">The <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.</exception>
    ASPOSE_SLIDES_SHARED_API bool Remove(const System::SharedPtr<IImageTransformOperation>& item) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IImageTransformOperation>>> GetEnumerator() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ImageTransformOperationCollectionImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    System::Event<void()> ImageTransformOperationCollectionChanged;
    
    ASPOSE_SLIDES_LOCAL_API ImageTransformOperationCollection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImageTransformOperationCollection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ImageTransformOCollectionEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Image> ApplyTransform(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<System::Drawing::Bitmap> img);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ImageTransformOperationCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IImageTransformOperation>>> m_operations;
    
    ASPOSE_SLIDES_LOCAL_API void OnImageTransformOperationCollectionChanged();
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


