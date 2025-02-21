#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
/// <summary>
/// The <b>Aspose.Pdf.Comparison</b> namespace provides classes for working with PDF documents comparing.
/// </summary>

#include <system/string.h>
#include <system/iequatable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class ComparisonStatisticsBuilder;
namespace Diff
{
namespace DiffOptimization
{
class OperationsMerger;
class OperationsSlideMerger;
} // namespace DiffOptimization
class DiffSolver;
class DiffUtils;
} // namespace Diff
class HtmlDiffOutputGenerator;
class MarkdownDiffOutputGenerator;
namespace SideBySideComparison
{
class PagesTextFragmentsComparer;
class SideBySideDocumentBuider;
class TextChangeMapper;
} // namespace SideBySideComparison
} // namespace Comparison
namespace Tests
{
namespace Comparation
{
namespace DiffOptimizers
{
class OptomizersTests;
} // namespace DiffOptimizers
class DiffTests;
class DiffUtilsTests;
class OutputGeneratorsTests;
class PdfTextComparationTests;
} // namespace Comparation
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a difference operation type.
/// </summary>
enum class Operation
{
    /// <summary>
    /// The equal operation.
    /// </summary>
    Equal,
    /// <summary>
    /// The delete operation.
    /// </summary>
    Delete,
    /// <summary>
    /// The insert operation.
    /// </summary>
    Insert
};

/// <summary>
/// Represents a class of diff operation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DiffOperation : public System::IEquatable<System::SharedPtr<Aspose::Pdf::Comparison::DiffOperation>>
{
    typedef DiffOperation ThisType;
    typedef System::IEquatable<System::SharedPtr<Aspose::Pdf::Comparison::DiffOperation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Comparison::Diff::DiffOptimization::OperationsMerger;
    friend class Aspose::Pdf::Comparison::Diff::DiffOptimization::OperationsSlideMerger;
    friend class Aspose::Pdf::Comparison::Diff::DiffSolver;
    friend class Aspose::Pdf::Comparison::Diff::DiffUtils;
    friend class Aspose::Pdf::Comparison::HtmlDiffOutputGenerator;
    friend class Aspose::Pdf::Comparison::MarkdownDiffOutputGenerator;
    friend class Aspose::Pdf::Comparison::ComparisonStatisticsBuilder;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::PagesTextFragmentsComparer;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::SideBySideDocumentBuider;
    friend class Aspose::Pdf::Comparison::SideBySideComparison::TextChangeMapper;
    friend class Aspose::Pdf::Tests::Comparation::DiffTests;
    friend class Aspose::Pdf::Tests::Comparation::DiffUtilsTests;
    friend class Aspose::Pdf::Tests::Comparation::OutputGeneratorsTests;
    friend class Aspose::Pdf::Tests::Comparation::PdfTextComparationTests;
    friend class Aspose::Pdf::Tests::Comparation::DiffOptimizers::OptomizersTests;
    
public:

    /// <summary>
    /// Gets and sets operation type.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Comparison::Operation get_Operation() const;
    /// <summary>
    /// Get and set operation text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() const;
    
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> other) override;
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<DiffOperation> op) override;
    ASPOSE_PDF_SHARED_API int32_t GetHashCode() const override;
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Gets and sets operation type.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Operation(Aspose::Pdf::Comparison::Operation value);
    /// <summary>
    /// Get and set operation text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    
    /// <summary>
    /// Creates a <see cref="DiffOperation"></see> instance.
    /// </summary>
    /// <param name="operation">An operation type.</param>
    /// <param name="text">An operation text.</param>
    DiffOperation(Aspose::Pdf::Comparison::Operation operation, System::String text);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DiffOperation, CODEPORTING_ARGS(Aspose::Pdf::Comparison::Operation operation, System::String text));
    
private:

    Aspose::Pdf::Comparison::Operation pr_Operation;
    System::String pr_Text;
    
    System::String ToString_NonConst();
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


