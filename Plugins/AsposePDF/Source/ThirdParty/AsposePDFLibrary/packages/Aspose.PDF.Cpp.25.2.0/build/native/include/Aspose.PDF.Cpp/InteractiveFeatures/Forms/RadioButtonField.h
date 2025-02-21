#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/ChoiceField.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
namespace JavascriptExtensions
{
class ThisObjectExtension;
} // namespace JavascriptExtensions
} // namespace Annotations
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
enum class BoxShape;
enum class BoxStyle;
class Field;
class OptionCollection;
class RadioButtonOptionField;
} // namespace Forms
class Operator;
class Page;
class Point;
class Rectangle;
namespace Tests
{
class RegressionTests_v10_5;
class RegressionTests_v23_08;
class RegressionTests_v7_9;
class RegressionTests_v9_6;
} // namespace Tests
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
/// Class representing radio button field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RadioButtonField final : public Aspose::Pdf::Forms::ChoiceField
{
    typedef RadioButtonField ThisType;
    typedef Aspose::Pdf::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Annotations::JavascriptExtensions::ThisObjectExtension;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    
public:

    /// <summary>
    /// Style of field box.
    /// </summary>
    ASPOSE_PDF_SHARED_API BoxStyle get_Style();
    /// <summary>
    /// Style of field box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Style(BoxStyle value);
    /// <summary>
    /// Gets index of selected item. Numbering of items is started from 1.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Selected() override;
    /// <summary>
    /// Sets index of selected item. Numbering of items is started from 1.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Selected(int32_t value) override;
    /// <summary>
    /// Gets collection of options of the radio button.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OptionCollection> get_Options() override;
    /// <summary>
    /// Get or sets the flag that allows the radiobutton to have no selected value. If <see langword="true"></see>, exactly one
    /// radio button shall be selected at all times; selecting the currently selected button has no effect. If <see langword="false"></see>,
    /// clicking the selected button deselects it, leaving no button selected.
    /// </summary>
    /// <remarks>Some PDF readers (including Adobe Acrobat) may ignore the <see langword="false"></see> state of the flag.</remarks>
    ASPOSE_PDF_SHARED_API bool get_NoToggleToOff();
    /// <summary>
    /// Get or sets the flag that allows the radiobutton to have no selected value. If <see langword="true"></see>, exactly one
    /// radio button shall be selected at all times; selecting the currently selected button has no effect. If <see langword="false"></see>,
    /// clicking the selected button deselects it, leaving no button selected.
    /// </summary>
    /// <remarks>Some PDF readers (including Adobe Acrobat) may ignore the <see langword="false"></see> state of the flag.</remarks>
    ASPOSE_PDF_SHARED_API void set_NoToggleToOff(bool value);
    /// <summary>
    /// Gets index of page which contains this RadioButton field.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageIndex() override;
    /// <summary>
    /// Gets value of field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Sets value of field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value) override;
    
    /// <summary>
    /// Constructor for RadiouttonField
    /// </summary>
    /// <param name="page">Page where radio button will be placed.</param>
    ASPOSE_PDF_SHARED_API RadioButtonField(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Constructor for RadioButtonField.
    /// </summary>
    /// <param name="doc">Document where radio button will be created.</param>
    ASPOSE_PDF_SHARED_API RadioButtonField(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Adds new option field to RadioButton field
    /// </summary>
    /// <param name="newItem">Item which should be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<RadioButtonOptionField>& newItem);
    /// <summary>
    /// Add  to radio button option with specifed rectangle. 
    /// </summary>
    /// <param name="optionName">Name of new option.</param>
    /// <param name="rect">New item rectangle.</param>
    ASPOSE_PDF_SHARED_API void AddOption(System::String optionName, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Add option to radion button. 
    /// </summary>
    /// <param name="optionName">Name of the option which will be added.</param>
    ASPOSE_PDF_SHARED_API void AddOption(System::String optionName) override;
    /// <summary>
    /// Move all subitems of radio button to specified positins on the page. 
    /// </summary>
    /// <param name="point">Sets position of RadioButton field annotations.</param>
    ASPOSE_PDF_SHARED_API void SetPosition(System::SharedPtr<Point> point) override;
    
protected:

    /// <summary>
    /// Set shape of radio button items.
    /// </summary>
    BoxShape get_Shape();
    /// <summary>
    /// Set shape of radio button items.
    /// </summary>
    void set_Shape(BoxShape value);
    bool get_ResetActiveState() const;
    void set_ResetActiveState(bool value);
    
    /// <summary>
    /// Returns true if checkbox value is equal to specified value.
    /// </summary>
    /// <param name="value">Value to compare.</param>
    /// <returns>True if checkbox value equals to specified value.</returns>
    ASPOSE_PDF_SHARED_API bool IsEqualTo(System::String value) override;
    ASPOSE_PDF_SHARED_API System::String GetConformXFAValue(System::String value) override;
    
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RadioButtonField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    
    RadioButtonField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RadioButtonField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect));
    
    RadioButtonField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RadioButtonField, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect));
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API void UpdateAppearances() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~RadioButtonField();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::String>> _validStates;
    bool _resetActiveState;
    int32_t _entryCount;
    
    System::SharedPtr<System::Collections::Generic::List<System::String>> GetValidStates();
    int32_t GetStateIndex();
    void SetStateIndex(int32_t index);
    void circle(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> op, double x, double y, double r);
    System::SharedPtr<Point> getLowestLeftPoint();
    void FixField();
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


