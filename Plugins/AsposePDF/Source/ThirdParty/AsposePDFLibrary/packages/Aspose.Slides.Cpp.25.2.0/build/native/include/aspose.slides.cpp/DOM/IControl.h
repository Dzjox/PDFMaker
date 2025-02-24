#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IControlPropertiesCollection;
class IPictureFillFormat;
class IShapeFrame;
enum class PersistenceType;
} // namespace Slides
} // namespace Aspose
namespace System
{
class Guid;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an ActiveX control.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IControl : public Aspose::Slides::ISlideComponent
{
    typedef IControl ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the name of this control.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Returns the name of this control.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    /// <summary>
    /// Gets class id of this control.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Guid get_ClassId() = 0;
    /// <summary>
    /// Returns ControlEx image fill properties object.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureFillFormat> get_SubstitutePictureFormat() = 0;
    /// <summary>
    /// Returns control's frame.
    /// Read <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeFrame> get_Frame() = 0;
    /// <summary>
    /// Sets control's frame.
    /// Write <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Frame(System::SharedPtr<IShapeFrame> value) = 0;
    /// <summary>
    /// Returns a collection of ActiveX properties.
    /// Read-only <see cref="Aspose::Slides::IControlPropertiesCollection">IControlPropertiesCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IControlPropertiesCollection> get_Properties() = 0;
    /// <summary>
    /// Gets the method used to store properties of the ActiveX control.
    /// Read only <see cref="PersistenceType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API PersistenceType get_Persistence() = 0;
    /// <summary>
    /// Specifies the persistence of an ActiveX control when the method used to persist is either PersistStream, PersistStreamInit or PersistStorage.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_ActiveXControlBinary() = 0;
    
    /// <summary>
    /// Returns an ActiveX property at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Property(System::String name) = 0;
    /// <summary>
    /// Set an ActiveX property at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Property(System::String name, System::String value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


