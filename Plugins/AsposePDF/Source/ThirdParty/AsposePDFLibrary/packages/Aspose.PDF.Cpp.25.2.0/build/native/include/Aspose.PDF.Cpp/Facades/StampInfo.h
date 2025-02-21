#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class PdfContentEditor;
enum class StampType;
} // namespace Facades
class Rectangle;
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Image;
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class representing stamp information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StampInfo final : public System::Object
{
    typedef StampInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    /// <summary>
    /// Gets identifier of the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StampId() const;
    /// <summary>
    /// Gets stamp index on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_IndexOnPage() const;
    /// <summary>
    /// Gets stamp type (image / form).
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Facades::StampType get_StampType() const;
    /// <summary>
    /// Gets rectangle where stamp is placed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    /// <summary>
    /// Gets image of stamp. May be null if stamp does not contain images (for example for text stamp).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Drawing::Image> get_Image() const;
    /// <summary>
    /// Gets XForm of the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_Form() const;
    /// <summary>
    /// Gets text in the stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text();
    /// <summary>
    /// Gets visibility of stamp. If false then stamp is hidden (with HideStampById). Hidden stamp may be restored by ShowStampById.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Visible() const;
    
protected:

    /// <summary>
    /// Constructor of StampInfo class.
    /// </summary>
    /// <param name="stampId">Stamp identifier.</param>
    /// <param name="stampType">Stamp type.</param>
    /// <param name="index">Index of the stamp on the page.</param>
    StampInfo(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<System::Drawing::Image> image, bool visible);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StampInfo, CODEPORTING_ARGS(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<System::Drawing::Image> image, bool visible));
    
    StampInfo(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<XForm> form, bool visible);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StampInfo, CODEPORTING_ARGS(int32_t stampId, Aspose::Pdf::Facades::StampType stampType, int32_t index, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<XForm> form, bool visible));
    
private:

    int32_t _stampId;
    int32_t _indexOnPage;
    Aspose::Pdf::Facades::StampType _stampType;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    System::SharedPtr<System::Drawing::Image> _image;
    System::SharedPtr<XForm> _form;
    bool _visible;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


