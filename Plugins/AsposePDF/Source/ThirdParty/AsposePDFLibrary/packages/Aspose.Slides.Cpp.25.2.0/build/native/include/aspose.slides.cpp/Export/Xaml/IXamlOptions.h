#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
namespace Xaml
{
class IXamlOutputSaver;
} // namespace Xaml
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

namespace Xaml {

/// <summary>
/// Options that control how a XAML document is saved.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
/// options->set_ExportHiddenSlides(true);
/// 
/// pres->Save(options);
/// </code>
/// </example>    
class ASPOSE_SLIDES_API_SHARED_CLASS IXamlOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IXamlOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
    /// options->set_ExportHiddenSlides(true);
    /// 
    /// pres->Save(options);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ExportHiddenSlides() = 0;
    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
    /// options->set_ExportHiddenSlides(true);
    /// 
    /// pres->Save(options);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ExportHiddenSlides(bool value) = 0;
    /// <summary>
    /// Represents an implementation of IOutputSaver interface.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IXamlOutputSaver> get_OutputSaver() = 0;
    /// <summary>
    /// Represents an implementation of IOutputSaver interface.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OutputSaver(System::SharedPtr<IXamlOutputSaver> value) = 0;
    
};

} // namespace Xaml
} // namespace Export
} // namespace Slides
} // namespace Aspose


