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
/// This class represents Pdf String object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CosPdfString final : public Aspose::Pdf::DataEditor::CosPdfPrimitive
{
    typedef CosPdfString ThisType;
    typedef Aspose::Pdf::DataEditor::CosPdfPrimitive BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a value indicating whether this instance is hexadecimal.
    /// </summary>
    /// <value>
    /// 	<c>true</c> if this instance is hexadecimal; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PDF_SHARED_API bool get_IsHexadecimal() const;
    /// <summary>
    /// Gets the string (ANSII).
    /// </summary>
    /// <value>The string.</value>
    ASPOSE_PDF_SHARED_API System::String get_Value() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="CosPdfString"></see> class.
    /// </summary>
    /// <param name="value">The value.</param>
    ASPOSE_PDF_SHARED_API CosPdfString(System::String value);
    /// <summary>
    /// Initializes a new instance of the <see cref="CosPdfString"></see> class.
    /// </summary>
    /// <param name="value">The string.</param>
    /// <param name="isHexadecimal">if set to <c>true</c> [is hexadecimal].</param>
    ASPOSE_PDF_SHARED_API CosPdfString(System::String value, bool isHexadecimal);
    
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfString"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfString"></see> else <see cref="CosPdfString"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfString> ToCosPdfString() override;
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
    /// Returns a <see cref="System::String"></see> that represents the current <see cref="CosPdfString"></see>.
    /// </summary>
    /// <returns>A <see cref="System::String"></see> that represents the current <see cref="CosPdfString"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Create data with internal classes
    /// </summary>
    /// <param name="trailerable"></param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> CreateIPdfPrimitive(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CosPdfString();
    
private:

    bool _isHexadecimal;
    System::String _value;
    
    System::String ToString_NonConst();
    
};

} // namespace DataEditor
} // namespace Pdf
} // namespace Aspose


