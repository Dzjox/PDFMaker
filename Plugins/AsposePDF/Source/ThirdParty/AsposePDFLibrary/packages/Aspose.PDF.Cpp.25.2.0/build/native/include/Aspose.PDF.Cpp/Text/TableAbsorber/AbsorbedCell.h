#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icomparable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TableAbsorber/ITableElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BorderInfo;
class FlowToTableAbsorber;
class Rectangle;
namespace Text
{
class TableAbsorber;
class TextFragment;
class TextFragmentCollection;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents cell of table that exist on the page
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AbsorbedCell : public Aspose::Pdf::Text::ITableElement, public System::IComparable<System::SharedPtr<Aspose::Pdf::Text::AbsorbedCell>>
{
    typedef AbsorbedCell ThisType;
    typedef Aspose::Pdf::Text::ITableElement BaseType;
    typedef System::IComparable<System::SharedPtr<Aspose::Pdf::Text::AbsorbedCell>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    
public:

    /// <summary>
    /// Gets collection of <see cref="TextFragment"></see> objects that describes text containing in the cell
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TextFragmentCollection> get_TextFragments() const;
    /// <summary>
    /// Gets rectangle that describes position of the cell on page
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() override;
    /// <summary>
    /// Return the number of columns the cell should span when TableAbsorber.UseFlowEngine property is set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ColSpan() const;
    /// <summary>
    /// Return the border information for the cell when the FlowEngine.TableAbsorber.UseFlowEngine property is set to true.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::BorderInfo> get_BorderInfo() const;
    
    /// <summary>
    /// Compares the current AbsorbedCell object with another AbsorbedCell object and returns an integer that indicates
    /// whether the current object precedes, follows, or occurs in the same position in the sort order as the other object.
    /// </summary>
    /// <param name="other">An AbsorbedCell object to compare with this object.</param>
    /// <returns>
    /// A value that indicates the relative order of the objects being compared. The return value has the following meanings:
    /// -1: This object precedes the other object in the sort order.
    ///  0: This object occurs in the same position in the sort order as the other object.
    ///  1: This object follows the other object in the sort order.
    /// </returns>
    ASPOSE_PDF_SHARED_API int32_t CompareTo(System::SharedPtr<AbsorbedCell> other) override;
    
protected:

    /// <summary>
    /// Initializes new AbsorbedCell object with rectangle that describes position 
    /// </summary>
    /// <param name="rectangle">Rectangle object</param>
    AbsorbedCell(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AbsorbedCell, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle));
    
    /// <summary>
    /// Initializes a new AbsorbedCell object with a rectangle that describes its position, column span, and 
    /// border information
    /// </summary>
    /// <param name="rectangle">Rectangle object</param>
    /// <param name="columnSpan">The number of columns the cell should span</param>
    /// <param name="borderInfo">Represents border for graphics element</param>
    AbsorbedCell(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, int32_t columnSpan, System::SharedPtr<Aspose::Pdf::BorderInfo> borderInfo);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AbsorbedCell, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, int32_t columnSpan, System::SharedPtr<Aspose::Pdf::BorderInfo> borderInfo));
    /// <summary>
    /// Adds TextFragment object to the cell
    /// </summary>
    /// <param name="fragment">TextFragment object</param>
    /// <returns>Value indicates operation success. (Unused now.)</returns>
    bool AddTextFragment(System::SharedPtr<TextFragment> fragment);
    /// <summary>
    /// Adds TextFragment object to the cell
    /// </summary>
    /// <returns>Value indicates operation success. (Unused now.)</returns>
    bool ClearFragments();
    
private:

    System::SharedPtr<TextFragmentCollection> _textFragments;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    int32_t _colSpan;
    System::SharedPtr<Aspose::Pdf::BorderInfo> _borderInfo;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


