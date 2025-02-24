#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathSubscriptElementFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class IMathSubscriptElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create IMathSubscriptElement
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathSubscriptElementFactory : public Aspose::Slides::MathText::IMathSubscriptElementFactory
{
    typedef MathSubscriptElementFactory ThisType;
    typedef Aspose::Slides::MathText::IMathSubscriptElementFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates IMathSubscriptElement
    /// </summary>
    /// <param name="baseArg">Base argument to apply indexe</param>
    /// <param name="subScript">lower right index</param>
    /// <returns>new IMathSubscriptElement</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathSubscriptElement> CreateMathSubscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


