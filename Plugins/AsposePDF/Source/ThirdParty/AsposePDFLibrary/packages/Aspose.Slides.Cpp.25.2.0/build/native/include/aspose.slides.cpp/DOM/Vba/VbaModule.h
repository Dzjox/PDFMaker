#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Vba/IVbaModule.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Vba
{
class VbaProject;
} // namespace Vba
namespace VbaBinaryFile
{
class ModuleStream;
} // namespace VbaBinaryFile
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Vba {

/// <summary>
/// Represents module that is contained in VBA project.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS VbaModule final : public Aspose::Slides::Vba::IVbaModule
{
    typedef VbaModule ThisType;
    typedef Aspose::Slides::Vba::IVbaModule BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Vba::VbaProject;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the name of the module.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Returns the source code of the module.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_SourceCode() override;
    /// <summary>
    /// Sets the source code of the module.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SourceCode(System::String value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API VbaModule(System::String name, System::SharedPtr<Aspose::Slides::VbaBinaryFile::ModuleStream> moduleStream);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(VbaModule, CODEPORTING_ARGS(System::String name, System::SharedPtr<Aspose::Slides::VbaBinaryFile::ModuleStream> moduleStream));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool EqualsTo(System::SharedPtr<VbaModule> module_);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<VbaModule> GetCopyForCache();
    /// @endcond
    
private:

    System::String m_name;
    System::SharedPtr<Aspose::Slides::VbaBinaryFile::ModuleStream> m_moduleStream;
    
};

} // namespace Vba
} // namespace Slides
} // namespace Aspose


