#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "DOM/IHyperlinkContainer.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class BlackWhiteMode : int8_t;
namespace Export
{
class ISVGOptions;
} // namespace Export
class IBaseShapeLock;
class ICustomData;
class IEffectFormat;
class IFillFormat;
class IGroupShape;
class IImage;
class ILineFormat;
class IPlaceholder;
class IShapeFrame;
class IThreeDFormat;
enum class ShapeThumbnailBounds;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a shape on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IShape : public virtual Aspose::Slides::ISlideComponent, public Aspose::Slides::IHyperlinkContainer
{
    typedef IShape ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    typedef Aspose::Slides::IHyperlinkContainer BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether the shape is TextHolder.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsTextHolder() = 0;
    /// <summary>
    /// Returns the placeholder for a shape.
    /// Read-only <see cref="Aspose::Slides::IPlaceholder">IPlaceholder</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPlaceholder> get_Placeholder() = 0;
    /// <summary>
    /// Returns the shape's custom data.
    /// Read-only <see cref="Aspose::Slides::ICustomData">ICustomData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomData> get_CustomData() = 0;
    /// <summary>
    /// Returns the raw shape frame's properties.
    /// Read <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <example>
    /// Code that attempts to assign undefined frame to IShape::set_Frame doesn't make sense in general case (particulary in case when parent GroupShape is multiple nested into other GroupShape-s). For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), NullableBool::NotDefined, 
    /// NullableBool::NotDefined, std::numeric_limits<float>::quiet_NaN()));
    /// </code>
    /// or
    /// <code>
    /// slide->get_Shapes()->AddAutoShape(ShapeType::RoundCornerRectangle,
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN());
    /// </code>
    /// Such code can lead to unclear situations. So restrictions had been added for using undefined values for IShape::set_Frame. Values of x, y, width, height, flipH, flipV and rotationAngle must be defined (not std::numeric_limits<float>::quiet_NaN() or NullableBool::NotDefined). Example code above now throws ArgumentException exception.
    /// This applies to these use cases:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(...); // cannot be undefined
    /// 
    /// SharedPtr<IShapeCollection> shapes = ...;
    /// // x, y, width, height parameters cannot be std::numeric_limits<float>::quiet_NaN():
    /// {
    ///     shapes->AddAudioFrameCD(...);
    ///     shapes->AddAudioFrameEmbedded(...);
    ///     shapes->AddAudioFrameLinked(...);
    ///     shapes->AddAutoShape(...);
    ///     shapes->AddChart(...);
    ///     shapes->AddConnector(...);
    ///     shapes->AddOleObjectFrame(...);
    ///     shapes->AddPictureFrame(...);
    ///     shapes->AddSmartArt(...);
    ///     shapes->AddTable(...);
    ///     shapes->AddVideoFrame(...);
    ///     shapes->InsertAudioFrameEmbedded(...);
    ///     shapes->InsertAudioFrameLinked(...);
    ///     shapes->InsertAutoShape(...);
    ///     shapes->InsertChart(...);
    ///     shapes->InsertConnector(...);
    ///     shapes->InsertOleObjectFrame(...);
    ///     shapes->InsertPictureFrame(...);
    ///     shapes->InsertTable(...);
    ///     shapes->InsertVideoFrame(...);
    /// }
    /// </code>
    /// 
    /// But a frame for IShape::set_RawFrame method can be undefined. This make sense when shape is linked to placeholder. Then undefined shape frame values is overridden from the parent placeholder shape. If there is no parent placeholder shape for that shape then that shape uses default values when it evaluates effective frame based on its IShape::get_RawFrame. Default values are 0 and NullableBool::False for x, y, width, height, flipH, flipV and rotationAngle. For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...; // shape is linked to placeholder
    /// shape->set_RawFrame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), 100.0f, std::numeric_limits<float>::quiet_NaN(), 
    /// NullableBool::NotDefined, NullableBool::NotDefined, 0.0f)); // now shape inherits x, y, height, flipH, flipV values form placeholder and overrides width=100 and rotationAngle=0.
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeFrame> get_RawFrame() = 0;
    /// <summary>
    /// Sets the raw shape frame's properties.
    /// Write <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <example>
    /// Code that attempts to assign undefined frame to IShape::set_Frame doesn't make sense in general case (particulary in case when parent GroupShape is multiple nested into other GroupShape-s). For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), NullableBool::NotDefined, 
    /// NullableBool::NotDefined, std::numeric_limits<float>::quiet_NaN()));
    /// </code>
    /// or
    /// <code>
    /// slide->get_Shapes()->AddAutoShape(ShapeType::RoundCornerRectangle,
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN());
    /// </code>
    /// Such code can lead to unclear situations. So restrictions had been added for using undefined values for IShape::set_Frame. Values of x, y, width, height, flipH, flipV and rotationAngle must be defined (not std::numeric_limits<float>::quiet_NaN() or NullableBool::NotDefined). Example code above now throws ArgumentException exception.
    /// This applies to these use cases:
    /// <code>
    /// SharedPtr<IShape> shape = ...;
    /// shape->set_Frame(...); // cannot be undefined
    /// 
    /// SharedPtr<IShapeCollection> shapes = ...;
    /// // x, y, width, height parameters cannot be std::numeric_limits<float>::quiet_NaN():
    /// {
    ///     shapes->AddAudioFrameCD(...);
    ///     shapes->AddAudioFrameEmbedded(...);
    ///     shapes->AddAudioFrameLinked(...);
    ///     shapes->AddAutoShape(...);
    ///     shapes->AddChart(...);
    ///     shapes->AddConnector(...);
    ///     shapes->AddOleObjectFrame(...);
    ///     shapes->AddPictureFrame(...);
    ///     shapes->AddSmartArt(...);
    ///     shapes->AddTable(...);
    ///     shapes->AddVideoFrame(...);
    ///     shapes->InsertAudioFrameEmbedded(...);
    ///     shapes->InsertAudioFrameLinked(...);
    ///     shapes->InsertAutoShape(...);
    ///     shapes->InsertChart(...);
    ///     shapes->InsertConnector(...);
    ///     shapes->InsertOleObjectFrame(...);
    ///     shapes->InsertPictureFrame(...);
    ///     shapes->InsertTable(...);
    ///     shapes->InsertVideoFrame(...);
    /// }
    /// </code>
    /// 
    /// But a frame for IShape::set_RawFrame method can be undefined. This make sense when shape is linked to placeholder. Then undefined shape frame values is overridden from the parent placeholder shape. If there is no parent placeholder shape for that shape then that shape uses default values when it evaluates effective frame based on its IShape::get_RawFrame. Default values are 0 and NullableBool::False for x, y, width, height, flipH, flipV and rotationAngle. For example:
    /// <code>
    /// SharedPtr<IShape> shape = ...; // shape is linked to placeholder
    /// shape->set_RawFrame(System::MakeObject<ShapeFrame>(std::numeric_limits<float>::quiet_NaN(), 
    /// std::numeric_limits<float>::quiet_NaN(), 100.0f, std::numeric_limits<float>::quiet_NaN(), 
    /// NullableBool::NotDefined, NullableBool::NotDefined, 0.0f)); // now shape inherits x, y, height, flipH, flipV values form placeholder and overrides width=100 and rotationAngle=0.
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RawFrame(System::SharedPtr<IShapeFrame> value) = 0;
    /// <summary>
    /// Returns the shape frame's properties.
    /// Read <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <remarks>
    /// Value of each property of the returned IShapeFrame instance is not 
    /// undefined (is not NaN or NotDefined).
    /// Value of each property of the assigned IShapeFrame instance must be not 
    /// undefined (must be not NaN or NotDefined).
    /// You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeFrame> get_Frame() = 0;
    /// <summary>
    /// Sets the shape frame's properties.
    /// Write <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    /// <remarks>
    /// Value of each property of the returned IShapeFrame instance is not 
    /// undefined (is not NaN or NotDefined).
    /// Value of each property of the assigned IShapeFrame instance must be not 
    /// undefined (must be not NaN or NotDefined).
    /// You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Frame(System::SharedPtr<IShapeFrame> value) = 0;
    /// <summary>
    /// Returns the LineFormat object that contains line formatting properties for a shape.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_LineFormat() = 0;
    /// <summary>
    /// Returns the ThreeDFormat object that contains line formatting properties for a shape.
    /// Read-only <see cref="Aspose::Slides::IThreeDFormat">IThreeDFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThreeDFormat> get_ThreeDFormat() = 0;
    /// <summary>
    /// Returns the EffectFormat object which contains pixel effects applied to a shape.
    /// Read-only <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormat> get_EffectFormat() = 0;
    /// <summary>
    /// Returns the FillFormat object that contains fill formatting properties for a shape.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillFormat() = 0;
    /// <summary>
    /// Determines whether the shape is hidden.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Hidden() = 0;
    /// <summary>
    /// Determines whether the shape is hidden.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Hidden(bool value) = 0;
    /// <summary>
    /// Returns the position of a shape in the z-order.
    /// Shapes[0] returns the shape at the back of the z-order,
    /// and Shapes[Shapes.Count - 1] returns the shape at the front of the z-order.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_ZOrderPosition() = 0;
    /// <summary>
    /// Returns the number of connection sites on the shape.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_ConnectionSiteCount() = 0;
    /// <summary>
    /// Returns the number of degrees the specified shape is rotated around
    /// the z-axis. A positive value indicates clockwise rotation; a negative value
    /// indicates counterclockwise rotation.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Rotation() = 0;
    /// <summary>
    /// Sets the number of degrees the specified shape is rotated around
    /// the z-axis. A positive value indicates clockwise rotation; a negative value
    /// indicates counterclockwise rotation.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Rotation(float value) = 0;
    /// <summary>
    /// Returns the x-coordinate of the upper-left corner of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_X() = 0;
    /// <summary>
    /// Sets the x-coordinate of the upper-left corner of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_X(float value) = 0;
    /// <summary>
    /// Returns the y-coordinate of the upper-left corner of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Y() = 0;
    /// <summary>
    /// Sets the y-coordinate of the upper-left corner of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Y(float value) = 0;
    /// <summary>
    /// Returns the width of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Width() = 0;
    /// <summary>
    /// Sets the width of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Width(float value) = 0;
    /// <summary>
    /// Returns the height of the shape.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Height() = 0;
    /// <summary>
    /// Sets the height of the shape.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// Returned value is always defined (is not std::numeric_limits<float>::quiet_NaN()).
    /// Assigned value must be defined (not std::numeric_limits<float>::quiet_NaN()). You can set undefined values for RawFrame instance properties.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Height(float value) = 0;
    /// <summary>
    /// Returns the alternative text associated with a shape.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_AlternativeText() = 0;
    /// <summary>
    /// Sets the alternative text associated with a shape.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AlternativeText(System::String value) = 0;
    /// <summary>
    /// Returns the title of alternative text associated with a shape.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_AlternativeTextTitle() = 0;
    /// <summary>
    /// Sets the title of alternative text associated with a shape.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AlternativeTextTitle(System::String value) = 0;
    /// <summary>
    /// Returns the name of a shape.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Sets the name of a shape.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    /// <summary>
    /// Gets 'Mark as decorative' option
    /// Reed/write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"sample.pptx")
    /// pres->get_Slide(0)->get_Shape(0)->set_IsDecorative(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsDecorative() = 0;
    /// <summary>
    /// Sets 'Mark as decorative' option
    /// Reed/write <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"sample.pptx")
    /// pres->get_Slide(0)->get_Shape(0)->set_IsDecorative(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsDecorative(bool value) = 0;
    /// <summary>
    /// Returns shape's locks.
    /// Read-only <see cref="Aspose::Slides::IBaseShapeLock">IBaseShapeLock</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBaseShapeLock> get_ShapeLock() = 0;
    /// <summary>
    /// Gets unique shape identifier in presentation scope.
    /// Read-only <see cref="uint32_t"></see>.
    /// See also <see cref="IShape::get_OfficeInteropShapeId"></see> for getting unique shape identifier in slide scope.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_UniqueId() = 0;
    /// <summary>
    /// Gets unique shape identifier in slide scope.
    /// Read-only <see cref="uint32_t"></see>.
    /// See also <see cref="IShape::get_UniqueId"></see> for getting unique shape identifier in presentation scope.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_OfficeInteropShapeId() = 0;
    /// <summary>
    /// Determines whether the shape is grouped.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Property <see cref="IShape::get_ParentGroup"></see> returns parent GroupShape object if shape is grouped.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsGrouped() = 0;
    /// <summary>
    /// Property specifies how a shape will render in black-and-white display mode..
    /// Read <see cref="Slides::BlackWhiteMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::BlackWhiteMode get_BlackWhiteMode() = 0;
    /// <summary>
    /// Property specifies how a shape will render in black-and-white display mode..
    /// Write <see cref="Slides::BlackWhiteMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BlackWhiteMode(Aspose::Slides::BlackWhiteMode value) = 0;
    /// <summary>
    /// Returns parent GroupShape object if shape is grouped. Otherwise returns null.
    /// Read-only <see cref="Aspose::Slides::IGroupShape">IGroupShape</see>.
    /// </summary>
    /// <remarks>
    /// Property <see cref="IShape::get_IsGrouped"></see> determines whether the shape is grouped.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGroupShape> get_ParentGroup() = 0;
    
    /// <summary>
    /// Adds a new placeholder if there is no and sets placeholder properties to a specified one.
    /// </summary>
    /// <param name="placeholderToCopyFrom">Placeholder to copy content from.</param>
    /// <returns>New <see cref="Aspose::Slides::IPlaceholder">IPlaceholder</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPlaceholder> AddPlaceholder(System::SharedPtr<IPlaceholder> placeholderToCopyFrom) = 0;
    /// <summary>
    /// Defines that this shape isn't a placeholder.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemovePlaceholder() = 0;
    /// @deprecated Use GetImage method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns shape thumbnail.
    /// ShapeThumbnailBounds::Shape shape thumbnail bounds type is used by default.
    /// </summary>
    /// <returns>Shape thumbnail.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail() = 0;
    /// <summary>
    /// Returns shape thumbnail.
    /// ShapeThumbnailBounds::Shape shape thumbnail bounds type is used by default.
    /// </summary>
    /// <returns>Shape thumbnail.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage() = 0;
    /// @deprecated Use GetImage(ShapeThumbnailBounds bounds, float scaleX, float scaleY) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Returns shape thumbnail.
    /// </summary>
    /// <param name="bounds">Shape thumbnail bounds type.</param>
    /// <param name="scaleX">X scale</param>
    /// <param name="scaleY">Y scale</param>
    /// <returns>Shape thumbnail or null in case when ShapeThumbnailBounds::Appearance is used and a shape doesn't have visible elements.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetThumbnail(ShapeThumbnailBounds bounds, float scaleX, float scaleY) = 0;
    /// <summary>
    /// Returns shape thumbnail.
    /// </summary>
    /// <param name="bounds">Shape thumbnail bounds type.</param>
    /// <param name="scaleX">X scale</param>
    /// <param name="scaleY">Y scale</param>
    /// <returns>Shape thumbnail or null in case when ShapeThumbnailBounds::Appearance is used and a shape doesn't have visible elements.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetImage(ShapeThumbnailBounds bounds, float scaleX, float scaleY) = 0;
    /// <summary>
    /// Saves content of Shape as SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Saves content of Shape as SVG file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <param name="svgOptions">SVG generation options</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsSvg(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Export::ISVGOptions> svgOptions) = 0;
    /// <summary>
    /// Returns a basic placeholder shape (shape from the layout and/or master slide that the current shape is inherited from).
    /// <remarks>A null is returned if the current shape is not inherited.</remarks> 
    /// </summary>
    /// <example>
    /// <code>
    /// // get all (master/layout/slide) animated effects of the placeholder shape
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"sample.pptx");
    /// 
    /// System::SharedPtr<ISlide> slide = pres->get_Slide(0);
    /// System::SharedPtr<IShape> shape = slide->get_Shape(0);
    /// System::ArrayPtr<System::SharedPtr<IEffect>> shapeEffects = slide->get_Timeline()->get_MainSequence()->GetEffectsByShape(shape);
    /// 
    /// System::SharedPtr<IShape> layoutShape = shape->GetBasePlaceholder();
    /// System::ArrayPtr<System::SharedPtr<IEffect>> layoutShapeEffects = slide->get_LayoutSlide()->get_Timeline()->get_MainSequence()->GetEffectsByShape(layoutShape);
    /// 
    /// System::SharedPtr<IShape> masterShape = layoutShape->GetBasePlaceholder();
    /// System::ArrayPtr<System::SharedPtr<IEffect>> masterShapeEffects = slide->get_LayoutSlide()->get_MasterSlide()->get_Timeline()->get_MainSequence()->GetEffectsByShape(masterShape);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> GetBasePlaceholder() = 0;
    
};

} // namespace Slides
} // namespace Aspose


