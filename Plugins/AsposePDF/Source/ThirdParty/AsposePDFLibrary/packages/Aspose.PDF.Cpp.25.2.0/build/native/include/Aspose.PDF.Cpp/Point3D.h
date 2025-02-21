#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent point with fractional coordinates.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Point3D final : public System::Object
{
    typedef Point3D ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// X coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Z coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Z() const;
    /// <summary>
    /// Z coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Z(double value);
    /// <summary>
    /// Gets point with zero coordinates.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Point3D> get_Trivial();
    
    /// <summary>
    /// Initializes new instance of the <see cref="Point3D"></see>.
    /// </summary>
    /// <param name="x">
    /// x coordinate value.
    /// </param>
    /// <param name="y">
    /// y coordinate value.
    /// </param>
    /// <param name="z">
    /// z coordinate value.
    /// </param>
    ASPOSE_PDF_SHARED_API Point3D(double x, double y, double z);
    
    /// <summary>        
    /// Returns the string representation of the object.
    /// </summary>
    /// <returns>The string value</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
private:

    double x, y, z;
    
    System::String ToString_NonConst();
    
};

} // namespace Pdf
} // namespace Aspose


