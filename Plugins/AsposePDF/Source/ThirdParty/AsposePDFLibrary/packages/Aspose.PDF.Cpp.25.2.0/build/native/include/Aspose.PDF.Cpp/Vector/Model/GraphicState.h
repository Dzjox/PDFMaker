#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class Matrix;
class Operator;
class Resources;
namespace Vector
{
class CumulativeGraphicState;
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class GraphicAppender;
class GraphicsAbsorber;
} // namespace Vector
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
template <typename, typename> class SortedDictionary;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents graphic state of the current <see cref="GraphicElement"></see>.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GraphicState : public System::Object
{
    typedef GraphicState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Vector::GraphicAppender;
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    
public:

    /// <summary>
    /// Gets the current transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix() const;
    /// <summary>
    /// Gets the current transformation matrix.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    /// <summary>
    /// Gets the operators representing clips and concatenation matrices.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_ClipsAndMatrices() const;
    /// <summary>
    /// Gets the operators representing colorspaces, colors and line styles.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::SortedDictionary<uint8_t, System::SharedPtr<Operator>>> get_ColorsAndStyles() const;
    
protected:

    static const uint8_t None;
    static const uint8_t SetColorSpace;
    static const uint8_t SetColorSpaceStroke;
    static const uint8_t NonStrokeColor;
    static const uint8_t StrokeColor;
    static const uint8_t ExtGS;
    static const uint8_t LineWidth;
    static const uint8_t LineCap;
    static const uint8_t LineJoin;
    static const uint8_t MiterLimit;
    static const uint8_t LineDashPattern;
    static const uint8_t Intent;
    static const uint8_t Flatness;
    static const uint8_t DictCount;
    
    /// <summary>
    /// Used for absorb debuging state.
    /// </summary>
    const System::SharedPtr<CumulativeGraphicState>& get_CumulativeState() const;
    const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>>& get_AllOperators() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_Colorspaces();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_ExtGstates();
    const System::SharedPtr<Aspose::Pdf::Resources>& get_Resources() const;
    
    /// <summary>
    /// initialize new graphic state.
    /// </summary>
    /// <param name="resources">Resource dictionary</param>
    GraphicState(System::SharedPtr<Aspose::Pdf::Resources> resources);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GraphicState, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Resources> resources));
    
    GraphicState(System::SharedPtr<Aspose::Pdf::Resources> resources, System::SharedPtr<CumulativeGraphicState> cumulativeGraphicState);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GraphicState, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Resources> resources, System::SharedPtr<CumulativeGraphicState> cumulativeGraphicState));
    /// <summary>
    /// Clones this gs.
    /// </summary>
    /// <returns>Cloned object</returns>
    System::SharedPtr<GraphicState> Clone();
    /// <summary>
    /// Deletes all operators from the end of given list until the 'q' operator is encountered.
    /// </summary>
    static void RestoreGS(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Processes operator and if this operator is graphic state then adds it to this state. 
    /// </summary>
    /// <param name="op">Operator</param>
    void ProcessOperator(System::SharedPtr<Operator> op);
    void ConcatenateMatrix(System::SharedPtr<Operator> op);
    void AddClipOrMatrixOperator(System::SharedPtr<Operator> op);
    void SetExtGS(System::SharedPtr<Operator> op);
    void SetLineWidth(System::SharedPtr<Operator> op);
    void SetLineCap(System::SharedPtr<Operator> op);
    void SetLineJoin(System::SharedPtr<Operator> op);
    void SetMiterLimit(System::SharedPtr<Operator> op);
    void SetLineDashPattern(System::SharedPtr<Operator> op);
    void SetIntent(System::SharedPtr<Operator> op);
    void SetFlatness(System::SharedPtr<Operator> op);
    
private:

    System::SharedPtr<System::Collections::Generic::SortedDictionary<uint8_t, System::SharedPtr<Operator>>> _colorsAndStyles;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _clipsAndMatrices;
    System::SharedPtr<Aspose::Pdf::Matrix> _matrix;
    /// <summary>
    /// Set true for absorb debuging state.
    /// </summary>
    bool _saveCumulativeState;
    System::SharedPtr<CumulativeGraphicState> pr_CumulativeState;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pr_AllOperators;
    
    void set_AllOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> value);
    
    System::SharedPtr<Aspose::Pdf::Resources> pr_Resources;
    
    static uint8_t DetermineOperator(System::SharedPtr<Operator> op);
    static bool IsStrokeColor(System::SharedPtr<Operator> op);
    static bool IsNonStrokeColor(System::SharedPtr<Operator> op);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetExtGStateDict(System::String name);
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


