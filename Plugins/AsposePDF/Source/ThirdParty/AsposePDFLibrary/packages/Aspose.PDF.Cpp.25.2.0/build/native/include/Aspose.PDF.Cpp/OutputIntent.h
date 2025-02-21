#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

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
class IPdfObject;
} // namespace Data
} // namespace Engine
class OutputIntents;
namespace Tests
{
class RegressionTests_v23_07;
class RegressionTests_v24_08;
class RegressionTests_v24_10;
class RegressionTests_v24_12;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an output intent that matches the color characteristics of a PDF document with those
/// of a target output device or production environment in which the document will be printed.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OutputIntent final : public System::Object
{
    typedef OutputIntent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::OutputIntents;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    
public:

    /// <summary>
    /// Gets the output intent subtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Subtype();
    /// <summary>
    /// Gets a text that concisely identifies the intended output device or production condition
    /// in human-readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OutputCondition();
    /// <summary>
    /// Sets a text that concisely identifies the intended output device or production condition
    /// in human-readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputCondition(System::String value);
    /// <summary>
    /// Gets a text that identifies the intended output device or production condition in human-
    /// or machine-readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OutputConditionIdentifier();
    /// <summary>
    /// Sets a text that identifies the intended output device or production condition in human-
    /// or machine-readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputConditionIdentifier(System::String value);
    /// <summary>
    /// Gets a text that identifies the registry in which the condition designated
    /// by <see cref="OutputConditionIdentifier"></see> is defined.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_RegistryName();
    /// <summary>
    /// Sets a text that identifies the registry in which the condition designated
    /// by <see cref="OutputConditionIdentifier"></see> is defined.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RegistryName(System::String value);
    /// <summary>
    /// Gets a human-readable text that contains additional information or comments about the intended target device
    /// or production condition.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Info();
    /// <summary>
    /// Sets a human-readable text that contains additional information or comments about the intended target device
    /// or production condition.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Info(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="OutputIntent"></see> class with the specified output condition identifier.
    /// </summary>
    /// <param name="outputConditionIdentifier">
    /// The text that identifies the intended output device or production condition in human- or machine-readable form.
    /// </param>
    ASPOSE_PDF_SHARED_API OutputIntent(System::String outputConditionIdentifier);
    
protected:

    System::SharedPtr<Engine::Data::IPdfObject> get_EngineObj() const;
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
    /// <summary>
    /// Initializes new <see cref="OutputIntent"></see> from an output intent object.
    /// </summary>
    /// <param name="intentObject">The output intent object.</param>
    OutputIntent(System::SharedPtr<Engine::Data::IPdfObject> intentObject);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OutputIntent, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfObject> intentObject));
    
    /// <summary>
    /// Initializes new <see cref="OutputIntent"></see> from an output intent dictionary.
    /// </summary>
    /// <param name="intentDictionary">The output intent dictionary.</param>
    OutputIntent(System::SharedPtr<Engine::Data::IPdfDictionary> intentDictionary);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OutputIntent, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> intentDictionary));
    
private:

    System::SharedPtr<Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::String _outputCondition;
    System::String _outputConditionIdentifier;
    System::String _registryName;
    System::String _info;
    
};

} // namespace Pdf
} // namespace Aspose


