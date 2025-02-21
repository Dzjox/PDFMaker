#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/TextBoxField.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Forms
{
class Field;
enum class Symbology;
} // namespace Forms
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represents barcode field.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BarcodeField final : public Aspose::Pdf::Forms::TextBoxField
{
    typedef BarcodeField ThisType;
    typedef Aspose::Pdf::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets the resolution, in dots-per-inch (dpi), at which the barcode object is rendered.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Resolution();
    /// <summary>
    /// Gets the caption of the barcode object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Caption();
    /// <summary>
    /// Specifies which barcode or glyph technology is to be used on this annotation,
    /// see <see cref="Symbology"></see> for details.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Forms::Symbology get_Symbology();
    /// <summary>
    /// Gets The horizontal distance, in pixels, between two barcode modules.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_XSymWidth();
    /// <summary>
    /// Gets the the vertical distance between two barcode modules, measured in pixels. 
    /// The ratio XSymHeight/XSymWidth shall be an integer value. 
    /// For PDF417, the acceptable ratio range is from 1 to 4. For QRCode and DataMatrix, 
    /// this ratio shall always be 1
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_XSymHeight();
    /// <summary>
    /// Gets an integer value representing the error correction coefficient. 
    /// For PDF417, shall be from 0 to 8. For QRCode, shall be from 0 to 3 
    /// (0 for 'L', 1 for 'M', 2 for 'Q', and 3 for 'H').
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ECC();
    
    /// <summary>
    /// Initializes new instance of the <see cref="BarcodeField"></see> class.
    /// </summary>
    /// <param name="page">
    /// The page where to place new barcode.
    /// </param>
    /// <param name="rect">
    /// Barcode sizes given in rectangle.
    /// </param>
    ASPOSE_PDF_SHARED_API BarcodeField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes new instance of the <see cref="BarcodeField"></see> class.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    /// <param name="rect">Rectangle where field will be placed on the page.</param>
    ASPOSE_PDF_SHARED_API BarcodeField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    BarcodeField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BarcodeField, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~BarcodeField();
    
private:

    void assertPMD();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> getPMD();
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


