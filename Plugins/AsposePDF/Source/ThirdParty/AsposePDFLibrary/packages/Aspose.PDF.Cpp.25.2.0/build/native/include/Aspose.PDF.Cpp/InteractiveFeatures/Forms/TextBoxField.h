#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

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
namespace CommonData
{
namespace Text
{
namespace Fonts
{
class IPdfFont;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
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
class BarcodeField;
class ComboBoxField;
class FileSelectBoxField;
class PasswordBoxField;
class RichTextBoxField;
} // namespace Forms
class Operator;
class OperatorCollection;
class Page;
class Rectangle;
namespace Tests
{
namespace Facades
{
class DomFormTests;
} // namespace Facades
} // namespace Tests
class TextBoxFieldXfa;
enum class VerticalAlignment;
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
class Image;
} // namespace Drawing
namespace Text
{
class StringBuilder;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class representing text box field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextBoxField : public Aspose::Pdf::Forms::Field
{
    typedef TextBoxField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Forms::BarcodeField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::FileSelectBoxField;
    friend class Aspose::Pdf::Forms::PasswordBoxField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    
public:

    /// <summary>
    /// Gets multiline flag of the field. If Multiline is true field can contain multiple lines of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Multiline();
    /// <summary>
    /// Sets multiline flag of the field. If Multiline is true field can contain multiple lines of text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Multiline(bool value);
    /// <summary>
    /// Gets spellcheck flag for field. If true field shall be spell checked.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SpellCheck();
    /// <summary>
    /// Sets spellcheck flag for field. If true field shall be spell checked.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SpellCheck(bool value);
    /// <summary>
    /// Gets scrollable flag of field. If true field can be scrolled. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Scrollable();
    /// <summary>
    /// Sets scrollable flag of field. If true field can be scrolled. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Scrollable(bool value);
    /// <summary>
    /// Gets flag which indicates is field divided into spaced positions.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ForceCombs();
    /// <summary>
    /// Sets flag which indicates is field divided into spaced positions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ForceCombs(bool value);
    /// <summary>
    /// Gets maximum length of text in the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_MaxLen();
    /// <summary>
    /// Sets maximum length of text in the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MaxLen(int32_t value);
    /// <summary>
    /// Gets text vertical alignment for annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_TextVerticalAlignment() const;
    /// <summary>
    /// Sets text vertical alignment for annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextVerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets value of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Sets value of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value) override;
    
    /// <summary>
    /// Constructor which should be used with Generator.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    ASPOSE_PDF_SHARED_API TextBoxField(System::SharedPtr<Document> doc);
    /// @deprecated For full field functionality, a binding to the document is required - use TextBoxField(Document doc)
    /// <summary>
    /// Create instance of TextBoxField.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextBoxField();
    /// <summary>
    /// Constructor of TextBox field.
    /// </summary>
    /// <param name="page">Page where text field is placed.</param>
    /// <param name="rect">Rectangle where the text field will be placed on the page.</param>
    ASPOSE_PDF_SHARED_API TextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor of TextBox field.
    /// </summary>
    /// <param name="page">Page where text field is placed.</param>
    /// <param name="rects">Rectangles defining the placement of TextBoxField widget annotations on the page.</param>
    ASPOSE_PDF_SHARED_API TextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::ArrayPtr<System::SharedPtr<Rectangle>> rects);
    /// <summary>
    /// Constructor of TextBox field.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    /// <param name="rect">Rectangle of the field.</param>
    ASPOSE_PDF_SHARED_API TextBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Adds image into the field resources and draws it.
    /// </summary>
    /// <param name="image">
    /// Image to add into text field.
    /// </param>
    ASPOSE_PDF_SHARED_API void AddImage(System::SharedPtr<System::Drawing::Image> image);
    /// <summary>
    /// Adds barcode 128 into the field. 
    /// Field value will be changed onto the code and field become read only.
    /// </summary>
    /// <param name="code">
    /// The text to generate barcode 128.
    /// </param>
    ASPOSE_PDF_SHARED_API void AddBarcode(System::String code);
    
protected:

    bool get_Justification() const;
    void set_Justification(bool value);
    
    TextBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextBoxField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    /// <summary>
    /// Initializes field on the specified page. 
    /// </summary>
    /// <param name="page">Page where field is placed.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect) override;
    /// <summary>
    /// Returns true if appearance is implemented in this class. 
    /// </summary>
    /// <returns>true if createAppearance is implemented.</returns>
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Returns sequence of operators which displays curent state of this text field.
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation where appearance is created.</param>
    /// <returns>List of operators of text field appearance.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    static double GetDescent(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> selectedFont, double fontSize);
    static double GetAscent(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> selectedFont, double fontSize);
    virtual ASPOSE_PDF_SHARED_API double GetYOffset(double ty, double y, double lineHeight, double fontSize, double borderWidth, bool isMultiline);
    virtual ASPOSE_PDF_SHARED_API float GetVerticalOffset(int32_t linesNumber, float height, double& lineHeight);
    /// <summary>
    /// Remove only operators which show text. (marked by /Tx BMC .... EMC)
    /// </summary>
    /// <param name="appearance"></param>
    ASPOSE_PDF_SHARED_API void ClearAppearance(System::SharedPtr<OperatorCollection> appearance) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~TextBoxField();
    
private:

    int32_t maxLen;
    System::String previousValue;
    bool _justification;
    static const double TtfExtraLineHeight;
    static const double DefaultFontRatio;
    static const double MaxFontRatio;
    static const double FontSizeRatio;
    static const double TextGap;
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    
    int32_t getMaxLen(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annot);
    /// <summary>
    /// Returns width of text which is displayed usig specified font. 
    /// </summary>
    /// <param name="text">Text whose width is calcualted.</param>
    /// <param name="font">Font used to display the text.</param>
    /// <param name="fontSize">font size.</param>
    /// <returns></returns>
    double getTextWidth(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize);
    bool IsNewLine(System::String text, int32_t i);
    bool IsWords(System::String text);
    bool IsSpace(System::SharedPtr<System::Text::StringBuilder> s);
    System::SharedPtr<System::Collections::Generic::List<System::String>> BreakStringIntoWords(System::String text);
    System::SharedPtr<System::Collections::Generic::List<System::String>> splitStringByWords(System::SharedPtr<System::Collections::Generic::List<System::String>> words, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize, double width);
    System::String ReduceCrlf(System::String text);
    bool IsHieroglyphic(System::String s);
    System::SharedPtr<System::Collections::Generic::List<System::String>> splitString(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize, double width);
    bool IsTextSplitted(System::String text);
    double AdjustFontSize(System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double width, double height);
    double CalculateFontSize(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, System::String text, double rectWidth, double rectHeight);
    double CalculateFontSize(System::String text, double rectHeight, double defaultFontSize);
    void showCombs(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::String text, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> font, double fontSize);
    void CheckOnFormatECMAScript(System::String value);
    void AddImage(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annot, System::SharedPtr<System::Drawing::Image> image);
    void ValidateBalance(System::SharedPtr<OperatorCollection> ops);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


