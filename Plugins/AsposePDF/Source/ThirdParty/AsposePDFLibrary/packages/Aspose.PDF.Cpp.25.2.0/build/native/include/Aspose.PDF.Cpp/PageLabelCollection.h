#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
class NumberTree;
class PageLabel;
namespace Tests
{
class RegressionTests_v24_07;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represeingting page label collection. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageLabelCollection : public System::Object
{
    typedef PageLabelCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_07;
    
public:

    /// <summary>
    /// Gets page label by page index (page index is started from 0).
    /// </summary>
    /// <param name="pageIndex">Index of the page.</param>
    /// <returns>Page label for specified page index or null if page label does not exist.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageLabel> GetLabel(int32_t pageIndex);
    /// <summary>
    /// Update label for given page index (page index is started from 0).
    /// </summary>
    /// <param name="pageIndex">Index of page to change lable of the page.</param>
    /// <param name="pageLabel">New label of the page.</param>
    ASPOSE_PDF_SHARED_API void UpdateLabel(int32_t pageIndex, System::SharedPtr<PageLabel> pageLabel);
    /// <summary>
    /// Remove label by page index (page index is started from 0).
    /// </summary>
    /// <param name="pageIndex">Index of page where label must be deleted.</param>
    /// <returns>true if operation was executed successfully.</returns>
    ASPOSE_PDF_SHARED_API bool RemoveLabel(int32_t pageIndex);
    /// <summary>
    /// Gets page indexes in collection.
    /// </summary>
    /// <returns>Array of integers which contains indexes of the pages.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> GetPages();
    
protected:

    /// <summary>
    /// Gets the "PageLabels" entry from the document catalog.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_Root();
    
    PageLabelCollection(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageLabelCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict));
    /// <summary>
    /// Initializes root if it's not initialized yet.
    /// </summary>
    void AssertRoot();
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<Aspose::Pdf::NumberTree> _numberTree;
    
    System::SharedPtr<Aspose::Pdf::NumberTree> get_NumberTree();
    
    void InitializeRoot();
    
};

} // namespace Pdf
} // namespace Aspose


