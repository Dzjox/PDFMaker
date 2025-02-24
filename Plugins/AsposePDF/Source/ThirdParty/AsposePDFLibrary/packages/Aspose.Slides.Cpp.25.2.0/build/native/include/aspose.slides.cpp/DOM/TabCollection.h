#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/ITabCollection.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITab;
class ParagraphFormat;
class ParagraphFormatImpl;
namespace PptSerialization
{
class TextFramePPTSerialization;
class TextStylePPTSerialization;
} // namespace PptSerialization
class Tab;
enum class TabAlignment;
class TabImpl;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
template <typename, typename> class SortedList;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of tabs.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TabCollection final : public Aspose::Slides::ITabCollection, public Aspose::Slides::IDOMObject
{
    typedef TabCollection ThisType;
    typedef Aspose::Slides::ITabCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::TabImpl;
    friend class Aspose::Slides::ParagraphFormat;
    friend class Aspose::Slides::Tab;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextStylePPTSerialization;
    /// @endcond
    
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
    /// Read-only <see cref="Aspose::Slides::Tab">Tab</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITab> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds a Tab to the collection.
    /// </summary>
    /// <returns>Added tab.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITab> Add(double position, TabAlignment align) override;
    /// <summary>
    /// Adds a Tab to the collection.
    /// </summary>
    /// <param name="value">The Tab object to be added at the end of the collection.</param>
    /// <returns>The index at which the tab was added.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t Add(System::SharedPtr<ITab> value) override;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Determines whether two TabsEx instances are equal.
    /// </summary>
    /// <param name="obj">The TabsEx to compare with the current TabsEx.</param>
    /// <returns><b>true</b> if the specified TabsEx is equal to the current TabsEx; otherwise, <b>false</b>.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns hash code for this object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ITab>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<ITab>> array, int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version();
    
    System::SharedPtr<System::Collections::Generic::SortedList<double, System::SharedPtr<ITab>>> m_tabs;
    uint32_t m_version;
    
    ASPOSE_SLIDES_LOCAL_API TabCollection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TabCollection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void RemoveAtPosition(double position);
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<TabCollection> tabs);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TabCollection();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
};

} // namespace Slides
} // namespace Aspose


