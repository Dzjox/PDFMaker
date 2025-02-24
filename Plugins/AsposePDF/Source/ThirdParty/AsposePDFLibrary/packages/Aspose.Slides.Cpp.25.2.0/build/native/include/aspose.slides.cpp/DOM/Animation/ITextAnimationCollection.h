#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class ITextAnimation;
} // namespace Animation
class IShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represents collection of text animations.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextAnimationCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Animation::ITextAnimation>>
{
    typedef ITextAnimationCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Animation::ITextAnimation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns element by index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextAnimation> idx_get(int32_t index) = 0;
    /// <summary>
    /// Returns all elements 
    /// </summary>
    /// <param name="shape"></param>
    /// <returns></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ITextAnimation>> idx_get(System::SharedPtr<IShape> shape) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


