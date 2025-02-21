#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Generator/FormattedFragment.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class HtmlLoadOptions;
class Matrix;
class Page;
class PdfPageInfo;
namespace Text
{
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class RectangleF;
} // namespace Drawing
class String;
namespace Xml
{
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents html fragment.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HtmlFragment final : public Aspose::Pdf::FormattedFragment
{
    typedef HtmlFragment ThisType;
    typedef Aspose::Pdf::FormattedFragment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets rectangle of the HtmlFragment
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::RectangleF get_Rectangle() const;
    /// <summary>
    /// Gets is paragraph has default margin otherwise margin is 0
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsParagraphHasMargin() const;
    /// <summary>
    /// Sets is paragraph has default margin otherwise margin is 0
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsParagraphHasMargin(bool value);
    /// <summary>
    /// Gets words break
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBreakWords() const;
    /// <summary>
    /// Sets words break
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBreakWords(bool value);
    /// <summary>
    /// Gets font
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Text::TextState>& get_TextState() const;
    /// <summary>
    /// Sets font
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets HtmlLoadOptions that will be used for loading (and rendering) of HTML into this instance of class.
    /// Please use it when it's necessary use specific setting for import of HTML for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported HTML or should use specific loader of external resources)
    /// If parameter is default (null), then standard HTML loading options will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::HtmlLoadOptions>& get_HtmlLoadOptions() const;
    /// <summary>
    /// Sets HtmlLoadOptions that will be used for loading (and rendering) of HTML into this instance of class.
    /// Please use it when it's necessary use specific setting for import of HTML for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported HTML or should use specific loader of external resources)
    /// If parameter is default (null), then standard HTML loading options will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HtmlLoadOptions(System::SharedPtr<Aspose::Pdf::HtmlLoadOptions> value);
    
    /// <summary>
    /// Initializes a new instance of the HtmlFragment class.
    /// </summary>
    /// <param name="text">The fragment text</param>
    ASPOSE_PDF_SHARED_API HtmlFragment(System::String text);
    
    /// <summary>
    /// Clones html fragment.
    /// </summary>
    /// <returns>Cloned html fragment object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    ASPOSE_PDF_SHARED_API void ConvertToPages(System::SharedPtr<Page> page, double width, double firstHeight, double anyHeight, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, System::SharedPtr<Matrix> matrix) override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    
private:

    bool pr_IsParagraphHasMargin;
    bool pr_IsBreakWords;
    System::SharedPtr<Aspose::Pdf::Text::TextState> pr_TextState;
    System::SharedPtr<Aspose::Pdf::HtmlLoadOptions> pr_HtmlLoadOptions;
    
    System::String GetFontedText();
    System::String ForceDocTypeHeader(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


