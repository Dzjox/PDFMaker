#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/color.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class FreeTextAnnotation;
class WidgetAnnotation;
} // namespace Annotations
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
class PageContentCommandProcessor;
} // namespace PageContent
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Forms
{
class ComboBoxField;
class Form;
class TextBoxField;
} // namespace Forms
class Operator;
namespace Tests
{
class RegressionTests_v9_6;
} // namespace Tests
namespace Text
{
class Font;
} // namespace Text
class TextBoxFieldXfa;
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

namespace Annotations {

/// <summary>
/// Describes default appearance of field (font, text size and color).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DefaultAppearance final : public System::Object
{
    typedef DefaultAppearance ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    
public:

    /// <summary>
    /// Gets font size in default apperance.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FontSize() const;
    /// <summary>
    /// Gets font size in default apperance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontSize(double value);
    /// <summary>
    /// Gets the color of text in the default appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_TextColor() const;
    /// <summary>
    /// Sets the color of text in the default appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextColor(System::Drawing::Color value);
    /// <summary>
    /// Gets font name in the default appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontName();
    /// <summary>
    /// Gets font name in the default appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontName(System::String value);
    /// <summary>
    /// Gets font name in the default appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontResourceName() const;
    /// <summary>
    /// Gets font name in the default appearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontResourceName(System::String value);
    /// <summary>
    /// Gets font specified as default for text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Font> get_Font() const;
    /// <summary>
    /// Gets the list of pdf operators which represent appearence. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text();
    
    /// <summary>
    /// Constructor of DefaultAppearance.
    /// </summary>
    ASPOSE_PDF_SHARED_API DefaultAppearance();
    /// <summary>
    /// Constructor of DefaultAppearance.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="textColor">Color of text.</param>
    ASPOSE_PDF_SHARED_API DefaultAppearance(System::String fontName, double fontSize, System::Drawing::Color textColor);
    /// <summary>
    /// Constructor of Default Appearance. Previously created font may be specified as default font. 
    /// </summary>
    /// <param name="font">Font which will be used as default.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="textColor">Color of text.</param>
    ASPOSE_PDF_SHARED_API DefaultAppearance(System::SharedPtr<Aspose::Pdf::Text::Font> font, double fontSize, System::Drawing::Color textColor);
    
protected:

    /// <summary>
    /// Gets the color of border in the default appearance.
    /// </summary>
    System::Drawing::Color get_BorderColor() const;
    /// <summary>
    /// Sets the color of border in the default appearance.
    /// </summary>
    void set_BorderColor(System::Drawing::Color value);
    
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DefaultAppearance, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict));
    
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> appearance);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DefaultAppearance, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> appearance));
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetProgram(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    
private:

    System::Drawing::Color _textColor;
    System::Drawing::Color _borderColor;
    double _fontSize;
    System::String _resourceName;
    System::String _fontName;
    System::SharedPtr<Aspose::Pdf::Text::Font> _font;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict;
    
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::PageContentCommandProcessor>& processor();
    void UpdateDict();
    void ReadAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> appearance);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators();
    System::String GetProgramText();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


