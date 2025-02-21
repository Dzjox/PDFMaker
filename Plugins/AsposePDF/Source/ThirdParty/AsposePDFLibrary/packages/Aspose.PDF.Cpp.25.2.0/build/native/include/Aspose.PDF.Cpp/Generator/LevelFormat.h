#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class MarginInfo;
namespace Text
{
enum class TabLeaderType;
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents format of the table of contents.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LevelFormat : public System::Object
{
    typedef LevelFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets TOC line dash.
    /// </summary>
    ASPOSE_PDF_SHARED_API Text::TabLeaderType get_LineDash() const;
    /// <summary>
    /// Sets TOC line dash.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineDash(Text::TabLeaderType value);
    /// <summary>
    /// Gets a list level margin 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin() const;
    /// <summary>
    /// Sets a list level margin 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets a subsequent lines indent 
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_SubsequentLinesIndent() const;
    /// <summary>
    /// Sets a subsequent lines indent 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubsequentLinesIndent(float value);
    /// <summary>
    /// Gets a list level text state 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState() const;
    /// <summary>
    /// Sets a list level text state 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    
    ASPOSE_PDF_SHARED_API LevelFormat();
    
private:

    Text::TabLeaderType lineDash;
    System::SharedPtr<MarginInfo> marginInfo;
    float subsequentLinesIndent;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    
};

} // namespace Pdf
} // namespace Aspose


