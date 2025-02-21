#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace LogicalStructure
{
class AttributeKey;
class AttributeName;
class Element;
} // namespace LogicalStructure
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Standard Attribute Owners.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AttributeOwnerStandard final : public System::Object
{
    typedef AttributeOwnerStandard ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///     Get Attribute Owner.
    /// </summary>
    /// <value>Attribute Owner.</value>
    ASPOSE_PDF_SHARED_API System::String get_Owner() const;
    
    /// <summary>
    ///     Layout attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Layout();
    /// <summary>
    ///     List attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& List();
    /// <summary>
    ///     PrintField attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& PrintField();
    /// <summary>
    ///     Table attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Table();
    /// <summary>
    ///     XML-1.0.0 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Xml_100();
    /// <summary>
    ///     HTML-3.20 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Html_320();
    /// <summary>
    ///     HTML-4.01 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Html_401();
    /// <summary>
    ///     OEB-1.00 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Oeb_100();
    /// <summary>
    ///     RTF-1.05 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Rtf_105();
    /// <summary>
    ///     CSS-1.00 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Css_100();
    /// <summary>
    ///     CSS-2.00 attribute owner.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard>& Css_200();
    
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard> to_AttributeOwnerStandard(System::String owner);
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    static System::SharedPtr<AttributeOwnerStandard> DefaultAttributeOwnerToElement(System::SharedPtr<Element> element);
    
    virtual ASPOSE_PDF_SHARED_API ~AttributeOwnerStandard();
    
private:

    System::String _owner;
    
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<AttributeOwnerStandard>>>& _instance();
    
    AttributeOwnerStandard(System::String owner);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AttributeOwnerStandard, CODEPORTING_ARGS(System::String owner));
    System::String ToString_NonConst();
    
};

/// <summary>
///     Represents Standard Attribute Keys.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AttributeKey final : public System::Object
{
    typedef AttributeKey ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///     Get Attribute Key.
    /// </summary>
    /// <value>Attribute Key.</value>
    ASPOSE_PDF_SHARED_API System::String get_Key() const;
    /// <summary>
    ///     Get Attribute Owner.
    /// </summary>
    /// <value>Attribute Owner.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard> get_Owner() const;
    
    /// <summary>
    ///     Placement attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Placement;
    /// <summary>
    ///     WritingMode attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> WritingMode;
    /// <summary>
    ///     BackgroundColor attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BackgroundColor;
    /// <summary>
    ///     BorderColor attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BorderColor;
    /// <summary>
    ///     BorderStyle attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BorderStyle;
    /// <summary>
    ///     BorderThickness attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BorderThickness;
    /// <summary>
    ///     Padding attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Padding;
    /// <summary>
    ///     Color attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Color;
    /// <summary>
    ///     SpaceBefore attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> SpaceBefore;
    /// <summary>
    ///     SpaceAfter attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> SpaceAfter;
    /// <summary>
    ///     StartIndent attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> StartIndent;
    /// <summary>
    ///     EndIndent attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> EndIndent;
    /// <summary>
    ///     TextIndent attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TextIndent;
    /// <summary>
    ///     TextAlign attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TextAlign;
    /// <summary>
    ///     BBox attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BBox;
    /// <summary>
    ///     Width attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Width;
    /// <summary>
    ///     Height attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Height;
    /// <summary>
    ///     BlockAlign attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BlockAlign;
    /// <summary>
    ///     InlineAlign attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> InlineAlign;
    /// <summary>
    ///     TBorderStyle attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TBorderStyle;
    /// <summary>
    ///     TPadding attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TPadding;
    /// <summary>
    ///     BaselineShift attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> BaselineShift;
    /// <summary>
    ///     LineHeight attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> LineHeight;
    /// <summary>
    ///     TextDecorationColor attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TextDecorationColor;
    /// <summary>
    ///     TextDecorationThickness attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TextDecorationThickness;
    /// <summary>
    ///     TextDecorationType attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> TextDecorationType;
    /// <summary>
    ///     RubyAlign attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> RubyAlign;
    /// <summary>
    ///     RubyPosition attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> RubyPosition;
    /// <summary>
    ///     GlyphOrientationVertical attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> GlyphOrientationVertical;
    /// <summary>
    ///     ColumnCount attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> ColumnCount;
    /// <summary>
    ///     ColumnGap attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> ColumnGap;
    /// <summary>
    ///     ColumnWidths attribute (Layout attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> ColumnWidths;
    /// <summary>
    ///     ListNumbering attribute (List attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> ListNumbering;
    /// <summary>
    ///     Role attribute (PrintField attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Role;
    /// <summary>
    ///     Checked attribute (PrintField attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Checked;
    /// <summary>
    ///     Desc attribute (PrintField attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Desc;
    /// <summary>
    ///     RowSpan attribute (Table attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> RowSpan;
    /// <summary>
    ///     ColSpan attribute (Table attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> ColSpan;
    /// <summary>
    ///     Headers attribute (Table attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Headers;
    /// <summary>
    ///     Scope attribute (Table attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Scope;
    /// <summary>
    ///     Summary attribute (Table attribute owner).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> Summary;
    
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeKey> to_AttributeKey(System::String key);
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    virtual ASPOSE_PDF_SHARED_API ~AttributeKey();
    
private:

    System::String _key;
    System::SharedPtr<AttributeOwnerStandard> _owner;
    
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<AttributeKey>>>& _instance();
    
    AttributeKey(System::String key, System::SharedPtr<AttributeOwnerStandard> owner);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AttributeKey, CODEPORTING_ARGS(System::String key, System::SharedPtr<AttributeOwnerStandard> owner));
    System::String ToString_NonConst();
    
};

/// <summary>
///     Represents class for Attribute Name Values.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AttributeName final : public System::Object
{
    typedef AttributeName ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
private:

    class AttributeKeyName;
    
    friend bool operator ==(const AttributeName::AttributeKeyName& left, const AttributeName::AttributeKeyName& right);
    friend bool operator !=(const AttributeName::AttributeKeyName& left, const AttributeName::AttributeKeyName& right);
    
private:

    class AttributeKeyName : public System::Object, public System::Details::BoxableObjectBase
    {
        typedef AttributeKeyName ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        friend bool operator ==(const AttributeName::AttributeKeyName& left, const AttributeName::AttributeKeyName& right);
        friend bool operator !=(const AttributeName::AttributeKeyName& left, const AttributeName::AttributeKeyName& right);
        
    public:
    
        System::String Name;
        System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> AttributeKey;
        
        AttributeKeyName(System::String name, System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey);
        
        int32_t GetHashCode() const override;
        
        AttributeKeyName();
        
    };
    
    
public:

    /// <summary>
    ///     Gets name value of attribute.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    ///     Gets attribute key.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> get_AttributeKey() const;
    
    /// <summary>
    ///     Attribute Placement: Block - Stacked in the block-progression direction within an enclosing reference area or parent BLSE.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Placement_Block;
    /// <summary>
    ///     Attribute Placement: Inline - Packed in the inline-progression direction within an enclosing BLSE.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Placement_Inline;
    /// <summary>
    ///     Attribute Placement: Before - Placed so that the before edge of the element's allocation rectangle coincides with that of the nearest enclosing reference area.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Placement_Before;
    /// <summary>
    ///     Attribute Placement: Start - Placed so that the start edge of the element's allocation rectangle coincides with that of the nearest enclosing reference area.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Placement_Start;
    /// <summary>
    ///     Attribute Placement: End - Placed so that the end edge of the element's allocation rectangle coincides with that of the nearest enclosing reference area.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Placement_End;
    /// <summary>
    ///     Attribute WritingMode: LrTb - Inline progression from left to right; block progression from top to bottom. This is the typical writing mode for Western writing systems.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> WritingMode_LrTb;
    /// <summary>
    ///     Attribute WritingMode: RlTb - Inline progression from right to left; block progression from top to bottom. This is the typical writing mode for Arabic and Hebrew writing systems.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> WritingMode_RlTb;
    /// <summary>
    ///     Attribute WritingMode: TbRl - Inline progression from top to bottom; block progression from right to left. This is the typical writing mode for Chinese and Japanese writing systems.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> WritingMode_TbRl;
    /// <summary>
    ///     Attribute BorderStyle: None - No border. Forces the computed value of BorderThicknessto be 0.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_None;
    /// <summary>
    ///     Attribute BorderStyle: Hidden - Same as None, except in terms of border conflict resolution for table elements.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Hidden;
    /// <summary>
    ///     Attribute BorderStyle: Dotted - The border is a series of dots.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Dotted;
    /// <summary>
    ///     Attribute BorderStyle: Dashed - The border is a series of short line segments.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Dashed;
    /// <summary>
    ///     Attribute BorderStyle: Solid - The border is a single line segment.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Solid;
    /// <summary>
    ///     Attribute BorderStyle: Double - The border is two solid lines. The sum of the two lines and the space between them equals the value of BorderThickness.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Double;
    /// <summary>
    ///     Attribute BorderStyle: Groove - The border looks as though it were carved into the canvas.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Groove;
    /// <summary>
    ///     Attribute BorderStyle: Ridge - The border looks as though it were coming out of the canvas (the opposite of Groove).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Ridge;
    /// <summary>
    ///     Attribute BorderStyle: Inset - The border makes the entire box look as though it were embedded in the canvas.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Inset;
    /// <summary>
    ///     Attribute BorderStyle: Outset - The border makes the entire box look as though it were coming out of the canvas (the opposite of Inset).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BorderStyle_Outset;
    /// <summary>
    ///     Attribute TextAlign: Start - Aligned with the start edge.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextAlign_Start;
    /// <summary>
    ///     Attribute TextAlign: Center - Centered between the start and end edges.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextAlign_Center;
    /// <summary>
    ///     Attribute TextAlign: End - Aligned with the end edge.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextAlign_End;
    /// <summary>
    ///     Attribute TextAlign: Justify - Aligned with both the start and end edges, with internal spacing within each line expanded, if necessary, to achieve such alignment. The last (or only) line shall be aligned with the start edge only.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextAlign_Justify;
    /// <summary>
    ///     Attribute Width: Auto - the element's width shall be determined by the intrinsic width of its content.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Width_Auto;
    /// <summary>
    ///     Attribute Height: Auto - The element's height shall be determined by the intrinsic height of its content.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Height_Auto;
    /// <summary>
    ///      Attribute BlockAlign: Before - Before edge of the first child's allocation rectangle aligned with that of the table cell's content rectangle.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BlockAlign_Before;
    /// <summary>
    ///      Attribute BlockAlign: Middle- Children centered within the table cell. The distance between the before edge of the first child's allocation rectangle and that of the table cell's content rectangle shall be the same as the distance between the after edge of the last child's allocation rectangle and that of the table cell's content rectangle.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BlockAlign_Middle;
    /// <summary>
    ///      Attribute BlockAlign: After - After edge of the last child's allocation rectangle aligned with that of the table cell's content rectangle.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BlockAlign_After;
    /// <summary>
    ///      Attribute BlockAlign: Justify - Children aligned with both the before and after edges of the table cell's content rectangle. The first child shall be placed as described for Before and the last child as described for After, with equal spacing between the children. If there is only one child, it shall be aligned with the before edge only, as for Before.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> BlockAlign_Justify;
    /// <summary>
    ///     Attribute InlineAlign: Start - Start edge of each child's allocation rectangle aligned with that of the table cell's content rectangle.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> InlineAlign_Start;
    /// <summary>
    ///     Attribute InlineAlign: Center - Each child centered within the table cell. The distance between the start edges of the child's allocation rectangle and the table cell's content rectangle shall be the same as the distance between their end edges.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> InlineAlign_Center;
    /// <summary>
    ///     Attribute InlineAlign: End - End edge of each child's allocation rectangle aligned with that of the table cell's content rectangle.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> InlineAlign_End;
    /// <summary>
    ///      Attribute LineHeight: Normal - Adjust the line height to include any nonzero value specified for BaselineShift.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> LineHeight_Normal;
    /// <summary>
    ///     Attribute LineHeight: Auto - Adjustment for the value of BaselineShift shall not be made.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> LineHeight_Auto;
    /// <summary>
    ///     Attribute TextDecorationType: None - No text decoration.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextDecorationType_None;
    /// <summary>
    ///     Attribute TextDecorationType: Underline - A line below the text.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextDecorationType_Underline;
    /// <summary>
    ///     Attribute TextDecorationType: Overline - A line above the text.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextDecorationType_Overline;
    /// <summary>
    ///     Attribute TextDecorationType: LineThrough - A line through the middle of the text.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> TextDecorationType_LineThrough;
    /// <summary>
    ///     Attribute RubyAlign: Start - The content shall be aligned on the start edge in the inline-progression direction.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyAlign_Start;
    /// <summary>
    ///     Attribute RubyAlign: Center - The content shall be centered in the inline-progression direction.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyAlign_Center;
    /// <summary>
    ///     Attribute RubyAlign: End - The content shall be aligned on the end edge in the inline-progression direction.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyAlign_End;
    /// <summary>
    ///     Attribute RubyAlign: Justify - The content shall be expanded to fill the available width in the inline-progression direction.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyAlign_Justify;
    /// <summary>
    ///     Attribute RubyAlign: Distribute - The content shall be expanded to fill the available width in the inline-progression direction. However, space shall also be inserted at the start edge and end edge of the text. The spacing shall be distributed using a 1:2:1 (start:infix:end) ratio. It shall be changed to a 0:1:1 ratio if the ruby appears at the start of a text line or to a 1:1:0 ratio if the ruby appears at the end of the text line.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyAlign_Distribute;
    /// <summary>
    ///     Attribute RubyPosition: Before - The RT content shall be aligned along the before edge of the element.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyPosition_Before;
    /// <summary>
    ///     Attribute RubyPosition: After - The RT content shall be aligned along the after edge of the element.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyPosition_After;
    /// <summary>
    ///     Attribute RubyPosition: Warichu - The RT and associated RP elements shall be formatted as a warichu, following the RB element.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyPosition_Warichu;
    /// <summary>
    ///     Attribute RubyPosition: Inline - The RT and associated RP elements shall be formatted as a parenthesis comment, following the RB element.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> RubyPosition_Inline;
    /// <summary>
    ///     Attribute GlyphOrientationVertical: Auto - Specifies a default orientation for text, depending on whether it is fullwidth (as wide as it is high).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> GlyphOrientationVertical_Auto;
    /// <summary>
    ///     Attribute ListNumbering: None - No autonumbering; Lbl elements (if present) contain arbitrary text not subject to any numbering scheme.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_None;
    /// <summary>
    ///     Attribute ListNumbering: Disc - Solid circular bullet.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_Disc;
    /// <summary>
    ///     Attribute ListNumbering: Circle - Open circular bullet.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_Circle;
    /// <summary>
    ///     Attribute ListNumbering: Square - Solid square bullet.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_Square;
    /// <summary>
    ///     Attribute ListNumbering: Decimal - Decimal arabic numerals (1-9, 10-99, ...).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_Decimal;
    /// <summary>
    ///     Attribute ListNumbering: UpperRoman - Uppercase roman numerals (I, II, III, IV, ...).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_UpperRoman;
    /// <summary>
    ///     Attribute ListNumbering: LowerRoman - Lowercase roman numerals (i, ii, iii, iv, ...).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_LowerRoman;
    /// <summary>
    ///     Attribute ListNumbering: UpperAlpha - Uppercase letters (A, B, C, ...).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_UpperAlpha;
    /// <summary>
    ///     Attribute ListNumbering: LowerAlpha - Lowercase letters (a, b, c, ...).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> ListNumbering_LowerAlpha;
    /// <summary>
    ///     Attribute Role: rb - Radio button.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Role_rb;
    /// <summary>
    ///     Attribute Role: cb - Check box.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Role_cb;
    /// <summary>
    ///     Attribute Role: pb - Push button.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Role_pb;
    /// <summary>
    ///    Attribute Role: tv - Text-value field.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Role_tv;
    /// <summary>
    ///     Attribute checked: On - The state of a radio button or check box field.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Checked_on;
    /// <summary>
    ///     Attribute checked: Off - The state of a radio button or check box field.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Checked_off;
    /// <summary>
    ///     Attribute checked: Neutral - The state of a radio button or check box field.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Checked_neutral;
    /// <summary>
    ///     Attribute Scope: Row.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Scope_Row;
    /// <summary>
    ///     Attribute Scope: Column.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Scope_Column;
    /// <summary>
    ///     Attribute Scope: Both.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> Scope_Both;
    
    /// <summary>
    ///     Gets attribute name for attribute key.
    /// </summary>
    /// <param name="name">Attribute name</param>
    /// <param name="attributeKey">Attribute key</param>
    /// <returns>Attribute name</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeName> FromNameAttributeKey(System::String name, System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey);
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    virtual ASPOSE_PDF_SHARED_API ~AttributeName();
    
private:

    System::String _name;
    System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> _attributeKey;
    static System::SharedPtr<System::Collections::Generic::Dictionary<AttributeName::AttributeKeyName, System::SharedPtr<AttributeName>>> _instance;
    
    /// <summary>
    ///     Creation attribute name with acceptable value for attribute key.
    /// </summary>
    /// <param name="attributeKey">Attribute key</param>
    /// <param name="name">Acceptable value for attribute</param>
    AttributeName(System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey, System::String name);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AttributeName, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey, System::String name));
    System::String ToString_NonConst();
    
};

bool operator ==(const AttributeName::AttributeKeyName& left, const AttributeName::AttributeKeyName& right);
bool operator !=(const AttributeName::AttributeKeyName& left, const AttributeName::AttributeKeyName& right);

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


