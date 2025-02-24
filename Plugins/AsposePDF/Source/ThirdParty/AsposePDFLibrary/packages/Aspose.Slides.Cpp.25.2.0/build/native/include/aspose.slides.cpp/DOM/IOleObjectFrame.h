#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGraphicalObject.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IOleEmbeddedDataInfo;
class IPictureFillFormat;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an OLE object on a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOleObjectFrame : public virtual Aspose::Slides::IGraphicalObject
{
    typedef IOleObjectFrame ThisType;
    typedef Aspose::Slides::IGraphicalObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns OleObject image fill properties object.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPictureFillFormat> get_SubstitutePictureFormat() = 0;
    /// <summary>
    /// Returns the name of an object.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ObjectName() = 0;
    /// <summary>
    /// Sets the name of an object.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ObjectName(System::String value) = 0;
    /// <summary>
    /// Gets information about OLE embedded data.
    /// Read only <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IOleEmbeddedDataInfo> get_EmbeddedData() = 0;
    /// <summary>
    /// Returns the ProgID of an object.
    /// Read olny <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ObjectProgId() = 0;
    /// <summary>
    /// Returns the ProgID of an object.
    /// Read olny <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ObjectProgId(System::String value) = 0;
    /// <summary>
    /// Returns the full path to a linked file. Short file name will be used.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkFileName() = 0;
    /// <summary>
    /// Returns the full path to a linked file. Long file name will be used.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkPathLong() = 0;
    /// <summary>
    /// Returns the full path to a linked file. Long file name will be used.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinkPathLong(System::String value) = 0;
    /// <summary>
    /// Returns the relative path to a linked file if present, otherwise returns an empty string.
    /// Readonly <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// In the Ppt presentations, some Ole object links may have a relative representation.
    /// </remarks>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"demo.ppt");
    /// 
    /// auto oleFrame = System::AsCast<Aspose::Slides::IOleObjectFrame>(presentation->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// 
    /// if (oleFrame != nullptr)
    /// {
    ///     System::Console::WriteLine(System::String(u"The relative path: ") + oleFrame->get_LinkPathRelative());
    /// }
    /// </code>
    /// </example> 
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LinkPathRelative() = 0;
    /// <summary>
    /// Returns the file name of embedded OLE object
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_EmbeddedFileLabel() = 0;
    /// <summary>
    /// Returns the path of embedded OLE object
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_EmbeddedFileName() = 0;
    /// <summary>
    /// Determines whether an object is visible as icon.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsObjectIcon() = 0;
    /// <summary>
    /// Determines whether an object is visible as icon.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsObjectIcon(bool value) = 0;
    /// <summary>
    /// Determines whether an object is linked to external file.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsObjectLink() = 0;
    /// <summary>
    /// Determines if the linked embedded object is automatically updated when the presentation is opened or printed.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UpdateAutomatic() = 0;
    /// <summary>
    /// Determines if the linked embedded object is automatically updated when the presentation is opened or printed.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UpdateAutomatic(bool value) = 0;
    /// <summary>
    /// Returns the title for OleObject icon.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// When IsObjectIcon == false this value is ignored.
    /// The string can be truncated according to the size of the OLE icon.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_SubstitutePictureTitle() = 0;
    /// <summary>
    /// Sets the title for OleObject icon.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// When IsObjectIcon == false this value is ignored.
    /// The string can be truncated according to the size of the OLE icon.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SubstitutePictureTitle(System::String value) = 0;
    
    /// <summary>
    /// Sets information about OLE embedded data.
    /// </summary>
    /// <remarks>
    /// This method changes the properties of the object to reflect the new data and 
    /// sets the IsObjectLink flag to false, indicating that the OLE object is embedded.
    /// </remarks>
    /// <param name="embeddedData">Embedded data <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see></param>
    /// <exception cref="System::ArgumentNullException">When embeddedData parameter is null.</exception>
    /// <example>
    /// Following example demonstrates how to change OLE embedded data
    /// and its type for existing <see cref="Aspose::Slides::IOleObjectFrame">IOleObjectFrame</see> object 
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    ///         
    /// System::SharedPtr<OleObjectFrame> oof = System::AsCast<Aspose::Slides::OleObjectFrame>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// if (oof != nullptr)
    /// {
    ///     System::SharedPtr<IOleEmbeddedDataInfo> newData = System::MakeObject<OleEmbeddedDataInfo>(System::IO::File::ReadAllBytes(u"Picture.png"), u"png");
    ///     oof->SetEmbeddedData(newData);
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetEmbeddedData(System::SharedPtr<IOleEmbeddedDataInfo> embeddedData) = 0;
    
};

} // namespace Slides
} // namespace Aspose


