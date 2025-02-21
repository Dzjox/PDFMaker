#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Field.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class FdfReader;
class WidgetAnnotation;
class XfdfReader;
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
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class FormExportImportUtils;
} // namespace ConvertHelpers
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class Form;
} // namespace Facades
namespace Forms
{
enum class BoxStyle;
class Form;
class RadioButtonField;
class RadioButtonOptionField;
} // namespace Forms
class Operator;
class Page;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class FormExportImportJsonTests;
} // namespace Annotations
class RegressionTests_v6_9;
} // namespace Tests
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
/// Class representing checkbox field
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CheckboxField : public Aspose::Pdf::Forms::Field
{
    typedef CheckboxField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Annotations::XfdfReader;
    friend class Aspose::Pdf::Annotations::FdfReader;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FormExportImportUtils;
    friend class Aspose::Pdf::Tests::Annotations::FormExportImportJsonTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    
public:

    /// <summary>
    /// Returns list of allowed states. 
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::String>> get_AllowedStates();
    /// <summary>
    /// Gets style of check box.
    /// </summary>
    ASPOSE_PDF_SHARED_API BoxStyle get_Style();
    /// <summary>
    /// Sets style of check box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Style(BoxStyle value);
    /// <summary>
    /// Gets current annotation appearance state.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ActiveState() override;
    /// <summary>
    /// Sets current annotation appearance state.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ActiveState(System::String value) override;
    /// <summary>
    /// Gets state of check box.  
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Checked();
    /// <summary>
    /// Sets state of check box.  
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Checked(bool value);
    /// <summary>
    /// Gets value of check box field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Sets value of check box field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value) override;
    /// <summary>
    /// Gets export value of CheckBox field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ExportValue();
    /// <summary>
    /// Sets export value of CheckBox field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExportValue(System::String value);
    
    /// <summary>
    /// Constructor for CheckboxField class.
    /// </summary>
    /// <param name="page">Page where check box will be placed.</param>
    /// <param name="rect">Position and size of the check box.</param>
    ASPOSE_PDF_SHARED_API CheckboxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for CheckboxField class.
    /// </summary>
    /// <param name="doc">Document where will be new field created.</param>
    /// <param name="rect">Rectangle where new field will be created.</param>
    ASPOSE_PDF_SHARED_API CheckboxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    /// @deprecated For full field functionality, a binding to the document is required - use CheckboxField(Document doc)
    /// <summary>
    /// Create instance of CheckboxField.
    /// </summary>
    ASPOSE_PDF_SHARED_API CheckboxField();
    /// <summary>
    /// Constructor to use with Generator.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    ASPOSE_PDF_SHARED_API CheckboxField(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Clone the checkbox.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Adds new checkbox into a checkbox group, in which at most one of the checkboxes may be checked at any time.
    /// The new checkbox is added to the bottom of the group.
    /// </summary>
    /// <param name="optionName">Value of the option represented by added checkbox.</param>
    ASPOSE_PDF_SHARED_API void AddOption(System::String optionName);
    /// <summary>
    /// Adds new checkbox into a checkbox group, in which at most one of the checkboxes may be checked at any time.
    /// </summary>
    /// <param name="optionName">Value of the option represented by added checkbox.</param>
    /// <param name="rect">Rectangle of the added checkbox.</param>
    ASPOSE_PDF_SHARED_API void AddOption(System::String optionName, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Adds new checkbox into a checkbox group, in which at most one of the checkboxes may be checked at any time.
    /// </summary>
    /// <param name="optionName">Value of the option represented by added checkbox.</param>
    /// <param name="page">Number of the page where the added checkbox should be placed.</param>
    /// <param name="rect">Rectangle of the added checkbox on the page.</param>
    ASPOSE_PDF_SHARED_API void AddOption(System::String optionName, int32_t page, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Returns name of state which is "Checked" state of checkbox. This is "Yes" if presents 
    /// or any other  value other then "Off" and "No";
    /// </summary>
    /// <returns></returns>
    System::String get_OnState();
    /// <summary>
    /// Returns name of non-checked state; This is "no" if presents or "Off" in common state.
    /// </summary>
    /// <returns></returns>
    System::String get_OffState();
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    System::String get_NormalCaption();
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    void set_NormalCaption(System::String value);
    
    static BoxStyle GetStyle(System::SharedPtr<XForm> xform, BoxStyle defaultStyle);
    static void SetStyle(System::SharedPtr<XForm> xform, BoxStyle style);
    void ResetAllowedStates();
    
    CheckboxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CheckboxField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">Aspose.Pdf.page object.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Creates sequense of operators for drawing appearance of the check box. 
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation for which appearance will be generated</param>
    /// <returns>List of the operators.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    static System::String TranslateStyle(BoxStyle style);
    static BoxStyle TranslateCaption(System::String caption);
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    /// <summary>
    /// Adds new checkbox into a checkbox group, in which at most one of the checkboxes may be checked at any time.
    /// </summary>
    /// <param name="optionName">Value of the option represented by added checkbox.</param>
    /// <param name="page">Page where the added checkbox should be placed.</param>
    /// <param name="rect">Rectangle of the added checkbox on the page.</param>
    void AddOption(System::String optionName, System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Determines whether the CheckboxField has exactly one option.
    /// </summary>
    /// <returns>Returns true if the CheckboxField only one option; otherwise, returns false.</returns>
    bool HasSingleOption();
    
    virtual ASPOSE_PDF_SHARED_API ~CheckboxField();
    
private:

    static const double DefaultItemHeight;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _allowedStates;
    static System::String fontName;
    
    System::String ExtractStateName(System::String stateKey);
    BoxStyle GetStyle(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    System::String GetNormalCaption(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    System::SharedPtr<XForm> CreateItemXForm(bool check, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    bool SetActiveState(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::String value, bool throwExcpetion);
    static System::String FindExportValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> ap);
    static void ReplaceExportValue(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> annotation, System::String newValue);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


