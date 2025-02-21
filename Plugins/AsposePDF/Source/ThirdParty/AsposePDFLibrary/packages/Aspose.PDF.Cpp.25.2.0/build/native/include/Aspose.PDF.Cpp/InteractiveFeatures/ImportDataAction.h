#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class FileSpecification;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Upon invocation of an import-data action, Forms Data Format (FDF) data shall be imported into the document's interactive form from a specified file.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImportDataAction : public Aspose::Pdf::Annotations::PdfAction
{
    typedef ImportDataAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// The FDF file from which to import the data.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> get_Data();
    /// <summary>
    /// The FDF file from which to import the data.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Data(System::SharedPtr<FileSpecification> value);
    
protected:

    ImportDataAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ImportDataAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    
private:

    System::SharedPtr<FileSpecification> _dataFile;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


