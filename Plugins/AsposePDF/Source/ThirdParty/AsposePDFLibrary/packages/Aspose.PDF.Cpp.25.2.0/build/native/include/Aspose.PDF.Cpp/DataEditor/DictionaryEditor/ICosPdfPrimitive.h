#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace DataEditor
{
class CosPdfBoolean;
class CosPdfDictionary;
class CosPdfName;
class CosPdfNumber;
class CosPdfString;
} // namespace DataEditor
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace DataEditor {

/// <summary>
/// Interface for work with PDF data entity
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ICosPdfPrimitive : public virtual System::Object
{
    typedef ICosPdfPrimitive ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfName"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfName"></see> else <see cref="CosPdfName"></see>.</returns>
    virtual System::SharedPtr<CosPdfName> ToCosPdfName() = 0;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfString"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfString"></see> else <see cref="CosPdfString"></see>.</returns>
    virtual System::SharedPtr<CosPdfString> ToCosPdfString() = 0;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfBoolean"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfBoolean"></see> else <see cref="CosPdfBoolean"></see>.</returns>
    virtual System::SharedPtr<CosPdfBoolean> ToCosPdfBoolean() = 0;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfNumber"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfNumber"></see> else <see cref="CosPdfNumber"></see>.</returns>
    virtual System::SharedPtr<CosPdfNumber> ToCosPdfNumber() = 0;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfDictionary"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfDictionary"></see> else <see cref="CosPdfDictionary"></see>.</returns>
    virtual System::SharedPtr<CosPdfDictionary> ToCosPdfDictionary() = 0;
    
};

} // namespace DataEditor
} // namespace Pdf
} // namespace Aspose


