#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the radical function, consisting of a base, and an optional degree.
/// Example of radical object is √𝑥.
/// </summary>
/// <example>Example:
/// <code>
/// auto radical = System::MakeObject<MathematicalText>(u"x")->Radical(u"3");
/// // cube root
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathRadical : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathRadical ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathematicalText>(u"x")->Radical(u"3"); // cube root
    /// auto baseElem = radical->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Degree argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathematicalText>(u"x")->Radical(u"3"); // cube root
    /// auto degreeElem = radical->get_Degree();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Degree() = 0;
    /// <summary>
    /// Hide degree
    /// When is true, the degree is not shown, as in √𝑥
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathematicalText>(u"x")->Radical(u"3"); // cube root
    /// radical->set_HideDegree(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideDegree() = 0;
    /// <summary>
    /// Hide degree
    /// When is true, the degree is not shown, as in √𝑥
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathematicalText>(u"x")->Radical(u"3"); // cube root
    /// radical->set_HideDegree(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideDegree(bool value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


