#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Forms
{
class Field;
class Form;
class RadioButtonField;
class TextBoxField;
} // namespace Forms
} // namespace Pdf
namespace Shared
{
namespace JavaScript
{
class JavaScriptEngine;
} // namespace JavaScript
} // namespace Shared
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing javascript action.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS JavascriptAction final : public Aspose::Pdf::Annotations::PdfAction
{
    typedef JavascriptAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::Form;
    
public:

    /// <summary>
    /// Gets javascript code.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Script();
    /// <summary>
    /// Sets javascript code.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Script(System::String value);
    
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="javaScript">JavaScript code.</param>
    ASPOSE_PDF_SHARED_API JavascriptAction(System::String javaScript);
    
protected:

    static System::String ConvertToString(System::SharedPtr<System::IO::Stream> stream);
    
    /// <summary>
    /// Constructor for Javascript class. 
    /// </summary>
    /// <param name="action">PDF dictionary which describes action.</param>
    JavascriptAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JavascriptAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    ASPOSE_PDF_SHARED_API void Execute(const System::SharedPtr<Document>& document) override;
    /// <summary>
    /// Replaces trailer in strings in the action.
    /// </summary>
    /// <param name="trailerable">The trailerable.</param>
    ASPOSE_PDF_SHARED_API void ReplaceTrailer(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) override;
    void Execute(System::SharedPtr<Document> document, System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    static System::SharedPtr<Aspose::Shared::JavaScript::JavaScriptEngine> getJavaScriptEngine(System::SharedPtr<Document> document);
    
private:

    System::String _javaScript;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


