#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
namespace Comparison
{
class HtmlDiffOutputGenerator;
class PdfOutputGenerator;
} // namespace Comparison
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a text style class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextStyle : public System::Object
{
    typedef TextStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Comparison::HtmlDiffOutputGenerator;
    friend class Aspose::Pdf::Comparison::PdfOutputGenerator;
    
public:

    /// <summary>
    /// Gets and sets the text color.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Color>& get_Color() const;
    /// <summary>
    /// Gets and sets the text color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets and sets the background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Color>& get_BackgroundColor() const;
    /// <summary>
    /// Gets and sets the background color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Aspose::Pdf::Color> value);
    
protected:

    /// <summary>
    /// Converts the style to ccs style format.
    /// </summary>
    /// <returns></returns>
    System::String ToCssStyle();
    
private:

    System::SharedPtr<Aspose::Pdf::Color> pr_Color;
    System::SharedPtr<Aspose::Pdf::Color> pr_BackgroundColor;
    
};

/// <summary>
/// Represents a style set class for marking text changes.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OutputTextStyle : public System::Object
{
    typedef OutputTextStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Get and set a text style for inserted text.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<TextStyle>& get_InsertedStyle() const;
    /// <summary>
    /// Get and set a text style for inserted text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InsertedStyle(System::SharedPtr<TextStyle> value);
    /// <summary>
    /// Get and set a text style for deleted text.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<TextStyle>& get_DeletedStyle() const;
    /// <summary>
    /// Get and set a text style for deleted text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DeletedStyle(System::SharedPtr<TextStyle> value);
    /// <summary>
    /// Get and set a text style for non changed text.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<TextStyle>& get_EqualStyle() const;
    /// <summary>
    /// Get and set a text style for non changed text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EqualStyle(System::SharedPtr<TextStyle> value);
    /// <summary>
    /// Get or set text-decoration: line-through style for the delete operation.
    /// Default value is <c>False</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_StrikethroughDeleted() const;
    /// <summary>
    /// Get or set text-decoration: line-through style for the delete operation.
    /// Default value is <c>False</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StrikethroughDeleted(bool value);
    
    ASPOSE_PDF_SHARED_API OutputTextStyle();
    
private:

    System::SharedPtr<TextStyle> pr_InsertedStyle;
    System::SharedPtr<TextStyle> pr_DeletedStyle;
    System::SharedPtr<TextStyle> pr_EqualStyle;
    bool pr_StrikethroughDeleted;
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


