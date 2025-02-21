#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/eventhandler.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class PdfContentEditor;
} // namespace Facades
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// This class contains parameters which define PdfContentEditor behavior when ReplaceText operation is performed. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ReplaceTextStrategy final : public System::Object
{
    typedef ReplaceTextStrategy ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    /// <summary>
    /// Scope where replace text operation is applied 
    /// REPLACE_FIRST by default
    /// </summary>
    enum class Scope
    {
        /// <summary>
        /// Replace only first occurence of the text on each of affected pages
        /// </summary>
        ReplaceFirst,
        /// <summary>
        /// Replace all text occurences on all affected pages
        /// </summary>
        ReplaceAll
    };
    
    /// <summary>
    /// Action to perform if font does not contain required character 
    /// </summary>
    enum class NoCharacterAction
    {
        /// <summary>
        /// Throw exception
        /// </summary>
        ThrowException,
        /// <summary>
        /// Repalce font to standard font which contains required character
        /// </summary>
        UseStandardFont,
        /// <summary>
        /// Replace text anyway without font substitution
        /// </summary>
        ReplaceAnyway
    };
    
    
public:

    /// <summary>
    /// If false, string to find is a simple text. If true, string to find is regular expression.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsRegularExpressionUsed() const;
    /// <summary>
    /// If false, string to find is a simple text. If true, string to find is regular expression.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsRegularExpressionUsed(bool value);
    /// <summary>
    /// Action which is performed when no approppriate font found for changed text
    /// (Throw exception / Substitute other font / Replace anyway).
    /// </summary>
    ASPOSE_PDF_SHARED_API ReplaceTextStrategy::NoCharacterAction get_NoCharacterBehavior() const;
    /// <summary>
    /// Action which is performed when no approppriate font found for changed text
    /// (Throw exception / Substitute other font / Replace anyway).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NoCharacterBehavior(ReplaceTextStrategy::NoCharacterAction value);
    /// <summary>
    /// Scope of the replacement operation (replace first occurence or replace all occurences).
    /// </summary>
    ASPOSE_PDF_SHARED_API ReplaceTextStrategy::Scope get_ReplaceScope() const;
    /// <summary>
    /// Scope of the replacement operation (replace first occurence or replace all occurences).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplaceScope(ReplaceTextStrategy::Scope value);
    
    ASPOSE_PDF_SHARED_API ReplaceTextStrategy();
    
protected:

    System::EventHandler<> OnPropertiesChanged;
    
    virtual ASPOSE_PDF_SHARED_API ~ReplaceTextStrategy();
    
private:

    bool _isRegularExpression;
    ReplaceTextStrategy::NoCharacterAction _noCharacterAction;
    ReplaceTextStrategy::Scope _scope;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


