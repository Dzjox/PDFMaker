#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/StructureElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class FigureElement;
class FormElement;
class FormulaElement;
class StructureTypeStandard;
} // namespace LogicalStructure
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace LogicalStructure
{
class FormulaElementTests;
} // namespace LogicalStructure
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for illustration structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IllustrationElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef IllustrationElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::FigureElement;
    friend class Aspose::Pdf::LogicalStructure::FormulaElement;
    friend class Aspose::Pdf::LogicalStructure::FormElement;
    
public:

    /// <summary>
    ///     Appends image to current illustration element.
    /// </summary>
    /// <param name="imageSrc">Image source.</param>
    /// <param name="imageResolution">(Optional) Image Resolution. Default: 300 DPI.</param>
    virtual ASPOSE_PDF_SHARED_API void SetImage(System::String imageSrc, double imageResolution = 300);
    /// <summary>
    ///     Appends image to current illustration element.
    /// </summary>
    /// <param name="imageSrc">Image source.</param>
    /// <param name="imageWidth">Image width.</param>
    /// <param name="imageHeight">Image height.</param>
    virtual ASPOSE_PDF_SHARED_API void SetImage(System::String imageSrc, double imageWidth, double imageHeight);
    
protected:

    IllustrationElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual ASPOSE_PDF_SHARED_API ~IllustrationElement();
    
};

// Illustration Element's Children
/// <summary>
///     Represents Figure structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FigureElement final : public Aspose::Pdf::LogicalStructure::IllustrationElement
{
    typedef FigureElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::IllustrationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    FigureElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FigureElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Formula structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FormulaElement final : public Aspose::Pdf::LogicalStructure::IllustrationElement
{
    typedef FormulaElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::IllustrationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::FormulaElementTests;
    
protected:

    FormulaElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FormulaElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Form structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FormElement final : public Aspose::Pdf::LogicalStructure::IllustrationElement
{
    typedef FormElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::IllustrationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    FormElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FormElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


