#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/TextBoxField.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class Image;
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class DateTime;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Date field with calendar view.
/// </summary>
/// <seealso cref="Aspose::Pdf::Forms::TextBoxField" ></seealso>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS DateField : public Aspose::Pdf::Forms::TextBoxField
{
    typedef DateField ThisType;
    typedef Aspose::Pdf::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets Date.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_DateTimeValue();
    /// <summary>
    /// Sets Date.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DateTimeValue(System::DateTime value);
    /// <summary>
    /// Gets the date format.
    /// </summary>
    /// <value>
    /// The date format. Default dd/MM/yyyy
    /// </value>
    ASPOSE_PDF_SHARED_API System::String get_DateFormat() const;
    /// <summary>
    /// Sets the date format.
    /// </summary>
    /// <value>
    /// The date format. Default dd/MM/yyyy
    /// </value>
    ASPOSE_PDF_SHARED_API void set_DateFormat(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="DateField"></see> 
    /// </summary>
    ASPOSE_PDF_SHARED_API DateField();
    /// <summary>
    /// Constructor which should be used with Generator.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    ASPOSE_PDF_SHARED_API DateField(System::SharedPtr<Document> doc);
    /// <summary>
    /// Initializes a new instance of the <see cref="DateField"></see> 
    /// </summary>
    /// <param name="page">Page needed for create.</param>
    /// <param name="rect">Rectangle where the text field will be placed on the page.</param>
    ASPOSE_PDF_SHARED_API DateField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    ///  Initializes a new instance of the <see cref="DateField"></see> 
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    /// <param name="rect">Rectangle of the field.</param>
    ASPOSE_PDF_SHARED_API DateField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Initializes the JS Action.
    /// </summary>
    /// <param name="page">The page.</param>
    ASPOSE_PDF_SHARED_API void Init(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Image adding denied for this field.
    /// </summary>
    /// <param name="image">The image.</param>
    /// <exception cref="System::InvalidOperationException"></exception>
    ASPOSE_PDF_SHARED_API void AddImage(System::SharedPtr<Image> image);
    
protected:

    virtual ASPOSE_PDF_SHARED_API ~DateField();
    
private:

    System::String _dateFormat;
    static const System::String jsCalendar;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


