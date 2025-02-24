#pragma once
//Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class Guid;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in PPT format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPptOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IPptOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents the object class GUID (CLSID) that is stored in the root directory entry. Can be used for COM
    /// activation of the document's application.
    /// The default value is '64818D11-4F9B-11CF-86EA-00AA00B929E8' that corresponds to 'Microsoft Powerpoint.Slide.8'.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<PptOptions> pptOptions = System::MakeObject<PptOptions>();
    /// 
    /// /// set CLSID to 'Microsoft Powerpoint.Show.8'
    /// pptOptions->set_RootDirectoryClsid(System::Guid(u"64818D10-4F9B-11CF-86EA-00AA00B929E8"));
    /// 
    /// pres->Save(u"pres.ppt", Aspose::Slides::Export::SaveFormat::Ppt, pptOptions);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Guid get_RootDirectoryClsid() = 0;
    /// <summary>
    /// Represents the object class GUID (CLSID) that is stored in the root directory entry. Can be used for COM
    /// activation of the document's application.
    /// The default value is '64818D11-4F9B-11CF-86EA-00AA00B929E8' that corresponds to 'Microsoft Powerpoint.Slide.8'.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<PptOptions> pptOptions = System::MakeObject<PptOptions>();
    /// 
    /// /// set CLSID to 'Microsoft Powerpoint.Show.8'
    /// pptOptions->set_RootDirectoryClsid(System::Guid(u"64818D10-4F9B-11CF-86EA-00AA00B929E8"));
    /// 
    /// pres->Save(u"pres.ppt", Aspose::Slides::Export::SaveFormat::Ppt, pptOptions);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RootDirectoryClsid(System::Guid value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


