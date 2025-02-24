#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IDigitalSignature;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of digital signatures attached to a document.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDigitalSignatureCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IDigitalSignature>>
{
    typedef IDigitalSignatureCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IDigitalSignature>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the signature by index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDigitalSignature> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds the signature at the end of collection.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto signature = System::MakeObject<DigitalSignature>(u"testsignature1.pfx", u"testpass1");
    /// signature->set_Comments(u"Aspose.Slides digital signing test.");
    /// pres->get_DigitalSignatures()->Add(signature);
    /// pres->Save(u"SomePresentationSigned.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
    /// </code>
    /// </example>
    /// <param name="digitalSignature">Signature to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IDigitalSignature> digitalSignature) = 0;
    /// <summary>
    /// Removes the signature at the specified index.
    /// </summary>
    /// <param name="index">Index of the signature that should be deleted.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all signatures from collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


