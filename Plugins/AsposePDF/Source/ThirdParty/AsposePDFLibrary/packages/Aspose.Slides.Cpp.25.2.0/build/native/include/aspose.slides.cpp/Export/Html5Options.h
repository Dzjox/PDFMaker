#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Export/IHtml5Options.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class INotesCommentsLayoutingOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents a HTML5 exporting options.
/// </summary>
/// <example> Example:
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
/// 
/// auto options = System::MakeObject<Html5Options>();
/// options->set_AnimateShapes(true);
/// options->set_AnimateTransitions(true);
/// 
/// pres->Save(u"demo-animate-shapes-and-transitions.html", SaveFormat::Html5, options);
/// </code>
/// </example>    
class ASPOSE_SLIDES_SHARED_CLASS Html5Options : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IHtml5Options
{
    typedef Html5Options ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IHtml5Options BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Returns transitions animation option.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// auto options = System::MakeObject<Html5Options>();
    /// options->set_AnimateTransitions(true);
    /// 
    /// pres->Save(u"demo-animate-transitions.html", SaveFormat::Html5, options);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API bool get_AnimateTransitions() override;
    /// <summary>
    /// Sets transitions animation option.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// auto options = System::MakeObject<Html5Options>();
    /// options->set_AnimateTransitions(true);
    /// 
    /// pres->Save(u"demo-animate-transitions.html", SaveFormat::Html5, options);
    /// </code>
    /// </example>        
    ASPOSE_SLIDES_SHARED_API void set_AnimateTransitions(bool value) override;
    /// <summary>
    /// Returns shapes animation option.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// auto options = System::MakeObject<Html5Options>();
    /// options->set_AnimateShapes(true);
    /// 
    /// pres->Save(u"demo-animate-shapes.html", SaveFormat::Html5, options);
    /// </code>
    /// </example>            
    ASPOSE_SLIDES_SHARED_API bool get_AnimateShapes() override;
    /// <summary>
    /// Sets shapes animation option.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// auto options = System::MakeObject<Html5Options>();
    /// options->set_AnimateShapes(true);
    /// 
    /// pres->Save(u"demo-animate-shapes.html", SaveFormat::Html5, options);
    /// </code>
    /// </example>            
    ASPOSE_SLIDES_SHARED_API void set_AnimateShapes(bool value) override;
    /// <summary>
    /// Returns images embedding option. 
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_EmbedImages(false);
    /// pres->Save(u"demo-linked-images.html", SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API bool get_EmbedImages() override;
    /// <summary>
    /// Sets images embedding option. 
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_EmbedImages(false);
    /// pres->Save(u"demo-linked-images.html", SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_EmbedImages(bool value) override;
    /// <summary>
    /// Determines where external resources should be stored. 
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_EmbedImages(true);
    /// html5Options->set_OutputPath(u"the_desired_path");
    /// pres->Save(u"demo-linked-images.html", SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API System::String get_OutputPath() override;
    /// <summary>
    /// Determines where external resources should be stored. 
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_EmbedImages(true);
    /// html5Options->set_OutputPath(u"the_desired_path");
    /// pres->Save(u"demo-linked-images.html", SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_OutputPath(System::String value) override;
    /// <summary>
    /// Provides options that control how notes and comments is placed in exported document.
    /// Read <see cref="Aspose::Slides::Export::INotesCommentsLayoutingOptions">INotesCommentsLayoutingOptions</see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"test.pptx");
    /// 
    /// System::SharedPtr<NotesCommentsLayoutingOptions> notesCommentsLayoutingOptions = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// notesCommentsLayoutingOptions->set_NotesPosition(Aspose::Slides::Export::NotesPositions::BottomTruncated);
    /// 
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_OutputPath(u"test_pptx");
    /// html5Options->set_NotesCommentsLayouting(notesCommentsLayoutingOptions);
    /// 
    /// pres->Save(u"index.html", Aspose::Slides::Export::SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<INotesCommentsLayoutingOptions> get_NotesCommentsLayouting() override;
    /// <summary>
    /// Provides options that control how notes and comments is placed in exported document.
    /// Write <see cref="Aspose::Slides::Export::INotesCommentsLayoutingOptions">INotesCommentsLayoutingOptions</see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"test.pptx");
    /// 
    /// System::SharedPtr<NotesCommentsLayoutingOptions> notesCommentsLayoutingOptions = System::MakeObject<NotesCommentsLayoutingOptions>();
    /// notesCommentsLayoutingOptions->set_NotesPosition(Aspose::Slides::Export::NotesPositions::BottomTruncated);
    /// 
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_OutputPath(u"test_pptx");
    /// html5Options->set_NotesCommentsLayouting(notesCommentsLayoutingOptions);
    /// 
    /// pres->Save(u"index.html", Aspose::Slides::Export::SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    ASPOSE_SLIDES_SHARED_API void set_NotesCommentsLayouting(System::SharedPtr<INotesCommentsLayoutingOptions> value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Html5Options();
    
private:

    bool pr_EmbedImages;
    System::String pr_OutputPath;
    bool m_animateTransitions;
    bool m_animateShapes;
    System::SharedPtr<INotesCommentsLayoutingOptions> m_notesCommentsLayouting;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


