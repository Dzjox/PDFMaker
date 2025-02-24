#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/ICustomData.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Background;
class BaseSlide;
class CustomXmlPartCollection;
class ICustomXmlPart;
class ICustomXmlPartCollection;
class ITagCollection;
namespace PptSerialization
{
class CustomerDatasPPTSerialization;
} // namespace PptSerialization
class Presentation;
class Shape;
class TagCollection;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class CustomerDatasPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
} // namespace UnsupportedProps
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
/// Represents container for custom data.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CustomData : public Aspose::Slides::ICustomData, public Aspose::Slides::IDOMObject
{
    typedef CustomData ThisType;
    typedef Aspose::Slides::ICustomData BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::Background;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::CustomerDatasPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the Customer Data Tags collection.
    /// Read-only <see cref="Aspose::Slides::ITagCollection">ITagCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITagCollection> get_Tags() override;
    /// <summary>
    /// Returns the custom xml parts collection.
    /// Read-only <see cref="Aspose::Slides::ICustomXmlPartCollection">ICustomXmlPartCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomXmlPartCollection> get_CustomXmlParts() override;
    
    /// <summary>
    /// Returns the Customer Data Tag specified at the index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Tag(System::String name) override;
    /// <summary>
    /// Set the Customer Data Tag specified at the index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Tag(System::String name, System::String value) override;
    /// <summary>
    /// Returns the custom XML part at the specified index.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">
    /// Index is less than 0 or index is equal or great than length of get_CustomXmlParts()
    /// </exception>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomXmlPart> get_CustomXmlPart(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::CustomerDatasPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API CustomData(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CustomData, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~CustomData();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::SharedPtr<TagCollection> m_tags;
    System::SharedPtr<CustomXmlPartCollection> m_customXmls;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::CustomerDatasPPTUnsupportedProps> m_pptUnsupportedProps;
    
};

} // namespace Slides
} // namespace Aspose


