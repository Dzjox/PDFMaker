#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Field.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Forms
{
enum class BoxShape;
enum class BoxStyle;
class ChoiceField;
class RadioButtonField;
} // namespace Forms
class Operator;
class Page;
class PageGenerator;
class Rectangle;
namespace Text
{
class TextFragment;
} // namespace Text
class XfaToPdfConverter;
class XForm;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represents item of RadioButton field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RadioButtonOptionField final : public Aspose::Pdf::Forms::Field
{
    typedef RadioButtonOptionField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::ChoiceField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::XfaToPdfConverter;
    
public:

    /// <summary>
    /// Gets name of the option.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OptionName();
    /// <summary>
    /// Sets name of the option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptionName(System::String value);
    /// <summary>
    /// Gets caption.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Caption() const;
    /// <summary>
    /// Sets caption.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Caption(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    /// <summary>
    /// Gets style of check box.
    /// </summary>
    ASPOSE_PDF_SHARED_API BoxStyle get_Style();
    /// <summary>
    /// Sets style of check box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Style(BoxStyle value);
    
    /// <summary>
    /// Create new RadioButtonOptionField instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API RadioButtonOptionField();
    /// <summary>
    /// Creates radiobutton in the specified recangle on specified page. 
    /// </summary>
    /// <param name="page">Page where RadioButton will be placed;</param>
    /// <param name="rect">Recangle of RadioButton.</param>
    ASPOSE_PDF_SHARED_API RadioButtonOptionField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    System::WeakPtr<RadioButtonField> owner;
    
    /// <summary>
    /// Shape of Radio Button border. May be circle or square. If this value set to Default, shape depends of box style (circle for circle style and square for others).
    /// This property is for internal use only.
    /// </summary>
    BoxShape get_Shape();
    /// <summary>
    /// Shape of Radio Button border. May be circle or square. If this value set to Default, shape depends of box style (circle for circle style and square for others).
    /// This property is for internal use only.
    /// </summary>
    void set_Shape(BoxShape value);
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    System::String get_NormalCaption();
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    void set_NormalCaption(System::String value);
    
    /// <summary>
    /// Initializes RadioButtonOptionField.
    /// </summary>
    /// <param name="annotation"></param>
    /// <param name="document"></param>
    RadioButtonOptionField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RadioButtonOptionField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API void AttachToPage(System::SharedPtr<Aspose::Pdf::Page> page) override;
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Creates sequence of the operators to show radio button option. 
    /// </summary>
    /// <param name="parameters">Appearance parameters (state of element).</param>
    /// <param name="annotation">Annotation where appearance is created.</param>
    /// <returns>Operator list of the apperance operators.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    void UnregisterObjects();
    System::SharedPtr<XForm> createXForm(bool check, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    void setOptionName(System::String value);
    System::String getOptionName();
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~RadioButtonOptionField();
    
private:

    System::String optionName;
    static System::String fontName;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> caption;
    BoxShape _shape;
    
    void circle(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> op, double x, double y, double r);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircularFrame(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::SharedPtr<Rectangle> rect, double r);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


