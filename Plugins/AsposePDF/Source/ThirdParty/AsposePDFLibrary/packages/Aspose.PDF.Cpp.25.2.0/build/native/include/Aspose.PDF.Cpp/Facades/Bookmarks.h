#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/details/pointer_collection_helpers.h>
#include <system/collections/list.h>

#include "Aspose.PDF.Cpp/Facades/Bookmark.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class OutlineItemCollection;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a collection of <see cref="Bookmark"></see> objects.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Bookmarks final : public System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Facades::Bookmark>>
{
    typedef Bookmarks ThisType;
    typedef System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Facades::Bookmark>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Bookmark;
    
public:

    ASPOSE_PDF_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    static System::SharedPtr<Bookmarks> Create(System::SharedPtr<OutlineItemCollection> itemCollection);
    
    virtual ASPOSE_PDF_SHARED_API ~Bookmarks();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


