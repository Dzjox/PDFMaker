#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Generator/Drawing/Shape.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Operator;
class PageGenerator;
class Rectangle;
namespace Tests
{
namespace Generator
{
class GraphTests;
} // namespace Generator
} // namespace Tests
} // namespace Pdf
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
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Drawing {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Drawing</b> namespace provides classes describing graphic primitives like arc, line, circle etc. 
/// Corresponding objects can be used for creating new documents.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Represents arc.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Arc final : public Aspose::Pdf::Drawing::Shape
{
    typedef Arc ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Tests::Generator::GraphTests;
    
private:

    class StartEndAngle : public System::Object, public System::Details::BoxableObjectBase
    {
        typedef StartEndAngle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        double get_StartAngle() const;
        void set_StartAngle(double value);
        double get_EndAngle() const;
        void set_EndAngle(double value);
        int32_t get_Sgn() const;
        void set_Sgn(int32_t value);
        
        StartEndAngle();
        
    private:
    
        double pr_StartAngle;
        double pr_EndAngle;
        int32_t pr_Sgn;
        
    };
    
    
public:

    /// <summary>
    /// Gets a float value that indicates the x-coordinate of the center of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_PosX() const;
    /// <summary>
    /// Sets a float value that indicates the x-coordinate of the center of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PosX(double value);
    /// <summary>
    /// Gets a float value that indicates the y-coordinate of the center of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_PosY() const;
    /// <summary>
    /// Sets a float value that indicates the y-coordinate of the center of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PosY(double value);
    /// <summary>
    /// Gets a float value that indicates the radius of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Radius() const;
    /// <summary>
    /// Sets a float value that indicates the radius of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Radius(double value);
    /// <summary>
    /// Gets a float value that indicates the beginning angle degree of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Alpha() const;
    /// <summary>
    /// Sets a float value that indicates the beginning angle degree of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Alpha(double value);
    /// <summary>
    /// Gets a float value that indicates the ending angle degree of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Beta() const;
    /// <summary>
    /// Sets a float value that indicates the ending angle degree of the arc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Beta(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Arc"></see> class.
    /// </summary>
    /// <param name="posX">The x-coordinate of the center point of the arc.</param>
    /// <param name="posY">The y-coordinate of the center point of the arc.</param>
    /// <param name="radius">The radius value of the arc.</param>
    /// <param name="alpha">The beginning angle value of the arc.</param>
    /// <param name="beta">The end angle value of the arc.</param>
    ASPOSE_PDF_SHARED_API Arc(float posX, float posY, float radius, float alpha, float beta);
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
protected:

    Arc();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Arc, CODEPORTING_ARGS());
    ASPOSE_PDF_SHARED_API void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Pdf::Rectangle> GetRect() override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    System::ArrayPtr<float> GetStartPosition();
    System::ArrayPtr<float> GetEndPosition();
    
private:

    double posX;
    double posY;
    double radius;
    double alpha;
    double beta;
    static const double EPSILON;
    
    void CreateSmallArc(double r, double a1, double a2, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double curX, double curY);
    bool CheckPoint(int32_t pointAngle, double pointX, double pointY, double startAngle, double endAngle, double containerWidth, double containerHeight);
    Arc::StartEndAngle GetStartEndAngle();
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


