#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// extern alias AsposeImaging;
// using AsposeImaging::Aspose.Imaging.FileFormats.Dicom;
// using AsposeImaging::Aspose.Imaging.ImageOptions;
// using GraphicsImage = AsposeImaging.Aspose.Imaging.Image;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BitmapInfo;
class Cell;
enum class HorizontalAlignment;
enum class ImageFileType;
namespace LogicalStructure
{
class MCRElement;
} // namespace LogicalStructure
class MarginInfo;
class Operator;
class Page;
class PageGenerator;
class Paragraphs;
class Rectangle;
namespace Text
{
class TextFragment;
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
namespace Drawing
{
class Bitmap;
class Image;
namespace Imaging
{
enum class PixelFormat;
} // namespace Imaging
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents image.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Image final : public Aspose::Pdf::BaseParagraph
{
    typedef Image ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Cell;
    
public:

    /// <summary>
    /// Gets the image file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_File() const;
    /// <summary>
    /// Sets the image file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_File(System::String value);
    /// <summary>
    /// Gets uncompressed image bytes.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::BitmapInfo>& get_BitmapInfo() const;
    /// <summary>
    /// Sets uncompressed image bytes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BitmapInfo(System::SharedPtr<Aspose::Pdf::BitmapInfo> value);
    /// <summary>
    /// Gets the image bitmap size.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_BitmapSize();
    /// <summary>
    /// Gets the image width.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FixWidth() const;
    /// <summary>
    /// Sets the image width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FixWidth(double value);
    /// <summary>
    /// Gets the image height.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FixHeight() const;
    /// <summary>
    /// Sets the image height.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FixHeight(double value);
    /// <summary>
    /// Gets the image file type.
    /// </summary>
    ASPOSE_PDF_SHARED_API ImageFileType get_FileType() const;
    /// <summary>
    /// Sets the image file type.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FileType(ImageFileType value);
    /// <summary>
    /// Gets the image scale.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_ImageScale() const;
    /// <summary>
    /// Sets the image scale.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageScale(double value);
    /// <summary>
    /// Gets the image stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::IO::Stream>& get_ImageStream() const;
    /// <summary>
    /// Sets the image stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets a bool value that indicates whether the image use resolution during generation
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsApplyResolution() const;
    /// <summary>
    /// Sets a bool value that indicates whether the image use resolution during generation
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsApplyResolution(bool value);
    /// <summary>
    /// Gets a bool value that indicates whether the image is forced to be black-and-white. If TIFF 
    /// image of CCITT subformat is used, this property must be set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBlackWhite() const;
    /// <summary>
    /// Sets a bool value that indicates whether the image is forced to be black-and-white. If TIFF 
    /// image of CCITT subformat is used, this property must be set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBlackWhite(bool value);
    /// <summary>
    /// Gets a string value that indicates the title of the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Text::TextFragment>& get_Title() const;
    /// <summary>
    /// Sets a string value that indicates the title of the image.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::SharedPtr<Text::TextFragment> value);
    
    ASPOSE_PDF_SHARED_API Image();
    
    /// <summary>
    /// Returns mime type for image.
    /// </summary>
    /// <param name="i">Image object.</param>
    /// <returns>Mime type as string if found; otherwise, "image/unknown" value.</returns>
    static ASPOSE_PDF_SHARED_API System::String GetMimeType(System::SharedPtr<System::Drawing::Image> i);
    /// <summary>
    /// Clone the image.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    bool isTagged;
    int32_t MCID;
    
    const System::SharedPtr<System::Drawing::Bitmap>& get_Bitmap() const;
    System::SharedPtr<Rectangle> get_BBox() const;
    /// <summary>
    /// Gets a custom tag for serialization.
    /// </summary>
    System::String get_SerializationTag() const;
    /// <summary>
    /// Sets a custom tag for serialization.
    /// </summary>
    void set_SerializationTag(System::String value);
    
    void SetTaggedInfo(int32_t MCID);
    /// <summary>
    /// Get file from url and local path
    /// </summary>
    static System::String GetFileName(System::String imageFile);
    /// <summary>
    /// Process image generation.
    /// </summary>
    bool Process(double& curX, double& rightX, double& curY, bool isScaleParagraph, System::SharedPtr<MarginInfo> marginInfo, double realWidth, double height, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isCalculatedMode, bool isNextParagraphInline, bool isFooter, System::SharedPtr<Paragraphs>& paragraphs, double footNoteHeight, double bottomY, int32_t processedParagraphsCount, double leftXContainer);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    System::SharedPtr<Rectangle> _bBox;
    System::SharedPtr<Aspose::Pdf::BitmapInfo> _bitmapInfo;
    System::SharedPtr<System::Drawing::Bitmap> pr_Bitmap;
    
    void set_Bitmap(System::SharedPtr<System::Drawing::Bitmap> value);
    
    System::String pr_File;
    System::SharedPtr<Aspose::Pdf::BitmapInfo> pr_BitmapInfo;
    double pr_FixWidth;
    double pr_FixHeight;
    ImageFileType pr_FileType;
    double pr_ImageScale;
    System::SharedPtr<System::IO::Stream> pr_ImageStream;
    bool pr_IsApplyResolution;
    bool pr_IsBlackWhite;
    System::SharedPtr<Text::TextFragment> pr_Title;
    System::String pr_SerializationTag;
    
    System::SharedPtr<System::Drawing::Bitmap> CreateBitmap();
    System::SharedPtr<Rectangle> GetRectangle(double curX, double curY, double width, double bottomY, Aspose::Pdf::HorizontalAlignment alignment, double realWidth, double leftXContainer);
    bool ProcessRawBitmap(double& curX, double& rightX, double& curY, bool isScaleParagraph, System::SharedPtr<MarginInfo> marginInfo, double realWidth, double height, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isCalculatedMode, bool isNextParagraphInline, double footNoteHeight, double bottomY, int32_t processedParagraphsCount, double leftXContainer);
    void EndProcessing(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect, bool isCalculatedMode, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> imageCommands, double& curX, double& curY, double imageWidth, double& rightX, double newY, bool isNextParagraphInline);
    static bool IsSupportedPixelFormat(System::Drawing::Imaging::PixelFormat pixelFormat);
    
};

} // namespace Pdf
} // namespace Aspose


