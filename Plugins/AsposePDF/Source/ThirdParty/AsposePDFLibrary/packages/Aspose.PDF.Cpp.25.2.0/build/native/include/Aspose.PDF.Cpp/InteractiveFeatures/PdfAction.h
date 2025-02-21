#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/IAppointment.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class ActionCollection;
class AnnotationCollection;
class DestinationFactory;
class DocumentActionCollection;
class GoToURIAction;
class HideAction;
class ImportDataAction;
class JavascriptAction;
class LinkAnnotation;
class NamedAction;
class PdfActionCollection;
class ScreenAnnotation;
class SubmitFormAction;
class WidgetAnnotation;
} // namespace Annotations
class BaseActionCollection;
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class ITrailerable;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfUaConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Forms
{
class Field;
class TextBoxField;
} // namespace Forms
class OutlineCollection;
class OutlineItemCollection;
class PageGenerator;
namespace Tests
{
class RegressionTests_v17_12;
class RegressionTests_v22_07;
class RegressionTests_v24_12;
class RegressionTests_v7_0;
class RegressionTests_v8_3;
class RegressionTests_v8_4;
class RegressionTests_v8_8;
namespace Text
{
class TextFragmentTests;
} // namespace Text
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Annotations</b> namespace provides classes for working with various types of actions, destinations and other features of document 
/// which traditionally called as interactive providing means user can intercommunicate with it.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Represents Action in PDF document
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfAction : public Aspose::Pdf::Annotations::IAppointment
{
    typedef PdfAction ThisType;
    typedef Aspose::Pdf::Annotations::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseActionCollection;
    friend class Aspose::Pdf::Annotations::ImportDataAction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::HideAction;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Annotations::ActionCollection;
    friend class Aspose::Pdf::Annotations::ActionCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Annotations::DocumentActionCollection;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Annotations::GoToURIAction;
    friend class Aspose::Pdf::Annotations::JavascriptAction;
    friend class Aspose::Pdf::Annotations::SubmitFormAction;
    friend class Aspose::Pdf::Annotations::DestinationFactory;
    friend class Aspose::Pdf::Annotations::NamedAction;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineItemCollection;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    
public:

    /// <summary>
    /// Next actions in sequence. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ActionCollection> get_Next();
    
    /// <summary>
    /// Gets string for ECMAScript Action.
    /// </summary>
    /// <returns>Return string for JS entry for ECMAScript Action or null else.</returns>
    ASPOSE_PDF_SHARED_API System::String GetECMAScriptString();
    
    ASPOSE_PDF_SHARED_API PdfAction();
    
    /// <summary>
    /// Returns string representation of ExplicitDestination object.
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Indicates whether the action has been initialized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInitialized() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    void set_EngineDict(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_EngineObj() const;
    void set_EngineObj(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
    
    virtual ASPOSE_PDF_SHARED_API void Execute(const System::SharedPtr<Document>& document);
    static System::SharedPtr<PdfAction> CreateAction(const System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary>& action);
    /// <summary>
    /// Replaces trailer in strings in the action.
    /// </summary>
    /// <param name="trailerable">The trailerable.</param>
    virtual ASPOSE_PDF_SHARED_API void ReplaceTrailer(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    
    virtual ASPOSE_PDF_SHARED_API ~PdfAction();
    
private:

    bool pr_IsInitialized;
    
    /// <summary>
    /// Indicates whether the action has been initialized.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsInitialized(bool value);
    
    /// <summary>
    /// Next actions in sequence. 
    /// </summary>
    System::SharedPtr<ActionCollection> next;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


