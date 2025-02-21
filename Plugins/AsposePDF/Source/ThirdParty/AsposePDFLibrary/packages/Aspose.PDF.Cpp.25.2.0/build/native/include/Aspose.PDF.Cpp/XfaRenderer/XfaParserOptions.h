#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <drawing/size_f.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Foundation
{
namespace UriResolver
{
class UriResolver;
} // namespace UriResolver
} // namespace Foundation
} // namespace Aspose
namespace System
{
class Uri;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace XfaConverter {

/// <summary>
/// class to handle related data incapsulation
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XfaParserOptions : public System::Object
{
    typedef XfaParserOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the URI resolver.
    /// </summary>
    /// <value>
    /// The URI resolver.
    /// </value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Foundation::UriResolver::UriResolver> get_UriResolver() const;
    /// <summary>
    /// Sets the URI resolver.
    /// </summary>
    /// <value>
    /// The URI resolver.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_UriResolver(System::SharedPtr<Aspose::Foundation::UriResolver::UriResolver> value);
    /// <summary>
    /// Gets the size of the page.
    /// </summary>
    /// <value>
    /// The size of the page.
    /// </value>
    ASPOSE_PDF_SHARED_API System::Drawing::SizeF get_PageSize() const;
    /// <summary>
    /// Sets the size of the page.
    /// </summary>
    /// <value>
    /// The size of the page.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_PageSize(System::Drawing::SizeF value);
    /// <summary>
    /// If this property is true then document will be converted with using of xfa form stream (if it exists).
    /// If it is false then xfa form stream will be ignored.
    /// This property was inrtoduced because it's not clear how to calculate check sum that used for checking sygnature.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Signed() const;
    /// <summary>
    /// If this property is true then document will be converted with using of xfa form stream (if it exists).
    /// If it is false then xfa form stream will be ignored.
    /// This property was inrtoduced because it's not clear how to calculate check sum that used for checking sygnature.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Signed(bool value);
    /// <summary>
    /// If this property is true then additional red rectangles will be drawn for required Xfa "excluded groups"
    /// This property was introduced because absences of analogues of excluded groups during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_EmulateRequierdGroups() const;
    /// <summary>
    /// If this property is true then additional red rectangles will be drawn for required Xfa "excluded groups"
    /// This property was introduced because absences of analogues of excluded groups during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EmulateRequierdGroups(bool value);
    /// <summary>
    /// Gets the base path.
    /// </summary>
    /// <value>
    /// The base path.
    /// </value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Uri> get_BasePath() const;
    /// <summary>
    /// Sets the base path.
    /// </summary>
    /// <value>
    /// The base path.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_BasePath(System::SharedPtr<System::Uri> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XfaParserOptions"></see> class.
    /// </summary>
    /// <param name="pageSize">Size of the page.</param>
    ASPOSE_PDF_SHARED_API XfaParserOptions(System::Drawing::SizeF pageSize);
    
private:

    System::SharedPtr<Aspose::Foundation::UriResolver::UriResolver> uriResolver;
    System::SharedPtr<System::Uri> basePath;
    System::Drawing::SizeF _pageSize;
    bool _signed;
    bool pr_EmulateRequierdGroups;
    
};

} // namespace XfaConverter
} // namespace Pdf
} // namespace Aspose


