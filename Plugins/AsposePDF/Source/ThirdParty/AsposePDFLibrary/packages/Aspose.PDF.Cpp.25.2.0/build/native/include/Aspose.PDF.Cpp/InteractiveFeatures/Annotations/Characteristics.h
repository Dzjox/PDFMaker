#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace Forms
{
class ButtonField;
class IconFit;
class TextBoxField;
} // namespace Forms
enum class Rotation;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents annotation characteristics
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Characteristics final : public System::Object
{
    typedef Characteristics ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::IconFit;
    
public:

    /// <summary>
    /// Gets color of the background
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_Background();
    /// <summary>
    /// Sets color of the background
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Background(System::Drawing::Color value);
    /// <summary>
    /// Gets color of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_Border();
    /// <summary>
    /// Sets color of the border.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Border(System::Drawing::Color value);
    /// <summary>
    /// Gets rotation of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Rotation get_Rotate();
    /// <summary>
    /// Sets rotation of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotate(Rotation value);
    
protected:

    System::WeakPtr<Annotation> annotation;
    
    static void AssertMK(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    Characteristics(System::SharedPtr<Annotation> annotation);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Characteristics, CODEPORTING_ARGS(System::SharedPtr<Annotation> annotation));
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> cache;
    
    System::Drawing::Color GetColor(System::String entry);
    void SetColor(System::String entry, System::Drawing::Color color);
    static void SetColor(System::SharedPtr<Annotation> current, System::String entry, System::Drawing::Color color);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


