#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class AttributeKey;
class AttributeName;
class StructureAttributes;
} // namespace LogicalStructure
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents attribute of structure element.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureAttribute : public System::Object
{
    typedef StructureAttribute ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureAttributes;
    
public:

    /// <summary>
    ///     Gets attribute key.
    /// </summary>
    /// <value>Attribute Key.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> get_Key() const;
    /// <summary>
    ///     Gets status of structure attribute value. True if value is set.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInitializedValue();
    
    /// <summary>
    ///     Gets Value Name.
    /// </summary>
    /// <returns>Value Name.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> GetNameValue();
    /// <summary>
    ///     Gets Value String.
    /// </summary>
    /// <returns>Value String.</returns>
    ASPOSE_PDF_SHARED_API System::String GetStringValue();
    /// <summary>
    ///     Gets Value Number.
    /// </summary>
    /// <returns>Value Number.</returns>
    ASPOSE_PDF_SHARED_API System::Nullable<double> GetNumberValue();
    /// <summary>
    ///     Gets Value Name Array.
    /// </summary>
    /// <returns>Value Name Array.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<AttributeName>> GetArrayValue();
    /// <summary>
    ///     Gets Value Number Array.
    /// </summary>
    /// <returns>Value Number Array.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::Nullable<double>> GetArrayNumberValue();
    /// <summary>
    ///     Sets Value Name.
    /// </summary>
    /// <param name="name">Allowable Value Name.</param>
    ASPOSE_PDF_SHARED_API void SetNameValue(System::SharedPtr<AttributeName> name);
    /// <summary>
    ///     Sets Value String.
    /// </summary>
    /// <param name="value">Value String.</param>
    ASPOSE_PDF_SHARED_API void SetStringValue(System::String value);
    /// <summary>
    ///     Sets Value Number.
    /// </summary>
    /// <param name="number">Value Number.</param>
    ASPOSE_PDF_SHARED_API void SetNumberValue(double number);
    /// <summary>
    ///     Sets Value Name Array.
    /// </summary>
    /// <param name="array">Array of allowable Value Names.</param>
    ASPOSE_PDF_SHARED_API void SetArrayValue(System::ArrayPtr<System::SharedPtr<AttributeName>> array);
    /// <summary>
    /// Sets Value Number Array.
    /// </summary>
    /// <param name="arrayNumber">Array of Numbers.</param>
    ASPOSE_PDF_SHARED_API void SetArrayNumberValue(System::ArrayPtr<System::Nullable<double>> arrayNumber);
    /// <summary>
    ///     Sets Value Color.
    /// </summary>
    /// <param name="color">Color.</param>
    ASPOSE_PDF_SHARED_API void SetColorValue(System::SharedPtr<Color> color);
    /// <summary>
    ///     Sets Value Rectangle.
    /// </summary>
    /// <param name="rectangle">Rectangle.</param>
    ASPOSE_PDF_SHARED_API void SetRectangleValue(System::SharedPtr<Rectangle> rectangle);
    
    /// <summary>
    ///     Initializes a new instance of the StructureAttribute.
    /// </summary>
    /// <param name="attributeKey">Attribute Key</param>
    ASPOSE_PDF_SHARED_API StructureAttribute(System::SharedPtr<AttributeKey> attributeKey);
    
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    StructureAttribute(System::SharedPtr<AttributeKey> attributeKey, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureAttribute, CODEPORTING_ARGS(System::SharedPtr<AttributeKey> attributeKey, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEntity));
    
private:

    System::SharedPtr<AttributeKey> _attributeKey;
    bool _canName;
    bool _canString;
    bool _canNumber;
    bool _canArray;
    bool _canArrayNumber;
    int32_t _arrayCapacity;
    System::SharedPtr<AttributeName> _valueName;
    System::String _valueString;
    System::Nullable<double> _valueNumber;
    System::ArrayPtr<System::SharedPtr<AttributeName>> _valueArray;
    System::ArrayPtr<System::Nullable<double>> _valueArrayNumber;
    
    void ClearValue();
    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


