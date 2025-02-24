#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Theme/IFillFormatCollection.h>

#include "DOM/Theme/Styles/FormatScheme.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class FormatSchemeTemplate;
class IFillFormat;
class MasterThemeTemplate;
namespace PptxSerialization
{
namespace PartParser
{
class FormatSchemePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace Theme
{
class IFillFormatCollectionEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents the collection of fill styles.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FillFormatCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Theme::FormatScheme>>, public Aspose::Slides::Theme::IFillFormatCollection
{
    typedef FillFormatCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Theme::FormatScheme>> BaseType;
    typedef Aspose::Slides::Theme::IFillFormatCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Theme::FormatScheme;
    friend class Aspose::Slides::PptxSerialization::PartParser::FormatSchemePPTXSerialization;
    friend class Aspose::Slides::FormatSchemeTemplate;
    friend class Aspose::Slides::MasterThemeTemplate;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IFillFormat>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Gets the number of elements actually contained in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IFillFormat>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IFillFormat>> array, int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::Event<void()> FillFormatCollectionChanged;
    
    ASPOSE_SLIDES_LOCAL_API FillFormatCollection(System::SharedPtr<FormatScheme> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FillFormatCollection, CODEPORTING_ARGS(System::SharedPtr<FormatScheme> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<FillFormatCollection> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IFillFormatCollectionEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IFillFormat> Add();
    ASPOSE_SLIDES_LOCAL_API void Clear();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~FillFormatCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IFillFormat>>> m_items;
    uint32_t m_version;
    uint32_t m_versionCache;
    
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnFillFormatCollectionChanged();
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


