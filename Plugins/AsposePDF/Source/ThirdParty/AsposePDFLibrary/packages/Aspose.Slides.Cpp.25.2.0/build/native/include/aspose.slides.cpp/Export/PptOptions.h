#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/guid.h>
#include <Export/IPptOptions.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in PPT format.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PptOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IPptOptions
{
    typedef PptOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IPptOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
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
    ASPOSE_SLIDES_SHARED_API System::Guid get_RootDirectoryClsid() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RootDirectoryClsid(System::Guid value) override;
    
    ASPOSE_SLIDES_SHARED_API PptOptions();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPptOptions> Clone();
    /// @endcond
    
private:

    System::Guid m_rootDirectoryClsid;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


