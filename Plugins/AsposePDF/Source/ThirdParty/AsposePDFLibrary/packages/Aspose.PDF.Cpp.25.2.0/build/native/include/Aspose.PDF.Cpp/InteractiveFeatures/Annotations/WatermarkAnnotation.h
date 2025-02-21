#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if CPLUSPLUS


// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using static Aspose.Pdf.XfaConverter.Elements.XfaEnums;

// C# preprocessor directive: #endif


#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
enum class AnnotationType;
class FixedPrint;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Facades
{
class FormattedText;
} // namespace Facades
class Matrix;
class Operator;
class Page;
class Rectangle;
class Resources;
namespace Text
{
class TextState;
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

namespace Annotations {

/// <summary>
/// Class describes Watermark annotation object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WatermarkAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef WatermarkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// Fuxed print object of Watermark annotation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::FixedPrint> get_FixedPrint();
    /// <summary>
    /// Gets annotation type.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    /// <summary>
    /// Gets opacity of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Opacity() const;
    /// <summary>
    /// Sets opacity of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Opacity(double value);
    
    /// <summary>
    /// Constructor for Watermark annotation class.
    /// </summary>
    /// <param name="page">Page where annotation should be placed.</param>
    /// <param name="rect">Position of the annotation.</param>
    ASPOSE_PDF_SHARED_API WatermarkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Set text of the annotation.
    /// </summary>
    /// <param name="text">Text value.</param>
    ASPOSE_PDF_SHARED_API void SetText(System::SharedPtr<Aspose::Pdf::Facades::FormattedText> text);
    /// <summary>
    /// Set text of the annotation.
    /// </summary>
    /// <param name="text">Text value.</param>
    /// <param name="textState">Text state.</param>
    ASPOSE_PDF_SHARED_API void SetTextAndState(System::ArrayPtr<System::String> text, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Apply visitor for annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    /// <summary>
    /// Overrides the definition in the base class with an empty body.
    /// </summary>
    /// <param name="transform">Matrix specifying the transformation.</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    
protected:

    WatermarkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WatermarkAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~WatermarkAnnotation();
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::FixedPrint> _fixedPrint;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> _textState;
    double _opacity;
    
    void Init();
    System::SharedPtr<Aspose::Pdf::Text::TextState> TranslateFormattedTextToTextState(System::SharedPtr<Aspose::Pdf::Facades::FormattedText> formattedText);
    System::String CreateGraphicState(System::SharedPtr<Resources> resources);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


