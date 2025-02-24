#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IOleEmbeddedDataInfo.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace OdpSerialization
{
namespace PartParser
{
class OleObjectFrameOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrame;
namespace PptSerialization
{
class OleObjectPptSerialization;
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
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace DOM {

namespace Ole {

/// <summary>
/// Represents embedded data info for OLE object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS OleEmbeddedDataInfo : public Aspose::Slides::IOleEmbeddedDataInfo
{
    typedef OleEmbeddedDataInfo ThisType;
    typedef Aspose::Slides::IOleEmbeddedDataInfo BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::OleObjectFrameOdpDeserialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Ole::Ole10NativePPTXSerialization;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::OleObjectFramePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the file data of an embedded OLE object
    /// Read only <see cref="uint8_t"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_EmbeddedFileData() override;
    /// <summary>
    /// Returns the file extension for the current embedded OLE object
    /// Read only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_EmbeddedFileExtension() override;
    
    /// <summary>
    /// Creates new embedded data info for OLE object.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API OleEmbeddedDataInfo();
    /// <summary>
    /// Creates a new instance of an embedded data info for OLE object.
    /// <param name="embeddedFileData">File data of an embedded OLE object <see cref="uint8_t"></see>[].</param>
    /// <param name="embeddedFileExtension">File extension for the current embedded OLE object <see cref="System::String"></see>.</param>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API OleEmbeddedDataInfo(System::ArrayPtr<uint8_t> embeddedFileData, System::String embeddedFileExtension);
    
protected:

    /// @cond
    /// <summary>
    /// Returns the file data of an embedded OLE object
    /// Read only <see cref="uint8_t"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedFileData(System::ArrayPtr<uint8_t> value);
    /// <summary>
    /// Returns the file extension for the current embedded OLE object
    /// Read only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EmbeddedFileExtension(System::String value);
    /// @endcond
    
private:

    System::ArrayPtr<uint8_t> pr_EmbeddedFileData;
    System::String pr_EmbeddedFileExtension;
    
};

} // namespace Ole
} // namespace DOM
} // namespace Slides
} // namespace Aspose


