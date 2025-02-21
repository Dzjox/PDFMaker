#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Drawing;
//using Aspose.HTML.Rendering.Aps;

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Generator/FormattedFragment.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Matrix;
namespace Operators
{
class ConcatenateMatrix;
} // namespace Operators
class Page;
class PageInfo;
class PdfPageInfo;
class TeXLoadOptions;
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
class String;
namespace Xml
{
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents TeX fragment.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TeXFragment : public Aspose::Pdf::FormattedFragment
{
    typedef TeXFragment ThisType;
    typedef Aspose::Pdf::FormattedFragment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets TeXLoadOptions that will be used for loading (and rendering) of LaTeX into this instance of class.
    /// Please use it when it's necessary use specific setting for import of LaTeX for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported LaTeX or should use specific loader of external resources)
    /// If parameter is default (null), then standard LaTeX loading options will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TeXLoadOptions> get_TeXLoadOptionsOfInstance() const;
    /// <summary>
    /// Sets TeXLoadOptions that will be used for loading (and rendering) of LaTeX into this instance of class.
    /// Please use it when it's necessary use specific setting for import of LaTeX for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported LaTeX or should use specific loader of external resources)
    /// If parameter is default (null), then standard LaTeX loading options will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TeXLoadOptionsOfInstance(System::SharedPtr<TeXLoadOptions> value);
    /// @deprecated Please us TeXLoadOptionsOfInstance instead.
    /// <summary>
    /// Gets TeXLoadOptions that will be used for loading (and rendering) of LaTeX into this instance of class.
    /// Please use it when it's necessary use specific setting for import of LaTeX for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported LaTeX or should use specific loader of external resources)
    /// If parameter is default (null), then standard LaTeX loading options will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TeXLoadOptions> get_LatexLoadOptionsOfInstance() const;
    /// @deprecated Please us TeXLoadOptionsOfInstance instead.
    /// <summary>
    /// Sets TeXLoadOptions that will be used for loading (and rendering) of LaTeX into this instance of class.
    /// Please use it when it's necessary use specific setting for import of LaTeX for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported LaTeX or should use specific loader of external resources)
    /// If parameter is default (null), then standard LaTeX loading options will be used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LatexLoadOptionsOfInstance(System::SharedPtr<TeXLoadOptions> value);
    
    /// <summary>
    /// Initializes a new instance of the HtmlFragment class.
    /// </summary>
    /// <param name="text">The fragment text</param>
    ASPOSE_PDF_SHARED_API TeXFragment(System::String text);
    /// <summary>
    /// Initializes a new instance of the HtmlFragment class.
    /// </summary>
    /// <param name="text">The fragment text</param>
    /// <param name="removeIndents">Determines whether not to make indents while typesetting LaTeX fragment</param>
    ASPOSE_PDF_SHARED_API TeXFragment(System::String text, bool removeIndents);
    
    /// <summary>
    /// Clones fragment.
    /// </summary>
    /// <returns>Cloned fragment.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    ASPOSE_PDF_SHARED_API void ConvertToPages(System::SharedPtr<Page> page, double width, double firstHeight, double anyHeight, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, System::SharedPtr<Matrix> matrix) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> GetMatrix(double curX, double curY, System::SharedPtr<PageInfo> pageInfo) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Operators::ConcatenateMatrix> GetMatrixOperator(double curX, double curY, System::SharedPtr<PageInfo> pageInfo) override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    
private:

    System::SharedPtr<TeXLoadOptions> specialLoadOptions;
    System::SharedPtr<Text::TextState> textState;
    bool _removeIndents;
    
    void ConvertToPages(System::SharedPtr<Page> page, double width, double height, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, System::SharedPtr<Matrix> matrix);
    static System::String AdjustEndDocument(System::String txt);
    System::String GetSizedText(double width, double height);
    
};

/// @deprecated Please use TeXFragment instead
/// <summary>
/// Represents TeX fragment.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LatexFragment : public Aspose::Pdf::TeXFragment
{
    typedef LatexFragment ThisType;
    typedef Aspose::Pdf::TeXFragment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the HtmlFragment class.
    /// </summary>
    /// <param name="text">The fragment text</param>
    ASPOSE_PDF_SHARED_API LatexFragment(System::String text);
    /// <summary>
    /// Initializes a new instance of the HtmlFragment class.
    /// </summary>
    /// <param name="text">The fragment text</param>
    /// <param name="removeIndents">Determines whether not to make indents while typesetting LaTeX fragment</param>
    ASPOSE_PDF_SHARED_API LatexFragment(System::String text, bool removeIndents);
    
};

} // namespace Pdf
} // namespace Aspose


