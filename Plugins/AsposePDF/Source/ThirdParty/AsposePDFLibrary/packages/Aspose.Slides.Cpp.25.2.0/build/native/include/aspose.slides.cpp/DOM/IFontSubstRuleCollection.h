#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFontSubstRule;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents collection of fonts substitution.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontSubstRuleCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IFontSubstRule>>
{
    typedef IFontSubstRuleCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IFontSubstRule>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontSubstRule> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds the new font substitution rule to the collection
    /// </summary>
    /// <param name="value">Font substitution rule <see cref="Aspose::Slides::IFontSubstRule">IFontSubstRule</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IFontSubstRule> value) = 0;
    /// <summary>
    /// Removes the first occurrence of a specific object from the collection.
    /// </summary>
    /// <param name="value">The module to remove from the collection.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IFontSubstRule> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


