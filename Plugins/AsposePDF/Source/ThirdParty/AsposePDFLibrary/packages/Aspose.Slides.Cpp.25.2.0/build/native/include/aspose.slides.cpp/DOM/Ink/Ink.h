#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/Ink/IInk.h>

#include "DOM/GraphicalObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Ink
{
class IInkTrace;
class InkAnnotation;
class InkAnnotationXML;
class InkContext;
class InkDefinition;
class InkLayout;
class InkTrace;
class InkTraceGroup;
class InkTraceView;
class InkUtil;
} // namespace Ink
namespace PptxSerialization
{
namespace PartParser
{
class InkDocumentSerialization;
class InkPPTXSerialization;
namespace XmlParser
{
class a14_CT_NonVisualInkContentPartPropertiesElementData;
} // namespace XmlParser
} // namespace PartParser
} // namespace PptxSerialization
class ShapeCollection;
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
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Ink {

/// <summary>
/// Represents an ink object on a slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Ink : public Aspose::Slides::GraphicalObject, public Aspose::Slides::Ink::IInk
{
    typedef Ink ThisType;
    typedef Aspose::Slides::GraphicalObject BaseType;
    typedef Aspose::Slides::Ink::IInk BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Ink::InkLayout;
    friend class Aspose::Slides::Ink::InkUtil;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkDocumentSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::InkPPTXSerialization;
    friend class Aspose::Slides::ShapeCollection;
    /// @endcond
    
public:

    /// <summary>
    /// Gets all traces containing in the IInk element <see cref="Aspose::Slides::Ink::IInkTrace">IInkTrace</see>.
    /// Read-only.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// System::SharedPtr<IInk> ink = System::ExplicitCast<Aspose::Slides::Ink::IInk>(pres->get_Slide(0)->get_Shape(0));
    /// System::ArrayPtr<System::SharedPtr<IInkTrace>> traces = ink->get_Traces();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IInkTrace>> get_Traces() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTrace>>> get_InkTraces();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceGroup>>> get_TraceGroups();
    ASPOSE_SLIDES_LOCAL_API void set_TraceGroups(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceGroup>>> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::a14_CT_NonVisualInkContentPartPropertiesElementData> get_CNvContentPartPr() const;
    ASPOSE_SLIDES_LOCAL_API void set_CNvContentPartPr(System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::a14_CT_NonVisualInkContentPartPropertiesElementData> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkDefinition>>> get_Definitions();
    ASPOSE_SLIDES_LOCAL_API void set_Definitions(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkDefinition>>> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<InkContext> get_Context();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceView>>> get_TraceViews();
    ASPOSE_SLIDES_LOCAL_API void set_TraceViews(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceView>>> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotation>>> get_Annotations();
    ASPOSE_SLIDES_LOCAL_API void set_Annotations(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotation>>> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotationXML>>> get_AnnotationsXML();
    ASPOSE_SLIDES_LOCAL_API void set_AnnotationsXML(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotationXML>>> value);
    
    ASPOSE_SLIDES_LOCAL_API Ink(System::SharedPtr<ShapeCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Ink, CODEPORTING_ARGS(System::SharedPtr<ShapeCollection> parentImmediate));
    
    virtual ASPOSE_SLIDES_SHARED_API ~Ink();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkDefinition>>> m_definitions;
    System::SharedPtr<InkContext> m_context;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTrace>>> m_traces;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceGroup>>> m_traceGroups;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceView>>> m_traceViews;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotation>>> m_annotations;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkAnnotationXML>>> m_annotationsXML;
    System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::a14_CT_NonVisualInkContentPartPropertiesElementData> pr_CNvContentPartPr;
    
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<IInkTrace>> GetAllTraces(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTrace>>> traces, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InkTraceGroup>>> groups);
    
};

} // namespace Ink
} // namespace Slides
} // namespace Aspose


