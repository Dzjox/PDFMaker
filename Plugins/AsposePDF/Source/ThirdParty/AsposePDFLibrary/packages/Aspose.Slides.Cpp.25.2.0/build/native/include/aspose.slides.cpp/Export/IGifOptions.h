#pragma once

#include <cstdint>

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Drawing
{
class Size;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents GIF exporting options.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGifOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IGifOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets frame size.
    /// </summary>
    /// <remarks>If the size is empty then the value will be taken from <see cref="IPresentation::get_SlideSize"></see></remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Size get_FrameSize() = 0;
    /// <summary>
    /// Sets frame size.
    /// </summary>
    /// <remarks>If the size is empty then the value will be taken from <see cref="IPresentation::get_SlideSize"></see></remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FrameSize(System::Drawing::Size value) = 0;
    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// The default value is false. 
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_ExportHiddenSlides(false);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>  
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ExportHiddenSlides() = 0;
    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// The default value is false. 
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_ExportHiddenSlides(false);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>  
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ExportHiddenSlides(bool value) = 0;
    /// <summary>
    /// Gets transition FPS [frames/sec]
    /// The default value is 25.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    ///         
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_TransitionFps(60);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>          
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_TransitionFps() = 0;
    /// <summary>
    /// Sets transition FPS [frames/sec]
    /// The default value is 25.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    ///         
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_TransitionFps(60);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>          
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TransitionFps(int32_t value) = 0;
    /// <summary>
    /// Gets default delay time [ms]. This value will be used if the <see cref="ISlideShowTransition::set_AdvanceAfterTime()"></see> method was not called.
    /// The default value is 1000.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_DefaultDelay(2000);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_DefaultDelay() = 0;
    /// <summary>
    /// Sets default delay time [ms]. This value will be used if the <see cref="ISlideShowTransition::set_AdvanceAfterTime()"></see> method was not called.
    /// The default value is 1000.
    /// </summary>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// auto gifOptions = System::MakeObject<GifOptions>();
    /// gifOptions->set_DefaultDelay(2000);
    /// pres->Save(u"pres.gif", SaveFormat::Gif, gifOptions);
    /// </code>
    /// </example>        
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultDelay(int32_t value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


