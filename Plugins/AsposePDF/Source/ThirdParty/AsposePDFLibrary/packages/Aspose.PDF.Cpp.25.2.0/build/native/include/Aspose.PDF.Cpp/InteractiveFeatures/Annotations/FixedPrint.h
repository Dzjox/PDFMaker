#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class WatermarkAnnotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class Matrix;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represent Fixed print data of Watermark Annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FixedPrint : public System::Object
{
    typedef FixedPrint ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    
public:

    /// <summary>
    /// Gets matrix value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    /// <summary>
    /// Sets matrix value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    /// <summary>
    /// Gets horizontal translation.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_HorizontalTranslation() const;
    /// <summary>
    /// Sets horizontal translation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalTranslation(double value);
    /// <summary>
    /// Gets vertical translation.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_VerticalTranslation() const;
    /// <summary>
    /// Sets vertical translation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalTranslation(double value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDictionary();
    
    FixedPrint(System::SharedPtr<WatermarkAnnotation> owner);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedPrint, CODEPORTING_ARGS(System::SharedPtr<WatermarkAnnotation> owner));
    
private:

    System::SharedPtr<Aspose::Pdf::Matrix> _matrix;
    double _h;
    double _v;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDictionary;
    System::WeakPtr<WatermarkAnnotation> _owner;
    
    System::SharedPtr<WatermarkAnnotation> get_Owner() const;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


