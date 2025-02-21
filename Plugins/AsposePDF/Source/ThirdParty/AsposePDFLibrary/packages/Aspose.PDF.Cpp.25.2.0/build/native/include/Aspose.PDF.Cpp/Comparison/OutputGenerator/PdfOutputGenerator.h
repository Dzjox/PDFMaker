#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Comparison/OutputGenerator/IFileOutputGenerator.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class DiffOperation;
class HtmlDiffOutputGenerator;
class OutputTextStyle;
} // namespace Comparison
class PageInfo;
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
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a class for generating PDF representation of texts differences.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfOutputGenerator : public Aspose::Pdf::Comparison::IFileOutputGenerator
{
    typedef PdfOutputGenerator ThisType;
    typedef Aspose::Pdf::Comparison::IFileOutputGenerator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Cteates an instance of <see cref="PdfOutputGenerator"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfOutputGenerator();
    /// <summary>
    /// Cteates an instance of <see cref="PdfOutputGenerator"></see> class.
    /// </summary>
    /// <param name="pageInfo">The page size and margins settings.</param>
    ASPOSE_PDF_SHARED_API PdfOutputGenerator(System::SharedPtr<PageInfo> pageInfo);
    /// <summary>
    /// Cteates an instance of <see cref="PdfOutputGenerator"></see> class.
    /// </summary>
    /// <param name="textStyle">The styles for the changed text.</param>
    ASPOSE_PDF_SHARED_API PdfOutputGenerator(System::SharedPtr<OutputTextStyle> textStyle);
    /// <summary>
    /// Cteates an instance of <see cref="PdfOutputGenerator"></see> class.
    /// </summary>
    /// <param name="textStyle">The styles for the changed text.</param>
    /// <param name="pageInfo">The page size and margins settings.</param>
    ASPOSE_PDF_SHARED_API PdfOutputGenerator(System::SharedPtr<OutputTextStyle> textStyle, System::SharedPtr<PageInfo> pageInfo);
    
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <param name="targetFilePath">The path of the target file to save the output.</param>
    ASPOSE_PDF_SHARED_API void GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffrences, System::String targetFilePath) override;
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <param name="targetFilePath">The path of the target file to save the output.</param>
    ASPOSE_PDF_SHARED_API void GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffrences, System::String targetFilePath) override;
    
private:

    System::SharedPtr<PageInfo> _pageInfo;
    System::SharedPtr<HtmlDiffOutputGenerator> _diffOutputGenerator;
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


