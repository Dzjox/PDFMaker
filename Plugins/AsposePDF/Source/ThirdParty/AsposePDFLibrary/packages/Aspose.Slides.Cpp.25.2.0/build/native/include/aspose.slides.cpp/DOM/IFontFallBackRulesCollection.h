#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFontFallBackRule;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of FontFallBack rules, defined by user
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontFallBackRulesCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IFontFallBackRule>>
{
    typedef IFontFallBackRulesCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IFontFallBackRule>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontFallBackRule> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Add a new FallBack rule to the end of the collection.
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IFontFallBackRule> sourceRule) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IFontFallBackRule> targetRule) = 0;
    
};

} // namespace Slides
} // namespace Aspose


