#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class LineAnnotation;
class PolyAnnotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfArray;
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class Point;
} // namespace Pdf
} // namespace Aspose
namespace System
{
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
/// Class which describes Measure coordinate system. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Measure : public System::Object
{
    typedef Measure ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    class NumberFormatList;
    
private:
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    
public:

    /// <summary>
    /// Number format for measure. 
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS NumberFormat : public System::Object
    {
        typedef NumberFormat ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Annotations::Measure;
        
    public:
    
        /// <summary>
        /// Value which indicates in which manner fraction values are displayed.
        /// </summary>
        enum class FractionStyle
        {
            /// <summary>
            /// Show fractional values as decimal fraction.
            /// </summary>
            ShowAsDecimal,
            /// <summary>
            /// Show fractional value as fraction.
            /// </summary>
            ShowAsFraction,
            /// <summary>
            /// Round fractional values to the nearest whole integer.
            /// </summary>
            Round,
            /// <summary>
            /// Truncate to achieve whole units.
            /// </summary>
            Truncate
        };
        
        
    public:
    
        /// <summary>
        /// A text string specifying a label for displaying the units.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_UnitLabel();
        /// <summary>
        /// A text string specifying a label for displaying the units.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_UnitLabel(System::String value);
        /// <summary>
        /// The conversion factor used to multiply a value in partial units of the previous number format array element to obtain a value in the units of this number format.
        /// </summary>
        ASPOSE_PDF_SHARED_API double get_ConvresionFactor();
        /// <summary>
        /// The conversion factor used to multiply a value in partial units of the previous number format array element to obtain a value in the units of this number format.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_ConvresionFactor(double value);
        /// <summary>
        /// In what manner fractional values are displayed.
        /// </summary>
        ASPOSE_PDF_SHARED_API Measure::NumberFormat::FractionStyle get_FractionDisplayment();
        /// <summary>
        /// In what manner fractional values are displayed.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_FractionDisplayment(Measure::NumberFormat::FractionStyle value);
        /// <summary>
        /// If FractionDisplayment is ShowAsDecimal, this value is precision of fractional value; It shall me multiple of 10. Default is 100.
        /// </summary>
        ASPOSE_PDF_SHARED_API int32_t get_Precision();
        /// <summary>
        /// If FractionDisplayment is ShowAsDecimal, this value is precision of fractional value; It shall me multiple of 10. Default is 100.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_Precision(int32_t value);
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value is denominator of the fraction. Default value is 16.
        /// </summary>
        ASPOSE_PDF_SHARED_API int32_t get_Denominator();
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value is denominator of the fraction. Default value is 16.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_Denominator(int32_t value);
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value determines meay or not the fraction be reduced. If value is true fraction may not be reduced.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_ForceDenominator();
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value determines meay or not the fraction be reduced. If value is true fraction may not be reduced.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_ForceDenominator(bool value);
        /// <summary>
        /// Text that shall be used between orders of thousands in display of numerical values. An empty string indicates that no text shall be added. Default is comma.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_ThousandsSeparator();
        /// <summary>
        /// Text that shall be used between orders of thousands in display of numerical values. An empty string indicates that no text shall be added. Default is comma.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_ThousandsSeparator(System::String value);
        /// <summary>
        /// Text that shall be used as the decimal position in displaying numerical values. An empty string indicates that the default shall be used. Default is period character.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_FractionSeparator();
        /// <summary>
        /// Text that shall be used as the decimal position in displaying numerical values. An empty string indicates that the default shall be used. Default is period character.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_FractionSeparator(System::String value);
        /// <summary>
        /// Text that shall be concatenated to the left of the label.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_BeforeText();
        /// <summary>
        /// Text that shall be concatenated to the left of the label.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_BeforeText(System::String value);
        /// <summary>
        /// Text that shall be concatenated after the label
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_AfterText();
        /// <summary>
        /// Text that shall be concatenated after the label
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_AfterText(System::String value);
        
        /// <summary>
        /// Constructor for NumberFormat class.
        /// </summary>
        /// <param name="measure">Measure object which contains this number format.</param>
        ASPOSE_PDF_SHARED_API NumberFormat(System::SharedPtr<Measure> measure);
        
    protected:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict() const;
        
        NumberFormat(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NumberFormat, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary));
        Measure::NumberFormat::FractionStyle TranslateFractionStyle(System::String fractionStyle);
        void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
        void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
        
        System::String getString(System::String key);
        
    };
    
    /// <summary>
    /// Represents list of number formats.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS NumberFormatList : public System::Object
    {
        typedef NumberFormatList ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Annotations::Measure;
        
    public:
    
        /// <summary>
        /// Count if items in the list. 
        /// </summary>
        ASPOSE_PDF_SHARED_API int32_t get_Count();
        
        /// <summary>
        /// Constructor for NumberFormatList. 
        /// </summary>
        /// <param name="measure">Parent measure object.</param>
        ASPOSE_PDF_SHARED_API NumberFormatList(System::SharedPtr<Measure> measure);
        
        /// <summary>
        /// Adds number format to list.
        /// </summary>
        /// <param name="value">Value to be added into list.</param>
        ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<Measure::NumberFormat> value);
        /// <summary>
        /// Inserts number format into list.
        /// </summary>
        /// <param name="index">Index where new element will be added.</param>
        /// <param name="value">Value to be inserted.</param>
        ASPOSE_PDF_SHARED_API void Insert(int32_t index, System::SharedPtr<Measure::NumberFormat> value);
        /// <summary>
        /// Removes number format from list.
        /// </summary>
        /// <param name="index">Index of item to be removed.</param>
        ASPOSE_PDF_SHARED_API void RemoveAt(int32_t index);
        
        /// <summary>
        /// Gets number format in list by its index.
        /// </summary>
        /// <param name="index">Index of the item to be retreived.</param>
        /// <returns>Retreived measure item.</returns>
        ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormat> idx_get(int32_t index);
        /// <summary>
        /// Sets number format in list by its index.
        /// </summary>
        /// <param name="index">Index of the item to be retreived.</param>
        /// <param name="value">Retreived measure item.</param>
        ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<Measure::NumberFormat> value);
        
    protected:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_EngineArray() const;
        
        NumberFormatList(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NumberFormatList, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array));
        void WriteXfdfAtributes(System::SharedPtr<System::Xml::XmlWriter> writer);
        void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader, System::SharedPtr<Measure> measure);
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array;
        
    };
    
    
public:

    /// <summary>
    /// A text string expressing the scale ratio of the drawing.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ScaleRatio();
    /// <summary>
    /// A text string expressing the scale ratio of the drawing.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ScaleRatio(System::String value);
    /// <summary>
    /// A number format array for measurement of change along the xaxis and, if Y is not present, along the y axis as well
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormatList> get_XFormat();
    /// <summary>
    /// A number format array for measurement of change along the xaxis and, if Y is not present, along the y axis as well
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_XFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of change along the y axis.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormatList> get_YFormat();
    /// <summary>
    /// A number format array for measurement of change along the y axis.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_YFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of distance in any direction.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormatList> get_DistanceFormat();
    /// <summary>
    /// A number format array for measurement of distance in any direction.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DistanceFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of area.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormatList> get_AreaFormat();
    /// <summary>
    /// A number format array for measurement of area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AreaFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of angles.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormatList> get_AngleFormat();
    /// <summary>
    /// A number format array for measurement of angles.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AngleFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of the slope of a line.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Measure::NumberFormatList> get_SlopeFormat();
    /// <summary>
    /// A number format array for measurement of the slope of a line.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SlopeFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// Point that shall specify the origin of the measurement coordinate system in default user space coordinates.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Origin();
    /// <summary>
    /// Point that shall specify the origin of the measurement coordinate system in default user space coordinates.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Origin(System::SharedPtr<Point> value);
    /// <summary>
    /// A factor that shall be used to convert the largest units along the y axis to the largest units along the x axis.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_XYFactor();
    /// <summary>
    /// A factor that shall be used to convert the largest units along the y axis to the largest units along the x axis.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_XYFactor(double value);
    
    /// <summary>
    /// Creates Measure object for measure annotations. 
    /// </summary>
    /// <param name="annotation">Annotation for which measure will be bound.</param>
    ASPOSE_PDF_SHARED_API Measure(System::SharedPtr<Annotation> annotation);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict() const;
    
    Measure(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Measure, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary));
    void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    virtual ASPOSE_PDF_SHARED_API ~Measure();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    void assertObject();
    System::SharedPtr<Measure::NumberFormatList> getNumberFormatList(System::String key);
    void setNumberFormatList(System::String key, System::SharedPtr<Measure::NumberFormatList> value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::Measure::NumberFormat::FractionStyle>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::Measure::NumberFormat::FractionStyle, const char_t*>, 4>& values();
};



