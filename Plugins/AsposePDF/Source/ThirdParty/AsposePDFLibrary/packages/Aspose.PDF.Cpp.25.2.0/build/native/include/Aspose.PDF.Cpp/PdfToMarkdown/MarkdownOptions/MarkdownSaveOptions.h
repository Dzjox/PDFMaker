#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class EmphasisStyle;
enum class HeadingRecognitionStrategy;
enum class HeadingStyle;
enum class LineBreakStyle;
class MarkdownConverter;
namespace PdfToMarkdown
{
class HeadingLevels;
} // namespace PdfToMarkdown
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the document save option class in the markdown format.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MarkdownSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef MarkdownSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::MarkdownConverter;
    
public:

    /// <summary>
    /// Gets and sets a property indicating whether vector graphics should be extracted.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ExtractVectorGraphics() const;
    /// <summary>
    /// Gets and sets a property indicating whether vector graphics should be extracted.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExtractVectorGraphics(bool value);
    /// <summary>
    /// Get or set an rectangle area to extract content to markdown.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Rectangle>& get_AreaToExtract() const;
    /// <summary>
    /// Get or set an rectangle area to extract content to markdown.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AreaToExtract(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets ans sets allowance to convert subscript and superscript.
    /// This value is true by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SubscriptAndSuperscriptConversion() const;
    /// <summary>
    /// Gets ans sets allowance to convert subscript and superscript.
    /// This value is true by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubscriptAndSuperscriptConversion(bool value);
    /// <summary>
    /// Gets and sets the directory name to save document resources such as images.
    /// If the value is not specified, then the images will be written to the same directory as the markdown file itself.
    /// This is not path, it is only name! 
    /// This directory will be automatically created in the directory with the saved markdown file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ResourcesDirectoryName() const;
    /// <summary>
    /// Gets and sets the directory name to save document resources such as images.
    /// If the value is not specified, then the images will be written to the same directory as the markdown file itself.
    /// This is not path, it is only name! 
    /// This directory will be automatically created in the directory with the saved markdown file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ResourcesDirectoryName(System::String value);
    /// <summary>
    /// Gets and sets allowance to use of an img tag to insert images to the left and right of the text.
    /// In this case, in the markdown viewer, the text will wrap around the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseImageHtmlTag() const;
    /// <summary>
    /// Gets and sets allowance to use of an img tag to insert images to the left and right of the text.
    /// In this case, in the markdown viewer, the text will wrap around the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseImageHtmlTag(bool value);
    /// <summary>
    /// Gets the line break style for generated document.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::LineBreakStyle get_LineBreakStyle() const;
    /// <summary>
    /// Sets the line break style for generated document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineBreakStyle(Aspose::Pdf::LineBreakStyle value);
    /// <summary>
    /// Gets the style of emphasis for generated document.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::EmphasisStyle get_EmphasisStyle() const;
    /// <summary>
    /// Sets the style of emphasis for generated document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EmphasisStyle(Aspose::Pdf::EmphasisStyle value);
    /// <summary>
    /// Gets the heading style for generated document.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HeadingStyle get_HeadingStyle() const;
    /// <summary>
    /// Sets the heading style for generated document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HeadingStyle(Aspose::Pdf::HeadingStyle value);
    /// <summary>
    /// Defines expected heading levels to use in FontSize recognition headers strategy.
    /// If this property value is set, then header recognition <see cref="PdfToMarkdown::HeadingRecognitionStrategy::Heuristic"></see> strategy will be selected when set <see cref="PdfToMarkdown::HeadingRecognitionStrategy::Auto"></see> strategies even if the document contains bookmarks.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PdfToMarkdown::HeadingLevels>& get_HeadingLevels() const;
    /// <summary>
    /// Defines expected heading levels to use in FontSize recognition headers strategy.
    /// If this property value is set, then header recognition <see cref="PdfToMarkdown::HeadingRecognitionStrategy::Heuristic"></see> strategy will be selected when set <see cref="PdfToMarkdown::HeadingRecognitionStrategy::Auto"></see> strategies even if the document contains bookmarks.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HeadingLevels(System::SharedPtr<Aspose::Pdf::PdfToMarkdown::HeadingLevels> value);
    /// <summary>
    /// Gets the heading recognition strategy.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HeadingRecognitionStrategy get_HeadingRecognitionStrategy() const;
    /// <summary>
    /// Sets the heading recognition strategy.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HeadingRecognitionStrategy(Aspose::Pdf::HeadingRecognitionStrategy value);
    
    /// <summary>
    /// Creates an instance option to save a document in markdown format.
    /// </summary>
    ASPOSE_PDF_SHARED_API MarkdownSaveOptions();
    
protected:

    /// <summary>
    /// Gets and sets the directory name to save document resources such as images.
    /// This directory will be automatically created in the directory with the saved markdown file.
    /// </summary>
    System::String get_ResourcesDirectoryPath() const;
    /// <summary>
    /// Gets and sets the directory name to save document resources such as images.
    /// This directory will be automatically created in the directory with the saved markdown file.
    /// </summary>
    void set_ResourcesDirectoryPath(System::String value);
    
private:

    bool pr_ExtractVectorGraphics;
    System::SharedPtr<Rectangle> pr_AreaToExtract;
    bool pr_SubscriptAndSuperscriptConversion;
    System::String pr_ResourcesDirectoryName;
    System::String pr_ResourcesDirectoryPath;
    bool pr_UseImageHtmlTag;
    Aspose::Pdf::LineBreakStyle pr_LineBreakStyle;
    Aspose::Pdf::EmphasisStyle pr_EmphasisStyle;
    Aspose::Pdf::HeadingStyle pr_HeadingStyle;
    System::SharedPtr<Aspose::Pdf::PdfToMarkdown::HeadingLevels> pr_HeadingLevels;
    Aspose::Pdf::HeadingRecognitionStrategy pr_HeadingRecognitionStrategy;
    
};

} // namespace Pdf
} // namespace Aspose


