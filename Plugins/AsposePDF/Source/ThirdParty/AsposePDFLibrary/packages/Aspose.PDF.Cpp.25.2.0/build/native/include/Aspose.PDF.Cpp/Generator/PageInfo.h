#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icloneable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsPagePreprocessor;
class Document;
class MarginInfo;
class Page;
class Table;
namespace Text
{
class TextState;
} // namespace Text
namespace Utils
{
class PdfDocumentUtils;
} // namespace Utils
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the page information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageInfo final : public System::ICloneable
{
    typedef PageInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::ApsPagePreprocessor;
    friend class Aspose::Pdf::Utils::PdfDocumentUtils;
    
public:

    /// <summary>
    /// Gets page margin for any page except first.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<MarginInfo>& get_AnyMargin() const;
    /// <summary>
    /// Sets page margin for any page except first.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AnyMargin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets default font.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Text::TextState>& get_DefaultTextState() const;
    /// <summary>
    /// Sets default font.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets page height.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() const;
    /// <summary>
    /// Sets page height.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value);
    /// <summary>
    /// Gets page pure height without margins.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_PureHeight();
    /// <summary>
    /// Gets is page landscaped.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsLandscape() const;
    /// <summary>
    /// Sets is page landscaped.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsLandscape(bool value);
    /// <summary>
    /// Gets page margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin() const;
    /// <summary>
    /// Sets page margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets page width.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Sets page width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    
    ASPOSE_PDF_SHARED_API PageInfo();
    
    /// <summary>
    /// Clone page info.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    bool IsMarginSet;
    
    bool get_IsDefaultSize();
    bool get_IsDefault();
    /// <summary>
    /// Gets page pure width without margins.
    /// </summary>
    double get_PureWidth();
    /// <summary>
    /// Gets is width is set.
    /// </summary>
    bool get_IsWidthSet() const;
    /// <summary>
    /// Gets is height is set.
    /// </summary>
    bool get_IsHeightSet() const;
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<MarginInfo> marginInfo;
    double height;
    double width;
    System::SharedPtr<MarginInfo> pr_AnyMargin;
    System::SharedPtr<Text::TextState> pr_DefaultTextState;
    bool pr_IsLandscape;
    bool pr_IsWidthSet;
    
    /// <summary>
    /// Gets is width is set.
    /// </summary>
    void set_IsWidthSet(bool value);
    
    bool pr_IsHeightSet;
    
    /// <summary>
    /// Gets is height is set.
    /// </summary>
    void set_IsHeightSet(bool value);
    
};

} // namespace Pdf
} // namespace Aspose


