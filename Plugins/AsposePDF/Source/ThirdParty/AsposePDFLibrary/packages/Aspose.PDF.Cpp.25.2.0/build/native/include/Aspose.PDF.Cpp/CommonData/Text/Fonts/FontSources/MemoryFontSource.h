#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/CommonData/Text/Fonts/FontSources/FontSource.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Font
{
namespace Sources
{
class FontDefinition;
} // namespace Sources
} // namespace Font
namespace Pdf
{
namespace Tests
{
namespace Fonts
{
class FontSourceTests;
} // namespace Fonts
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents single font file source.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MemoryFontSource final : public Aspose::Pdf::Text::FontSource, public System::IDisposable
{
    typedef MemoryFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Fonts::FontSourceTests;
    
public:

    /// <summary>
    /// Font file byte array. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> get_FontBytes() const;
    
    /// <summary> 
    /// Initializes a new instance of <see cref="MemoryFontSource"></see> class.
    /// </summary>
    /// <param name="fontBytes">Font file byte array.</param>
    ASPOSE_PDF_SHARED_API MemoryFontSource(System::ArrayPtr<uint8_t> fontBytes);
    
    /// <summary>
    /// Check if font file source objects are equal.
    /// </summary>
    /// <param name="obj">Font file source object which will be compared.</param>
    /// <returns>True if both objects are font file sources targeted to the same file.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Releases internal resources.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
protected:

    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> GetFontDefinitions() override;
    
private:

    System::ArrayPtr<uint8_t> fontBytes;
    System::ArrayPtr<System::SharedPtr<Aspose::Font::Sources::FontDefinition>> fonts;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


