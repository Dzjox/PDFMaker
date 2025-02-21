#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading(import) PCL file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PclLoadOptions final : public Aspose::Pdf::LoadOptions, public Aspose::Pdf::IPipelineOptions
{
    typedef PclLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    typedef Aspose::Pdf::IPipelineOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Enumerates conversion engines that can be used for conversion
    /// </summary>
    enum class ConversionEngines
    {
        /// <summary>
        ///  Legacy conversion engine is conversion engine thay was used for a while and is used by default. 
        /// </summary>
        LegacyEngine,
        /// <summary>
        ///  New conversion engine is currently in A-testing state. We open it into public API to get some feedback. 
        ///  It's currently recommended to use it only when old conversion engine cannot convert document for some reasons.
        /// </summary>
        NewEngine
    };
    
    
public:

    /// <summary>
    /// Defines conversion engine that will be used for conversion
    /// </summary>
    PclLoadOptions::ConversionEngines ConversionEngine;
    /// <summary>
    /// Gets or sets boolean value which indicates will PCL conversion errors should be supressed.
    /// </summary>
    bool SupressErrors;
    /// <summary>
    /// List of conversion errors.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::Exception>> Exceptions;
    
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BatchSize() override;
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BatchSize(int32_t value) override;
    
    /// <summary>
    /// Creates <see cref="PclLoadOptions"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API PclLoadOptions();
    
private:

    int32_t _batchSize;
    
};

} // namespace Pdf
} // namespace Aspose


