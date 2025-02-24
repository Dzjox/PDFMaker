#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/multicast_delegate.h>
#include <DOM/IHyperlinkQueries.h>
#include <DOM/IHyperlinkContainer.h>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
class Presentation;
class TextFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Provide easy access to contained hyperlinks.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HyperlinkQueries final : public Aspose::Slides::IHyperlinkQueries, public Aspose::Slides::IDOMObject
{
    typedef HyperlinkQueries ThisType;
    typedef Aspose::Slides::IHyperlinkQueries BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::TextFrame;
    /// @endcond
    
private:

    using HyperlinkContainerFilter = System::MulticastDelegate<bool(System::SharedPtr<IHyperlinkContainer>)>;
    
    
public:

    static bool _anonymous_method_0(System::SharedPtr<IHyperlinkContainer> x);
    /// <summary>
    /// Get all IHyperlinkContainer subobjects that contain not null HyperlinkClick.
    /// With given IHyperlinkContainer object you can manage its hyperlink (read, update or remove). See IHyperlinkContainer interface.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<IHyperlinkContainer>>> GetHyperlinkClicks() override;
    static bool _anonymous_method_1(System::SharedPtr<IHyperlinkContainer> x);
    /// <summary>
    /// Get all IHyperlinkContainer subobjects that contain not null HyperlinkMouseOver.
    /// With given IHyperlinkContainer object you can manage its hyperlink (read, update or remove). See IHyperlinkContainer interface.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<IHyperlinkContainer>>> GetHyperlinkMouseOvers() override;
    static bool _anonymous_method_2(System::SharedPtr<IHyperlinkContainer> x);
    /// <summary>
    /// Get all IHyperlinkContainer subobjects that contain not null HyperlinkMouseOver.
    /// With given IHyperlinkContainer object you can manage its hyperlink (read, update or remove). See IHyperlinkContainer interface.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<IHyperlinkContainer>>> GetAnyHyperlinks() override;
    /// <summary>
    /// Removes all contained HyperlinkClick and HyperlinkMouseOver hyperlinks (in all IHyperlinkContainer subobjects).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveAllHyperlinks() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API HyperlinkQueries(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HyperlinkQueries, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IHyperlinkContainer>>> SelectHyperlinkContainers(System::SharedPtr<System::Object> component, HyperlinkQueries::HyperlinkContainerFilter filter);
    
};

} // namespace Slides
} // namespace Aspose


