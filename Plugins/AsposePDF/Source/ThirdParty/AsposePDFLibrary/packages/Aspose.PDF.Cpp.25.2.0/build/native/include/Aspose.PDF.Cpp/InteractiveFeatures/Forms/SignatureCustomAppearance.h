#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
namespace Forms
{
enum class SubjectNameElements;
} // namespace Forms
enum class Rotation;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Globalization
{
class CultureInfo;
} // namespace Globalization
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// An abstract class which represents signature custon appearance object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SignatureCustomAppearance final : public System::Object
{
    typedef SignatureCustomAppearance ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets font family name. It should be existed in the document. Default value: Arial.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FontFamilyName() const;
    /// <summary>
    /// Gets/sets font family name. It should be existed in the document. Default value: Arial.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontFamilyName(System::String value);
    /// <summary>
    /// Gets/sets font size. Default value: 10.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_FontSize() const;
    /// <summary>
    /// Gets/sets font size. Default value: 10.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontSize(double value);
    /// <summary>
    /// Gets/sets foreground color (color of text). Default value: Blue.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_ForegroundColor() const;
    /// <summary>
    /// Gets/sets foreground color (color of text). Default value: Blue.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ForegroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets/sets background color. Default value: Transparent.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    /// Gets/sets background color. Default value: Transparent.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets/sets contact info visibility. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowContactInfo() const;
    /// <summary>
    /// Gets/sets contact info visibility. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowContactInfo(bool value);
    /// <summary>
    /// Gets/sets reason visibility. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowReason() const;
    /// <summary>
    /// Gets/sets reason visibility. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowReason(bool value);
    /// <summary>
    /// Gets/sets location visibility. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowLocation() const;
    /// <summary>
    /// Gets/sets location visibility. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowLocation(bool value);
    /// <summary>
    /// Gets/sets contact info label. Default value: "Contact".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ContactInfoLabel() const;
    /// <summary>
    /// Gets/sets contact info label. Default value: "Contact".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ContactInfoLabel(System::String value);
    /// <summary>
    /// Gets/sets reason label. Default value: "Reason".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ReasonLabel() const;
    /// <summary>
    /// Gets/sets reason label. Default value: "Reason".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReasonLabel(System::String value);
    /// <summary>
    /// Gets/sets location label. Default value: "Location".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_LocationLabel() const;
    /// <summary>
    /// Gets/sets location label. Default value: "Location".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LocationLabel(System::String value);
    /// <summary>
    /// Gets/sets digital signed label. Default value: "Digitally signed by".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DigitalSignedLabel() const;
    /// <summary>
    /// Gets/sets digital signed label. Default value: "Digitally signed by".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DigitalSignedLabel(System::String value);
    /// <summary>
    /// Gets/sets the usage state of the <see cref="DigitalSubjectFormat"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseDigitalSubjectFormat() const;
    /// <summary>
    /// Gets/sets the usage state of the <see cref="DigitalSubjectFormat"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseDigitalSubjectFormat(bool value);
    /// <summary>
    /// Gets/sets format for order of elements in Subject string.
    /// Result examples:
    /// C=UK, CN=Org, O=Organization
    /// or
    /// CN=Org, C=UK, O=Organization
    /// or
    /// O=Organization
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<SubjectNameElements> get_DigitalSubjectFormat() const;
    /// <summary>
    /// Gets/sets format for order of elements in Subject string.
    /// Result examples:
    /// C=UK, CN=Org, O=Organization
    /// or
    /// CN=Org, C=UK, O=Organization
    /// or
    /// O=Organization
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DigitalSubjectFormat(System::ArrayPtr<SubjectNameElements> value);
    /// <summary>
    /// Gets/sets date signed label. Default value: "Date".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DateSignedAtLabel() const;
    /// <summary>
    /// Gets/sets date signed label. Default value: "Date".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DateSignedAtLabel(System::String value);
    /// <summary>
    /// Gets/sets datetime local format. Default value: "yyyy.MM.dd HH:mm:ss zzz".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DateTimeLocalFormat() const;
    /// <summary>
    /// Gets/sets datetime local format. Default value: "yyyy.MM.dd HH:mm:ss zzz".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DateTimeLocalFormat(System::String value);
    /// <summary>
    /// Gets/sets datetime format. Default value: "yyyy.MM.dd HH:mm:ss".
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DateTimeFormat() const;
    /// <summary>
    /// Gets/sets datetime format. Default value: "yyyy.MM.dd HH:mm:ss".
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DateTimeFormat(System::String value);
    /// <summary>
    /// Gets/sets culture info value. Default value: InvariantCulture.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Globalization::CultureInfo> get_Culture() const;
    /// <summary>
    /// Gets/sets culture info value. Default value: InvariantCulture.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Culture(System::SharedPtr<System::Globalization::CultureInfo> value);
    /// <summary>
    /// Gets signature rotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Rotation get_Rotation() const;
    /// <summary>
    /// Sets signature rotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotation(Aspose::Pdf::Rotation value);
    
    /// <summary>
    /// Inititalizes new instance of the <see cref="SignatureCustomAppearance"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API SignatureCustomAppearance();
    
private:

    System::String _fontFamilyName;
    double _fontSize;
    System::SharedPtr<Color> _foregroundColor;
    System::SharedPtr<Color> _backgroundColor;
    Aspose::Pdf::Rotation _rotation;
    bool _showContactInfo;
    bool _showReason;
    bool _showLocation;
    System::String _dateSignedAtLabel;
    System::String _contactInfoLabel;
    System::String _reasonLabel;
    System::String _locationLabel;
    System::String _digitalSignedLabel;
    bool _useDigitalSubjectFormat;
    System::ArrayPtr<SubjectNameElements> _digitalSubjectFormat;
    System::String _dateTimeLocalFormat;
    System::String _dateTimeFormat;
    System::SharedPtr<System::Globalization::CultureInfo> _cultureInfo;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


