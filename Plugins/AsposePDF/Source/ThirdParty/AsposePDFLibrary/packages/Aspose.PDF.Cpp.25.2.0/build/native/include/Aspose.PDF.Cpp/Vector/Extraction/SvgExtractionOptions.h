#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/predicate.h>
#include <system/object.h>

#include "Aspose.PDF.Cpp/Vector/Model/XFormPlacement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Rectangle;
namespace Vector
{
namespace Extraction
{
class ApsSvgRenderer;
} // namespace Extraction
class SvgExtractor;
} // namespace Vector
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Vector {

/// <summary>
/// Represents an options class for extracting vector graphics from the pdf document page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SvgExtractionOptions : public System::Object
{
    typedef SvgExtractionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Vector::Extraction::ApsSvgRenderer;
    friend class Aspose::Pdf::Vector::SvgExtractor;
    
public:

    /// <summary>
    /// Gets and sets option to unpack only the XForm corresponding to the specified predicate.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Predicate<System::SharedPtr<XFormPlacement>> get_UnpackXFormPredicate() const;
    /// <summary>
    /// Gets and sets option to unpack only the XForm corresponding to the specified predicate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UnpackXFormPredicate(System::Predicate<System::SharedPtr<XFormPlacement>> value);
    /// <summary>
    /// Gets and sets a flag that determines whether XFrom found on pages should be unpacked or not.
    /// XFrom elements can end up in different SVG files.
    /// Only XForms that are rendered by Do statements from the page content are unpacked. Nested XForms are not unpacked.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UnpackPageContentXForm() const;
    /// <summary>
    /// Gets and sets a flag that determines whether XFrom found on pages should be unpacked or not.
    /// XFrom elements can end up in different SVG files.
    /// Only XForms that are rendered by Do statements from the page content are unpacked. Nested XForms are not unpacked.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UnpackPageContentXForm(bool value);
    /// <summary>
    /// Gets and sets opttion to extracts every subpath from a PDF document to separate SVG images.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ExtractEverySubPathToSvg() const;
    /// <summary>
    /// Gets and sets opttion to extracts every subpath from a PDF document to separate SVG images.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExtractEverySubPathToSvg(bool value);
    /// <summary>
    /// Gets and sets the bounding rectangle that defines the extraction area for SVG extraction.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Rectangle>& get_ExtractionAreaBound() const;
    /// <summary>
    /// Gets and sets the bounding rectangle that defines the extraction area for SVG extraction.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExtractionAreaBound(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets and sets an option to define strictly checks whether subpaths are within the specified rectangle in <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::ExtractionAreaBound">ExtractionAreaBound</see>.
    /// If set to false, then subpaths that are not completely included in <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::ExtractionAreaBound">ExtractionAreaBound</see> will be extracted.
    /// The default value is <c>True</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_StrictExtractionAreaBoundCheck() const;
    /// <summary>
    /// Gets and sets an option to define strictly checks whether subpaths are within the specified rectangle in <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::ExtractionAreaBound">ExtractionAreaBound</see>.
    /// If set to false, then subpaths that are not completely included in <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::ExtractionAreaBound">ExtractionAreaBound</see> will be extracted.
    /// The default value is <c>True</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StrictExtractionAreaBoundCheck(bool value);
    /// <summary>
    /// Gets and sets an option The strength of grouping subpaths into images. Allows you to configure the degree of grouping of subpaths.
    /// The value ranges is from 0 to 1. A value of 0 corresponds to the <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::ExtractEverySubPathToSvg">ExtractEverySubPathToSvg</see> option being enabled.
    /// A value of 1 will create single image for all vector paths on the page.
    /// The option has an effect when <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::AutoGrouping">AutoGrouping</see> is false.
    /// The default value is <c>0.8</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_GroupStrength() const;
    /// <summary>
    /// Gets and sets an option The strength of grouping subpaths into images. Allows you to configure the degree of grouping of subpaths.
    /// The value ranges is from 0 to 1. A value of 0 corresponds to the <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::ExtractEverySubPathToSvg">ExtractEverySubPathToSvg</see> option being enabled.
    /// A value of 1 will create single image for all vector paths on the page.
    /// The option has an effect when <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::AutoGrouping">AutoGrouping</see> is false.
    /// The default value is <c>0.8</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_GroupStrength(double value);
    /// <summary>
    /// Gets and sets the option to automatically group subpaths into images.
    /// This option excludes the <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::GroupStrength">GroupStrength</see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AutoGrouping() const;
    /// <summary>
    /// Gets and sets the option to automatically group subpaths into images.
    /// This option excludes the <see cref="Aspose::Pdf::Vector::SvgExtractionOptions::GroupStrength">GroupStrength</see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AutoGrouping(bool value);
    /// <summary>
    /// Gets the minimum stroke width that will be used in the resulting SVG.
    /// If the PDF use a thinner stroke width, it will be replaced with this width.
    /// The default value is 0.5.
    /// </summary>
    /// <remarks>
    /// <para>
    /// The value is expressed in transformed user space units of the converted PDF page. By default 1 user
    /// space unit is 1/72 inch (0.35 mm), but this can be overridden by the PDF document. Transforms can affect
    /// the actual minimum width in the generated SVG.
    /// </para>
    /// </remarks>
    ASPOSE_PDF_SHARED_API double get_MinStrokeWidth() const;
    /// <summary>
    /// Sets the minimum stroke width that will be used in the resulting SVG.
    /// If the PDF use a thinner stroke width, it will be replaced with this width.
    /// The default value is 0.5.
    /// </summary>
    /// <remarks>
    /// <para>
    /// The value is expressed in transformed user space units of the converted PDF page. By default 1 user
    /// space unit is 1/72 inch (0.35 mm), but this can be overridden by the PDF document. Transforms can affect
    /// the actual minimum width in the generated SVG.
    /// </para>
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_MinStrokeWidth(double value);
    
    /// <summary>
    /// Creates SvgExtractionOptions class instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API SvgExtractionOptions();
    
protected:

    /// <summary>
    /// Gets and sets an option indicating that the conversion comes from a ready group of elements.
    /// </summary>
    bool get_ConvertFromExistingElementsGroup() const;
    /// <summary>
    /// Gets and sets an option indicating that the conversion comes from a ready group of elements.
    /// </summary>
    void set_ConvertFromExistingElementsGroup(bool value);
    
private:

    double _groupStrength;
    System::Predicate<System::SharedPtr<XFormPlacement>> pr_UnpackXFormPredicate;
    bool pr_UnpackPageContentXForm;
    bool pr_ExtractEverySubPathToSvg;
    System::SharedPtr<Rectangle> pr_ExtractionAreaBound;
    bool pr_StrictExtractionAreaBoundCheck;
    bool pr_AutoGrouping;
    double pr_MinStrokeWidth;
    bool pr_ConvertFromExistingElementsGroup;
    
    static bool XFormPredicate(System::SharedPtr<XFormPlacement> placement);
    static double Clamp(double value, double min, double max);
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


