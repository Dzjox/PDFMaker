#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
enum class BorderEffect;
enum class BorderStyle;
class CommonFigureAnnotation;
class Dash;
class FreeTextAnnotation;
class InkAnnotation;
class LineAnnotation;
class PolyAnnotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
namespace Xml
{
class XmlReader;
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing characteristics of annotation border.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Border final : public System::Object
{
    typedef Border ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    
public:

    /// <summary>
    /// Gets horizontal corner radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_HCornerRadius();
    /// <summary>
    /// Sets horizontal corner radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HCornerRadius(double value);
    /// <summary>
    /// Gets vertical corner radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_VCornerRadius();
    /// <summary>
    /// Sets vertical corner radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VCornerRadius(double value);
    /// <summary>
    /// Gets border width.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Width();
    /// <summary>
    /// Sets border width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(int32_t value);
    /// <summary>
    /// Gets effect intencity. Valid range of value is [0..2].
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_EffectIntensity() const;
    /// <summary>
    /// Sets effect intencity. Valid range of value is [0..2].
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EffectIntensity(int32_t value);
    /// <summary>
    /// Gets border style.
    /// </summary>
    /// <see cref="BorderStyle"></see>
    ASPOSE_PDF_SHARED_API BorderStyle get_Style();
    /// <summary>
    /// Sets border style.
    /// </summary>
    /// <see cref="BorderStyle"></see>
    ASPOSE_PDF_SHARED_API void set_Style(BorderStyle value);
    /// <summary>
    /// Gets border effect.
    /// </summary>
    /// <see cref="BorderEffect"></see>
    ASPOSE_PDF_SHARED_API BorderEffect get_Effect() const;
    /// <summary>
    /// Sets border effect.
    /// </summary>
    /// <see cref="BorderEffect"></see>
    ASPOSE_PDF_SHARED_API void set_Effect(BorderEffect value);
    /// <summary>
    /// Gets dash pattern.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::Dash> get_Dash() const;
    /// <summary>
    /// Sets dash pattern.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Dash(System::SharedPtr<Aspose::Pdf::Annotations::Dash> value);
    
    /// <summary>
    /// Constructor for border object.
    /// </summary>
    /// <param name="parent">Parent annotation.</param>
    ASPOSE_PDF_SHARED_API Border(System::SharedPtr<Annotation> parent);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_BorderArray() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDictBE() const;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _enginePrim;
    
    void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    /// <summary>
    /// Writes attributes of effect property. Intensity value is being written only for cloudy type of effect.
    /// </summary>
    /// <param name="writer">Xml writer.</param>
    void WriteXfdfEffectAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// constructor of Border class.
    /// </summary>
    /// <param name="annotation">PDf object which describes annotation.</param>
    Border(System::SharedPtr<Annotation> owner, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Border, CODEPORTING_ARGS(System::SharedPtr<Annotation> owner, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation));
    /// <summary>
    /// Creates PDF object which describes the Border.
    /// </summary>
    /// <param name="page">Page where annotation which used this border is placed.</param>
    /// <returns>PDF dictionary which contains border property.</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> createBorder(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> page);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetEngineDict();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetEngineDictBE();
    
private:

    double hCornerRadius;
    double vCornerRadius;
    int32_t width;
    BorderStyle style;
    System::SharedPtr<Aspose::Pdf::Annotations::Dash> dash;
    BorderEffect borderEffect;
    int32_t effectIntensity;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _parent;
    System::WeakPtr<Annotation> _owner;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _borderArray;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDictBE;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> GetBorderArray();
    void SetBorderArrayElement(int32_t index, double value);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetBorderDict(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annot);
    static void SetValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annot, System::String key, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> annot, System::String key);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


