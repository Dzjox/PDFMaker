#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Rectangle;
namespace Text
{
class Position;
class TextSegment;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a character info object.
/// Provides character positioning information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CharInfo final : public System::Object
{
    typedef CharInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextSegment;
    
public:

    /// <summary>
    /// Gets position of the character.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::Position> get_Position() const;
    /// <summary>
    /// Gets rectangle of the character.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    
protected:

    /// <summary>
    /// Initializes new CharInfo object
    /// </summary>
    CharInfo(System::SharedPtr<Aspose::Pdf::Text::Position> position, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CharInfo, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Text::Position> position, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle));
    
private:

    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


