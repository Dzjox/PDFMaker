#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace LogicalStructure
{
class StructureTextState;
} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
/// Interface for presenting text structure elements.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ITextElement : public virtual System::Object
{
    typedef ITextElement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for text structure element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for text structure element.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() = 0;
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content</param>
    virtual void SetText(System::String text) = 0;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


