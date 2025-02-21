#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Specifies the order of edit operations.
/// </summary>
enum class EditOperationsOrder
{
    /// <summary>
    /// Insert operations before delete operations.
    /// </summary>
    InsertFirst,
    /// <summary>
    /// Delete operations before insert operations.
    /// </summary>
    DeleteFirst
};

/// <summary>
/// Represents a PDF document comparison options class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ComparisonOptions : public System::Object
{
    typedef ComparisonOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Get and set the rectangular area in which the text of pages will be compared.
    /// This option can't be setted along with <see cref="ExcludeTables"></see>, <see cref="ExcludeAreas1"></see> and <see cref="ExcludeAreas2"></see> options.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Rectangle>& get_ExtractionArea() const;
    /// <summary>
    /// Get and set the rectangular area in which the text of pages will be compared.
    /// This option can't be setted along with <see cref="ExcludeTables"></see>, <see cref="ExcludeAreas1"></see> and <see cref="ExcludeAreas2"></see> options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExtractionArea(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Get and set the option that determines whether tables are excluded from comparison.
    /// This option cannot be set together with <see cref="ExtractionArea"></see> option.
    /// The default value is <c>false</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ExcludeTables() const;
    /// <summary>
    /// Get and set the option that determines whether tables are excluded from comparison.
    /// This option cannot be set together with <see cref="ExtractionArea"></see> option.
    /// The default value is <c>false</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeTables(bool value);
    /// <summary>
    /// Get and set the exclude areas. Used for the first page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>.
    /// This option can't be setted along with <see cref="ExtractionArea"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::ArrayPtr<System::SharedPtr<Rectangle>>& get_ExcludeAreas1() const;
    /// <summary>
    /// Get and set the exclude areas. Used for the first page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>.
    /// This option can't be setted along with <see cref="ExtractionArea"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeAreas1(System::ArrayPtr<System::SharedPtr<Rectangle>> value);
    /// <summary>
    /// Get and set the exclude areas. Used for the second page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>.
    /// This option can't be setted along with <see cref="ExtractionArea"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::ArrayPtr<System::SharedPtr<Rectangle>>& get_ExcludeAreas2() const;
    /// <summary>
    /// Get and set the exclude areas. Used for the second page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>.
    /// This option can't be setted along with <see cref="ExtractionArea"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeAreas2(System::ArrayPtr<System::SharedPtr<Rectangle>> value);
    /// <summary>
    /// Gets and sets the edit operations order.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Comparison::EditOperationsOrder get_EditOperationsOrder() const;
    /// <summary>
    /// Gets and sets the edit operations order.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EditOperationsOrder(Aspose::Pdf::Comparison::EditOperationsOrder value);
    
    /// <summary>
    /// Creates a <see cref="ComparisonOptions"></see> class instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API ComparisonOptions();
    
private:

    System::SharedPtr<Rectangle> pr_ExtractionArea;
    bool pr_ExcludeTables;
    System::ArrayPtr<System::SharedPtr<Rectangle>> pr_ExcludeAreas1;
    System::ArrayPtr<System::SharedPtr<Rectangle>> pr_ExcludeAreas2;
    Aspose::Pdf::Comparison::EditOperationsOrder pr_EditOperationsOrder;
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


