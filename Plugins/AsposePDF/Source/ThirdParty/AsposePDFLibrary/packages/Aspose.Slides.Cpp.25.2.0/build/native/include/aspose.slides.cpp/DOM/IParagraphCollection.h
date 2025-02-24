#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ITextToHtmlConversionOptions;
} // namespace Export
namespace Import
{
class IExternalResourceResolver;
} // namespace Import
class IParagraph;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of a paragraphs.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IParagraphCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::IParagraph>>, public Aspose::Slides::ISlideComponent
{
    typedef IParagraphCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::IParagraph>> BaseType;
    typedef Aspose::Slides::ISlideComponent BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraph> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a Paragraph to the end of collection.
    /// </summary>
    /// <param name="value">The Paragraph to be added to the end of the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IParagraph> value) = 0;
    /// <summary>
    /// Adds a content of ParagraphCollection to the end of collection.
    /// </summary>
    /// <param name="value">The ParagraphCollection to be added to the end of the collection.</param>
    /// <returns>The index at which the Paragraph has been added or -1 if there are nothing to add.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t Add(System::SharedPtr<IParagraphCollection> value) = 0;
    /// <summary>
    /// Inserts a Paragraph into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which Paragraph should be inserted.</param>
    /// <param name="value">The Paragraph to insert.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::SharedPtr<IParagraph> value) = 0;
    /// <summary>
    /// Inserts a content of ParagraphCollection into the collection at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index at which paragraphs should be inserted.</param>
    /// <param name="value">The paragraphs to insert.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Insert(int32_t index, System::SharedPtr<IParagraphCollection> value) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific paragraph.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> was successfully removed; otherwise, false.
    /// </returns>
    /// <param name="item">The paragraph to remove from collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Remove(System::SharedPtr<IParagraph> item) = 0;
    /// <summary>
    /// Adds text from specified html string to the collection.
    /// </summary>
    /// <param name="text">HTML text.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddFromHtml(System::String text) = 0;
    /// <summary>
    /// Adds text from specified html string to the collection.
    /// </summary>
    /// <param name="text">HTML text.</param>
    /// <param name="resolver">Resolver callback object which resolves URIs and fetches referrenced objects.</param>
    /// <param name="uri">URI for adding HTML document. Used for resolving relative links.</param>
    /// <remarks>Specifying resolver can potentially introduce a vulnurability. Use with caution.</remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddFromHtml(System::String text, System::SharedPtr<Import::IExternalResourceResolver> resolver, System::String uri) = 0;
    /// <summary>
    /// Converts specifying paragraphs to the HTML and returns it as String object.
    /// </summary>
    /// <param name="firstParagraphIndex">First paragraph index <see cref="int32_t"></see></param>
    /// <param name="paragraphsCount">Paragraph count <see cref="int32_t"></see></param>
    /// <param name="options">Convert options <see cref="Aspose::Slides::Export::ITextToHtmlConversionOptions">Export::ITextToHtmlConversionOptions</see></param>
    /// <returns>Generated HTML.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String ExportToHtml(int32_t firstParagraphIndex, int32_t paragraphsCount, System::SharedPtr<Export::ITextToHtmlConversionOptions> options) = 0;
    
};

} // namespace Slides
} // namespace Aspose


