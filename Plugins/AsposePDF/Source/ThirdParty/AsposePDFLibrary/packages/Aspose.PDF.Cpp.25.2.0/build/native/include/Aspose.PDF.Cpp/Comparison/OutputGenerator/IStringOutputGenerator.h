#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class DiffOperation;
} // namespace Comparison
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents an interface for generating output to a string of differences between texts.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IStringOutputGenerator : public virtual System::Object
{
    typedef IStringOutputGenerator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <returns>Text representation of output.</returns>
    virtual System::String GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffrences) = 0;
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <returns>Text representation of output.</returns>
    virtual System::String GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffrences) = 0;
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


