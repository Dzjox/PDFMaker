#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Paragraphs;
namespace Text
{
class TextFragment;
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents generator paragraph note.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Note final : public System::Object
{
    typedef Note ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextFragment;
    
public:

    /// <summary>
    /// Gets a collection that indicates all paragraphs in the FootNote.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs() const;
    /// <summary>
    /// Sets a collection that indicates all paragraphs in the FootNote.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets a note text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text() const;
    /// <summary>
    /// Sets a note text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    /// <summary>
    /// Gets a note text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState() const;
    /// <summary>
    /// Sets a note text state.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Note"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Note();
    /// <summary>
    /// Initializes a new instance of the <see cref="Note"></see> class.
    /// </summary>
    /// <param name="content">The note content.</param>
    ASPOSE_PDF_SHARED_API Note(System::String content);
    
protected:

    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    System::String text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    
};

} // namespace Pdf
} // namespace Aspose


