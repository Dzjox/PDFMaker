#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/icomparable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace IO
{
namespace ConvertStrategies
{
class PdfConvertStrategy;
class PdfUaConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class PdfFileInfo;
class PdfFileSecurity;
} // namespace Facades
namespace Tests
{
namespace Facades
{
class PdfFileSecurityTests;
} // namespace Facades
class RegressionTests_v23_04;
class RegressionTests_v7_4;
class RegressionTests_v8_9;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents the privileges for accessing Pdf file. Refer to<see cref="PdfFileSecurity"></see>.
/// There are 4 ways using this class:
/// 1.Using predefined privilege directly.
/// 2.Based on a predefined privilege and change some specifical permissions.
/// 3.Based on a predefined privilege and change some specifical Adobe Professional permissions combination.
/// 4.Mixes the way2 and way3.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS DocumentPrivilege final : public System::IComparable<System::SharedPtr<System::Object>>
{
    typedef DocumentPrivilege ThisType;
    typedef System::IComparable<System::SharedPtr<System::Object>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileSecurity;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_04;
    friend class Aspose::Pdf::Tests::Facades::PdfFileSecurityTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_9;
    
public:

    /// <summary>
    /// Sets the permission which allow print or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowPrint();
    /// <summary>
    /// Sets the permission which allow print or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowPrint(bool value);
    /// <summary>
    /// Sets the permission which allow degraded printing or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowDegradedPrinting();
    /// <summary>
    /// Sets the permission which allow degraded printing or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowDegradedPrinting(bool value);
    /// <summary>
    /// Sets the permission which allow modify contents or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowModifyContents();
    /// <summary>
    /// Sets the permission which allow modify contents or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowModifyContents(bool value);
    /// <summary>
    /// Sets the permission which allow copy or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowCopy();
    /// <summary>
    /// Sets the permission which allow copy or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowCopy(bool value);
    /// <summary>
    /// Sets the permission which allow modify annotations or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowModifyAnnotations();
    /// <summary>
    /// Sets the permission which allow modify annotations or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowModifyAnnotations(bool value);
    /// <summary>
    /// Sets the permission which allow fill in forms or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowFillIn();
    /// <summary>
    /// Sets the permission which allow fill in forms or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowFillIn(bool value);
    /// <summary>
    /// Sets the permission which allow screen readers or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowScreenReaders();
    /// <summary>
    /// Sets the permission which allow screen readers or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowScreenReaders(bool value);
    /// <summary>
    /// Sets the permission which allow assembly or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowAssembly();
    /// <summary>
    /// Sets the permission which allow assembly or not. 
    /// true is allow and false is forbidden.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowAssembly(bool value);
    /// <summary>
    /// Gets and sets the print level of  document's privilege. Just as the Adobe Professional's Printing Allowed settings.
    /// 0: None.
    /// 1: Low Resolution (150 dpi).
    /// 2: High Resolution.
    /// </summary>
    /// <remarks>
    /// If the property has a value of -1, then the level is undefined.
    /// </remarks>
    ASPOSE_PDF_SHARED_API int32_t get_PrintAllowLevel();
    /// <summary>
    /// Gets and sets the print level of  document's privilege. Just as the Adobe Professional's Printing Allowed settings.
    /// 0: None.
    /// 1: Low Resolution (150 dpi).
    /// 2: High Resolution.
    /// </summary>
    /// <remarks>
    /// If the property has a value of -1, then the level is undefined.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_PrintAllowLevel(int32_t value);
    /// <summary>
    /// Gets and sets the change level of  document's privilege. Just as the Adobe Professional's Changes Allowed settings.
    /// 0: None.
    /// 1: Inserting, Deleting and Rotating pages.
    /// 2: Filling in form fields and signing existing signature fields.
    /// 3: Commenting, filling in form fields, and signing existing signature fields.
    /// 4: Any except extracting pages.
    /// </summary>
    /// <remarks>
    /// If the property has a value of -1, then the level is undefined.
    /// </remarks>
    ASPOSE_PDF_SHARED_API int32_t get_ChangeAllowLevel();
    /// <summary>
    /// Gets and sets the change level of  document's privilege. Just as the Adobe Professional's Changes Allowed settings.
    /// 0: None.
    /// 1: Inserting, Deleting and Rotating pages.
    /// 2: Filling in form fields and signing existing signature fields.
    /// 3: Commenting, filling in form fields, and signing existing signature fields.
    /// 4: Any except extracting pages.
    /// </summary>
    /// <remarks>
    /// If the property has a value of -1, then the level is undefined.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_ChangeAllowLevel(int32_t value);
    /// <summary>
    /// Gets and sets the copy level of  document's privilege. Just as the Adobe Professional's permission settings.
    /// 0: None.
    /// 1: Enable text access for screen reader devices for the visually impaired.
    /// 2: Enable copying of text, images and other content.
    /// </summary>
    /// <remarks>
    /// If the property has a value of -1, then the level is undefined.
    /// </remarks>
    ASPOSE_PDF_SHARED_API int32_t get_CopyAllowLevel();
    /// <summary>
    /// Gets and sets the copy level of  document's privilege. Just as the Adobe Professional's permission settings.
    /// 0: None.
    /// 1: Enable text access for screen reader devices for the visually impaired.
    /// 2: Enable copying of text, images and other content.
    /// </summary>
    /// <remarks>
    /// If the property has a value of -1, then the level is undefined.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_CopyAllowLevel(int32_t value);
    /// <summary>
    /// Allows degraded printing.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_DegradedPrinting();
    /// <summary>
    /// Allows printing file.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_Print();
    /// <summary>
    /// Allows modifying file.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_ModifyContents();
    /// <summary>
    /// Allows copying file.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_Copy();
    /// <summary>
    /// Allows modifying annotations of file.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_ModifyAnnotations();
    /// <summary>
    /// Allows filling forms in file. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_FillIn();
    /// <summary>
    /// Allows to reader on screen only.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_ScreenReaders();
    /// <summary>
    /// Allows assemblying file.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_Assembly();
    /// <summary>
    /// All allowed.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_AllowAll();
    /// <summary>
    /// All Forbidded.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> get_ForbidAll();
    
    /// <summary>
    /// Compares two <see cref="DocumentPrivilege"></see> objects.
    /// <param name="obj">
    /// The object to compare with.
    /// </param>
    /// <returns>A signed integer that indicates the relative values of this instance and value. Less than zero this instance is less than value. 
    /// Zero this instance is equal to value. Greater than zero this instance is greater than value.</returns>
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t CompareTo(System::SharedPtr<System::Object> obj) override;
    
protected:

    int32_t get_Value();
    
    DocumentPrivilege(int32_t value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentPrivilege, CODEPORTING_ARGS(int32_t value));
    
private:

    System::ArrayPtr<int32_t> permissionBit;
    
    /// <summary>
    /// Determines if the print permission level is set to Level 0.
    /// </summary>
    /// <returns>True if the permission bits for printing are configured for Level 0; otherwise, false.</returns>
    bool IsPrintAllowLevel0();
    /// <summary>
    /// Determines if the print permission level is set to Level 1.
    /// </summary>
    /// <returns>True if the permission bits for printing are configured for Level 1; otherwise, false.</returns>
    bool IsPrintAllowLevel1();
    /// <summary>
    /// Determines if the print permission level is set to Level 2.
    /// </summary>
    /// <returns>True if the permission bits for printing are configured for Level 2; otherwise, false.</returns>
    bool IsPrintAllowLevel2();
    /// <summary>
    /// Determines if the change permissions are configured to Level 0.
    /// </summary>
    /// <returns>True if the permission bits for changing are set to Level 0; otherwise, false.</returns>
    bool IsChangeAllowLevel0();
    /// <summary>
    /// Determines if the change permissions are configured to Level 1.
    /// </summary>
    /// <returns>True if the permission bits for changing are set to Level 1; otherwise, false.</returns>
    bool IsChangeAllowLevel1();
    /// <summary>
    /// Determines if the change permissions are configured to Level 2.
    /// </summary>
    /// <returns>True if the permission bits for changing are set to Level 2; otherwise, false.</returns>
    bool IsChangeAllowLevel2();
    /// <summary>
    /// Determines if the change permissions are configured to Level 3.
    /// </summary>
    /// <returns>True if the permission bits for changing are set to Level 3; otherwise, false.</returns>
    bool IsChangeAllowLevel3();
    /// <summary>
    /// Determines if the change permissions are configured to Level 4.
    /// </summary>
    /// <returns>True if the permission bits for changing are set to Level 4; otherwise, false.</returns>
    bool IsChangeAllowLevel4();
    /// <summary>
    /// Determines if the copy permission level is set to Level 0.
    /// </summary>
    /// <returns>True if the permission bits for copying are configured for Level 0; otherwise, false.</returns>
    bool IsCopyAllowLevel0();
    /// <summary>
    /// Determines if the copy permission level is set to Level 1.
    /// </summary>
    /// <returns>True if the permission bits for copying are configured for Level 1; otherwise, false.</returns>
    bool IsCopyAllowLevel1();
    /// <summary>
    /// Determines if the copy permission level is set to Level 2.
    /// </summary>
    /// <returns>True if the permission bits for copying are configured for Level 2; otherwise, false.</returns>
    bool IsCopyAllowLevel2();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


