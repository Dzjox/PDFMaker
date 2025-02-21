#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Field.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsToPdfConverter;
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
class FormEditor;
} // namespace Facades
namespace Forms
{
enum class IconCaptionPosition;
class IconFit;
} // namespace Forms
class Operator;
class Page;
class Rectangle;
namespace Tests
{
class RegressionTests_v8_5;
} // namespace Tests
class XForm;
class XImageAddingParams;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
class Image;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represnets push button field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ButtonField : public Aspose::Pdf::Forms::Field
{
    typedef ButtonField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_5;
    
public:

    /// <summary>
    /// Gets normal caption.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_NormalCaption();
    /// <summary>
    /// Sets normal caption.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NormalCaption(System::String value);
    /// <summary>
    /// Gets rollover caption of button which shall be displayed when the user rolls the cursor 
    /// into its active area without pressing the mouse button.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_RolloverCaption();
    /// <summary>
    /// Sets rollover caption of button which shall be displayed when the user rolls the cursor 
    /// into its active area without pressing the mouse button.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RolloverCaption(System::String value);
    /// <summary>
    /// Gets alternate caption of the button which shall be displayed 
    /// when the mouse button is pressed within its active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AlternateCaption();
    /// <summary>
    /// Sets alternate caption of the button which shall be displayed 
    /// when the mouse button is pressed within its active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlternateCaption(System::String value);
    /// <summary>
    /// Gets normal icon of the button which shall be displayed when it is not interacting with the user.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_NormalIcon();
    /// <summary>
    /// Sets normal icon of the button which shall be displayed when it is not interacting with the user.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NormalIcon(System::SharedPtr<XForm> value);
    /// <summary>
    /// Gets rollover icon of the button which shall be displayed when the user 
    /// rolls the cursor into its active area without pressing the mouse button.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_RolloverIcon();
    /// <summary>
    /// Sets rollover icon of the button which shall be displayed when the user 
    /// rolls the cursor into its active area without pressing the mouse button.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RolloverIcon(System::SharedPtr<XForm> value);
    /// <summary>
    /// Gets alternate icon which shall be displayed when the mouse button is pressed within its active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_AlternateIcon();
    /// <summary>
    /// Sets alternate icon which shall be displayed when the mouse button is pressed within its active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlternateIcon(System::SharedPtr<XForm> value);
    /// <summary>
    /// Gets icon fit object specifying how the widget annotation's icon shall be displayed within its annotation rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Forms::IconFit> get_IconFit();
    /// <summary>
    /// Gets icon caption position.
    /// </summary>
    /// 
    ASPOSE_PDF_SHARED_API IconCaptionPosition get_ICPosition();
    /// <summary>
    /// Sets icon caption position.
    /// </summary>
    /// 
    ASPOSE_PDF_SHARED_API void set_ICPosition(IconCaptionPosition value);
    
    /// <summary>
    /// Button field constructor for Generator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API ButtonField();
    
    /// <summary>
    /// Adds image into the field resources and draws it.
    /// </summary>
    /// <param name="image">
    /// Image ot add into text field.
    /// </param>
    ASPOSE_PDF_SHARED_API void AddImage(System::SharedPtr<System::Drawing::Image> image);
    
    /// <summary>
    /// ButtonField constructor.
    /// </summary>
    /// <param name="page">Page where button will be placed.</param>
    /// <param name="rect">Rectangle where button is placed on the page.</param>
    ASPOSE_PDF_SHARED_API ButtonField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// ButtonField constructore. 
    /// </summary>
    /// <param name="doc">Docuemtn where new field will be created.</param>
    /// <param name="rect">Rectangle hwere button is placed on the page. </param>
    ASPOSE_PDF_SHARED_API ButtonField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Constructor for ButtonField class
    /// </summary>
    /// <param name="annotation">Annotation object which describes button.</param>
    /// <param name="document">Document which owns button.</param>
    ButtonField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ButtonField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    void AddImage(System::SharedPtr<System::Drawing::Image> image, bool fillArea);
    void AddImage(System::SharedPtr<System::IO::Stream> imageStream, bool fillArea);
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page object.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Creates operators sequence for drawing of appearance of the button.
    /// </summary>
    /// <param name="parameters">Parameters of the appearance. </param>
    /// <param name="annotation">Annotation for which appearance is generated.</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ButtonField();
    
private:

    System::String getString(System::String entry);
    void setString(System::String entry, System::String value);
    System::SharedPtr<XForm> getIcon(System::String entry);
    void setIcon(System::SharedPtr<XForm> oldValue, System::String entry, System::SharedPtr<XForm> newValue);
    void updateXForm(System::String xform, System::String value);
    System::ArrayPtr<double> CalculateImagePosition(double width, double height);
    void AddImage(System::SharedPtr<XImageAddingParams> addingParams, int32_t imageWidth, int32_t imageheight, bool fillArea);
    IconCaptionPosition IntToIconCaptionPosition(int32_t ICPosition);
    System::Drawing::Color shadeColor(System::Drawing::Color src, double k);
    int32_t IconCaptionPositionToInt(IconCaptionPosition ICPosition);
    /// <summary>
    /// Returns button caption 
    /// </summary>
    /// <returns></returns>
    System::String getCaption();
    /// <summary>
    /// Add image to the button appearance
    /// </summary>
    /// <param name="appearance">Appearance where images will be added.</param>
    /// <param name="image">Image stream</param>
    /// <param name="position">Array with image position [x, y ,width, height]</param>
    void AddImageToAppearance(System::SharedPtr<XForm> appearance, System::SharedPtr<XImageAddingParams> image, System::ArrayPtr<double> position);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


