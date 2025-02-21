#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/BaseActionCollection.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PdfAction;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class describes page actions
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageActionCollection : public Aspose::Pdf::BaseActionCollection
{
    typedef PageActionCollection ThisType;
    typedef Aspose::Pdf::BaseActionCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// An action that shall be performed when the page is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::PdfAction> get_OnOpen();
    /// <summary>
    /// An action that shall be performed when the page is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnOpen(System::SharedPtr<Annotations::PdfAction> value);
    /// <summary>
    /// An action that shall be performed when the page is closed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotations::PdfAction> get_OnClose();
    /// <summary>
    /// An action that shall be performed when the page is closed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnClose(System::SharedPtr<Annotations::PdfAction> value);
    
protected:

    PageActionCollection(System::SharedPtr<Engine::Data::IPdfObject> pageDictionary);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageActionCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfObject> pageDictionary));
    
};

} // namespace Pdf
} // namespace Aspose


