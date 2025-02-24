#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ITab.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class TabAlignment;
class TabCollection;
class TabEffectiveData;
class TabImpl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a tabulation for a text.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Tab final : public Aspose::Slides::PVIObject, public Aspose::Slides::ITab
{
    typedef Tab ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ITab BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::TabCollection;
    /// @endcond
    
public:

    /// <summary>
    /// Returns position of a tab.
    /// Assigning this property can change tab's index in collection and invalidate Enumerator.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Position() override;
    /// <summary>
    /// Sets position of a tab.
    /// Assigning this property can change tab's index in collection and invalidate Enumerator.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Position(double value) override;
    /// <summary>
    /// Returns align style of a tab.
    /// Read <see cref="TabAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TabAlignment get_Alignment() override;
    /// <summary>
    /// Sets align style of a tab.
    /// Write <see cref="TabAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Alignment(TabAlignment value) override;
    
    /// <summary>
    /// Creates new Tab
    /// </summary>
    /// <param name="position">Tab position.</param>
    /// <param name="align">Align.</param>
    ASPOSE_SLIDES_SHARED_API Tab(double position, TabAlignment align);
    
    /// <summary>
    /// Compares the current instance with another object of the same type.
    /// </summary>
    /// <param name="obj">An object to compare with this instance.</param>
    /// <returns>A 32-bit integer that indicates the relative order of the comparands.
    /// The return value has these meanings:
    /// <UL>
    /// <LI> &lt; 0 - This instance is less than obj.</LI>
    /// <LI> = 0 - This instance is equal to obj.</LI>
    /// <LI> &gt; 0 - This instance is greater than obj.</LI>
    /// </UL>
    /// </returns>
    /// 
    ASPOSE_SLIDES_SHARED_API int32_t CompareTo(System::SharedPtr<ITab> obj) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TabImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TabEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<TabCollection> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Tab();
    
};

} // namespace Slides
} // namespace Aspose


