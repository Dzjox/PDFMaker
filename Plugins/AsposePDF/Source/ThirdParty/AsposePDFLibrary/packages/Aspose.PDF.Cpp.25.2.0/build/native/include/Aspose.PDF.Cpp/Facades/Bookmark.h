#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class ExplicitDestination;
} // namespace Annotations
class ApsToPdfConverter;
class Document;
namespace Facades
{
class Bookmarks;
class PdfBookmarkEditor;
} // namespace Facades
class OutlineItemCollection;
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a bookmark.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Bookmark final : public System::Object
{
    typedef Bookmark ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Facades::Bookmarks;
    friend class Aspose::Pdf::Facades::PdfBookmarkEditor;
    
public:

    /// <summary>
    /// Gets the action bound with the bookmark.
    /// If PageNumber is presented the action can not be specified.
    /// The action type includes: "GoTo", "GoToR", "Launch", "Named".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Action() const;
    /// <summary>
    /// Sets the action bound with the bookmark.
    /// If PageNumber is presented the action can not be specified.
    /// The action type includes: "GoTo", "GoToR", "Launch", "Named".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Action(System::String value);
    /// <summary>
    /// Gets the bold flag of bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_BoldFlag() const;
    /// <summary>
    /// Sets the bold flag of bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BoldFlag(bool value);
    /// @deprecated Use ChildItems property instead of this one.
    /// <summary>
    /// Gets bookmark's children.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Bookmarks> get_ChildItem();
    /// @deprecated Use ChildItems property instead of this one.
    /// <summary>
    /// Sets bookmark's children.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ChildItem(System::SharedPtr<Bookmarks> value);
    /// <summary>
    /// Gets bookmark's children.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Bookmarks> get_ChildItems() const;
    /// <summary>
    /// Sets bookmark's children.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ChildItems(System::SharedPtr<Bookmarks> value);
    /// <summary>
    /// Gets bookmark's destination page. Required if action is set as string.Empty.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Destination() const;
    /// <summary>
    /// Sets bookmark's destination page. Required if action is set as string.Empty.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Destination(System::String value);
    /// <summary>
    /// Gets the italic flag of bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ItalicFlag() const;
    /// <summary>
    /// Sets the italic flag of bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ItalicFlag(bool value);
    /// <summary>
    /// Gets bookmark's hierarchy level.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Level() const;
    /// <summary>
    /// Sets bookmark's hierarchy level.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Level(int32_t value);
    /// <summary>
    /// Gets the type of display bookmark's destination page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_PageDisplay() const;
    /// <summary>
    /// Sets the type of display bookmark's destination page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDisplay(System::String value);
    /// <summary>
    /// Gets the bottom coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageDisplay_Bottom() const;
    /// <summary>
    /// Sets the bottom coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDisplay_Bottom(int32_t value);
    /// <summary>
    /// Gets the left coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageDisplay_Left() const;
    /// <summary>
    /// Sets the left coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDisplay_Left(int32_t value);
    /// <summary>
    /// Gets the right coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageDisplay_Right() const;
    /// <summary>
    /// Sets the right coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDisplay_Right(int32_t value);
    /// <summary>
    /// Gets the top coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageDisplay_Top() const;
    /// <summary>
    /// Sets the top coordinate of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDisplay_Top(int32_t value);
    /// <summary>
    /// Gets the zoom factor of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageDisplay_Zoom() const;
    /// <summary>
    /// Sets the zoom factor of page display.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDisplay_Zoom(int32_t value);
    /// <summary>
    /// Gets the number of bookmark's destination page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageNumber() const;
    /// <summary>
    /// Sets the number of bookmark's destination page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNumber(int32_t value);
    /// <summary>
    /// Gets the file (path) which is required for "GoToR" action of bookmark.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_RemoteFile() const;
    /// <summary>
    /// Sets the file (path) which is required for "GoToR" action of bookmark.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemoteFile(System::String value);
    /// <summary>
    /// Gets bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title() const;
    /// <summary>
    /// Sets bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    /// <summary>
    /// Gets the color of bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_TitleColor() const;
    /// <summary>
    /// Sets the color of bookmark's title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TitleColor(System::Drawing::Color value);
    /// <summary>
    /// Gets bookmark state (open, close).
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Open() const;
    /// <summary>
    /// Sets bookmark state (open, close).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Open(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Bookmark"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Bookmark();
    
    ASPOSE_PDF_SHARED_API int32_t CompareTo(const System::SharedPtr<Bookmark>& value);
    
protected:

    static System::SharedPtr<Bookmark> Create(System::SharedPtr<OutlineItemCollection> item);
    System::SharedPtr<OutlineItemCollection> ToOutlineItemCollection(System::SharedPtr<Document> doc);
    
private:

    System::String action;
    bool bold;
    System::SharedPtr<Bookmarks> childItems;
    bool italic;
    System::String destination;
    int32_t level;
    System::String pageDisplayMode;
    int32_t pageNumber;
    System::String remoteFile;
    System::String title;
    System::Drawing::Color color;
    int32_t left;
    int32_t bottom;
    int32_t right;
    int32_t top;
    int32_t zoom;
    bool open;
    
    System::SharedPtr<Aspose::Pdf::Annotations::ExplicitDestination> CreateDestination(System::SharedPtr<Page> page);
    System::SharedPtr<Aspose::Pdf::Annotations::ExplicitDestination> CreateDestination(int32_t page);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


