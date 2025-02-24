#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Vba
{
class IVbaModule;
class IVbaModuleCollection;
class IVbaReference;
class IVbaReferenceCollection;
} // namespace Vba
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents VBA project with presentation macros.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVbaProject : public virtual System::Object
{
    typedef IVbaProject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the name of the VBA project.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Returns the list of all modules that are contained in the VBA project.
    /// Read-only <see cref="Aspose::Slides::Vba::IVbaModuleCollection">IVbaModuleCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaModuleCollection> get_Modules() = 0;
    /// <summary>
    /// Returns the list of all references that are contained in the VBA project.
    /// Read-only <see cref="Aspose::Slides::Vba::IVbaReferenceCollection">IVbaReferenceCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaReferenceCollection> get_References() = 0;
    /// <summary>
    /// Indicates whether the VBAProject is protected by a password to view project properties.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(path + u"demo.pptm");
    /// 
    /// if (presentation->get_VbaProject()->get_IsPasswordProtected())
    /// {
    ///     System::Console::WriteLine(System::String(u"The VBAProject '") + presentation->get_VbaProject()->get_Name() + u"' is protected by password to view project properties.");
    /// }
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsPasswordProtected() = 0;
    
    /// <summary>
    /// Returns the binary representation of the VBA project as OLE container.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    /// <returns>Binary representation of the VBA project as OLE container</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> ToBinary() = 0;
    /// <summary>
    /// Returns the module contained in the VBA project at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaModule> get_Module(int32_t index) = 0;
    /// <summary>
    /// Returns the reference contained in the VBA project at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVbaReference> get_Reference(int32_t index) = 0;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


