#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BorderInfo;
class Color;
class ColumnInfo;
class Image;
class MarginInfo;
class Operator;
class Page;
class PageGenerator;
enum class ParagraphPositioningMode;
class Paragraphs;
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
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// Represents a FloatingBox in a Pdf document. FloatingBox is custom positioned.
class ASPOSE_PDF_SHARED_CLASS FloatingBox : public Aspose::Pdf::BaseParagraph
{
    typedef FloatingBox ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a column info
    /// </summary>   
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::ColumnInfo>& get_ColumnInfo() const;
    /// <summary>
    /// Sets a column info
    /// </summary>   
    ASPOSE_PDF_SHARED_API void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    /// <summary>
    /// Gets a float value that indicates the width of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Sets a float value that indicates the width of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Gets a float value that indicates the height of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() const;
    /// <summary>
    /// Sets a float value that indicates the height of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value);
    /// <summary>
    /// Gets a bool value that indicates whether the paragraph need to be repeated on next page.
    /// Default value is false.The attribute is only valid when the paragraph itself and the object its ReferenceParagraphID referred to both are included in RepeatingRows.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsNeedRepeating() const;
    /// <summary>
    /// Sets a bool value that indicates whether the paragraph need to be repeated on next page.
    /// Default value is false.The attribute is only valid when the paragraph itself and the object its ReferenceParagraphID referred to both are included in RepeatingRows.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsNeedRepeating(bool value);
    /// <summary>
    /// Gets a <see cref="Paragraphs"></see> collection that indicates all paragraphs in the cell.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs() const;
    /// <summary>
    /// Sets a <see cref="Paragraphs"></see> collection that indicates all paragraphs in the cell.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets a <see cref="BorderInfo"></see> object that indicates the border info of the floating box.
    /// </summary> 
    ASPOSE_PDF_SHARED_API const System::SharedPtr<BorderInfo>& get_Border() const;
    /// <summary>
    /// Sets a <see cref="BorderInfo"></see> object that indicates the border info of the floating box.
    /// </summary> 
    ASPOSE_PDF_SHARED_API void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets a <see cref="Aspose::Pdf::Color"></see> object that indicates the background color of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Color>& get_BackgroundColor() const;
    /// <summary>
    /// Sets a <see cref="Aspose::Pdf::Color"></see> object that indicates the background color of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets background image for page (for generator only, not filled in when reading document).
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Image>& get_BackgroundImage() const;
    /// <summary>
    /// Sets background image for page (for generator only, not filled in when reading document).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundImage(System::SharedPtr<Image> value);
    /// <summary>
    /// Gets a <see cref="MarginInfo"></see> object that indicates the padding of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Padding() const;
    /// <summary>
    /// Sets a <see cref="MarginInfo"></see> object that indicates the padding of the floating box.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Padding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Specifies variant for determining the location of the FloatingBox on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API ParagraphPositioningMode get_PositioningMode() const;
    /// <summary>
    /// Specifies variant for determining the location of the FloatingBox on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PositioningMode(ParagraphPositioningMode value);
    /// <summary>
    /// Gets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left() const;
    /// <summary>
    /// Sets the table left coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(double value);
    /// <summary>
    /// Gets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Top() const;
    /// <summary>
    /// Sets the table top coordinate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FloatingBox"></see> class with specified width and height.
    /// </summary>
    /// <param name="width">The width of the box.</param>
    /// <param name="height">The height of the box.</param>
    ASPOSE_PDF_SHARED_API FloatingBox(float width, float height);
    /// <summary>
    /// Initializes a new instance of the <see cref="FloatingBox"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API FloatingBox();
    
    /// <summary>
    /// Clones a new <see cref="FloatingBox"></see> object. Paragraphs in the floating box are not cloned.
    /// </summary>
    /// <returns>The new <see cref="FloatingBox"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    bool Process(double& currentX, double& currentY, double pageHeight, double pageWidth, System::SharedPtr<MarginInfo> pageMargin, System::SharedPtr<Page> page, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isHeaderFooter);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    double height;
    bool isHeightSet;
    bool isWidthSet;
    System::SharedPtr<MarginInfo> padding;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    double width;
    System::SharedPtr<Aspose::Pdf::ColumnInfo> pr_ColumnInfo;
    bool pr_IsNeedRepeating;
    System::SharedPtr<BorderInfo> pr_Border;
    System::SharedPtr<Color> pr_BackgroundColor;
    System::SharedPtr<Image> pr_BackgroundImage;
    ParagraphPositioningMode pr_PositioningMode;
    double pr_Left;
    double pr_Top;
    
    bool ProcessColumns(System::ArrayPtr<double> columnWidths, double columnSpacing, System::SharedPtr<MarginInfo> margin, double& boxWidth, double& boxHeight, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, double curX, double curY, double bottomY, bool& result, double& footNoteHeight, bool isFooter);
    void ProcessHalfDevideFootNote(System::SharedPtr<Page> page, System::SharedPtr<Aspose::Pdf::Paragraphs> backupParagraphs, System::SharedPtr<Aspose::Pdf::Paragraphs> backupFooterParagraphs, int32_t paragraphsCount, System::ArrayPtr<double> columnWidths, double columnSpacing, double& boxWidth, double& boxHeight, double curX, double curY, System::SharedPtr<MarginInfo> margin, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, double footNoteMaxHeight, bool isFooter);
    
};

} // namespace Pdf
} // namespace Aspose


