#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Point;
namespace Text
{
class TextExtractionVerifier;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents the location in the PDF document where text extraction error has appeared.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextExtractionErrorLocation final : public System::Object
{
    typedef TextExtractionErrorLocation ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    
public:

    /// <summary>
    /// Location of the PDF document where text extraction error has appeared.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Path() const;
    /// <summary>
    /// Number of the document page where text extraction error has located.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
    /// <summary>
    /// Type of the PDF object (Page or xForm) in which contents stream text extraction error has located.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ObjectType() const;
    /// <summary>
    /// Key (name) of the PDF Form XObject in which contents stream text extraction error has located. Not empty if ObjectType == 'xForm'.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FormKey() const;
    /// <summary>
    /// Index of text showing operator in the contents stream (operator collection) that causes text extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_OperatorIndex() const;
    /// <summary>
    /// Text showing operator that causes text extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OperatorString() const;
    /// <summary>
    /// Key (name) of the PDF Font object that is used for showing of the operator that causes text extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontUsedKey() const;
    /// <summary>
    /// Key (name) of the PDF Font object that is used for showing of the operator that causes text extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_TextStartPoint() const;
    
    /// <summary>
    /// Returns string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// Text showing operator that causes text extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OperatorString(System::String value);
    /// <summary>
    /// Key (name) of the PDF Font object that is used for showing of the operator that causes text extraction error.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextStartPoint(System::SharedPtr<Point> value);
    
    TextExtractionErrorLocation(System::String path, int32_t pageNum, System::String objectType, System::String formKey, int32_t operatorIndex, System::String operatorString, System::String fontUsedKey);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextExtractionErrorLocation, CODEPORTING_ARGS(System::String path, int32_t pageNum, System::String objectType, System::String formKey, int32_t operatorIndex, System::String operatorString, System::String fontUsedKey));
    
private:

    System::String _documentPath;
    int32_t _pageNum;
    System::String _objectType;
    System::String _formKey;
    int32_t _operatorIndex;
    System::String _operatorString;
    System::String _fontUsedKey;
    System::SharedPtr<Point> _textStartPoint;
    
    System::String ToString_NonConst();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


