﻿#pragma once
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
namespace Data
{
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
namespace Text
{
class Font;
} // namespace Text
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
/// Class represents ListBox field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ListBoxField final : public Aspose::Pdf::Forms::ChoiceField
{
    typedef ListBoxField ThisType;
    typedef Aspose::Pdf::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets index of the top visible element of the list.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_TopIndex();
    /// <summary>
    /// Sets index of the top visible element of the list.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TopIndex(int32_t value);
    /// <summary>
    /// Sets index of the selected item. Items are numbered from 1.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Selected(int32_t value) override;
    /// <summary>
    /// Sets array of the selected items in the multiselect list. For single-select list returns array with single item.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SelectedItems(System::ArrayPtr<int32_t> value) override;
    
    /// <summary>
    /// Constructor for ListBoxField to be used in Generator.
    /// </summary>
    ASPOSE_PDF_SHARED_API ListBoxField();
    /// <summary>
    /// Creates new ListBox field.
    /// </summary>
    /// <param name="page">Page where list box will be placed.</param>
    /// <param name="rect">Rectangle where list box will be placed on the page.</param>
    ASPOSE_PDF_SHARED_API ListBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for ListBox field.
    /// </summary>
    /// <param name="doc">Document to which this field will belong.</param>
    /// <param name="rect">Rectangle where list box will be placed. </param>
    ASPOSE_PDF_SHARED_API ListBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Constructor for ListBoxField class.
    /// </summary>
    /// <param name="annotation">List box annotation.</param>
    /// <param name="document">Document which contains list box.</param>
    ListBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ListBoxField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer) override;
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    /// <summary>
    /// Returns sequence of operators which are appearance of ListBox.
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation for which appearance will be generated.</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy() override;
    
    virtual ASPOSE_PDF_SHARED_API ~ListBoxField();
    
private:

    double GetTextWidth(System::String text, System::SharedPtr<Aspose::Pdf::Text::Font> font, double fontSize);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


