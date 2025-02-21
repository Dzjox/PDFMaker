#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationActionCollection;
class PdfAction;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Forms
{
class Field;
} // namespace Forms
class PageActionCollection;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class incapsulates basic actions wuth page/annotation/field interactive actions
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BaseActionCollection : public System::Object
{
    typedef BaseActionCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageActionCollection;
    friend class Aspose::Pdf::Annotations::AnnotationActionCollection;
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Removes all actions of the annotation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemoveActions();
    
protected:

    System::SharedPtr<Engine::Data::IPdfObject> Owner;
    
    /// <summary>
    /// Returns action by its name. 
    /// </summary>
    /// <param name="name">Name of action. </param>
    /// <returns></returns>
    System::SharedPtr<Annotations::PdfAction> GetAction(const System::String& name);
    /// <summary>
    /// Sets action by its name.
    /// </summary>
    /// <param name="name">Action name.</param>
    /// <param name="action">Action to be insert.</param>
    void SetAction(const System::String& name, const System::SharedPtr<Annotations::PdfAction>& action);
    
    BaseActionCollection(const System::SharedPtr<Engine::Data::IPdfObject>& annotation);
    
};

} // namespace Pdf
} // namespace Aspose


