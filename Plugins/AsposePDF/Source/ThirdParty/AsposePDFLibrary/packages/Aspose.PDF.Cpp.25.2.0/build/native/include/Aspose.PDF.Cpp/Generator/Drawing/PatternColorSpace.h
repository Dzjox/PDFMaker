#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <drawing/rectangle_f.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
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

namespace Drawing {

/// <summary>
/// Represents base pattern class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PatternColorSpace : public System::Object
{
    typedef PatternColorSpace ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    
public:

    ASPOSE_PDF_SHARED_API PatternColorSpace();
    
protected:

    System::SharedPtr<Color> get_BackgroundColor() const;
    void set_BackgroundColor(System::SharedPtr<Color> value);
    System::Drawing::RectangleF get_BoundingBox() const;
    void set_BoundingBox(System::Drawing::RectangleF value);
    bool get_Antilaliasing() const;
    void set_Antilaliasing(bool value);
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::Drawing::RectangleF boundingBox;
    bool antilaliasing;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


