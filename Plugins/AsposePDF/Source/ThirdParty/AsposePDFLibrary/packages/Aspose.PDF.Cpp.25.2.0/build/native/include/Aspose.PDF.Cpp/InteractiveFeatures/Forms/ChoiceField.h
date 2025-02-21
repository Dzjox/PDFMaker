#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Field.h"
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
} // namespace Data
} // namespace Engine
namespace Forms
{
class ComboBoxField;
class ListBoxField;
class OptionCollection;
class RadioButtonField;
} // namespace Forms
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents base class for choice fields.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ChoiceField : public Aspose::Pdf::Forms::Field
{
    typedef ChoiceField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    
public:

    /// <summary>
    /// Gets commit on selection change flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CommitImmediately();
    /// <summary>
    /// Sets commit on selection change flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CommitImmediately(bool value);
    /// <summary>
    /// Gets multiselection flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_MultiSelect();
    /// <summary>
    /// Sets multiselection flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MultiSelect(bool value);
    /// <summary>
    /// Gets index of selected option. This property allows to change selection. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API int32_t get_Selected();
    /// <summary>
    /// Sets index of selected option. This property allows to change selection. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Selected(int32_t value);
    /// <summary>
    /// Gets array of selected items. For multiselect list array contains more then one item. For single selection list it contains single item.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_SelectedItems();
    /// <summary>
    /// Sets array of selected items. For multiselect list array contains more then one item. For single selection list it contains single item.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_SelectedItems(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets collection of choice options.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<OptionCollection> get_Options();
    /// <summary>
    /// Gets value of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Sets value of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value) override;
    
    /// <summary>
    /// Constructor for ChoiceField.
    /// </summary>
    /// <param name="page">Page where field is situated.</param>
    /// <param name="rect">Rectangle of the field.</param>
    ASPOSE_PDF_SHARED_API ChoiceField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Creates choice field (for Generator)
    /// </summary>
    /// <param name="doc">Document where choice field will be created.</param>
    ASPOSE_PDF_SHARED_API ChoiceField(System::SharedPtr<Document> doc);
    /// <summary>
    /// Constructor for ChoiceField.
    /// </summary>
    /// <param name="doc">Document where field will be created. </param>
    /// <param name="rect">Rectangle of the field. </param>
    ASPOSE_PDF_SHARED_API ChoiceField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Adds new option with specified name. 
    /// </summary>
    /// <param name="optionName">Name of the new option.</param>
    virtual ASPOSE_PDF_SHARED_API void AddOption(System::String optionName);
    /// <summary>
    /// Adds new option with specified export value and name.
    /// </summary>
    /// <param name="export">Export value.</param>
    /// <param name="name">Name of the new option.</param>
    virtual ASPOSE_PDF_SHARED_API void AddOption(System::String export_, System::String name);
    /// <summary>
    /// Deletes option by its name.
    /// </summary>
    /// <param name="optionName">Name of the option which must be deleted.</param>
    virtual ASPOSE_PDF_SHARED_API void DeleteOption(System::String optionName);
    
protected:

    static const ASPOSE_PDF_SHARED_API int32_t ValueNotSelected;
    
    /// <summary>
    /// Replaces the available options with those whose names are given in the options parameter.
    /// </summary>
    /// <param name="options">List of names for new options.</param>
    void SetOptions(System::SharedPtr<System::Collections::Generic::List<System::String>> options);
    
    ChoiceField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    ChoiceField();
    
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ChoiceField();
    
private:

    System::SharedPtr<OptionCollection> _options;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


