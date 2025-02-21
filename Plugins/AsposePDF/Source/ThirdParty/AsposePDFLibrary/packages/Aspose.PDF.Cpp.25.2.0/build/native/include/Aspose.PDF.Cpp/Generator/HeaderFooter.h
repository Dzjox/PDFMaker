#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icloneable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class FloatingBox;
class MarginInfo;
class Page;
class PageGenerator;
class Paragraphs;
class Rectangle;
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
class String;
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents header or footer pdf page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HeaderFooter final : public System::ICloneable
{
    typedef HeaderFooter ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets is clip extra content.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsClipExtraContent() const;
    /// <summary>
    /// Sets is clip extra content.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsClipExtraContent(bool value);
    /// <summary>
    /// Gets the end note paragraphs.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Paragraphs>& get_Paragraphs() const;
    /// <summary>
    /// Sets the end note paragraphs.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the margin info.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Sets the margin info.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    
    /// <summary>
    /// Clones a new object.
    /// </summary>
    /// <returns>The new object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
    /// <summary>
    /// Default ctor
    /// </summary>
    ASPOSE_PDF_SHARED_API HeaderFooter();
    
protected:

    /// <summary>
    /// Gets is note more than page.
    /// </summary>
    bool get_IsNoteMoreThanPage() const;
    /// <summary>
    /// Sets is note more than page.
    /// </summary>
    void set_IsNoteMoreThanPage(bool value);
    /// <summary>
    /// Gets footer with footnotes size.
    /// </summary>
    double get_FootNoteHeight() const;
    /// <summary>
    /// Sets footer with footnotes size.
    /// </summary>
    void set_FootNoteHeight(double value);
    /// <summary>
    /// Gets end note footer top line rightX.
    /// </summary>
    double get_EndNoteRightX() const;
    /// <summary>
    /// Sets end note footer top line rightX.
    /// </summary>
    void set_EndNoteRightX(double value);
    /// <summary>
    /// Gets footer top line rightX.
    /// </summary>
    double get_RightX() const;
    /// <summary>
    /// Sets footer top line rightX.
    /// </summary>
    void set_RightX(double value);
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    const System::SharedPtr<Aspose::Pdf::Paragraphs>& get_EndNoteParagraphs() const;
    /// <summary>
    /// Sets the paragraphs.
    /// </summary>
    void set_EndNoteParagraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    const System::SharedPtr<Aspose::Pdf::Paragraphs>& get_FootNoteParagraphs() const;
    /// <summary>
    /// Sets the paragraphs.
    /// </summary>
    void set_FootNoteParagraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets paragraphs without footnotes height.
    /// </summary>
    double get_ParagraphsHeight() const;
    /// <summary>
    /// Sets paragraphs without footnotes height.
    /// </summary>
    void set_ParagraphsHeight(double value);
    /// <summary>
    /// Gets the rectangles for links for notes.
    /// </summary>
    const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>>& get_Rectangles() const;
    /// <summary>
    /// Sets the rectangles for links for notes.
    /// </summary>
    void set_Rectangles(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> value);
    static System::SharedPtr<MarginInfo> get_DefaultMargin();
    /// <summary>
    /// Gets page generator.
    /// </summary>
    const System::SharedPtr<PageGenerator>& get_Generator() const;
    /// <summary>
    /// Sets page generator.
    /// </summary>
    void set_Generator(System::SharedPtr<PageGenerator> value);
    
    /// <summary>
    /// Gets all paragraphs.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> GetAllParagraphs(bool isFootNote);
    /// <summary>
    /// Gets a object with specified ID in the document.
    /// </summary>
    /// <param name="id">The object id.</param>
    /// <returns>The object with specified id. Null if the id is not found.</returns>
    System::SharedPtr<System::Object> GetObjectById(System::String id);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<MarginInfo> margin;
    bool pr_IsClipExtraContent;
    bool pr_IsNoteMoreThanPage;
    double pr_FootNoteHeight;
    double pr_EndNoteRightX;
    double pr_RightX;
    System::SharedPtr<Aspose::Pdf::Paragraphs> pr_EndNoteParagraphs;
    System::SharedPtr<Aspose::Pdf::Paragraphs> pr_FootNoteParagraphs;
    double pr_ParagraphsHeight;
    System::SharedPtr<Aspose::Pdf::Paragraphs> pr_Paragraphs;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> pr_Rectangles;
    System::SharedPtr<PageGenerator> pr_Generator;
    
};

} // namespace Pdf
} // namespace Aspose


