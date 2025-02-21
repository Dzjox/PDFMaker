#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Addressing
{
class Registrar;
} // namespace Addressing
namespace IO
{
namespace SaveStrategies
{
class LinearizedSaveStrategy;
} // namespace SaveStrategies
} // namespace IO
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

class Details_ObjectReferenceCorruptedException;
using ObjectReferenceCorruptedException = System::ExceptionWrapper<Details_ObjectReferenceCorruptedException>;

/// <summary>
/// Represents an exception that is thrown when an object reference
/// in a PDF document is found to be corrupted. That means there is no object pointed to by the link.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_ObjectReferenceCorruptedException : public Aspose::Pdf::Details_PdfException
{
    typedef Details_ObjectReferenceCorruptedException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Addressing::Registrar;
    friend class Aspose::Pdf::Engine::IO::SaveStrategies::LinearizedSaveStrategy;
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    /// Indicates whether an attempt can be made to repair a corrupted reference.
    /// reference in a PDF document.
    /// </summary>
    bool CanTryRepair;
    
    /// <summary>
    /// Creates an instance of <see cref="ObjectReferenceCorruptedException"></see> class.
    /// </summary>
    /// <param name="objectId">The id of object.</param>
    /// <param name="generationNumber">The generation of object.</param>
    /// <param name="inner">The inner exception.</param>
    /// <param name="canTryRepair">If we can try repair reference table.</param>
    Details_ObjectReferenceCorruptedException(int32_t objectId, int32_t generationNumber, PdfException inner, bool canTryRepair);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_ObjectReferenceCorruptedException, CODEPORTING_ARGS(int32_t objectId, int32_t generationNumber, PdfException inner, bool canTryRepair));
    /// <summary>
    /// Creates an instance of <see cref="ObjectReferenceCorruptedException"></see> class based on the objectId, generationNumber, and repairable status.
    /// </summary>
    /// <param name="objectId">The id of the object.</param>
    /// <param name="generationNumber">The generation number of the object.</param>
    /// <param name="canTryRepaired">Specifies if the reference table can be repaired.</param>
    /// <returns>A new instance of <see cref="ObjectReferenceCorruptedException"></see> exception.</returns>
    static ObjectReferenceCorruptedException CreateObjectReferenceCorruptedException(int32_t objectId, int32_t generationNumber, bool canTryRepaired);
    
};

} // namespace Pdf
} // namespace Aspose


