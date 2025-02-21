#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Facades
{
class DocumentPrivilege;
} // namespace Facades
enum class PasswordType;
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
class DateTime;
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class for accessing meta information of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileInfo final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileInfo ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the Author information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Author();
    /// <summary>
    /// Sets the Author information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Author(System::String value);
    /// <summary>
    /// Checkes whether the PDF document is encrypted.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsEncrypted();
    /// <summary>
    /// Checkes whether the source input is a valid PDF file.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsPdfFile();
    /// <summary>
    /// Uses strict validation rules via using <see cref="IsPdfFile"></see> property.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseStrictValidation() const;
    /// <summary>
    /// Uses strict validation rules via using <see cref="IsPdfFile"></see> property.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseStrictValidation(bool value);
    /// <summary>
    /// Gets the CreationDate information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CreationDate();
    /// <summary>
    /// Sets the CreationDate information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CreationDate(System::String value);
    /// <summary>
    /// Gets the Creator information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Creator();
    /// <summary>
    /// Sets the Creator information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Creator(System::String value);
    /// <summary>
    /// Returns true if the current input file is a 'Portfolio' file containing collection of PDF files in it.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HasCollection();
    /// <summary>
    /// Gets the customized information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> get_Header() const;
    /// <summary>
    /// Sets the customized information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Header(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> value);
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Gets the input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_InputFile() const;
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets the input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputFile(System::String value);
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Gets the input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_InputStream() const;
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets the input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets the Keywords information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Keywords();
    /// <summary>
    /// Sets the Keywords information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Keywords(System::String value);
    /// <summary>
    /// Gets the ModDate date information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ModDate();
    /// <summary>
    /// Sets the ModDate date information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ModDate(System::String value);
    /// <summary>
    /// Gets the number of document pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_NumberOfPages();
    /// <summary>
    /// Gets the Producer information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Producer();
    /// <summary>
    /// Gets the Subject information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Subject();
    /// <summary>
    /// Sets the Subject information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Subject(System::String value);
    /// <summary>
    /// Gets the Title information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title();
    /// <summary>
    /// Sets the Title information of PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    /// <summary>
    /// Returns the type of password which was passed for creating PdfFileInfo instance. See possible values in <see cref="PasswordType"></see>.
    /// Pay attention that pdf document can be opened using both user (or open) password and owner (or permissions, edit) password.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::PasswordType get_PasswordType();
    /// <summary>
    /// Returns true if password is needed to open password protected pdf document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HasOpenPassword();
    /// <summary>
    /// Returns true if password is needed to modify permissions or document security property.
    /// Pay attention that this property can be read only if valid password was provided in <see cref="PdfFileInfo"></see> constructor.
    /// In case PasswordType is Inaccessible (means that invalid password was provided) reading this property will fail with <see cref="InvalidPasswordException"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_HasEditPassword();
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcDoc">The Aspose.Pdf.Document object.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc) override;
    
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class with default values.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileInfo();
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputStream">Stream where input file is placed.</param>
    ASPOSE_PDF_SHARED_API PdfFileInfo(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputStream">Stream where input file is placed.</param>
    /// <param name="password">Password for access to file.</param>
    ASPOSE_PDF_SHARED_API PdfFileInfo(System::SharedPtr<System::IO::Stream> inputStream, System::String password);
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputFile">Name of file containing input file.</param>
    ASPOSE_PDF_SHARED_API PdfFileInfo(System::String inputFile);
    /// <summary>
    /// Initializes a new instance of the Aspose.Pdf.Facades.PdfFileInfo class.
    /// </summary>
    /// <param name="inputFile">Name of file containing input file.</param>
    /// <param name="password">Password for access to file.</param>
    ASPOSE_PDF_SHARED_API PdfFileInfo(System::String inputFile, System::String password);
    
    /// <summary>
    /// Clears all meta information of PDF document.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ClearInfo();
    /// <summary>
    /// Gets the PDF document privilege settings.
    /// </summary>
    /// <returns>The PDF document privilege settings.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<DocumentPrivilege> GetDocumentPrivilege();
    /// <summary>
    /// Gets customized information of PDF document with property name. If there is no property match the name it will return a blank string.
    /// </summary>
    /// <param name="name">Custom meta property key.</param>
    /// <returns>Custom meta property value.</returns>
    ASPOSE_PDF_SHARED_API System::String GetMetaInfo(System::String name);
    /// <summary>
    /// Gets the height of the specified page.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The height of the page.</returns>
    ASPOSE_PDF_SHARED_API float GetPageHeight(int32_t pageNum);
    /// <summary>
    /// Gets the rotation of the specified page.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The rotation of the page. The value may be 0,90,180,270.</returns>
    ASPOSE_PDF_SHARED_API int32_t GetPageRotation(int32_t pageNum);
    /// <summary>
    /// Gets the width of the specified page.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The width of the page.</returns>
    ASPOSE_PDF_SHARED_API float GetPageWidth(int32_t pageNum);
    /// <summary>
    /// Gets the horizontal offset of the specified page display area.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The horizontal offset from the left side of the page.</returns>
    ASPOSE_PDF_SHARED_API float GetPageXOffset(int32_t pageNum);
    /// <summary>
    /// Gets the vertical offset of the specified page display area.
    /// </summary>
    /// <param name="pageNum">Page number.</param>
    /// <returns>The vertical offset of the page display area.</returns>
    ASPOSE_PDF_SHARED_API float GetPageYOffset(int32_t pageNum);
    /// <summary>
    /// Gets the version info of PDF document.
    /// </summary>
    /// <returns>The version string.</returns>
    ASPOSE_PDF_SHARED_API System::String GetPdfVersion();
    /// @deprecated Use Save(destination) method for saving facade results.
    /// <summary>
    /// Save updated PDF document into specified stream.
    /// </summary>	
    /// <param name="outputStream">Output stream.</param>
    /// <returns>True if success otherwise is false.</returns>		
    ASPOSE_PDF_SHARED_API bool SaveNewInfo(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Save updated PDF document into specified file.
    /// </summary>	
    /// <param name="outputFile">Output file.</param>
    /// <returns>True if success otherwise is false.</returns>
    ASPOSE_PDF_SHARED_API bool SaveNewInfo(System::String outputFile);
    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destStream">The destination stream.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> destStream) override;
    /// <summary>
    /// Saves the PDF document to the specified file.
    /// </summary>
    /// <param name="destFile">The destination file.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String destFile) override;
    /// <summary>
    /// Sets customized information of PDF document.
    /// </summary>
    /// <param name="name">Custom meta property key.</param>
    /// <param name="value">Custom meta property value.</param>
    ASPOSE_PDF_SHARED_API void SetMetaInfo(System::String name, System::String value);
    /// <summary>
    /// Changes the properties specified explicitly by setting file information, other properties remain.
    /// </summary>
    /// <param name="outputFileName">Output file.</param>
    /// <returns>True for success, or false.</returns>
    ASPOSE_PDF_SHARED_API bool SaveNewInfoWithXmp(System::String outputFileName);
    
    /// <summary>
    /// Initializes new <see cref="PdfFileInfo"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">Pdf document.</param>
    ASPOSE_PDF_SHARED_API PdfFileInfo(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Deinitializes the instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
protected:

    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password) override;
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String srcFile, System::String password) override;
    /// <summary>
    /// Asserts if the facade is initialized.
    /// </summary>
    ASPOSE_PDF_SHARED_API void AssertDocument() const override;
    
private:

    System::String _inputFile;
    System::SharedPtr<System::IO::Stream> _inputStream;
    bool _isPdfFile;
    System::String _errorReason;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> _header;
    bool _isEncrypted;
    bool _useStrictValidation;
    static const System::String DefaultXmpNamespacePrefix;
    static const System::String DefaultXmpNamespaceUri;
    
    void Initialize();
    void RenewInfo();
    static System::String TranslateDate(System::DateTime date);
    /// <summary>
    /// Checks stream content.
    /// Extra text can misused in scripts (like sql injection).
    /// </summary>
    /// <returns>True - if the document contains forbidden symbols; otherwise, false.</returns>
    bool ContainsForbiddenSymbols();
    bool ContainsHeaderForbiddenSymbols(System::String text);
    bool ContainsForbiddenSymbols(System::String text, System::String allowedSymbols);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


