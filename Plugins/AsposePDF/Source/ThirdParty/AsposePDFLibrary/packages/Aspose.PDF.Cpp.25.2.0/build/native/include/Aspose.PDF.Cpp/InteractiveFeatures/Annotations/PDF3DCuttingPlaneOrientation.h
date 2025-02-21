#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Windows.Forms;
//using System.CodeDom;

#include <system/string.h>
#include <system/nullable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DCuttingPlaneOrientation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DCuttingPlaneOrientation : public System::Object
{
    typedef PDF3DCuttingPlaneOrientation ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the angle to X axis.
    /// </summary>
    /// <value>The angle to X axis.</value>
    ASPOSE_PDF_SHARED_API System::Nullable<double> get_AngleX() const;
    /// <summary>
    /// Sets the angle to X axis.
    /// </summary>
    /// <value>The angle to X axis.</value>
    ASPOSE_PDF_SHARED_API void set_AngleX(System::Nullable<double> value);
    /// <summary>
    /// Gets the angle to Y axis.
    /// </summary>
    /// <value>The angle Y axis.</value>
    ASPOSE_PDF_SHARED_API System::Nullable<double> get_AngleY() const;
    /// <summary>
    /// Sets the angle to Y axis.
    /// </summary>
    /// <value>The angle Y axis.</value>
    ASPOSE_PDF_SHARED_API void set_AngleY(System::Nullable<double> value);
    /// <summary>
    /// Gets the angle to Z axis.
    /// </summary>
    /// <value>The angle to Z axis.</value>
    ASPOSE_PDF_SHARED_API System::Nullable<double> get_AngleZ() const;
    /// <summary>
    /// Sets the angle to Z axis.
    /// </summary>
    /// <value>The angle to Z axis.</value>
    ASPOSE_PDF_SHARED_API void set_AngleZ(System::Nullable<double> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCuttingPlaneOrientation"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API PDF3DCuttingPlaneOrientation();
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCuttingPlaneOrientation"></see> class.
    /// </summary>
    /// <param name="angleX">The angle x.</param>
    /// <param name="angleY">The angle y.</param>
    /// <param name="angleZ">The angle z.</param>
    ASPOSE_PDF_SHARED_API PDF3DCuttingPlaneOrientation(System::Nullable<double> angleX, System::Nullable<double> angleY, System::Nullable<double> angleZ);
    
    /// <summary>
    /// Returns a <see cref="System::String"></see> that represents this instance.
    /// </summary>
    /// <returns>A <see cref="System::String"></see> that represents this instance.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
private:

    System::Nullable<double> _angleX;
    System::Nullable<double> _angleY;
    System::Nullable<double> _angleZ;
    
    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


