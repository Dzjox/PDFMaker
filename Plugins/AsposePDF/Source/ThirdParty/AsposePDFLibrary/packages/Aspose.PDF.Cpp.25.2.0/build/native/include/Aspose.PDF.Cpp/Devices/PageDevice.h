#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Devices/Device.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class PdfConverter;
} // namespace Facades
class Page;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Graphics;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Abstract class for all devices which is used to process certain page the pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageDevice : public Aspose::Pdf::Devices::Device
{
    typedef PageDevice ThisType;
    typedef Aspose::Pdf::Devices::Device BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfConverter;
    
public:

    /// <summary>
    /// Perfoms some operation on the given page, e.g. converts page into graphic image.
    /// </summary>
    /// <param name="page">
    /// The page to process.
    /// </param>
    /// <param name="output">
    /// This stream contains the results of processing.
    /// </param>
    virtual ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output) = 0;
    /// <summary>
    /// Perfoms some operation on the given page and saves results into the file.
    /// </summary>
    /// <param name="page">
    /// The page to process.
    /// </param>
    /// <param name="outputFileName">
    /// This file contains the results of processing.
    /// </param>
    ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::String outputFileName);
    
protected:

    /// <summary>
    /// renders page on the graphics
    /// </summary>
    /// <param name="page"></param>
    /// <param name="gr"></param>
    virtual ASPOSE_PDF_SHARED_API void Process(System::SharedPtr<Page> page, System::SharedPtr<System::Drawing::Graphics> gr);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


