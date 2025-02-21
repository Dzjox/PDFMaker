#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/TextBoxField.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Text Field with specified valid chars
/// </summary>
/// <seealso cref="Aspose::Pdf::Forms::TextBoxField" ></seealso>
class ASPOSE_PDF_SHARED_CLASS NumberField : public Aspose::Pdf::Forms::TextBoxField
{
    typedef NumberField ThisType;
    typedef Aspose::Pdf::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the allowed chars.
    /// </summary>
    /// <value>
    /// The allowed chars string. 0123456789 by default
    /// </value>
    ASPOSE_PDF_SHARED_API System::String get_AllowedChars() const;
    /// <summary>
    /// Sets the allowed chars.
    /// </summary>
    /// <value>
    /// The allowed chars string. 0123456789 by default
    /// </value>
    ASPOSE_PDF_SHARED_API void set_AllowedChars(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="NumberField"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API NumberField();
    /// <summary>
    /// Initializes a new instance of the <see cref="NumberField"></see> class.
    /// </summary>
    /// <param name="page">Page where text field is placed.</param>
    /// <param name="rect">Rectangle where the field will be placed on the page.</param>
    ASPOSE_PDF_SHARED_API NumberField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes a new instance of the <see cref="NumberField"></see> class.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    /// <param name="rect">Rectangle of the field.</param>
    ASPOSE_PDF_SHARED_API NumberField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    virtual ASPOSE_PDF_SHARED_API ~NumberField();
    
private:

    System::String _allowedChars;
    
    /// <summary>
    /// Initializes JS action.
    /// </summary>
    void InitAction();
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


