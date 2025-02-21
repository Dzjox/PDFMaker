#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <system/icloneable.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BaseParagraph;
class Cell;
class HeaderFooter;
class PageInfo;
class Row;
class Table;
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
/// This class represents a margin for different objects.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MarginInfo final : public System::ICloneable
{
    typedef MarginInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseParagraph;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::PageInfo;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets a float value that indicates the left margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left() const;
    /// <summary>
    /// Sets a float value that indicates the left margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(double value);
    /// <summary>
    /// Gets a float value that indicates the right margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Right() const;
    /// <summary>
    /// Sets a float value that indicates the right margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Right(double value);
    /// <summary>
    /// Gets a float value that indicates the top margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Top() const;
    /// <summary>
    /// Sets a float value that indicates the top margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(double value);
    /// <summary>
    /// Gets a float value that indicates the bottom margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Bottom() const;
    /// <summary>
    /// Sets a float value that indicates the bottom margin.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Bottom(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="MarginInfo"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API MarginInfo();
    /// <summary>
    /// Constructor of Rectangle.
    /// </summary>
    /// <param name="left">Left margin.</param>
    /// <param name="bottom">Bottom margin</param>        
    /// <param name="right">Right margin.</param>
    /// <param name="top">Top margin.</param>
    ASPOSE_PDF_SHARED_API MarginInfo(double left, double bottom, double right, double top);
    
    /// <summary>
    /// Clones a new <see cref="MarginInfo"></see> object.
    /// </summary>
    /// <returns>The new object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
protected:

    bool get_IsDefault();
    bool get_HasNonZeroElements();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void SerializePageDefault(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    double leftMargin, rightMargin, topMargin, bottomMargin;
    
};

} // namespace Pdf
} // namespace Aspose


