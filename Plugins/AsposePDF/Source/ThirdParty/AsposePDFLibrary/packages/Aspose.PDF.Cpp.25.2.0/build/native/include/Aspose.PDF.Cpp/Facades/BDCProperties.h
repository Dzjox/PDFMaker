#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/nullable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
namespace MarkedContent
{
class Paragraph;
} // namespace MarkedContent
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
namespace Operators
{
class BDC;
} // namespace Operators
class Page;
namespace Tagged
{
class TaggedContext;
} // namespace Tagged
class XmlConverter;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// BDC operator properties.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BDCProperties : public System::Object
{
    typedef BDCProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::MarkedContent::Paragraph;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Operators::BDC;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::XmlConverter;
    
public:

    /// <summary>
    /// Gets/sets MCID value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Nullable<int32_t> get_MCID();
    /// <summary>
    /// Gets/sets Language value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Lang();
    /// <summary>
    /// Gets/sets Language value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Lang(System::String value);
    /// <summary>
    /// Gets/sets Expansion text value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_E();
    /// <summary>
    /// Gets/sets Expansion text value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_E(System::String value);
    
    /// <summary>
    /// Constructor for properties of BDC operator.
    /// </summary>
    /// <param name="lang">Lang tag.</param>
    /// <param name="expansionText">Expansion text.</param>
    ASPOSE_PDF_SHARED_API BDCProperties(System::String lang = nullptr, System::String expansionText = nullptr);
    /// <summary>
    /// Constructor for properties of BDC operator.
    /// </summary>
    /// <param name="mcid">MCID.</param>
    /// <param name="lang">Lang tag.</param>
    /// <param name="expansionText">Expansion text.</param>
    ASPOSE_PDF_SHARED_API BDCProperties(System::Nullable<int32_t> mcid, System::String lang = nullptr, System::String expansionText = nullptr);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_Primitive() const;
    /// <summary>
    /// Gets/sets MCID value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MCID(System::Nullable<int32_t> value);
    
    BDCProperties(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BDCProperties, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive));
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetPrimitive(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _primitive;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _dictionary;
    bool _isModified;
    System::Nullable<int32_t> _mcid;
    System::String _lang;
    System::String _expansionText;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


