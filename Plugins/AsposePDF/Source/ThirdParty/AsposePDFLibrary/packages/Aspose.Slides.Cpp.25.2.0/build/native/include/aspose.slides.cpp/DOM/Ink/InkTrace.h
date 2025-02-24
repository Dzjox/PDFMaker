#pragma once
// Copyright (c) 2001-2018 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/Ink/IInkTrace.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Ink
{
class IInkBrush;
class Ink;
enum class InkContinuationType;
class InkLayout;
class InkTraceElement;
class InkTraceFormat;
enum class InkTraceType;
} // namespace Ink
namespace PptxSerialization
{
namespace PartParser
{
class InkDefinitionSerialization;
class InkDocumentSerialization;
class InkTraceGroupSerialization;
class InkTraceSerialization;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
class PointF;
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Ink {

/// <summary>
/// Represents an Trace object.
/// A Trace element is used to record the data captured by the digitizer. 
/// It contains a sequence of points encoded according to the specification given by the InkTraceFormat object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS InkTrace : public Aspose::Slides::Ink::IInkTrace
{
    typedef InkTrace ThisType;
    typedef Aspose::Slides::Ink::IInkTrace BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Ink::InkLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkDefinitionSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkDocumentSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkTraceGroupSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkTraceSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets Brush for the IInkLine <see cref="Aspose::Slides::Ink::IInkBrush">IInkBrush</see>
    /// Read-only.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::SharedPtr<IInkBrush> brush = traces[0]->get_Brush();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IInkBrush> get_Brush() override;
    /// <summary>
    /// Gets points for the IInkLine <see cref="System::Drawing::PointF"></see>
    /// Read-only.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// System::ArrayPtr<System::Drawing::PointF> points = traces[0]->get_Points();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::Drawing::PointF> get_Points() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<float>>>> get_TraceElements();
    ASPOSE_SLIDES_LOCAL_API System::String get_Id();
    ASPOSE_SLIDES_LOCAL_API void set_Id(System::String value);
    ASPOSE_SLIDES_LOCAL_API InkTraceType get_Type();
    ASPOSE_SLIDES_LOCAL_API void set_Type(InkTraceType value);
    ASPOSE_SLIDES_LOCAL_API InkContinuationType get_Continuation();
    ASPOSE_SLIDES_LOCAL_API void set_Continuation(InkContinuationType value);
    ASPOSE_SLIDES_LOCAL_API System::String get_PriorRef();
    ASPOSE_SLIDES_LOCAL_API void set_PriorRef(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_ContextRef();
    ASPOSE_SLIDES_LOCAL_API void set_ContextRef(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_BrushRef();
    ASPOSE_SLIDES_LOCAL_API void set_BrushRef(System::String value);
    ASPOSE_SLIDES_LOCAL_API double get_Duration();
    ASPOSE_SLIDES_LOCAL_API void set_Duration(double value);
    ASPOSE_SLIDES_LOCAL_API double get_TimeOffset();
    ASPOSE_SLIDES_LOCAL_API void set_TimeOffset(double value);
    ASPOSE_SLIDES_LOCAL_API System::String get_TraceValue();
    ASPOSE_SLIDES_LOCAL_API void set_TraceValue(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InkTraceFormat> get_TraceFormat();
    
    ASPOSE_SLIDES_LOCAL_API InkTrace(System::SharedPtr<Aspose::Slides::Ink::Ink> ink);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InkTrace, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::Ink::Ink> ink));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::Drawing::PointF>> GetPoints(System::Drawing::SizeF sizeFrame);
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Color GetColor();
    /// @endcond
    
private:

    System::String m_id;
    InkTraceType m_type;
    InkContinuationType m_continuation;
    System::String m_priorRef;
    System::String m_contextRef;
    System::String m_brushRef;
    double m_duration;
    double m_timeOffset;
    System::String m_traceValue;
    System::WeakPtr<Aspose::Slides::Ink::Ink> m_rootElement;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<float>>>> pointList;
    
    ASPOSE_SLIDES_LOCAL_API void TranslateTraceToList(System::SharedPtr<InkTraceFormat> tf);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceElement>>>>> ParseTraceValue();
    ASPOSE_SLIDES_LOCAL_API System::String PrepareValues();
    ASPOSE_SLIDES_LOCAL_API double GetDeviatior(System::String channelName);
    
};

} // namespace Ink
} // namespace Slides
} // namespace Aspose


