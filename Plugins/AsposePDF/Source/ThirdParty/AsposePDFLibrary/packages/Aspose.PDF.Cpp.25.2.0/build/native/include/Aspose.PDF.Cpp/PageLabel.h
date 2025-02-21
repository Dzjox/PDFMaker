#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
enum class NumberingStyle;
class PageLabelCollection;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing Page Label range.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageLabel : public System::Object
{
    typedef PageLabel ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageLabelCollection;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    
public:

    /// <summary>
    /// Gets starting value of the page numbering range.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StartingValue();
    /// <summary>
    /// Sets starting value of the page numbering range.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartingValue(int32_t value);
    /// <summary>
    /// Gets numbering style. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::NumberingStyle get_NumberingStyle();
    /// <summary>
    /// Sets numbering style. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    /// <summary>
    /// Gets page number prefix.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Prefix();
    /// <summary>
    /// Sets page number prefix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Prefix(System::String value);
    
    /// <summary>
    /// Constructor for page label. 
    /// </summary>
    ASPOSE_PDF_SHARED_API PageLabel();
    
protected:

    const System::SharedPtr<Engine::Data::IPdfDictionary>& get_EngineDict() const;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> CreateDictionary(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    PageLabel(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PageLabel, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict));
    
private:

    int32_t _startingValue;
    Aspose::Pdf::NumberingStyle _numberingStyle;
    System::String _prefix;
    System::SharedPtr<Engine::Data::IPdfDictionary> pr_EngineDict;
    
    System::String translateStyle(Aspose::Pdf::NumberingStyle numberingStyle);
    Aspose::Pdf::NumberingStyle translateStyle(System::String numberingStyle);
    
};

} // namespace Pdf
} // namespace Aspose


