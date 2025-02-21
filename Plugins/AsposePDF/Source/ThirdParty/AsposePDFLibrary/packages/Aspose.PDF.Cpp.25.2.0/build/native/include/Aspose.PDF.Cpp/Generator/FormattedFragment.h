#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/rectangle_f.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Generator/BaseParagraph.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class HtmlFragment;
class MarginInfo;
class Matrix;
class Operator;
namespace Operators
{
class ConcatenateMatrix;
} // namespace Operators
class Page;
class PageGenerator;
class PageInfo;
class PdfPageInfo;
class Row;
class Table;
namespace Tests
{
class LatexFragmentTests;
} // namespace Tests
class TeXFragment;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
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

/// <summary>
/// Represents abstract formatted fragment.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FormattedFragment : public Aspose::Pdf::BaseParagraph
{
    typedef FormattedFragment ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::TeXFragment;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::LatexFragmentTests;
    
protected:

    /// <summary>
    /// Text value.
    /// </summary>
    System::String text;
    /// <summary>
    /// Rectangle value.
    /// </summary>
    System::Drawing::RectangleF rectangle;
    
    const System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>>& get_PageInfos() const;
    void set_PageInfos(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> value);
    bool get_IsConverted() const;
    void set_IsConverted(bool value);
    double get_Height();
    
    FormattedFragment(System::String text);
    
    /// <summary>
    /// Copies the resource dictionary from page to source page and vica versa (for non adding content mode only).
    /// </summary>
    /// <param name="srcPage">The flag manages the direction of copy. If the values is true, than data is copied from new page to original page.</param>
    /// <param name="destPage">The flag manages the direction of copy. If the values is true, than data is copied from new page to original page.</param> 
    static void CopyResources(System::SharedPtr<Page> srcPage, System::SharedPtr<Page> destPage);
    bool Process(double& curX, double& curY, bool isCalculatedMode, double width, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> keptWithNextOperators, int32_t& keptWithNextParagraphsCount, System::SharedPtr<Page> page, System::SharedPtr<MarginInfo> margin, System::SharedPtr<Table> table, double& lastParagraphHeight, bool isNextParagraphInline, bool isHeaderFooter);
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> GetMatrix(double curX, double curY, System::SharedPtr<PageInfo> pageInfo);
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Operators::ConcatenateMatrix> GetMatrixOperator(double curX, double curY, System::SharedPtr<PageInfo> pageInfo);
    virtual void ConvertToPages(System::SharedPtr<Page> page, double width, double firstHeight, double anyHeight, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, System::SharedPtr<Matrix> matrix) = 0;
    double CalculateWidth(double maxWidth);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    /// <summary>
    /// Copy fields to fragment.
    /// </summary>
    /// <param name="fragment">Fragment.</param>
    ASPOSE_PDF_SHARED_API void CopyFields(System::SharedPtr<FormattedFragment> fragment);
    
private:

    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pr_PageInfos;
    bool pr_IsConverted;
    
    void ClearPageInfos();
    void FixPageHeights(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, double maxPageHeights);
    
};

} // namespace Pdf
} // namespace Aspose


