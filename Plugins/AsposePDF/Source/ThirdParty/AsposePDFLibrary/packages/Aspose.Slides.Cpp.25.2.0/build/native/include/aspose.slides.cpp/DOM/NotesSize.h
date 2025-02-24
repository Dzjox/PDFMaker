#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/INotesSize.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ExportNotesSlides;
} // namespace Export
namespace PptSerialization
{
class PptConverter;
class PptDeserializator;
} // namespace PptSerialization
class Presentation;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a size of notes slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS NotesSize : public Aspose::Slides::INotesSize
{
    typedef NotesSize ThisType;
    typedef Aspose::Slides::INotesSize BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::PptSerialization::PptConverter;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the size in points.
    /// Read <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::SizeF get_Size() override;
    /// <summary>
    /// Sets the size in points.
    /// Write <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Size(System::Drawing::SizeF value) override;
    
    ASPOSE_SLIDES_SHARED_API NotesSize();
    
protected:

    /// @cond
    int64_t m_width, m_height;
    
    ASPOSE_SLIDES_LOCAL_API System::Drawing::SizeF get_SizeInternal();
    ASPOSE_SLIDES_LOCAL_API void set_SizeInternal(System::Drawing::SizeF value);
    
    ASPOSE_SLIDES_LOCAL_API NotesSize(System::SharedPtr<Presentation> presentation);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NotesSize, CODEPORTING_ARGS(System::SharedPtr<Presentation> presentation));
    
private:

    System::WeakPtr<Presentation> m_presentation;
    
    ASPOSE_SLIDES_LOCAL_API void ResizeExistingMasterNotes(System::Drawing::SizeF newSize);
    
};

} // namespace Slides
} // namespace Aspose


