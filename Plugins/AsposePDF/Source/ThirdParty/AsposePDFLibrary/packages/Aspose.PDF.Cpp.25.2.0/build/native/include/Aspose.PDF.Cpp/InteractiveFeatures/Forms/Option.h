#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class Form;
} // namespace Facades
namespace Forms
{
class BaseOption;
class OptionCollection;
} // namespace Forms
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represents option of choice field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Option final : public System::Object
{
    typedef Option ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Forms::OptionCollection;
    friend class Aspose::Pdf::Forms::OptionCollection;
    
public:

    /// <summary>
    /// Gets option export value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Value();
    /// <summary>
    /// Sets option export value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Value(System::String value);
    /// <summary>
    /// Gets name of option.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Sets name of option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Gets selected status of option. Returns true if option is selected.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Selected();
    /// <summary>
    /// Sets selected status of option. Returns true if option is selected.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Selected(bool value);
    /// <summary>
    /// Gets index of the option. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Index();
    
protected:

    System::SharedPtr<BaseOption> option;
    
    Option(System::SharedPtr<BaseOption> option);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Option, CODEPORTING_ARGS(System::SharedPtr<BaseOption> option));
    bool HasExportValue();
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


