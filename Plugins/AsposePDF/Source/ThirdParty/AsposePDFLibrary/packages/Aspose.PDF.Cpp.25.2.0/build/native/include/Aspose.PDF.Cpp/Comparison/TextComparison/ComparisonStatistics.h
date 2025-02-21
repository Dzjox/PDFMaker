#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class ComparisonStatisticsBuilder;
class DiffOperation;
} // namespace Comparison
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

namespace Comparison {

/// <summary>
/// Represents a text comparison ststistics class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextItemComparisonStatistics : public System::Object
{
    typedef TextItemComparisonStatistics ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Comparison::ComparisonStatisticsBuilder;
    
public:

    /// <summary>
    /// Gets and sets the total number of characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_TotalCharacters() const;
    /// <summary>
    /// Gets and sets the number of deleted characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_DeletedCharactersCount() const;
    /// <summary>
    /// Gets and sets the number of inseted characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_InsertedCharactersCount() const;
    /// <summary>
    /// Gets and sets the number of delete operations.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_DeleteOperationsCount() const;
    /// <summary>
    /// Gets and sets the number of insert operations.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_InsertOperationsCount() const;
    
    ASPOSE_PDF_SHARED_API TextItemComparisonStatistics();
    
protected:

    /// <summary>
    /// Gets and sets the total number of characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TotalCharacters(int32_t value);
    /// <summary>
    /// Gets and sets the number of deleted characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DeletedCharactersCount(int32_t value);
    /// <summary>
    /// Gets and sets the number of inseted characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InsertedCharactersCount(int32_t value);
    /// <summary>
    /// Gets and sets the number of delete operations.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DeleteOperationsCount(int32_t value);
    /// <summary>
    /// Gets and sets the number of insert operations.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InsertOperationsCount(int32_t value);
    
private:

    int32_t pr_TotalCharacters;
    int32_t pr_DeletedCharactersCount;
    int32_t pr_InsertedCharactersCount;
    int32_t pr_DeleteOperationsCount;
    int32_t pr_InsertOperationsCount;
    
};

/// <summary>
/// Represents a document comparison statistics class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentComparisonStatistics : public Aspose::Pdf::Comparison::TextItemComparisonStatistics
{
    typedef DocumentComparisonStatistics ThisType;
    typedef Aspose::Pdf::Comparison::TextItemComparisonStatistics BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Comparison::ComparisonStatisticsBuilder;
    
public:

    /// <summary>
    /// Gets and sets the list of pages statistics.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextItemComparisonStatistics>>>& get_PagesStatistics() const;
    
protected:

    /// <summary>
    /// Gets and sets the list of pages statistics.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PagesStatistics(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextItemComparisonStatistics>>> value);
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextItemComparisonStatistics>>> pr_PagesStatistics;
    
};

/// <summary>
/// Represents a class for building comparison statistics.
/// </summary>
class ComparisonStatisticsBuilder : public System::Object
{
    typedef ComparisonStatisticsBuilder ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a statistics object for the result of comparing PDF pages or flat document comparison
    /// in which entire documents are compared.
    /// </summary>
    /// <param name="diffs">The list of differences.</param>
    /// <returns>A statistics instance.</returns>
    static System::SharedPtr<TextItemComparisonStatistics> BuildStatistics(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffs);
    /// <summary>
    /// Creates a statistics object for the result of a page comparison of a PDF document.
    /// </summary>
    /// <param name="diffs">The list of differences.</param>
    /// <returns>A statistics instance.</returns>
    static System::SharedPtr<DocumentComparisonStatistics> BuildStatistics(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffs);
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


