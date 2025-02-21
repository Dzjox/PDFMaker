#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/weak_ptr.h>
#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationActionCollection;
class AnnotationCollection;
class AnnotationSelector;
enum class AnnotationType;
class DefaultAppearance;
enum class HighlightingMode;
class PdfAction;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Forms
{
class BarcodeField;
class ButtonField;
class CheckboxField;
class ChoiceOption;
class Field;
class Form;
class ListBoxField;
class TextBoxField;
} // namespace Forms
namespace InteractiveFeatures
{
namespace Forms
{
class WidgetWrapper;
} // namespace Forms
} // namespace InteractiveFeatures
class OperatorCollection;
class Page;
class PageCollection;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class AnnotationTests;
} // namespace Annotations
class RegressionTests_v22_07;
} // namespace Tests
namespace Text
{
class Font;
} // namespace Text
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing widget annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WidgetAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef WidgetAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Forms::BarcodeField;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ChoiceOption;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_07;
    
public:

    /// <summary>
    /// An action which shall be performed when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnActivated();
    /// <summary>
    /// An action which shall be performed when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnActivated(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets the annotation actions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AnnotationActionCollection> get_Actions() const;
    /// <summary>
    /// Annotation highlighting mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API HighlightingMode get_Highlighting();
    /// <summary>
    /// Annotation highlighting mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Highlighting(HighlightingMode value);
    /// <summary>
    /// Gets annotation parent.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Forms::Field> get_Parent();
    /// <summary>
    /// Gets default appearance of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> get_DefaultAppearance();
    /// <summary>
    /// Sets default appearance of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> value);
    /// <summary>
    /// Gets read only status of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ReadOnly();
    /// <summary>
    /// Sets read only status of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReadOnly(bool value);
    /// <summary>
    /// Gets required status of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Required();
    /// <summary>
    /// Sets required status of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Required(bool value);
    /// <summary>
    /// Gets exportable flag of the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Exportable();
    /// <summary>
    /// Sets exportable flag of the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Exportable(bool value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Accepts visitor.
    /// </summary>
    /// <param name="visitor">Visitor to be accepted.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Create annotation (used for Generator)
    /// </summary>
    /// <param name="doc">Document where annotation will be created.</param>
    ASPOSE_PDF_SHARED_API WidgetAnnotation(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Returns name of "checked" state according to existing state names. 
    /// </summary>
    /// <returns>The name of the "checked" state for this annotation.</returns>
    ASPOSE_PDF_SHARED_API System::String GetCheckedStateName();
    
protected:

    static const int32_t _ReadOnly;
    static const int32_t _Required;
    static const int32_t _NoExport;
    int32_t ff;
    
    /// <summary>
    /// Gets annotation parent.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Parent(System::SharedPtr<Aspose::Pdf::Forms::Field> value);
    /// <summary>
    /// Gets certified status of the field.
    /// </summary>
    bool get_IsCertified();
    
    /// <summary>
    /// Ititializes Widget annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">Document.</param>
    WidgetAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WidgetAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
    /// <summary>
    /// Creates new Widget annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    WidgetAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WidgetAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect));
    
    WidgetAnnotation(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WidgetAnnotation, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect));
    
    WidgetAnnotation();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WidgetAnnotation, CODEPORTING_ARGS());
    /// <summary>
    /// Initialize the annotation.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page object.</param>
    /// <param name="rect">The rectangle of the annotation.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect) override;
    static int32_t getFieldFlag(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> field);
    void setFieldFlag(int32_t bit, bool set);
    /// <summary>
    /// Creates normal appearance for annotation and fills matrix and rectangle for appearance.
    /// </summary>
    /// <param name="key">Appearance type (N/D)</param>
    /// <param name="annotation">Annotation where appearance should be changed.</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    /// <summary>
    /// Remove operators of old appearance. This may be overriden to remove only required part of appearance (e.g. TextBoxField)
    /// </summary>
    /// <param name="appearance"></param>
    ASPOSE_PDF_SHARED_API void ClearAppearance(System::SharedPtr<OperatorCollection> appearance) override;
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::Drawing::Color GetBackgroundColor() override;
    
    virtual ASPOSE_PDF_SHARED_API ~WidgetAnnotation();
    
private:

    System::SharedPtr<PdfAction> onActivated;
    System::SharedPtr<AnnotationActionCollection> actions;
    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> _defaultAppearance;
    System::WeakPtr<Aspose::Pdf::Forms::Field> _parent;
    
    /// <summary>
    /// Search required font in default resources, add the font if is not added yet.
    /// </summary>
    /// <param name="font"></param>
    /// <returns></returns>
    System::String FindFontInResources(System::SharedPtr<Aspose::Pdf::Text::Font> font);
    void cpp_set_parent_shared();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


