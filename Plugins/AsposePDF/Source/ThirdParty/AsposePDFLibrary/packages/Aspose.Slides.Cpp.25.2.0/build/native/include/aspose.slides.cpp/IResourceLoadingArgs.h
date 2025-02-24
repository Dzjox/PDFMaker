#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Interface for external resource loading arguments.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IResourceLoadingArgs : public virtual System::Object
{
    typedef IResourceLoadingArgs ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Original URI of the resource as specified in imported presentation. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_OriginalUri() = 0;
    /// <summary>
    /// URI of the resource which is used for downloading if <see cref="Aspose::Slides::IResourceLoadingCallback::ResourceLoading">IResourceLoadingCallback::ResourceLoading()</see> 
    /// returns <see cref="ResourceLoadingAction::Default"></see>. 
    /// Initially it's set to original URI of the resource, but can be redefined to any value.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Uri() = 0;
    /// <summary>
    /// URI of the resource which is used for downloading if <see cref="Aspose::Slides::IResourceLoadingCallback::ResourceLoading">IResourceLoadingCallback::ResourceLoading()</see> 
    /// returns <see cref="ResourceLoadingAction::Default"></see>. 
    /// Initially it's set to original URI of the resource, but can be redefined to any value.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Uri(System::String value) = 0;
    
    /// <summary>
    /// Sets user provided data of the resource which used if <see cref="Aspose::Slides::IResourceLoadingCallback::ResourceLoading">IResourceLoadingCallback::ResourceLoading()</see> 
    /// returns <see cref="ResourceLoadingAction::UserProvided"></see>. 
    /// </summary>
    /// <param name="data">Provided data of the resource <see cref="uint8_t"></see>[]</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetData(System::ArrayPtr<uint8_t> data) = 0;
    
};

} // namespace Slides
} // namespace Aspose


