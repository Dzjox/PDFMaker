#pragma once

#include <system/string.h>
#include <system/collections/dictionary.h>
#include <DOM/IControlPropertiesCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Control;
namespace PptxSerialization
{
namespace PartParser
{
class ActiveXPartParser;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
template <typename> class IEnumerator;
template <typename, typename> class KeyValuePair;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// A collection of AcitveX properties.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ControlPropertiesCollection : public Aspose::Slides::IControlPropertiesCollection
{
    typedef ControlPropertiesCollection ThisType;
    typedef Aspose::Slides::IControlPropertiesCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Control;
    friend class Aspose::Slides::PptxSerialization::PartParser::ActiveXPartParser;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::Dictionary<System::String, System::String>;
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
    /// Returns the collection of properties names.
    /// Read-only <see cref="ICollection<string>"/>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_NamesOfProperties() override;
    /// <summary>
    /// Returns a number of properties in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Adds a property to the collection.
    /// </summary>
    /// <param name="name">The name of the property.</param>
    /// <param name="value">The alue of the property.</param>
    ASPOSE_SLIDES_SHARED_API void Add(System::String name, System::String value) override;
    /// <summary>
    /// Removes a property with the specified name.
    /// </summary>
    /// <param name="name">The name of property to remove.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::String name) override;
    
    /// <summary>
    /// Returns property.
    /// </summary>
    /// <param name="name">Name of property.</param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::String idx_get(System::String name) override;
    /// <summary>
    /// Sets property.
    /// </summary>
    /// <param name="name">Name of property.</param>
    /// <param name="value"></param>
    ASPOSE_SLIDES_SHARED_API void idx_set(System::String name, System::String value) override;
    
    /// <summary>
    /// Removes all properties.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::String>>> GetEnumerator() override;
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
    
protected:

    /// @cond
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> _items;
    
    ASPOSE_SLIDES_LOCAL_API ControlPropertiesCollection();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ControlPropertiesCollection, CODEPORTING_ARGS());
    
    virtual ASPOSE_SLIDES_SHARED_API ~ControlPropertiesCollection();
    
};

} // namespace Slides
} // namespace Aspose


