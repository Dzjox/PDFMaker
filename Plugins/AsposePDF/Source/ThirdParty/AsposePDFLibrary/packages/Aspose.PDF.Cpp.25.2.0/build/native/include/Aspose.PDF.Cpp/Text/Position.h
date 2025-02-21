#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a position object
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Position final : public System::Object
{
    typedef Position ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the X coordinate of the object
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_XIndent() const;
    /// <summary>
    /// Gets the X coordinate of the object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_XIndent(double value);
    /// <summary>
    /// Gets the Y coordinate of the object
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_YIndent() const;
    /// <summary>
    /// Gets the Y coordinate of the object
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_YIndent(double value);
    
    /// <summary>
    /// Initializes a new instance of <see cref="Position"></see> class
    /// </summary>
    /// <param name="xIndent">X coordinate value.</param>
    /// <param name="yIndent">Y coordinate value.</param>
    ASPOSE_PDF_SHARED_API Position(double xIndent, double yIndent);
    
    /// <summary>
    /// Determines whether the specified object is equal to the current <see cref="Position"></see> object. 
    /// </summary>
    /// <param name="obj">Object that is checked for equality.</param>
    /// <returns>True in case objects are equal.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Gets string representation for the current <see cref="Position"></see> object. 
    /// </summary>
    /// <returns>String representration of the Position object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
private:

    double xIndent;
    double yIndent;
    
    System::String ToString_NonConst();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


