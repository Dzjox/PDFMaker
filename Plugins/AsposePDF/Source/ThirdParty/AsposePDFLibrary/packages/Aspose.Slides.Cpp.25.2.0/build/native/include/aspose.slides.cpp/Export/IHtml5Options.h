#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

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
namespace System
{
class String;
} // namespace System
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
class ASPOSE_SLIDES_API_SHARED_CLASS IHtml5Options : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IHtml5Options ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AnimateTransitions() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AnimateTransitions(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AnimateShapes() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AnimateShapes(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EmbedImages() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EmbedImages(bool value) = 0;
    /// <summary>
    /// Determines where external resources should be stored. 
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_EmbedImages(false);
    /// html5Options->set_OutputPath(u"the_desired_path");
    /// pres->Save(u"demo-linked-images.html", SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_OutputPath() = 0;
    /// <summary>
    /// Determines where external resources should be stored. 
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<Html5Options> html5Options = System::MakeObject<Html5Options>();
    /// html5Options->set_EmbedImages(false);
    /// html5Options->set_OutputPath(u"the_desired_path");
    /// pres->Save(u"demo-linked-images.html", SaveFormat::Html5, html5Options);
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OutputPath(System::String value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<INotesCommentsLayoutingOptions> get_NotesCommentsLayouting() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NotesCommentsLayouting(System::SharedPtr<INotesCommentsLayoutingOptions> value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


