#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <drawing/size_f.h>
#include <DOM/IOleObjectFrame.h>
#include <cstdint>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Ole
{
class OleEmbeddedDataInfo;
} // namespace Ole
} // namespace DOM
namespace Export
{
class VideoPlayerHtmlController;
} // namespace Export
class IDOMObject;
class IOleEmbeddedDataInfo;
class IPictureFillFormat;
namespace OdpSerialization
{
namespace PartParser
{
class OleObjectFrameOdpDeserialization;
class OleObjectFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrameLayout;
class PictureFillFormat;
namespace PptSerialization
{
class OleObjectPptSerialization;
class PictureFillFormatPPTSerialization;
class ShapePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Ole
{
class Ole10NativePPTXSerialization;
} // namespace Ole
class OleObjectFramePPTXSerialization;
class VmlDrawingPartParser;
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class OleObjectFramePPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class OleObjectFramePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an OLE object on a slide.
/// </summary>
/// <example>
/// The following example shows how to accessing OLE Object frames.
/// <code>
/// // Loads the PPTX to a presentation object
/// auto pres = System::MakeObject<Presentation>(u"AccessingOLEObjectFrame.pptx");
/// 
/// // Accesses the first slide
/// auto slide = pres->get_Slides()->idx_get(0);
/// // Casts the shape to OleObjectFrame
/// System::SharedPtr<OleObjectFrame> oleObjectFrame = System::AsCast<OleObjectFrame>(slide->get_Shapes()->idx_get(0));
/// // Reads the OLE Object and writes it to disk
/// if (oleObjectFrame != nullptr)
/// {
///     // Gets embedded file data
///     System::ArrayPtr<uint8_t> data = oleObjectFrame->get_EmbeddedData()->get_EmbeddedFileData();
///     // Gets embedded file extention
///     System::String fileExtention = oleObjectFrame->get_EmbeddedData()->get_EmbeddedFileExtension();
///     // Creates a path to save the extracted file
///     System::String extractedPath = System::String(u"excelFromOLE_out") + fileExtention;
///     // Saves extracted data
///     auto stream = System::MakeObject<System::IO::FileStream>(extractedPath,
///                                                              System::IO::FileMode::Create,
///                                                              System::IO::FileAccess::Write);
///     stream->Write(data, 0, data->get_Length());
/// }
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS OleObjectFrame : public Aspose::Slides::GraphicalObject, public Aspose::Slides::IOleObjectFrame
{
    typedef OleObjectFrame ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::IOleObjectFrame BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OleObjectFrameLayout;
    friend class Aspose::Slides::Export::VideoPlayerHtmlController;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpDeserialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Ole::Ole10NativePPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::OleObjectFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::VmlDrawingPartParser;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    friend class Aspose::Slides::PptSerialization::PictureFillFormatPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns OleObject image fill properties object.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFillFormat> get_SubstitutePictureFormat() override;
    /// <summary>
    /// Returns the title for OleObject icon.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// When IsObjectIcon == false this value is ignored.
    /// The string can be truncated according to the size of the Ole icon.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::String get_SubstitutePictureTitle() override;
    /// <summary>
    /// Sets the title for OleObject icon.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// When IsObjectIcon == false this value is ignored.
    /// The string can be truncated according to the size of the Ole icon.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_SubstitutePictureTitle(System::String value) override;
    /// <summary>
    /// Returns the name of an object.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ObjectName() override;
    /// <summary>
    /// Sets the name of an object.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ObjectName(System::String value) override;
    /// <summary>
    /// Returns the ProgID of an object.
    /// Read only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ObjectProgId() override;
    /// <summary>
    /// Returns the ProgID of an object.
    /// Read only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ObjectProgId(System::String value) override;
    /// <summary>
    /// Returns the full path to a linked file. Short file name will be used.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LinkFileName() override;
    /// <summary>
    /// Returns the full path to a linked file. Long file name will be used.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LinkPathLong() override;
    /// <summary>
    /// Returns the full path to a linked file. Long file name will be used.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinkPathLong(System::String value) override;
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
    ASPOSE_SLIDES_SHARED_API System::String get_LinkPathRelative() override;
    /// <summary>
    /// Returns the file name of embedded OLE object
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_EmbeddedFileLabel() override;
    /// <summary>
    /// Returns the path of embedded OLE object
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_EmbeddedFileName() override;
    /// <summary>
    /// Gets information about OLE embedded data.
    /// Read <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IOleEmbeddedDataInfo> get_EmbeddedData() override;
    /// <summary>
    /// Determines whether an object is visible as icon.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsObjectIcon() override;
    /// <summary>
    /// Determines whether an object is visible as icon.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsObjectIcon(bool value) override;
    /// <summary>
    /// Determines whether an object is linked to external file.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsObjectLink() override;
    /// <summary>
    /// Determines if the linked embedded object is automatically updated when the presentation is opened or printed.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UpdateAutomatic() override;
    /// <summary>
    /// Determines if the linked embedded object is automatically updated when the presentation is opened or printed.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UpdateAutomatic(bool value) override;
    
    /// <summary>
    /// Sets information about OLE embedded data.
    /// <remarks>
    /// This method changes the properties of the object to reflect the new data and 
    /// sets the IsObjectLink flag to false, indicating that the OLE object is embedded.
    /// </remarks>
    /// </summary>
    /// <param name="embeddedData">Embedded data <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see></param>
    /// <exception cref="System::ArgumentNullException">When embeddedData parameter is null.</exception>
    /// <example>
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
    ASPOSE_SLIDES_SHARED_API void SetEmbeddedData(System::SharedPtr<IOleEmbeddedDataInfo> embeddedData) override;
    
protected:

    /// @cond
    System::String m_linkPathLong;
    System::SharedPtr<PictureFillFormat> m_substituteImageFill;
    System::SharedPtr<PictureFillFormat> m_wmfImageFill;
    uint32_t m_currentPictureCRC;
    System::String m_substituteImageTitle;
    bool m_updateAutomatic;
    
    ASPOSE_SLIDES_LOCAL_API System::Drawing::SizeF get_EmbeddedControlSize() const;
    ASPOSE_SLIDES_LOCAL_API void set_EmbeddedControlSize(System::Drawing::SizeF value);
    ASPOSE_SLIDES_LOCAL_API bool get_SubstituteImageChanged();
    ASPOSE_SLIDES_LOCAL_API bool get_SubstituteImageTitleChanged() const;
    ASPOSE_SLIDES_LOCAL_API void set_SubstituteImageTitleChanged(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::OleObjectFramePPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::OleObjectFramePPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> get_ObjectData();
    ASPOSE_SLIDES_LOCAL_API void set_ObjectData(System::ArrayPtr<uint8_t> value);
    /// <summary>
    /// Returns the file name of embedded OLE object
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedFileLabel(System::String value);
    /// <summary>
    /// Returns the path of embedded OLE object
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedFileName(System::String value);
    /// <summary>
    /// Sets information about OLE embedded data.
    /// Write <see cref="Aspose::Slides::IOleEmbeddedDataInfo">IOleEmbeddedDataInfo</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedData(System::SharedPtr<IOleEmbeddedDataInfo> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DOM::Ole::OleEmbeddedDataInfo> get_EmbeddedDataInternal();
    ASPOSE_SLIDES_LOCAL_API void set_EmbeddedDataInternal(System::SharedPtr<DOM::Ole::OleEmbeddedDataInfo> value);
    ASPOSE_SLIDES_LOCAL_API bool get_IsExternal();
    ASPOSE_SLIDES_LOCAL_API void set_IsExternal(bool value);
    ASPOSE_SLIDES_LOCAL_API System::String get_MonikerDisplayName();
    ASPOSE_SLIDES_LOCAL_API void set_MonikerDisplayName(System::String value);
    
    ASPOSE_SLIDES_LOCAL_API OleObjectFrame(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OleObjectFrame, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PictureFillFormat> GetOleWmfImageFill();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~OleObjectFrame();
    
private:

    System::String m_name;
    System::String m_progId;
    System::String m_linkFileName;
    System::String m_embeddedFileName;
    System::String m_embeddedFileLabel;
    System::SharedPtr<DOM::Ole::OleEmbeddedDataInfo> m_embeddedData;
    bool m_showAsIcon;
    bool m_external;
    System::ArrayPtr<uint8_t> m_objectData;
    System::String m_monikerDisplayName;
    System::Drawing::SizeF pr_EmbeddedControlSize;
    bool pr_SubstituteImageTitleChanged;
    
    ASPOSE_SLIDES_LOCAL_API void RebuildObjectData();
    ASPOSE_SLIDES_LOCAL_API int32_t GetWmfEncodingCodePage();
    
};

} // namespace Slides
} // namespace Aspose


