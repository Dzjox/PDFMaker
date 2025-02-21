#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <drawing/rectangle.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
enum class EncodingType;
enum class FontStyle;
class Form;
class FormEditor;
} // namespace Facades
namespace Forms
{
enum class BoxStyle;
} // namespace Forms
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for representing field properties.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FormFieldFacade final : public System::Object
{
    typedef FormFieldFacade ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    
public:

    /// <summary>
    /// The color of a field border. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_BorderColor() const;
    /// <summary>
    /// The color of a field border. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BorderColor(System::Drawing::Color value);
    /// <summary>
    /// The style of a field border.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BorderStyle() const;
    /// <summary>
    /// The style of a field border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BorderStyle(int32_t value);
    /// <summary>
    /// The width of a field border.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_BorderWidth() const;
    /// <summary>
    /// The width of a field border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BorderWidth(float value);
    /// <summary>
    /// The font type of a field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API FontStyle get_Font() const;
    /// <summary>
    /// The font type of a field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Font(FontStyle value);
    /// <summary>
    /// Gets name of the font when this is non-standart (other then 14 standard fonts).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CustomFont() const;
    /// <summary>
    /// Sets name of the font when this is non-standart (other then 14 standard fonts).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomFont(System::String value);
    /// <summary>
    /// The size of a field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_FontSize() const;
    /// <summary>
    /// The size of a field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontSize(float value);
    /// <summary>
    /// The color of the field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_TextColor() const;
    /// <summary>
    /// The color of the field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextColor(System::Drawing::Color value);
    /// <summary>
    /// The text encoding type of the field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API EncodingType get_TextEncoding() const;
    /// <summary>
    /// The text encoding type of the field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextEncoding(EncodingType value);
    /// <summary>
    /// The alignment of a field text, default is left alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Alignment() const;
    /// <summary>
    /// The alignment of a field text, default is left alignment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(int32_t value);
    /// <summary>
    /// The rotation of a field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Rotation() const;
    /// <summary>
    /// The rotation of a field text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotation(int32_t value);
    /// <summary>
    /// The normal caption of form field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Caption() const;
    /// <summary>
    /// The normal caption of form field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Caption(System::String value);
    /// <summary>
    /// The style of check box or radio box field, defined by FormFieldFacade.CheckBoxStyle*.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ButtonStyle() const;
    /// <summary>
    /// The style of check box or radio box field, defined by FormFieldFacade.CheckBoxStyle*.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ButtonStyle(int32_t value);
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Rectangle get_Box() const;
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Box(System::Drawing::Rectangle value);
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<float> get_Position() const;
    /// <summary>
    /// A rectangle object holding field's location.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(System::ArrayPtr<float> value);
    /// <summary>
    /// An integer value holding the number of page on which field locates.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
    /// <summary>
    /// An integer value holding the number of page on which field locates.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNumber(int32_t value);
    /// <summary>
    /// An array of string, each representing an option of a combo box/list/radio box field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_Items() const;
    /// <summary>
    /// An array of string, each representing an option of a combo box/list/radio box field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Items(System::ArrayPtr<System::String> value);
    /// <summary> The options for adding a list/combo/radio box</summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems() const;
    /// <summary> The options for adding a list/combo/radio box</summary>
    ASPOSE_PDF_SHARED_API void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    /// <summary>
    /// The color of a field background, default is white.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_BackgroundColor() const;
    /// <summary>
    /// The color of a field background, default is white.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::Drawing::Color value);
    
    /// <summary>
    /// Reset all visual attribtues to empty value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Reset();
    
    ASPOSE_PDF_SHARED_API FormFieldFacade();
    
protected:

    bool _customFontSpecified;
    System::String _customFont;
    
    void setFontStyle(System::String fontName);
    /// <summary>
    /// Converts font name into fotn style name.
    /// </summary>
    /// <param name="fontName"></param>
    /// <returns></returns>
    FontStyle shortNameToStyle(System::String fontName);
    Aspose::Pdf::Forms::BoxStyle translateCheckBoxStyle();
    
private:

    System::Drawing::Color borderColor;
    System::Drawing::Color backgroundColor;
    int32_t borderStyle;
    float borderWidth;
    FontStyle fontStyle;
    float fontSize;
    System::Drawing::Color textColor;
    EncodingType encodingType;
    int32_t alignment;
    int32_t rotation;
    System::String caption;
    int32_t buttonStyle;
    System::Drawing::Rectangle box;
    System::ArrayPtr<float> position;
    int32_t pageNumber;
    System::ArrayPtr<System::String> items;
    System::ArrayPtr<System::ArrayPtr<System::String>> exportItems;
    
public:

    /// <summary>
    /// Undefined border width.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API float BorderWidthUndefined = -1;
    /// <summary>
    /// Defines a thin border width.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API float BorderWidthThin = 1;
    /// <summary>
    /// Defines a medium border width.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API float BorderWidthMedium = 2;
    /// <summary>
    /// Defines a thick border width.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API float BorderWidthThick = 3;
    /// <summary>
    /// Defines a solid border style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BorderStyleSolid = 0;
    /// <summary>
    /// Defines a dashed border style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BorderStyleDashed = 1;
    /// <summary>
    /// Defines a beveled border style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BorderStyleBeveled = 2;
    /// <summary>
    /// Defines an inseted border style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BorderStyleInset = 3;
    /// <summary>
    /// Defines an underlined border style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BorderStyleUnderline = 4;
    /// <summary>
    /// Undefined border style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BorderStyleUndefined = 5;
    /// <summary>
    /// Defines aglignment to left style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignLeft = 0;
    /// <summary>
    /// Defines aglignment to center style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignCenter = 1;
    /// <summary>
    /// Defines aglignment to right style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignRight = 2;
    /// <summary>
    /// Undefined aglignment style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignUndefined = 3;
    /// <summary>
    /// Defines text justification alignment style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignJustified = 4;
    /// <summary>
    /// Defines vertical aglignment as top style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignTop = 0;
    /// <summary>
    /// Defines vertical aglignment as middle style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignMiddle = 1;
    /// <summary>
    /// Defines vertical aglignment as bottom style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t AlignBottom = 2;
    /// <summary>
    /// Defines a circle check box style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleCircle = u'l';
    /// <summary>
    /// Defines the shape of a check box field when it checked.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleCheck = u'4';
    /// <summary>
    /// Defines a cross check box style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleCross = u'8';
    /// <summary>
    /// Defines a diamond check box style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleDiamond = u'u';
    /// <summary>
    /// Defines a star check box style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleStar = u'H';
    /// <summary>
    /// Defines a square check box style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleSquare = u'n';
    /// <summary>
    /// Defines an undefined check box style.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CheckBoxStyleUndefined = u' ';
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


