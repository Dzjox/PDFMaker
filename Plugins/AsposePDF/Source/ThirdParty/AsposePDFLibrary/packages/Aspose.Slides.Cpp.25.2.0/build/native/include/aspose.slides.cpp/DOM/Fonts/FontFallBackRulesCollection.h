#pragma once
//Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IFontFallBackRulesCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class FontFallBackRule;
class FontsManagerInternal;
class IFontFallBackRule;
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

/// <summary>
/// Represents a collection of FontFallBack rules, defined by user
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontFallBackRulesCollection : public Aspose::Slides::IFontFallBackRulesCollection
{
    typedef FontFallBackRulesCollection ThisType;
    typedef Aspose::Slides::IFontFallBackRulesCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::FontFallBackRule;
    friend class Aspose::Slides::FontsManagerInternal;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IFontFallBackRule>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
protected:

    /// @cond
    using UserDataChangedAction = System::MulticastDelegate<void()>;
    
    /// @endcond
    
public:

    /// <summary>
    /// Gets the number of rules actually contained in the collection.
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
    /// Add a specified FallBack rule to the end of the collection.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// //Getting of empty or preinitialized rules collection from FontsManager
    /// auto rulesList = pres->get_FontsManager()->get_FontFallBackRulesCollection();
    /// //Adding of new rule to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// </code>
    /// </example>
    /// <param name="sourceRule">Specified rule for adding</param>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IFontFallBackRule> sourceRule) override;
    /// <summary>
    /// Removes the first occurrence of a specific FallBack rule from the collection.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// //Getting of empty or preinitialized rules collection from FontsManager
    /// auto rulesList = pres->get_FontsManager()->get_FontFallBackRulesCollection();
    /// //Adding of several rules to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho"));
    /// //Retrieving of object of the first rule in collection
    /// auto firstRule = rulesList->idx_get(0);
    /// //Removing
    /// rulesList->Remove(firstRule);
    /// </code>
    /// </example>
    /// <param name="targetRule">The rule to remove from the collection.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IFontFallBackRule> targetRule) override;
    
    /// <summary>
    /// Gets the rule at the specified index.
    /// Read-only <see cref="Aspose::Slides::IFontFallBackRule">IFontFallBackRule</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// //Getting of empty or preinitialized rules collection from FontsManager
    /// auto rulesList = pres->get_FontsManager()->get_FontFallBackRulesCollection();
    /// //Adding of several rules to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho"));
    /// //Retrieving of object of the first rule in collection
    /// auto firstRule = rulesList->idx_get(0);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFontFallBackRule> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IFontFallBackRule>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IFontFallBackRule>> array, int32_t index) override;
    
    ASPOSE_SLIDES_SHARED_API FontFallBackRulesCollection();
    
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
    ASPOSE_SLIDES_LOCAL_API void UserDataWasChanged();
    ASPOSE_SLIDES_LOCAL_API void SetDataChangedAction(FontFallBackRulesCollection::UserDataChangedAction targetAction);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~FontFallBackRulesCollection();
    
private:

    FontFallBackRulesCollection::UserDataChangedAction m_dataChangedAction;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IFontFallBackRule>>> m_fontFallBackRules;
    
};

} // namespace Slides
} // namespace Aspose


