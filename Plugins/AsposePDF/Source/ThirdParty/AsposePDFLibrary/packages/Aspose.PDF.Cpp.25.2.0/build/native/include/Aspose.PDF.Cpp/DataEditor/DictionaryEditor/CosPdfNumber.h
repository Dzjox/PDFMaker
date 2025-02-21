#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/DataEditor/DictionaryEditor/CosPdfPrimitive.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace DataEditor {

/// <summary>
/// This class represents Pdf Number type.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CosPdfNumber final : public Aspose::Pdf::DataEditor::CosPdfPrimitive
{
    typedef CosPdfNumber ThisType;
    typedef Aspose::Pdf::DataEditor::CosPdfPrimitive BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the value.
    /// </summary>
    /// <value>The value.</value>
    ASPOSE_PDF_SHARED_API double get_Value() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="CosPdfNumber"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API CosPdfNumber();
    /// <summary>
    /// Initializes a new instance of the <see cref="CosPdfNumber"></see> class.
    /// </summary>
    /// <param name="value">The number.</param>
    ASPOSE_PDF_SHARED_API CosPdfNumber(double value);
    
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfNumber"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfNumber"></see> else <see cref="CosPdfNumber"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfNumber> ToCosPdfNumber() override;
    /// <summary>
    /// Get hashcode for current object.
    /// </summary>
    /// <returns>A hash code for current object.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Determines that the specified object is equal to the current object.
    /// </summary>
    /// <param name="obj">The object to compare with current object.</param>
    /// <returns>True if specified object is equal to the current object; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns a <see cref="System::String"></see> that represents the current <see cref="CosPdfNumber"></see>.
    /// </summary>
    /// <returns>A <see cref="System::String"></see> that represents the current <see cref="CosPdfNumber"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Create data with internal classes.
    /// </summary>
    /// <param name="trailerable"></param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> CreateIPdfPrimitive(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CosPdfNumber();
    
private:

    double _value;
    
    System::String ToString_NonConst();
    
};

} // namespace DataEditor
} // namespace Pdf
} // namespace Aspose


