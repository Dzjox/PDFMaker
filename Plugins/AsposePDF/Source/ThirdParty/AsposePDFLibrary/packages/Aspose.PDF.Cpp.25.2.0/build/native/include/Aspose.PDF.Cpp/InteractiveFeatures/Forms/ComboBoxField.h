#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/ChoiceField.h"
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
class IPdfString;
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
class XfaToPdfConverter;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class representing Combobox field of the form.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ComboBoxField : public Aspose::Pdf::Forms::ChoiceField
{
    typedef ComboBoxField ThisType;
    typedef Aspose::Pdf::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::XfaToPdfConverter;
    
public:

    /// <summary>
    /// Gets editable status of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Editable();
    /// <summary>
    /// Sets editable status of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Editable(bool value);
    /// <summary>
    /// Gets spellchaeck activiity status.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SpellCheck();
    /// <summary>
    /// Sets spellchaeck activiity status.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SpellCheck(bool value);
    
    /// <summary>
    /// Constructor for ComboBoxField to be used in Generator. 
    /// </summary>
    ASPOSE_PDF_SHARED_API ComboBoxField();
    /// <summary>
    /// Creates CombBox field to work with Generator.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    ASPOSE_PDF_SHARED_API ComboBoxField(System::SharedPtr<Document> doc);
    /// <summary>
    /// Constructor for Combobox Field. 
    /// </summary>
    /// <param name="page">Page where field will be placed. </param>
    /// <param name="rect">Rectangle which defines size and position of the field on the page.</param>
    ASPOSE_PDF_SHARED_API ComboBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for Combobox field. 
    /// </summary>
    /// <param name="doc">Document where field should be created.</param>
    /// <param name="rect">Rectangle which defines size and position of the field. </param>
    ASPOSE_PDF_SHARED_API ComboBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    bool get_EnforceHorizontalAlignment() const;
    void set_EnforceHorizontalAlignment(bool value);
    
    ComboBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ComboBoxField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page object.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Returns sequence of the operators for drawing of the combo box.
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation where appearance will be added.</param>
    /// <returns>Listof appearance operators.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ComboBoxField();
    
private:

    bool pr_EnforceHorizontalAlignment;
    
    System::String Reverse(System::String text);
    void SetFont(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::String text, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString>& encodedText, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont>& selectedFont, System::String& fontResourceKey);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


