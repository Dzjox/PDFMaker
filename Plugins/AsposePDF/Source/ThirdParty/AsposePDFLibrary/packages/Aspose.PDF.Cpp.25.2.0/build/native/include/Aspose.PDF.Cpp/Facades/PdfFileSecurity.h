#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class CryptoAlgorithm;
class Document;
namespace Facades
{
enum class Algorithm;
class DocumentPrivilege;
enum class KeySize;
} // namespace Facades
enum class Permissions;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class Random;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents encrypting or decrypting a Pdf file with owner or user password, changing the security setting and password.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFileSecurity final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfFileSecurity ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets the input file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputFile(System::String value);
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets the input stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets the output file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputFile(System::String value);
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Sets the output stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated This property is deprecated and can not be used to allow throwing exceptions.
    /// <summary>
    /// If this value set to true, exception will be thrown on opearation failure. Else, method returns false on failure and last exception can be checked with LastException property.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowExceptions();
    /// @deprecated This property is deprecated and can not be used to allow throwing exceptions.
    /// <summary>
    /// If this value set to true, exception will be thrown on opearation failure. Else, method returns false on failure and last exception can be checked with LastException property.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowExceptions(bool value);
    /// <summary>
    /// Returns exception which was thrown by last operation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Exception get_LastException() const;
    
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initialize the object of PdfFileSecurity with input and output stream.
    /// </summary>
    /// <param name="inputStream"> Input Pdf Stream.</param>
    /// <param name="outputStream">Output Pdf Stream.</param>
    ASPOSE_PDF_SHARED_API PdfFileSecurity(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    ///  Initializes the object of PdfFileSecurity with input and output file.
    /// </summary>
    /// <param name="inputFile">Source input Pdf file.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    ASPOSE_PDF_SHARED_API PdfFileSecurity(System::String inputFile, System::String outputFile);
    /// <summary>
    /// Initialize the object of PdfFileSecurity.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFileSecurity();
    
    /// <summary>
    /// Encrypts Pdf file with userpassword and ownerpassword and sets the document's privileges to access.
    /// The user password and the owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the input owner password is null or empty.
    /// Throws exception if process failed.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <returns>True for success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MfEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    /// <summary>
    /// Encrypts Pdf file with userpassword and ownerpassword and sets the document's privileges to access.
    /// The user password and the owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the input owner password is null or empty.
    /// Does not throw an exception if process failed.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    /// <summary>
    /// Encrypts Pdf file with userpassword and ownerpassword and sets the document's privileges to access.
    /// The user password and the owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the input owner password is null or empty.
    /// There are 6 possible combinations of KeySize and Algorithm values. 
    /// However (KeySize.x40, Algorithm.AES) and (KeySize.x256, Algorithm.RC4) are invalid and corresponding 
    /// exception will be raised if kit encounters this combination.
    /// Throws an exception if process failed. 
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <param name="cipher">Algorithm.AES to encrypt using AES algorithm or Algorithm.RC4 for RC4 encryption.</param>
    /// <returns>True for success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MfEncryptFile(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    /// <summary>
    /// Decrypts an encrypted Pdf document by owner password. 
    /// If the document hasn't owner password, it is allow to use user password.
    /// Throws an exception if process failed.
    /// </summary>
    /// <param name="ownerPassword">Owner password.</param>
    /// <returns>True for success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MfDecryptFile(System::String ownerPassword);
    /// <summary>
    /// Decrypts an encrypted Pdf document by owner password. 
    /// If the document hasn't owner password, it is allow to use user password.
    /// Does not throw an exception if process failed. 
    /// </summary>
    /// <param name="ownerPassword">Owner password.</param>
    /// <returns>True for success,or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryDecryptFile(System::String ownerPassword);
    /// <summary>
    /// Sets Pdf file security with empty user/owner passwords.
    /// The owner password will be added by a random string.
    /// Throws an exception if process failed.
    /// </summary>
    /// <param name="privilege">Set privilege.</param>
    /// <returns>True for success.</returns>
    /// <example></example>
    ASPOSE_PDF_SHARED_API bool SetPrivilege(System::SharedPtr<DocumentPrivilege> privilege);
    /// <summary>
    /// Sets Pdf file security with original password.
    /// Throws an exception if process failed.
    /// </summary>
    /// <param name="userPassword">Original user password.</param>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <returns>True for success.</returns>
    /// <example></example>
    ASPOSE_PDF_SHARED_API bool SetPrivilege(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege);
    /// <summary>
    /// Sets Pdf file security with original password.
    /// Does not throw an exception if process failed.
    /// </summary>
    /// <param name="userPassword">Original user password.</param>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="privilege">Set privilege.</param>
    /// <returns>True for success, or false.</returns>
    /// <example></example>
    ASPOSE_PDF_SHARED_API bool TrySetPrivilege(System::String userPassword, System::String ownerPassword, System::SharedPtr<DocumentPrivilege> privilege);
    /// <summary>
    /// Changes the user password and owner password by owner password, keeps the original security settings.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// Throws an exception if process failed.
    /// </summary>
    /// <param name="ownerPassword">Original Owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <returns>True for success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    /// <summary>
    /// Changes the user password and owner password by owner password, keeps the original security settings.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// Does not throw an exception if process failed.
    /// with a random string if the new owner password is null or empty.
    /// </summary>
    /// <param name="ownerPassword">Original Owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <returns>True for success,or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    /// <summary>
    /// Changes the user password and password by owner password, allows to reset Pdf documnent security.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// Throws an exception if process failed.
    /// </summary>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <param name="privilege">Reset security.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <returns>True for success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    /// <summary>
    /// Changes the user password and password by owner password, allows to reset Pdf documnent security.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// Does not throw an exception if process failed.
    /// </summary>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <param name="privilege">Reset security.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize);
    /// <summary>
    /// Changes the user password and password by owner password, allows to reset Pdf documnent security.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// There are 6 possible combinations of KeySize and Algorithm values. 
    /// However (KeySize.x40, Algorithm.AES) and (KeySize.x256, Algorithm.RC4) are invalid and corresponding 
    /// exception will be raised if kit encounters this combination.
    /// Throws an exception if process failed.
    /// </summary>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <param name="privilege">Reset security.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <param name="cipher">Algorithm.AES to encrypt using AES algorithm or Algorithm.RC4 for RC4 encryption.</param>
    /// <returns>True for success.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    /// <summary>
    /// Changes the user password and password by owner password, allows to reset Pdf documnent security.
    /// The new user password and the new owner password can be null or empty. The owner password will be replaced 
    /// with a random string if the new owner password is null or empty.
    /// There are 6 possible combinations of KeySize and Algorithm values. 
    /// However (KeySize.x40, Algorithm.AES) and (KeySize.x256, Algorithm.RC4) are invalid and corresponding 
    /// exception will be raised if kit encounters this combination.
    /// Does not throw an exception if process failed.
    /// </summary>
    /// <param name="ownerPassword">Original owner password.</param>
    /// <param name="newUserPassword">New User password.</param>
    /// <param name="newOwnerPassword">New Owner password.</param>
    /// <param name="privilege">Reset security.</param>
    /// <param name="keySize">KeySize.x40 for 40 bits encryption, KeySize.x128 for 128 bits encryption and KeySize.x256 for 256 bits encryption.</param>
    /// <param name="cipher">Algorithm.AES to encrypt using AES algorithm or Algorithm.RC4 for RC4 encryption.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool TryChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher);
    
    /// <summary>
    /// Initializes new <see cref="PdfFileSecurity"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="PdfFileSecurity"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputFile">
    /// Output Pdf file.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document, System::String outputFile);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="PdfFileSecurity"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="outputStream">
    /// Output Pdf Stream.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfFileSecurity(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> outputStream);
    
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String srcFile) override;
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> srcStream) override;
    /// <summary>
    /// Closes the facade.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
private:

    bool _isOpenFile;
    bool _isSaveFile;
    bool _changed;
    System::SharedPtr<System::IO::Stream> _inputStream;
    System::SharedPtr<System::IO::Stream> _outputStream;
    System::Exception _lastException;
    System::SharedPtr<System::Random> _rng;
    static const System::String _chars;
    
    void AssertInputOutput(System::String password);
    static CryptoAlgorithm GetCryptoAlgorithm(KeySize keySize);
    void CloseStreams();
    bool Encrypt(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, Permissions permissions, CryptoAlgorithm cryptoAlgorithm, bool throwOnError);
    System::String RandomString(int32_t size);
    bool Decrypt(System::String ownerPassword, bool throwOnError);
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, bool throwOnError);
    bool ChangePassword(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword, System::SharedPtr<DocumentPrivilege> privilege, KeySize keySize, Algorithm cipher, bool throwOnError);
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


