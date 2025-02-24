#pragma once
//Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/eventargs.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Paragraph;
class ParagraphCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Event arguments class for paragraph-related events.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ParagraphEventArgs : public System::EventArgs
{
    typedef ParagraphEventArgs ThisType;
    typedef System::EventArgs BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ParagraphCollection;
    /// @endcond
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Paragraph> get_Paragraph();
    
    ASPOSE_SLIDES_LOCAL_API ParagraphEventArgs(System::SharedPtr<Aspose::Slides::Paragraph> paragraph);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParagraphEventArgs, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Paragraph> paragraph));
    
private:

    System::SharedPtr<Aspose::Slides::Paragraph> m_paragraph;
    
};

} // namespace Slides
} // namespace Aspose


