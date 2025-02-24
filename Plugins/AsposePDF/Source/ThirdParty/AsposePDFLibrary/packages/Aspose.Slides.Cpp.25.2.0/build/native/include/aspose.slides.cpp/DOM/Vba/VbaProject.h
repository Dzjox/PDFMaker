#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/Vba/IVbaProject.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace PptSerialization
{
class PptDeserializator;
class PptSerializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class VbaProjectParser;
} // namespace PartParser
class PptxDeserializator;
} // namespace PptxSerialization
class Presentation;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
namespace Vba
{
class IVbaModule;
class IVbaModuleCollection;
class IVbaReference;
class IVbaReferenceCollection;
class VbaModule;
class VbaModuleCollection;
class VbaReferenceCollection;
} // namespace Vba
namespace VbaBinaryFile
{
class VbaProjectRootStorage;
} // namespace VbaBinaryFile
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents VBA project with presentation macros.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS VbaProject final : public Aspose::Slides::Vba::IVbaProject
{
    typedef VbaProject ThisType;
    typedef Aspose::Slides::Vba::IVbaProject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Vba::VbaModuleCollection;
    friend class Aspose::Slides::Vba::VbaReferenceCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::VbaProjectParser;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the name of the VBA project.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Returns the list of all modules that are contained in the VBA project.
    /// Read-only <see cref="Aspose::Slides::Vba::IVbaModuleCollection">IVbaModuleCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaModuleCollection> get_Modules() override;
    /// <summary>
    /// Returns the list of all references that are contained in the VBA project.
    /// Read-only <see cref="Aspose::Slides::Vba::IVbaReferenceCollection">IVbaReferenceCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaReferenceCollection> get_References() override;
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
    ASPOSE_SLIDES_SHARED_API bool get_IsPasswordProtected() override;
    
    /// <summary>
    /// This constructor creates new VBA project from scratch.
    /// Project will be created in 1252 Windows Latin 1 (ANSI) codepage
    /// </summary>
    ASPOSE_SLIDES_SHARED_API VbaProject();
    /// <summary>
    /// This constructor loads VBA project from binary representation of OLE container.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API VbaProject(System::ArrayPtr<uint8_t> data);
    
    /// <summary>
    /// Returns the binary representation of the VBA project as OLE container
    /// </summary>
    /// <returns>Binary representation of the VBA project as OLE container</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> ToBinary() override;
    /// <summary>
    /// Returns the module contained in the VBA project at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaModule> get_Module(int32_t index) override;
    /// <summary>
    /// Returns the reference contained in the VBA project at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVbaReference> get_Reference(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> get_VbaProjectRootStorage();
    
    ASPOSE_SLIDES_LOCAL_API VbaProject(System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> vbaContainer);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(VbaProject, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> vbaContainer));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VbaModule> AddEmptyModule(System::String name);
    ASPOSE_SLIDES_LOCAL_API void AddReference(System::SharedPtr<IVbaReference> reference);
    ASPOSE_SLIDES_LOCAL_API void RemoveModule(System::String name);
    ASPOSE_SLIDES_LOCAL_API bool EqualsTo(System::SharedPtr<VbaProject> project);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VbaProject> GetCopyForCache();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~VbaProject();
    
private:

    System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> m_vbaProjectRootStorage;
    System::SharedPtr<VbaModuleCollection> m_vbaModuleCollection;
    System::SharedPtr<VbaReferenceCollection> m_vbaReferencesCollection;
    
    ASPOSE_SLIDES_LOCAL_API void Init(System::SharedPtr<Aspose::Slides::VbaBinaryFile::VbaProjectRootStorage> vbaContainer);
    ASPOSE_SLIDES_LOCAL_API void InitModules();
    ASPOSE_SLIDES_LOCAL_API void InitReferences();
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


