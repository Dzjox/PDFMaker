#pragma once

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace PdfToMarkdown
{
class DocumentObjectModel;
class HeuristicHeaderDetector;
} // namespace PdfToMarkdown
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace PdfToMarkdown {

/// <summary>
/// Represents a class to work with header levels based on font size. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HeadingLevels : public System::Object
{
    typedef HeadingLevels ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PdfToMarkdown::HeuristicHeaderDetector;
    friend class Aspose::Pdf::PdfToMarkdown::DocumentObjectModel;
    
public:

    /// <summary>
    /// Gets all heading levels.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<double>> get_AllLevels();
    
    /// <summary>
    /// Creates a new instance of the HeadingLevels class.
    /// </summary>
    ASPOSE_PDF_SHARED_API HeadingLevels();
    /// <summary>
    /// Creates a new instance of the HeadingLevels class. 
    /// </summary>
    /// <param name="threshold">
    /// The threshold value to compare font sizes.
    /// Within the threshold, the header levels are the same.
    /// The threshold default value is 0.01.
    /// </param>
    ASPOSE_PDF_SHARED_API HeadingLevels(double threshold);
    
    /// <summary>
    /// Adds heading levels.
    /// Font size collection should be sorted by decreasing size.
    /// </summary>
    /// <param name="fontSizes">Values should be sorted in decreasing order.</param>
    /// <exception cref="ArgumentException">If the value is not sorted or the value is less than one.</exception>
    ASPOSE_PDF_SHARED_API void AddLevels(System::SharedPtr<System::Collections::Generic::ICollection<double>> fontSizes);
    
protected:

    /// <summary>
    /// Estimates the possible header level.
    /// If fontSize is not found in the list of levels, the level closest to this font size value will be returned.
    /// If fontSize is outside the minimum and maximum header levels specified, the method will return false.
    /// </summary>
    /// <param name="fontSize">The font size.</param>
    /// <returns>Heading level.</returns>
    int32_t EstimateLevel(double fontSize);
    /// <summary>
    /// Finds level for corresponding font size. Looking for an exact match.
    /// </summary>
    /// <param name="fontSize">The font size.</param>
    /// <param name="level">The corresponding heading level for given font size.</param>
    /// <returns>False If the fontSize is not within the specified range.</returns>
    bool FindLevel(double fontSize, int32_t& level);
    
private:

    static const double DefaultThreshold;
    System::SharedPtr<System::Collections::Generic::List<double>> _headingLevels;
    double _threshold;
    
    bool IsFontSizeWithinRange(double fontSize);
    
};

} // namespace PdfToMarkdown
} // namespace Pdf
} // namespace Aspose


