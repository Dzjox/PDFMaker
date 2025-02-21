#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <include/ApsToEpubConverter.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class EpubConverter;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to EPUB format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EpubSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef EpubSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::EpubConverter;
    
public:

    /// <summary>
    ///   When PDF file (that usually has fixed layout) is being converted,
    /// the conversion engine tries to perform grouping and multi-level analysis to restore
    /// the original document author's intent and produce result in flow layout.
    ///    This property tunes that conversion for this or that
    /// desirable method of recognition of content.
    /// </summary>
    enum class RecognitionMode
    {
        /// <summary>
        /// Full recognition mode, the engine tries to perform grouping and multi-level analysis to restore
        /// the original document author's intent and produce xhtml in flow layout.
        /// </summary>
        Flow,
        /// <summary>
        /// The main idea of this conversion is based on saving "natural" order of content rendering that is formed during processing of pdf documents.
        /// In the general cases pdf documents keep top-down, left-right rendering order (see attachment directions.png). This assumption allows to
        /// create a single-path algorithm that will transform Aps elements that have positions (fixed-layout) into flow formats like HTML,EPUB,DOC.
        /// This mode will be especially useful for converting from PDF(APS) into EPUB, because the EPUB format was developed for e-readers like the Kindle or
        /// smart-phones. The size of screen those devices usually is less than the size of screen of ordinary PC. Therefore the content of EPUB documents is better to save
        /// in the flow format, for correct rendering on screens with different sizes.
        /// In this mode every column will be added to the end of previous column this allows to keep the logical structure of transformed document
        /// during "pagination" in EPUB readers. This achievement allows correctly render scientific or magazine articles.
        /// </summary>
        PdfFlow,
        /// <summary>
        /// This mode is fast and good for maximally preserving the original look pages,
        /// but unfortunately many EPUB readeres don't support xhtml with fixed layout
        /// </summary>
        Fixed
    };
    
    
public:

    /// <summary>
    /// Gets EPUB document title.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title() const;
    /// <summary>
    /// Sets EPUB document title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    
    /// <summary>
    ///   When PDF file (that usually has fixed layout) is being converted,
    /// the conversion engine tries to perform grouping and multi-level analysis to restore
    /// the original document author's intent and produce result in flow layout.
    ///    This property tunes that conversion for this or that
    /// desirable method of recognition of content.
    /// </summary>
    EpubSaveOptions::RecognitionMode ContentRecognitionMode;
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API EpubSaveOptions();
    
protected:

    /// <summary>
    ///  During export to EPUB several modes of entity recognition
    ///   of layout can be used
    ///  This parameter defines such mode.
    /// </summary>
    System::SharedPtr<Aspose::Shared::Epub::ApsToEpubConverterOptions> ToInnerSaveOptions();
    
private:

    System::String _title;
    
    Aspose::Shared::Epub::ApsToEpubConverterOptions::RecognizeMode ToInnerRecognizeMode(EpubSaveOptions::RecognitionMode recognizeMode);
    
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::EpubSaveOptions::RecognitionMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::EpubSaveOptions::RecognitionMode, const char_t*>, 3>& values();
};



