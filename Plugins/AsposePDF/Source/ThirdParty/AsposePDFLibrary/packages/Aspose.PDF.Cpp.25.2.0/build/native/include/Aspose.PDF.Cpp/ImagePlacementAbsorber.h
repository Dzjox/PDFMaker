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
class Redaction;
} // namespace Annotations
enum class BlendMode;
class Document;
namespace Engine
{
namespace CommonData
{
namespace Graphics
{
namespace Patterns
{
class TilingPattern;
} // namespace Patterns
} // namespace Graphics
} // namespace CommonData
} // namespace Engine
class ImagePlacementCollection;
class Matrix;
class OperatorCollection;
namespace Operators
{
class SetAdvancedColor;
} // namespace Operators
class Page;
class Rectangle;
class Resources;
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
template <typename> class Stack;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
namespace Drawing2D
{
class Matrix;
} // namespace Drawing2D
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an absorber object of image placement objects.
/// Performs search of image usages and provides access to search results via <see cref="ImagePlacementAbsorber::ImagePlacements"></see> collection.
/// </summary>
/// <remarks>
/// The <see cref="ImagePlacementAbsorber"></see> object is basically used in images search scenario.
/// When the search is completed the occurrences are represented with <see cref="ImagePlacement"></see> objects that the <see cref="ImagePlacementAbsorber::ImagePlacements"></see> collection contains.
/// The <see cref="ImagePlacement"></see> object provides access to the image placement properties: dimensions, resolution etc.
/// Image positive rotation is counterclockwise, for the page, it is clockwise.
/// Here, we need to represent the image rotation angle, so we deduct the page angle from the image angle.
/// </remarks>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS ImagePlacementAbsorber final : public System::Object
{
    typedef ImagePlacementAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Redaction;
    
public:

    /// <summary>
    /// Gets/sets read only mode for parsing operations collection. It may help against out of memory 
    /// exceptions.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnlyMode() const;
    /// <summary>
    /// Gets/sets read only mode for parsing operations collection. It may help against out of memory 
    /// exceptions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsReadOnlyMode(bool value);
    /// <summary>
    /// Gets collection of image placement occurrences that are presented with <see cref="ImagePlacement"></see> objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ImagePlacementCollection> get_ImagePlacements() const;
    
    /// <summary>
    /// Initializes new instance of the <see cref="ImagePlacementAbsorber"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API ImagePlacementAbsorber();
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    ASPOSE_PDF_SHARED_API void Visit(const System::SharedPtr<Page>& page);
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <param name="pdf">Pdf pocument object.</param>
    ASPOSE_PDF_SHARED_API void Visit(const System::SharedPtr<Document>& pdf);
    
protected:

    /// <summary>
    /// Gets the collection of values indicating the number of links that have an image.
    /// </summary>
    const System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>>& get_ImageLinkCount() const;
    
private:

    bool isReadOnlyMode;
    System::SharedPtr<ImagePlacementCollection> Selected;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<System::Drawing::Drawing2D::Matrix>>> graphicsState_mat;
    System::SharedPtr<System::Collections::Generic::Stack<BlendMode>> graphicsState_bm;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> pr_ImageLinkCount;
    
    /// <summary>
    /// Sets the collection of values indicating the number of links that have an image.
    /// </summary>
    void set_ImageLinkCount(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> value);
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XForm>>> cpp_xform_storage;
    
    void Process(const System::SharedPtr<Page>& page, const System::SharedPtr<OperatorCollection>& contents, const System::SharedPtr<Resources>& resources);
    bool ProcessContents(const System::SharedPtr<Page>& page, const System::SharedPtr<OperatorCollection>& contents, const System::SharedPtr<Resources>& resources);
    System::SharedPtr<System::Drawing::Drawing2D::Matrix> GetMultipliedMatrix(const System::SharedPtr<Matrix>& contentsMatrix);
    void ComputeImageSizeParameters(const System::SharedPtr<Matrix>& matrix, const System::SharedPtr<XImage>& image, int32_t& resVertical, int32_t& resHorizontal, float& rotationAngle, System::SharedPtr<Rectangle>& rectangle);
    void ProcessPatterns(const System::SharedPtr<Page>& page, const System::SharedPtr<Resources>& resources, const System::SharedPtr<Operators::SetAdvancedColor>& opScn);
    void ProcessTilingPattern(const System::SharedPtr<Page>& page, const System::SharedPtr<Resources>& resources, const System::SharedPtr<Operators::SetAdvancedColor>& opScn, const System::SharedPtr<Engine::CommonData::Graphics::Patterns::TilingPattern>& pattern);
    static bool ContainsImage(const System::SharedPtr<Resources>& resources, const System::String& imageName);
    static bool ContainsForm(const System::SharedPtr<Resources>& resources, const System::String& formName);
    static float CalculateImageRotationAngle(float pageAngle, float imageAngle);
    
};

} // namespace Pdf
} // namespace Aspose


