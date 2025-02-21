#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/DataEditor/DictionaryEditor/ICosPdfPrimitive.h"
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
/// This class represents base public type <see cref="CosPdfPrimitive"></see>.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CosPdfPrimitive : public Aspose::Pdf::DataEditor::ICosPdfPrimitive
{
    typedef CosPdfPrimitive ThisType;
    typedef Aspose::Pdf::DataEditor::ICosPdfPrimitive BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::DataEditor::CosPdfDictionary;
    
public:

    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfNumber"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfNumber"></see> else <see cref="CosPdfNumber"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfNumber> ToCosPdfNumber() override;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfName"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfName"></see> else <see cref="CosPdfName"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfName> ToCosPdfName() override;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfString"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfString"></see> else <see cref="CosPdfString"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfString> ToCosPdfString() override;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfBoolean"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfBoolean"></see> else <see cref="CosPdfBoolean"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfBoolean> ToCosPdfBoolean() override;
    /// <summary>
    /// Tries cast this instance to <see cref="CosPdfDictionary"></see>.
    /// </summary>
    /// <returns>null if instance is not <see cref="CosPdfDictionary"></see> else <see cref="CosPdfDictionary"></see>.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CosPdfDictionary> ToCosPdfDictionary() override;
    
protected:

    /// <summary>
    /// Create data with internal classes.
    /// </summary>
    /// <param name="trailerable"></param>
    /// <returns>Returns instance of <see cref="IPdfPrimitive"></see>.</returns>
    virtual System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> CreateIPdfPrimitive(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) = 0;
    
};

} // namespace DataEditor
} // namespace Pdf
} // namespace Aspose


