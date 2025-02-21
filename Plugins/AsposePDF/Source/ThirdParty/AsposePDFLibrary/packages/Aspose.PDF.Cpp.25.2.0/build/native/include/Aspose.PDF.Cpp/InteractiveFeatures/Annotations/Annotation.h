#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// using ImageFormat = Aspose.Pdf.Drawing.ImageFormat;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/nullable.h>
#include <system/enum_helpers.h>
#include <system/date_time.h>
#include <drawing/color.h>

#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationCollection;
enum class AnnotationFlags;
class AnnotationSelector;
enum class AnnotationType;
class AppearanceDictionary;
class Border;
class Characteristics;
class CircleAnnotation;
class ColorBarAnnotation;
class CornerPrinterMarkAnnotation;
class FixedPrint;
class FreeTextAnnotation;
class GenericAnnotation;
class HideAction;
class HighlightAnnotation;
class InkAnnotation;
namespace JavascriptExtensions
{
class FieldExtension;
} // namespace JavascriptExtensions
class LineAnnotation;
class LinkAnnotation;
class MarkupAnnotation;
class Measure;
class MovieAnnotation;
class PageInformationAnnotation;
class PDF3DAnnotation;
class PDF3DArtwork;
class PDF3DViewArray;
class PdfActionCollection;
class PolyAnnotation;
class PopupAnnotation;
class PrinterMarkAnnotation;
class Redaction;
class RedactionAnnotation;
class RegistrationMarkAnnotation;
class RenditionAction;
class RichMediaAnnotation;
class ScreenAnnotation;
class SquareAnnotation;
class StampAnnotation;
enum class TextAlignment;
class TextStyle;
class WatermarkAnnotation;
class WidgetAnnotation;
class XfdfReader;
class XfdfWriter;
} // namespace Annotations
class ApsToPdfConverter;
class Color;
namespace Devices
{
class DocumentDevice;
} // namespace Devices
class Document;
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class TextSegmenter;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfA4ConvertStrategy;
class PdfAConvertStrategyBase;
class PdfUaConvertStrategy;
class PdfXConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class Form;
class FormEditor;
class LogicalStructureConcatenation;
class LogicalStructureCopier;
class PdfAnnotationEditor;
class PdfFileEditor;
class PdfFileSignature;
class PdfFileValidator;
} // namespace Facades
class FileSpecification;
namespace Forms
{
class ButtonField;
class CheckboxField;
class ComboBoxField;
class Field;
class Form;
class ListBoxField;
class RadioButtonField;
class RadioButtonOptionField;
class RichTextBoxField;
class SignatureField;
class TextBoxField;
class TextModel;
class XFA;
} // namespace Forms
enum class HorizontalAlignment;
namespace InteractiveFeatures
{
namespace Forms
{
class WidgetWrapper;
} // namespace Forms
} // namespace InteractiveFeatures
namespace LogicalStructure
{
class AnnotationElement;
class StructureElement;
} // namespace LogicalStructure
class Matrix;
class Operator;
class OperatorCollection;
class Page;
class PageCollection;
class PageGenerator;
namespace PageModel
{
class AnnotationElement;
} // namespace PageModel
class Rectangle;
class Resources;
namespace Tests
{
namespace Annotations
{
class AnnotationTests;
class PdfActionTests;
class PopupAnnotationTests;
class WidgetAnnotationTests;
} // namespace Annotations
namespace Facades
{
class DomFormTests;
} // namespace Facades
namespace InteractiveFeatures
{
namespace Annotations
{
class PopupAnnotationTests;
} // namespace Annotations
} // namespace InteractiveFeatures
namespace Plugins
{
class FormEditorTests;
class FormFlattenerTests;
class PdfFormTests;
} // namespace Plugins
class RegressionTests_v10_0;
class RegressionTests_v10_6;
class RegressionTests_v10_8;
class RegressionTests_v10_9;
class RegressionTests_v11_8;
class RegressionTests_v12_1;
class RegressionTests_v16_12;
class RegressionTests_v17_11;
class RegressionTests_v17_12;
class RegressionTests_v17_2;
class RegressionTests_v17_4;
class RegressionTests_v18_11;
class RegressionTests_v19_10;
class RegressionTests_v19_4;
class RegressionTests_v19_5;
class RegressionTests_v19_9;
class RegressionTests_v20_01;
class RegressionTests_v21_1;
class RegressionTests_v21_3;
class RegressionTests_v21_8;
class RegressionTests_v21_9;
class RegressionTests_v22_01;
class RegressionTests_v22_02;
class RegressionTests_v22_03;
class RegressionTests_v22_04;
class RegressionTests_v22_05;
class RegressionTests_v22_07;
class RegressionTests_v22_09;
class RegressionTests_v22_10;
class RegressionTests_v23_02;
class RegressionTests_v23_08;
class RegressionTests_v23_09;
class RegressionTests_v23_10;
class RegressionTests_v24_03;
class RegressionTests_v24_08;
class RegressionTests_v24_11;
class RegressionTests_v24_12;
class RegressionTests_v6_2;
class RegressionTests_v6_3;
class RegressionTests_v6_7;
class RegressionTests_v6_8;
class RegressionTests_v6_9;
class RegressionTests_v7_0;
class RegressionTests_v7_1;
class RegressionTests_v7_2;
class RegressionTests_v7_3;
class RegressionTests_v7_4;
class RegressionTests_v7_6;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v7_9;
class RegressionTests_v8_0;
class RegressionTests_v8_5;
class RegressionTests_v8_6;
class RegressionTests_v8_7;
class RegressionTests_v8_8;
class RegressionTests_v9_0;
class RegressionTests_v9_2;
class RegressionTests_v9_3;
class RegressionTests_v9_4;
class RegressionTests_v9_5;
class RegressionTests_v9_6;
class RegressionTests_v9_7;
class RegressionTests_v9_9;
} // namespace Tests
class TextBoxFieldXfa;
class XfaToPdfConverter;
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
} // namespace Drawing
namespace Globalization
{
class CultureInfo;
} // namespace Globalization
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlReader;
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing annotation object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Annotation : public Aspose::Pdf::BaseParagraph
{
    typedef Annotation ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::HideAction;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::Annotations::FixedPrint;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Annotations::RichMediaAnnotation;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::Annotations::Measure;
    friend class Aspose::Pdf::Facades::LogicalStructureConcatenation;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Devices::DocumentDevice;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfAnnotationEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::FileSpecification;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::Characteristics;
    friend class Aspose::Pdf::Annotations::CircleAnnotation;
    friend class Aspose::Pdf::Annotations::ColorBarAnnotation;
    friend class Aspose::Pdf::Annotations::PrinterMarkAnnotation;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::MovieAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::Annotations::PopupAnnotation;
    friend class Aspose::Pdf::Annotations::SquareAnnotation;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Annotations::GenericAnnotation;
    friend class Aspose::Pdf::Annotations::TextStyle;
    friend class Aspose::Pdf::Annotations::Border;
    friend class Aspose::Pdf::Annotations::XfdfReader;
    friend class Aspose::Pdf::Annotations::XfdfWriter;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::XfaToPdfConverter;
    friend class Aspose::Pdf::TextBoxFieldXfa;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Annotations::RenditionAction;
    friend class Aspose::Pdf::Annotations::JavascriptExtensions::FieldExtension;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper;
    friend class Aspose::Pdf::Facades::LogicalStructureCopier;
    friend class Aspose::Pdf::Annotations::CornerPrinterMarkAnnotation;
    friend class Aspose::Pdf::Annotations::PageInformationAnnotation;
    friend class Aspose::Pdf::Annotations::RegistrationMarkAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA4ConvertStrategy;
    friend class Aspose::Pdf::Facades::PdfFileValidator;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::PopupAnnotationTests;
    friend class Aspose::Pdf::Tests::Annotations::PdfActionTests;
    friend class Aspose::Pdf::Tests::Annotations::PopupAnnotationTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_02;
    friend class Aspose::Pdf::Tests::Annotations::WidgetAnnotationTests;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_01;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_01;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_03;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_04;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_05;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_09;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_03;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    friend class Aspose::Pdf::Tests::Plugins::PdfFormTests;
    friend class Aspose::Pdf::Tests::Plugins::FormEditorTests;
    friend class Aspose::Pdf::Tests::Plugins::FormFlattenerTests;
    
protected:

    /// <summary>
    /// Class representing parameters which have influence on element appearance (checked/not checked etc)
    /// </summary>
    class AppearanceParameters : public System::Object
    {
        typedef AppearanceParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Appearance type : N for normal, D for "down"... applied for button  
        /// </summary>
        System::String appearanceType;
        /// <summary>
        /// True if element is checked. Applied for checkbox, radiobutton option etc.
        /// </summary>
        bool isChecked;
        /// <summary>
        /// This shows that 
        /// </summary>
        bool isSupported;
        
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="appearanceType">Type of appearance (Normal etc)</param>
        AppearanceParameters(System::String appearanceType);
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="isChecked">true if checked (applicable for Checbox field)</param>
        AppearanceParameters(bool isChecked);
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="appearanceType">Type of apperance</param>
        /// <param name="isChecked">true if checked (applicable for checkbox)</param>
        AppearanceParameters(System::String appearanceType, bool isChecked);
        
    };
    
    /// <summary>
    /// This annotation allows to get/set Title property. 
    /// </summary>
    class ITitledAnnotation : public virtual System::Object
    {
        typedef ITitledAnnotation ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        virtual System::String get_Title() = 0;
        virtual void set_Title(System::String value) = 0;
        
    };
    
    
public:

    /// <summary>
    /// If true, annotation appearance will be updated before converting PF document into image. This allows convert fields correctly but probably demand more time.
    /// </summary>
    static ASPOSE_PDF_SHARED_API bool get_UpdateAppearanceOnConvert();
    /// <summary>
    /// If true, annotation appearance will be updated before converting PF document into image. This allows convert fields correctly but probably demand more time.
    /// </summary>
    static ASPOSE_PDF_SHARED_API void set_UpdateAppearanceOnConvert(bool value);
    /// <summary>
    /// If this property set to true, fonts will be added to document as subsets. Default value is true.
    /// </summary>
    static ASPOSE_PDF_SHARED_API bool get_UseFontSubset();
    /// <summary>
    /// If this property set to true, fonts will be added to document as subsets. Default value is true.
    /// </summary>
    static ASPOSE_PDF_SHARED_API void set_UseFontSubset(bool value);
    /// <summary>
    /// Flags of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API AnnotationFlags get_Flags();
    /// <summary>
    /// Flags of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Flags(AnnotationFlags value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() = 0;
    /// <summary>
    /// Gets width of the annotation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double get_Width();
    /// <summary>
    /// Sets width of the annotation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Gets list of annotatation actions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfActionCollection> get_Actions();
    /// <summary>
    /// Gets height of the annotation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double get_Height();
    /// <summary>
    /// Sets height of the annotation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Height(double value);
    /// <summary>
    /// Gets annotation rectangle.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Rect();
    /// <summary>
    /// Sets annotation rectangle.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Rect(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets annotation text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Contents();
    /// <summary>
    /// Sets annotation text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Contents(System::String value);
    /// <summary>
    /// Gets annotation name on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Sets annotation name on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Gets date and time when annotation was recently modified.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_Modified();
    /// <summary>
    /// Sets date and time when annotation was recently modified.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Modified(System::DateTime value);
    /// <summary>
    /// Gets annotation color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_Color();
    /// <summary>
    /// Sets annotation color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets annotation border characteristics. <see cref="Border"></see>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::Border> get_Border() const;
    /// <summary>
    /// Sets annotation border characteristics. <see cref="Border"></see>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<Aspose::Pdf::Annotations::Border> value);
    /// <summary>
    /// Gets current annotation appearance state.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_ActiveState();
    /// <summary>
    /// Sets current annotation appearance state.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_ActiveState(System::String value);
    /// <summary>
    /// Gets annotation characteristics.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::Characteristics> get_Characteristics();
    /// <summary>
    /// Gets appearance dictionary of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AppearanceDictionary> get_States();
    /// @deprecated Use TextHorizontalAlignment property
    /// <summary>
    /// Annotation alignment. This property is obsolete. Use HorizontalAligment instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextAlignment get_Alignment();
    /// @deprecated Use TextHorizontalAlignment property
    /// <summary>
    /// Annotation alignment. This property is obsolete. Use HorizontalAligment instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(TextAlignment value);
    /// @deprecated Use TextHorizontalAlignment property
    /// <summary>
    /// Gets text alignment for annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment() override;
    /// @deprecated Use TextHorizontalAlignment property
    /// <summary>
    /// Sets text alignment for annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value) override;
    /// <summary>
    /// Gets text alignment for annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_TextHorizontalAlignment();
    /// <summary>
    /// Sets text alignment for annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextHorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets full qualified name of the annotation. 
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::String get_FullName();
    /// <summary>
    /// Gets appearance dictionary of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AppearanceDictionary> get_Appearance();
    /// <summary>
    /// Gets index of page which contains annotation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API int32_t get_PageIndex();
    
    /// <summary>
    /// Returns rectangle of annotation taking into consideration page rotation.
    /// </summary>
    /// <param name="considerRotation">If true, page rotation is takein into consideration.</param>
    /// <returns>True - if rectangle found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> GetRectangle(bool considerRotation);
    /// <summary>
    /// Accepts visitor for annotation processing.
    /// </summary>
    /// <param name="visitor">AnnotationSelector object.</param>
    virtual ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) = 0;
    /// <summary>
    /// Places annotation contents directly on the page,
    /// annotation object will be removed.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void Flatten();
    /// <summary>
    /// Update parameters and appearance, according to the matrix transform.
    /// </summary>
    /// <param name="transform">Matrix that use for transformation (resize).</param>
    virtual ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform);
    
protected:

    static const System::String DefaultFontName;
    static const System::String DefaultFontKey;
    static const float DefaultFontSize;
    /// <summary>
    /// The message.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::String message1;
    System::SharedPtr<System::Globalization::CultureInfo> Culture;
    System::WeakPtr<Document> _document;
    bool _disableUpdateAppearance;
    bool _flatteningState;
    bool needBaseInitialization;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObj() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    int32_t get_StructParent();
    void set_StructParent(int32_t value);
    /// <summary>
    /// Gets normal appearance.
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_NormalAppearance();
    bool get_FlatteningState() const;
    void set_FlatteningState(bool value);
    /// <summary>
    /// Gets the page object with which this annotation is associated.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    /// <summary>
    /// Gets the page object with which this annotation is associated.
    /// </summary>
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets rotated rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_RotatedRect();
    /// <summary>
    /// Returns internal rectnagle of annotation, i.e. rectangle recalculated according to RD entry of annotation
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_InnerRect();
    /// <summary>
    /// Property for generator support. This property gets field width originally set by user (width of the "template").
    /// </summary>
    double get_TemplateWidth() const;
    /// <summary>
    /// Property for generator support. This property gets field height originally set by user (height of the "template").
    /// </summary>
    double get_TemplateHeight() const;
    
    System::SharedPtr<AppearanceDictionary> _states;
    
    virtual ASPOSE_PDF_SHARED_API void DeleteAllChildElements();
    void Initialize(System::SharedPtr<Document> doc);
    void assertAppearance();
    /// <summary>
    /// Method which must be called after annotation import. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void AfterImport();
    virtual ASPOSE_PDF_SHARED_API System::Drawing::Color GetBackgroundColor();
    /// <summary>
    /// Create frame.
    /// </summary>
    /// <param name="parametes">Appearance parameters.</param>
    /// <param name="annotation">The annotation.</param>
    /// <returns>List of frame appearance commands.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Create program for displaying this annotation.  
    /// </summary>
    /// <param name="parameters">Appearance parameters for this field (normal/mouse moved appearance, pressed/unpressed for button etc)
    /// </param>
    /// <param name="annotation">Annotation of the appearance</param>
    /// <returns>List of appearance program.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual ASPOSE_PDF_SHARED_API void ClearAppearance(System::SharedPtr<OperatorCollection> appearance);
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// This method must be overriden to return true in classes where apperance generation is supported. 
    /// </summary>
    /// <returns></returns>
    virtual ASPOSE_PDF_SHARED_API bool AppearanceSupported();
    /// <summary>
    /// Updated appearance dictionary of the field.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Annotation> annotation);
    virtual ASPOSE_PDF_SHARED_API void UpdateAppearances();
    /// <summary>
    /// Fixes the case with invalid (empty) AP stream (PDFNET-54007).
    /// </summary>
    void AssertNormalAppearance();
    virtual ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// When overridden in a derived class, exports annotation elements into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    virtual ASPOSE_PDF_SHARED_API void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    virtual ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    /// <summary>
    /// When overridden in a derived class, import annotation elements from XFDF.
    /// </summary>
    /// <param name="table">Hashtable with information parsed from the XFDF file.</param>
    virtual ASPOSE_PDF_SHARED_API void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table);
    
    Annotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor to use in Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    Annotation(System::SharedPtr<Document> document);
    Annotation();
    
    virtual ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initialize the annotation.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object.</param>
    /// <param name="rect">The rectangle of the annotation.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    virtual ASPOSE_PDF_SHARED_API void AttachToPage(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Create annotation data structure. 
    /// </summary>
    /// <param name="doc">Document where annotation is created.</param>
    /// <param name="rect">Annotation rectangle.</param>
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API Annotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for Annotation. 
    /// </summary>
    /// <param name="doc">Document where annotation is added.</param>
    /// <param name="rect">Annotation rectangle.</param>
    ASPOSE_PDF_SHARED_API Annotation(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// This method should be called if annotation requires some additional actions when generator updates its rectangle. 
    /// </summary>
    /// <param name="rect"></param>
    virtual ASPOSE_PDF_SHARED_API void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes annotation from PDF object which describes the annotation. 
    /// </summary>
    /// <param name="annotEngineObj">PDF obejct describing annotation</param>
    /// <param name="page">TODO:</param>
    /// <returns>Created annotation object of appropriate type</returns>
    static System::SharedPtr<Annotation> CreateAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotEngineObj, System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Initializes this object with internal engine annotation object.
    /// </summary>
    /// <param name="annotEngineObj">Internal engine annotEngineObj object.</param>
    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotEngineObj);
    virtual ASPOSE_PDF_SHARED_API void InternalFlatten(System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual ASPOSE_PDF_SHARED_API System::String InternalFlatten2(System::SharedPtr<Resources> resources);
    virtual ASPOSE_PDF_SHARED_API System::String InternalFlatten3(System::SharedPtr<Resources> resources);
    static bool IsEmptyAppearance(System::SharedPtr<System::IO::Stream> s);
    static System::String InternalFlatten4(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annotation, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> resources);
    /// <summary>
    /// true if the annotation must be background. 
    /// </summary>
    /// <returns></returns>
    virtual ASPOSE_PDF_SHARED_API bool IsBackground();
    System::SharedPtr<AppearanceDictionary> GetOrGenerateAppearance();
    int32_t GetPageIndex(System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Converts annotation to image stream.
    /// </summary>
    /// <param name="format">Output image format.</param>
    /// <returns>Stream with image.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> ToImage(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Finds the index of the specified annotation within the given array.
    /// </summary>
    /// <param name="annots">The array of annotations to search.</param>
    /// <param name="annotation">The annotation to find.</param>
    /// <returns>The index of the annotation in the array, or -1 if not found.</returns>
    static int32_t FindAnnotationIndex(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> annots, System::SharedPtr<Annotation> annotation);
    /// <summary>
    /// Finds the index of the specified annotation in the given array of annotations.
    /// </summary>
    /// <param name="annots">The array of annotations.</param>
    /// <param name="annotationObjectId">The object ID of the annotation.</param>
    /// <returns>The index of the specified annotation, or -1 if the annotation is not found.</returns>
    static int32_t FindAnnotationIndex(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> annots, int32_t annotationObjectId);
    /// <summary>
    /// Merges the annotation parameters of a child dictionary with the parent dictionary.
    /// </summary>
    /// <param name="kidDict">The child dictionary to merge.</param>
    /// <param name="parentDict">The parent dictionary to merge into.</param>
    static void MergeAnnotationParamsWithParent(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> kidDict, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> parentDict);
    
    virtual ASPOSE_PDF_SHARED_API ~Annotation();
    
private:

    /// <summary>
    /// Default index for cached page index.
    /// </summary>
    static const int32_t DefaultIndex;
    System::SharedPtr<Rectangle> _rect;
    System::String _contents;
    System::SharedPtr<Aspose::Pdf::Color> _color;
    System::SharedPtr<Aspose::Pdf::Annotations::Border> _border;
    System::SharedPtr<Aspose::Pdf::Annotations::Characteristics> _characteristics;
    System::DateTime _modified;
    AnnotationFlags _flags;
    System::WeakPtr<Aspose::Pdf::Page> _page;
    System::String _name;
    double _templateWidth;
    double _templateHeight;
    
    static System::Nullable<bool>& _useFontSubset();
    static bool& _updateAppearanceOnConvert();
    
    System::SharedPtr<AppearanceDictionary> _appearance;
    /// <summary>
    /// Page index cache.
    /// </summary>
    int32_t _pageIndexCached;
    int32_t _structParent;
    /// <summary>
    /// Pdf object which describes annotation.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<PdfActionCollection> _actions;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> CreateExtGStateWithOpacity(double opacity);
    bool HasAppearanceOperators(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> normalAppearance);
    void CreateNormalAppearanceOperators();
    void SetColor(System::SharedPtr<Aspose::Pdf::Color> value);
    static void SetColor(System::SharedPtr<Annotation> annotation, System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Moves rectangle to origin.
    /// </summary>
    /// <param name="rect"></param>
    /// <returns></returns>
    System::SharedPtr<Rectangle> ToOrigin(System::SharedPtr<Rectangle> rect);
    bool IsPageOrAnnotationOnPage(System::SharedPtr<Aspose::Pdf::Page> page, System::Nullable<int32_t> pageObjectId, int32_t objectId, int32_t generation);
    
};

/// <summary>
/// The class describes general annotation.
/// </summary>
class GenericAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef GenericAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    GenericAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
};

/// <summary>
/// Class represents style of text in annotation 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextStyle : public System::Object
{
    typedef TextStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    
public:

    /// <summary>
    /// Name of the font.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontName();
    /// <summary>
    /// Name of the font.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontName(System::String value);
    /// <summary>
    /// Fonst size.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FontSize();
    /// <summary>
    /// Fonst size.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontSize(double value);
    /// @deprecated Use HorizontalAlignment property
    /// <summary>
    /// Gets horizontal alignment of the text. 
    /// </summary>
    ASPOSE_PDF_SHARED_API TextAlignment get_Alignment();
    /// @deprecated Use HorizontalAlignment property
    /// <summary>
    /// Sets horizontal alignment of the text. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alignment(TextAlignment value);
    /// <summary>
    /// Text alignment. Valid values are: Left, Center, Rigth.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Text alignment. Valid values are: Left, Center, Rigth.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Color of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_Color();
    /// <summary>
    /// Color of the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::Drawing::Color value);
    
    /// <summary>
    /// String representation of TextStyle.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    TextStyle(System::SharedPtr<FreeTextAnnotation> annotation);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextStyle, CODEPORTING_ARGS(System::SharedPtr<FreeTextAnnotation> annotation));
    
private:

    System::WeakPtr<Annotation> _annotation;
    System::String _fontName;
    double _fontSize;
    Aspose::Pdf::HorizontalAlignment _alignment;
    System::Drawing::Color _color;
    bool _isFontNameSpecified;
    bool _isFontSizeSpecified;
    bool _isColorSpecified;
    bool _isAlignmentSpecified;
    
    void UpdateAnnotation();
    static Aspose::Pdf::HorizontalAlignment ConvertAlign(System::String alignment);
    static System::String ConvertAlign(Aspose::Pdf::HorizontalAlignment alignment);
    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


