#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace CommonData
{
class IPdfRectangle;
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
enum class HorizontalAlignment;
class Page;
class PageSize;
class Point;
class Rectangle;
enum class VerticalAlignment;
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
class Rectangle;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary> 
/// Represents a class to edit the PDF file's page, including rotating page, zooming page, moving position and changing page size. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfPageEditor final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfPageEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Page;
    
private:

    class Transition : public System::Object
    {
        typedef Transition ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t type;
        System::SharedPtr<Document> document;
        int32_t duration;
        
        int32_t get_Duration() const;
        void set_Duration(int32_t value);
        
        Transition(System::SharedPtr<Document> document, int32_t type);
        
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetDictionary();
        
    };
    
    
public:

    /// <summary>
    /// Gets duration of the transition effect.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_TransitionDuration();
    /// <summary>
    /// Sets duration of the transition effect.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TransitionDuration(int32_t value);
    /// <summary>
    /// Gets transition style to use when moving to this page from another during a presentation.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_TransitionType();
    /// <summary>
    /// Sets transition style to use when moving to this page from another during a presentation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TransitionType(int32_t value);
    /// <summary>
    /// Gets display duration for pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_DisplayDuration();
    /// <summary>
    /// Sets display duration for pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DisplayDuration(int32_t value);
    /// <summary>
    /// Gets the page numbers to be edited. By default, each page would be edited.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_ProcessPages();
    /// <summary>
    /// Sets the page numbers to be edited. By default, each page would be edited.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ProcessPages(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets the rotation of the pages, the rotation must be 0, 90, 180 or 270.
    /// Default value is 0.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Rotation();
    /// <summary>
    /// Sets the rotation of the pages, the rotation must be 0, 90, 180 or 270.
    /// Default value is 0.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotation(int32_t value);
    /// <summary>
    /// A hashtable contains the page number and rotation degree,
    /// the key represents the page number, the value of key represents the rotation in degrees.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> get_PageRotations();
    /// <summary>
    /// A hashtable contains the page number and rotation degree,
    /// the key represents the page number, the value of key represents the rotation in degrees.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageRotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> value);
    /// <summary>
    /// Get or sets zoom coefficient. Value 1.0 corresponds to 100%.
    /// Default value is 1.0.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Zoom();
    /// <summary>
    /// Get or sets zoom coefficient. Value 1.0 corresponds to 100%.
    /// Default value is 1.0.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Zoom(float value);
    /// <summary>
    /// Gets the output file's page size.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::PageSize> get_PageSize();
    /// <summary>
    /// Sets the output file's page size.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageSize(System::SharedPtr<Aspose::Pdf::PageSize> value);
    /// <summary>
    /// Gets the horizontal alignment of the original PDF content on the result page, default is AlignmentType.Left.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Sets the horizontal alignment of the original PDF content on the result page, default is AlignmentType.Left.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or Sets the vertical alignment of the original PDF content on the result page, default is VerticalAlignmentType.Bottom.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignmentType();
    /// <summary>
    /// Gets or Sets the vertical alignment of the original PDF content on the result page, default is VerticalAlignmentType.Bottom.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignmentType(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    /// Constructor for PdfPageEditor class.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfPageEditor();
    /// <summary>
    /// Constructor for PdfPageEditor class.
    /// </summary>
    /// <param name="document">Document object which should be processed.</param>
    ASPOSE_PDF_SHARED_API PdfPageEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Moves the origin from (0, 0) to the point that appointted. 
    /// The origin is left-bottom and the unit is point(1 inch = 72 points). 
    /// </summary>
    /// <param name="moveX">X-coordinate.</param>
    /// <param name="moveY">Y-coordinate.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void MovePosition(float moveX, float moveY);
    /// <summary>
    /// Returns total number of pages.
    /// </summary>  
    /// <returns>Number of pages.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API int32_t GetPages();
    /// <summary>
    /// Returns the page size of the specified page.
    /// </summary>
    /// <param name="page">Page index. Document pages are numbered from 1.</param>
    /// <returns>Result is instance of PageSize. Use Width and Height properties of the returned object to get page width and height.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::PageSize> GetPageSize(int32_t page);
    /// <summary>
    /// Returns the rotation of specified page. 
    /// </summary>
    /// <param name="page">Page index. Document pages are numbered from 1.</param>
    /// <returns>Page rotation in degrees.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API int32_t GetPageRotation(int32_t page);
    /// <summary>
    /// Returns size of specified box in document.
    /// </summary>
    /// <param name="page">Page index. Document pages are numbered from 1.</param>
    /// <param name="pageBoxName">Box type name. Valid values are: "art", "bleed", "crop", "media", "trim".</param>
    /// <returns>Rectangle which contains requested box.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::Drawing::Rectangle GetPageBoxSize(int32_t page, System::String pageBoxName);
    /// <summary>
    /// Saves changed document into file. 
    /// </summary>
    /// <param name="outputFile">Path to file where document will be saved.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Save(System::String outputFile) override;
    /// <summary>
    /// Saves changed document into stream. 
    /// </summary>
    /// <param name="outputStream">Stream where changed PDF document will be saved.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> outputStream) override;
    /// <summary>
    /// Apply changes made to the document pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ApplyChanges();
    
protected:

    /// <summary>
    /// Check is the box is defined on the page.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="boxName">The box name.</param>
    /// <returns>true if the box is defined; otherwise, false.</returns>
    static bool IsBoxDefined(System::SharedPtr<Page> page, System::String boxName);
    /// <summary>
    /// Return page size of the page.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <returns>Rectangle.</returns>
    static System::SharedPtr<Rectangle> GetPageRectangle(System::SharedPtr<Page> page);
    
private:

    int32_t transitionSet;
    int32_t displayDuration;
    int32_t transitionType;
    int32_t transitionDuration;
    System::ArrayPtr<int32_t> pages;
    int32_t rotation;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> pageRotations;
    float zoom;
    System::SharedPtr<Aspose::Pdf::PageSize> pageSize;
    Aspose::Pdf::HorizontalAlignment alignment;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    System::SharedPtr<Point> move;
    static const System::String E_INVALID_ROTATIONS;
    static const System::String E_INVALID_ROTATION_VALUE;
    
    void FlushChanges();
    /// <summary>
    /// Returns rotation value (in degrees) specified by customer for given page.
    /// </summary>
    /// <param name="pageIndex">Page index (starting from 1)</param>
    /// <returns>Rotation angle for page.</returns>
    int32_t getRequestedPageRotation(int32_t pageIndex);
    /// <summary>
    /// Convert IPdfRectangle to Rectangle.
    /// </summary>
    /// <param name="rect">Input rect.</param>
    /// <returns>Rectangle.</returns>
    static System::SharedPtr<Rectangle> ToRectangle(System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPdfRectangle> rect);
    void applyChangesToPage(int32_t pageIndex);
    void checkRotation(int32_t rotation);
    void checkRotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> rotations);
    System::Drawing::Rectangle convertToRectangle(System::SharedPtr<Rectangle> rect);
    
public:

    /// <summary>  Out Vertical Split</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t SPLITVOUT = 1;
    /// <summary>  Out Horizontal Split</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t SPLITHOUT = 2;
    /// <summary>  In Vertical Split</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t SPLITVIN = 3;
    /// <summary>  IN Horizontal Split</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t SPLITHIN = 4;
    /// <summary>  Vertical Blinds</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BLINDV = 5;
    /// <summary>  Vertical Blinds</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BLINDH = 6;
    /// <summary>  Inward Box</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t INBOX = 7;
    /// <summary>  Outward Box</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t OUTBOX = 8;
    /// <summary>  Left-Right Wipe</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t LRWIPE = 9;
    /// <summary>  Right-Left Wipe</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t RLWIPE = 10;
    /// <summary>  Bottom-Top Wipe</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t BTWIPE = 11;
    /// <summary>  Top-Bottom Wipe</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t TBWIPE = 12;
    /// <summary>The old page dissolves </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DISSOLVE = 13;
    /// <summary>  Left-Right Glitter</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t LRGLITTER = 14;
    /// <summary>  Top-Bottom Glitter</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t TBGLITTER = 15;
    /// <summary>  Diagonal Glitter</summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DGLITTER = 16;
    
private:

    static constexpr int32_t TRANSITION_DURATION = 1;
    static constexpr int32_t TRANSITION_TYPE = 2;
    static constexpr int32_t DISPLAY_DURATION = 4;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


