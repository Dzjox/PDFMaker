#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/eventargs.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Contains additional information about OnSegmentChangedEvent that is delivered to listeners.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OnSegmentChangedEventArgs : public System::EventArgs
{
    typedef OnSegmentChangedEventArgs ThisType;
    typedef System::EventArgs BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentChanged() const;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentAfter() const;
    ASPOSE_PDF_SHARED_API int32_t get_InitialSegmentTextLength() const;
    
    ASPOSE_PDF_SHARED_API OnSegmentChangedEventArgs(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentChanged, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentAfter, int32_t _initialSegmentTextLength);
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentChanged;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentAfter;
    int32_t initialSegmentTextLength;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


