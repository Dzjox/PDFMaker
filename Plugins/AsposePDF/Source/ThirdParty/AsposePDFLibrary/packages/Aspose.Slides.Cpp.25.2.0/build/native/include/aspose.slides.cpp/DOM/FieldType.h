#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IFieldType.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class LayoutTemplates;
class MasterHandoutSlideManager;
class MasterNotesSlideManager;
class MasterSlideTemplate;
class NotesTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class ParagraphOdpDeserialization;
class PortionOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class Portion;
class PresentationHeaderFooterManager;
class TextLayout;
} // namespace Slides
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
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a type of field. 
/// This value determines which text will be set to the field portion when it will be updated.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FieldType final : public Aspose::Slides::IFieldType
{
    typedef FieldType ThisType;
    typedef Aspose::Slides::IFieldType BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpDeserialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::LayoutTemplates;
    friend ASPOSE_SLIDES_SHARED_API bool operator ==(System::SharedPtr<FieldType> a, System::SharedPtr<FieldType> b);
    friend ASPOSE_SLIDES_SHARED_API bool operator !=(System::SharedPtr<FieldType> a, System::SharedPtr<FieldType> b);
    /// @endcond
    
public:

    /// <summary>
    /// Returns the internal name of this FieldType object.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_InternalString() override;
    /// <summary>
    /// Returns the internal name of this FieldType object.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_InternalString(System::String value) override;
    /// <summary>
    /// Current slide's number.
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_SlideNumber();
    /// <summary>
    /// Slide's footer.
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_Footer();
    /// <summary>
    /// Slide's header.
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_Header();
    /// <summary>
    /// Current date and time in default date time format for the rendering application.
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime();
    /// <summary>
    /// Current date and time in a first predefined format (MM/DD/YYYY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime1();
    /// <summary>
    /// Current date and time in a second predefined format (Day, Month DD, YYYY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime2();
    /// <summary>
    /// Current date and time in a third predefined format (DD Month YYYY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime3();
    /// <summary>
    /// Current date and time in a fourth predefined format (Month DD, YYYY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime4();
    /// <summary>
    /// Current date and time in a fifth predefined format (DD-Mon-YY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime5();
    /// <summary>
    /// Current date and time in a sixth predefined format (Month YY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime6();
    /// <summary>
    /// Current date and time in a seventh predefined format (Mon-YY for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime7();
    /// <summary>
    /// Current date and time in a eighth predefined format (MM/DD/YYYY hh:mm AM/PM for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime8();
    /// <summary>
    /// Current date and time in a ninth predefined format (MM/DD/YYYY hh:mm:ss AM/PM for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime9();
    /// <summary>
    /// Current date and time in a tenth predefined format (hh:mm for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime10();
    /// <summary>
    /// Current date and time in a eleventh predefined format (hh:mm:ss for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime11();
    /// <summary>
    /// Current date and time in a twelfth predefined format (hh:mm AM/PM for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime12();
    /// <summary>
    /// Current date and time in a thirteenth predefined format (hh:mm:ss AM/PM for english).
    /// Read-only <see cref="Aspose::Slides::FieldType">FieldType</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<FieldType> get_DateTime13();
    
    /// <summary>
    /// Initializes a new instance of FieldType class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FieldType(System::String str);
    
    /// <summary>
    /// Checks if this field is equal to another.
    /// </summary>
    /// <param name="obj">Field to compare.</param>
    /// <returns>True if fields are equal.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns hashcode for this object.
    /// </summary>
    /// <returns>Hashcode <see cref="int32_t"></see>.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FieldType>>> get_DateTimeFields();
    
    static const ASPOSE_SLIDES_LOCAL_API System::String SlidenumFieldType;
    /// @endcond
    
private:

    System::String _str;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FieldType> _slideNumber, _footer, _header, _dateTime, _dateTime1, _dateTime2, _dateTime3, _dateTime4, _dateTime5, _dateTime6, _dateTime7, _dateTime8, _dateTime9, _dateTime10, _dateTime11, _dateTime12, _dateTime13;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FieldType>>> m_dateTimeFields;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_SLIDES_SHARED_API bool operator ==(System::SharedPtr<FieldType> a, System::SharedPtr<FieldType> b);
ASPOSE_SLIDES_SHARED_API bool operator !=(System::SharedPtr<FieldType> a, System::SharedPtr<FieldType> b);

} // namespace Slides
} // namespace Aspose


