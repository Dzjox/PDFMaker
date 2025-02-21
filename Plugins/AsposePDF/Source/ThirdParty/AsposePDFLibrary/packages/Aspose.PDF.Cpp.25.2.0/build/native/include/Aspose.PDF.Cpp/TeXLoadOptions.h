#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/idisposable.h>
#include <drawing/size_f.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Tests
{
namespace Generator
{
class LatexTests;
} // namespace Generator
} // namespace Tests
class TeXFileSystemOutputDirectory;
class TeXFragment;
class TeXInputDirectoryAdapter;
class TeXOutputDirectoryAdapter;
class TeXToPdfConverter;
} // namespace Pdf
namespace TeX
{
namespace IO
{
class IInputWorkingDirectory;
class IOutputWorkingDirectory;
} // namespace IO
enum class TeXJobResult;
class TeXOptions;
} // namespace TeX
} // namespace Aspose
namespace System
{
class DateTime;
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Results for TeX load and compiling.
/// </summary>
enum class TeXLoadResult
{
    /// <summary>
    /// Loading not executed yet.
    /// </summary>
    NotExecuted,
    /// <summary>
    /// Spotless result of loading and compiling.
    /// </summary>
    Spotless,
    /// <summary>
    /// Warnings present on loading and compiling.
    /// </summary>
    WarningIssued,
    /// <summary>
    /// Errors present on loading and compiling.
    /// </summary>
    ErrorMessageIssued,
    /// <summary>
    /// Fatal errors present on loading and compiling.
    /// </summary>
    FatalErrorStop,
    /// <summary>
    /// Invalid result of loading and compiling.
    /// </summary>
    InvalidResult
};

/// <summary>
/// Interface of generalized TeX input directory.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ITeXInputDirectory : public System::IDisposable
{
    typedef ITeXInputDirectory ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the stream to read from or to write to.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="fullName">The full file name.</param>
    /// <param name="searchSubdirectories">Indicates whether to look for a file in subdirectories.</param>
    /// <returns>The stream.</returns>
    virtual System::SharedPtr<System::IO::Stream> GetFile(System::String fileName, System::String& fullName, bool searchSubdirectories = false) = 0;
    
};

/// <summary>
/// Interface of generalized TeX output directory.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ITeXOutputDirectory : public virtual Aspose::Pdf::ITeXInputDirectory
{
    typedef ITeXOutputDirectory ThisType;
    typedef Aspose::Pdf::ITeXInputDirectory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the stream to write to.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="fullName">The full file name.</param>
    /// <returns>The stream.</returns>
    virtual System::SharedPtr<System::IO::Stream> GetOutputFile(System::String fileName, System::String& fullName) = 0;
    
};

/// <summary>
/// Implements the regular file system's method for getting a file stream to read from.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TeXFileSystemInputDirectory : public virtual Aspose::Pdf::ITeXInputDirectory
{
    typedef TeXFileSystemInputDirectory ThisType;
    typedef Aspose::Pdf::ITeXInputDirectory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::TeXFileSystemOutputDirectory;
    
public:

    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <param name="basePath">The base path of the directory.</param>
    ASPOSE_PDF_SHARED_API TeXFileSystemInputDirectory(System::String basePath);
    
    /// <summary>
    /// Returns the stream to read from.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="fullName">The full file name.</param>
    /// <param name="searchSubdirectories">Indicates whether to look for a file in subdirectories.</param>
    /// <returns>The stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> GetFile(System::String fileName, System::String& fullName, bool searchSubdirectories = false) override;
    /// <summary>
    /// Disposes the instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
protected:

    System::SharedPtr<Aspose::TeX::IO::IInputWorkingDirectory> get_Impl() const;
    
    TeXFileSystemInputDirectory(System::SharedPtr<Aspose::TeX::IO::IInputWorkingDirectory> impl);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TeXFileSystemInputDirectory, CODEPORTING_ARGS(System::SharedPtr<Aspose::TeX::IO::IInputWorkingDirectory> impl));
    
private:

    System::SharedPtr<Aspose::TeX::IO::IInputWorkingDirectory> _impl;
    
};

/// <summary>
/// Implements the regular file system's method for getting a file stream to write to.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TeXFileSystemOutputDirectory : public Aspose::Pdf::TeXFileSystemInputDirectory, public Aspose::Pdf::ITeXOutputDirectory
{
    typedef TeXFileSystemOutputDirectory ThisType;
    typedef Aspose::Pdf::TeXFileSystemInputDirectory BaseType;
    typedef Aspose::Pdf::ITeXOutputDirectory BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <param name="basePath">The base path of the directory.</param>
    ASPOSE_PDF_SHARED_API TeXFileSystemOutputDirectory(System::String basePath);
    
    /// <summary>
    /// Returns the stream to write to.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="fullName">The full file name.</param>
    /// <returns>The stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> GetOutputFile(System::String fileName, System::String& fullName) override;
    
};

/// <summary>
/// Implements fetching an output stream from memory. You can use it, for example,
/// when you don't want the accompanying output (like a log file) to be written to
/// disk but you'd like to read it afterwards from memory.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TeXMemoryOutputDirectory : public Aspose::Pdf::ITeXOutputDirectory
{
    typedef TeXMemoryOutputDirectory ThisType;
    typedef Aspose::Pdf::ITeXOutputDirectory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API TeXMemoryOutputDirectory();
    
    /// <summary>
    /// Returns the stream to read from.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="fullName">The full file name.</param>
    /// <param name="searchSubdirectories">Indicates whether to look for a file in subdirectories.
    /// In this implementation has no effect.</param>
    /// <returns>The stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> GetFile(System::String fileName, System::String& fullName, bool searchSubdirectories = false) override;
    /// <summary>
    /// Returns the stream to write to.
    /// </summary>
    /// <param name="fileName">The file name.</param>
    /// <param name="fullName">The full file name.</param>
    /// <returns>The stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> GetOutputFile(System::String fileName, System::String& fullName) override;
    /// <summary>
    /// Disposes the instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
private:

    System::SharedPtr<Aspose::TeX::IO::IOutputWorkingDirectory> _impl;
    
};

/// <summary>
/// Represents options for loading/importing TeX file into PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TeXLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef TeXLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::TeXFragment;
    friend class Aspose::Pdf::TeXToPdfConverter;
    friend class Aspose::Pdf::Tests::Generator::LatexTests;
    
public:

    /// <summary>
    /// Gets/set the name of the job.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_JobName() const;
    /// <summary>
    /// Gets/set the name of the job.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_JobName(System::String value);
    /// <summary>
    /// Gets/sets TeX input directory.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ITeXInputDirectory> get_InputDirectory();
    /// <summary>
    /// Gets/sets TeX input directory.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputDirectory(System::SharedPtr<ITeXInputDirectory> value);
    /// <summary>
    /// Gets/sets TeX output directory.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ITeXOutputDirectory> get_OutputDirectory();
    /// <summary>
    /// Gets/sets TeX output directory.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutputDirectory(System::SharedPtr<ITeXOutputDirectory> value);
    /// <summary>
    /// Gets/sets TeX requires input directory.
    /// Required input is the files that are somehow included into the main .tex file,
    /// e.g., packages for which there's no built-in support.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ITeXInputDirectory> get_RequiredInputDirectory();
    /// <summary>
    /// Gets/sets TeX requires input directory.
    /// Required input is the files that are somehow included into the main .tex file,
    /// e.g., packages for which there's no built-in support.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RequiredInputDirectory(System::SharedPtr<ITeXInputDirectory> value);
    /// <summary>
    /// Gets/sets the flag indicating whether it is necessary to run the TeX job twice in case,
    /// for example, there are references in input TeX file(s). In general, this behavior is useful when
    /// the engine collects some data along the typesetting process and stores it in an auxilliary file,
    /// all at the first run. And at the second run, the engine somehow uses that data.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Repeat();
    /// <summary>
    /// Gets/sets the flag indicating whether it is necessary to run the TeX job twice in case,
    /// for example, there are references in input TeX file(s). In general, this behavior is useful when
    /// the engine collects some data along the typesetting process and stores it in an auxilliary file,
    /// all at the first run. And at the second run, the engine somehow uses that data.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Repeat(bool value);
    /// <summary>
    /// Gets/sets the flag indicating whether to subset fonts in output file or not.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SubsetFonts();
    /// <summary>
    /// Gets/sets the flag indicating whether to subset fonts in output file or not.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubsetFonts(bool value);
    /// <summary>
    /// Gets/sets the flag indicating whether to show terminal output on the console.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowTerminalOutput() const;
    /// <summary>
    /// Gets/sets the flag indicating whether to show terminal output on the console.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowTerminalOutput(bool value);
    /// <summary>
    /// Gets/sets a certain value for date/time primitives like year, month, day and time.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_DateTime();
    /// <summary>
    /// Gets/sets a certain value for date/time primitives like year, month, day and time.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DateTime(System::DateTime value);
    /// <summary>
    /// Gets/sets a flag that cancels ligatures in all fonts.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_NoLigatures();
    /// <summary>
    /// Gets/sets a flag that cancels ligatures in all fonts.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NoLigatures(bool value);
    /// <summary>
    /// Gets/sets a flag that allows to rasterize math formulas.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RasterizeFormulas();
    /// <summary>
    /// Gets/sets a flag that allows to rasterize math formulas.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RasterizeFormulas(bool value);
    
    /// <summary>
    /// Creates default load options for converting TeX file into PDF document. 
    /// </summary>
    ASPOSE_PDF_SHARED_API TeXLoadOptions();
    
    /// <summary>
    /// Gets result for TeX load and compiling - did everything go smoothly or were there any comments/errors.
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API TeXLoadResult GetLoadResult();
    
protected:

    void set__texJobResult(TeX::TeXJobResult value);
    System::SharedPtr<Aspose::TeX::TeXOptions> get_TeXOptions() const;
    System::SharedPtr<Aspose::TeX::IO::IInputWorkingDirectory> get_InputDirectoryInternal() const;
    System::SharedPtr<Aspose::TeX::IO::IOutputWorkingDirectory> get_OutputDirectoryInternal() const;
    System::SharedPtr<Aspose::TeX::IO::IInputWorkingDirectory> get_RequiredInputDirectoryInternal() const;
    System::Drawing::SizeF get_FragmentSize() const;
    void set_FragmentSize(System::Drawing::SizeF value);
    
private:

    System::String _jobName;
    System::SharedPtr<Aspose::TeX::TeXOptions> _texOptions;
    System::SharedPtr<TeXInputDirectoryAdapter> _inputDirectory;
    System::SharedPtr<TeXOutputDirectoryAdapter> _outputDirectory;
    System::SharedPtr<TeXInputDirectoryAdapter> _requiredInputDirectory;
    bool _showTerminalOutput;
    TeXLoadResult _loadResult;
    System::Drawing::SizeF pr_FragmentSize;
    
};

/// @deprecated Use TeXLoadOptions instead.
/// <summary>
/// Represents options for loading/importing TeX file into PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LatexLoadOptions : public Aspose::Pdf::TeXLoadOptions
{
    typedef LatexLoadOptions ThisType;
    typedef Aspose::Pdf::TeXLoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Pdf
} // namespace Aspose


