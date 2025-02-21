#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/BaseActionCollection.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PdfAction;
class WidgetAnnotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents the collection of annotation actions.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AnnotationActionCollection final : public Aspose::Pdf::BaseActionCollection
{
    typedef AnnotationActionCollection ThisType;
    typedef Aspose::Pdf::BaseActionCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    
public:

    /// <summary>
    /// Gets an action to be performed when the cursor enters the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnEnter();
    /// <summary>
    /// Sets an action to be performed when the cursor enters the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnEnter(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the cursor exits the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnExit();
    /// <summary>
    /// Sets an action to be performed when the cursor exits the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnExit(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the mouse button is pressed inside the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnPressMouseBtn();
    /// <summary>
    /// Sets an action to be performed when the mouse button is pressed inside the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnPressMouseBtn(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the mouse button is released inside the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnReleaseMouseBtn();
    /// <summary>
    /// Sets an action to be performed when the mouse button is released inside the annotation's active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnReleaseMouseBtn(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the annotation receives the input focus.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnReceiveFocus();
    /// <summary>
    /// Sets an action to be performed when the annotation receives the input focus.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnReceiveFocus(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnOpenPage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnOpenPage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation is closed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnClosePage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation is closed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnClosePage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation becomes visible in the viewer application's user interface.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnShowPage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation becomes visible in the viewer application's user interface.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnShowPage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the page containing the annotation is no longer visible in the viewer application's user interface.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnHidePage();
    /// <summary>
    /// Sets an action to be performed when the page containing the annotation is no longer visible in the viewer application's user interface.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnHidePage(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when the annotation loses the input focus.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnLostFocus();
    /// <summary>
    /// Sets an action to be performed when the annotation loses the input focus.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnLostFocus(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when user modifies character of the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnModifyCharacter();
    /// <summary>
    /// Sets an action to be performed when user modifies character of the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnModifyCharacter(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed when user changes contents of the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnValidate();
    /// <summary>
    /// Sets an action to be performed when user changes contents of the field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnValidate(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to be performed to format field value. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnFormat();
    /// <summary>
    /// Sets an action to be performed to format field value. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnFormat(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// Gets an action to calculate field value. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_OnCalculate();
    /// <summary>
    /// Sets an action to calculate field value. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OnCalculate(System::SharedPtr<PdfAction> value);
    
protected:

    AnnotationActionCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AnnotationActionCollection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation));
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


