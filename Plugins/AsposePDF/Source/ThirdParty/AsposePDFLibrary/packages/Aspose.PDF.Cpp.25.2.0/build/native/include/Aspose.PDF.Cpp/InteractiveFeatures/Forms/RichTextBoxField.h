#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "InteractiveFeatures/Forms/TextModel.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/TextBoxField.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
enum class Justification;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Forms
{
class Field;
} // namespace Forms
class Operator;
class Page;
class Rectangle;
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
class String;
namespace Xml
{
class XmlDocument;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class describes rich text editor component.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RichTextBoxField final : public Aspose::Pdf::Forms::TextBoxField
{
    typedef RichTextBoxField ThisType;
    typedef Aspose::Pdf::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets default style string of the rich text field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Style();
    /// <summary>
    /// Sets default style string of the rich text field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Style(System::String value);
    /// <summary>
    /// Gets rich text value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_RichTextValue();
    /// <summary>
    /// Sets rich text value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RichTextValue(System::String value);
    /// <summary>
    /// Gets formatted rich text value with markup.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FormattedValue();
    /// <summary>
    /// Sets formatted rich text value with markup.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormattedValue(System::String value);
    /// <summary>
    /// Value of RichTextField.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Value of RichTextField.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value) override;
    /// <summary>
    /// Gets justification of the rich text box.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::Justification get_Justify();
    /// <summary>
    /// Sets justification of the rich text box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Justify(Aspose::Pdf::Annotations::Justification value);
    
    /// <summary>
    /// Constructor for Rich Text Box  field. 
    /// </summary>
    /// <param name="page">Page where field will be placed.</param>
    /// <param name="rect">Position of the field on the page.</param>
    ASPOSE_PDF_SHARED_API RichTextBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    
    RichTextBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RichTextBoxField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~RichTextBoxField();
    
private:

    double textPositionX;
    double textWidth;
    double textPositionY;
    double textStartPositionY;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> textOperators;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> graphicOperators;
    System::SharedPtr<TextModel> textModel;
    
    System::String ConvertBrs(System::String text);
    System::SharedPtr<System::Xml::XmlDocument> LoadXml(System::String text);
    System::String normalize(System::String s);
    void SetRichTextValue(System::String value);
    System::String GetInnerText(System::SharedPtr<System::Xml::XmlNode> node);
    System::String GetInnerText(System::String value);
    void Process(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void OutText(System::String text, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void ProcessBody(System::SharedPtr<System::Xml::XmlNode> body, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void ProcessParagraph(System::SharedPtr<System::Xml::XmlNode> paragraph, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void ProcessSpan(System::SharedPtr<System::Xml::XmlNode> paragraph, System::SharedPtr<TextModel::TextAttributes> textAttributes);
    void CopyDefaultFonts(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> fonts, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> defaultResources);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


