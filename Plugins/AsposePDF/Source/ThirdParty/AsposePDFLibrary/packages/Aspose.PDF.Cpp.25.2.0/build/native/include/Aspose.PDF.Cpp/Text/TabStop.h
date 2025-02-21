#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Text
{
class TabStops;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Enumerates the tab alignment types.
/// </summary>
enum class TabAlignmentType
{
    /// <summary>
    /// Text aligned left from tab stop
    /// </summary>
    Left = 0,
    /// <summary>
    /// Text aligned center from tab stop
    /// </summary>
    Center = 1,
    /// <summary>
    /// Text aligned right from tab stop
    /// </summary>
    Right = 2
};

/// <summary>
/// Enumerates the tab leader types.
/// </summary>
enum class TabLeaderType
{
    /// <summary>
    /// Solid tab leader.
    /// </summary>
    Solid = 0,
    /// <summary>
    /// Dash tab leader.
    /// </summary>
    Dash = 1,
    /// <summary>
    /// Dot tab leader.
    /// </summary>
    Dot = 2,
    /// <summary>
    /// No tab leader.
    /// </summary>
    None = 3
};

/// <summary>
/// Represents a custom Tab stop position in a paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TabStop : public System::Object
{
    typedef TabStop ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TabStops;
    
public:

    /// <summary>
    /// Gets a float value that indicates the tab stop position.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Position() const;
    /// <summary>
    /// Sets a float value that indicates the tab stop position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(float value);
    /// <summary>
    /// Gets a <see cref="TabLeaderType"></see> enum that indicates the tab leader type.
    /// </summary>
    ASPOSE_PDF_SHARED_API TabLeaderType get_LeaderType() const;
    /// <summary>
    /// Sets a <see cref="TabLeaderType"></see> enum that indicates the tab leader type.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeaderType(TabLeaderType value);
    /// <summary>
    /// Gets a <see cref="AlignmentType"></see> enum that indicates the tab tab alignment type.
    /// </summary>
    ASPOSE_PDF_SHARED_API TabAlignmentType get_AlignmentType() const;
    /// <summary>
    /// Sets a <see cref="AlignmentType"></see> enum that indicates the tab tab alignment type.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlignmentType(TabAlignmentType value);
    /// <summary>
    /// Gets value indicating that this <see cref="TabStop"></see> instance is already attached to <see cref="TextFragment"></see> and became readonly
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API TabStop();
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"></see> class with specified position.
    /// </summary>
    /// <param name="position">The position of the tab stop.</param>
    ASPOSE_PDF_SHARED_API TabStop(float position);
    
protected:

    /// <summary>
    /// Gets value indicating that this <see cref="TabStop"></see> instance is already attached to <see cref="TextFragment"></see> and became readonly
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsReadOnly(bool value);
    
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    float _position;
    TabLeaderType _leaderType;
    bool _attached;
    TabAlignmentType _alignmentType;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Text::TabAlignmentType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Text::TabAlignmentType, const char_t*>, 3>& values();
};
template<>
struct EnumMetaInfo<Aspose::Pdf::Text::TabLeaderType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Text::TabLeaderType, const char_t*>, 4>& values();
};



