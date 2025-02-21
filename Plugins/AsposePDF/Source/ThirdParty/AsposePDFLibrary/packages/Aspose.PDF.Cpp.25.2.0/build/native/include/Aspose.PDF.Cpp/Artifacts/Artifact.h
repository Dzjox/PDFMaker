#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <system/object_ext.h>
#include <system/idisposable.h>
#include <system/enum.h>
#include <system/array.h>
#include <drawing/color.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ArtifactCollection;
class BackgroundArtifact;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
namespace Facades
{
class FormattedText;
} // namespace Facades
class FooterArtifact;
class HeaderArtifact;
enum class HorizontalAlignment;
namespace LogicalStructure
{
class StructureElement;
} // namespace LogicalStructure
class Matrix;
class Operator;
class OperatorCollection;
namespace Operators
{
class ConcatenateMatrix;
class Do;
class GS;
class SelectFont;
class SetRGBColor;
} // namespace Operators
class Page;
class PageCollectionExtension;
class Point;
class Rectangle;
class Resources;
namespace Tests
{
class RegressionTests_v9_3;
} // namespace Tests
namespace Text
{
class TextState;
} // namespace Text
enum class VerticalAlignment;
class WatermarkArtifact;
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents PDF Artifact object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Artifact : public System::IDisposable
{
    typedef Artifact ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::BackgroundArtifact;
    friend class Aspose::Pdf::FooterArtifact;
    friend class Aspose::Pdf::HeaderArtifact;
    friend class Aspose::Pdf::WatermarkArtifact;
    friend class Aspose::Pdf::PageCollectionExtension;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    
public:

    /// <summary>
    /// Enumeration of possuble artifact types.
    /// </summary>
    enum class ArtifactType
    {
        /// <summary>
        /// Pagination artifacts. Ancillary page features such as running heads and folios (page numbers).
        /// </summary>
        Pagination,
        /// <summary>
        /// Layout artifacts. Purely cosmetic typographical or design elements such as footnote rules or background screens.
        /// </summary>
        Layout,
        /// <summary>
        /// Page artifacts. Production aids extraneous to the document itself, such as cut marks and colour bars.
        /// </summary>
        Page,
        /// <summary>
        /// Background artifacts. Images, patterns or coloured blocks.
        /// </summary>
        Background,
        /// <summary>
        /// Artifact type is not defined or unknown.
        /// </summary>
        Undefined
    };
    
    /// <summary>
    /// Enumeration of possible artifacts subtype.
    /// </summary>
    enum class ArtifactSubtype
    {
        /// <summary>
        /// Header artifact.
        /// </summary>
        Header,
        /// <summary>
        /// Footer artifact.
        /// </summary>
        Footer,
        /// <summary>
        /// Watermark artifact.
        /// </summary>
        Watermark,
        /// <summary>
        /// Background artifact.
        /// </summary>
        Background,
        /// <summary>
        /// Artifact subtype is not defined or unknown.
        /// </summary>
        Undefined
    };
    
    
protected:

    /// <summary>
    /// This class describes state of page (Matrix, selected font etc.)
    /// </summary>
    class ArtifactContext : public System::Object
    {
        typedef ArtifactContext ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Resources> resources;
        System::String fontName;
        System::SharedPtr<Matrix> initialMatrix;
        
        ArtifactContext(System::SharedPtr<Resources> resources, System::SharedPtr<Matrix> matrix, System::String fontName);
        ArtifactContext();
        
    };
    
    /// <summary>
    /// Contains text attributes in original artifact
    /// </summary>
    class TextAttributes : public System::Object
    {
        typedef TextAttributes ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        TextAttributes();
        
    private:
    
        System::Drawing::Color textColor;
        System::String fontResourceName;
        double fontSize;
        
    };
    
    
public:

    /// <summary>
    /// Gets name of artifact type. May be used if artifact type is non standard.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CustomType();
    /// <summary>
    /// Gets name of artifact type. May be used if artifact type is non standard.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomType(System::String value);
    /// <summary>
    /// Gets name of artifact subtype. May be used  if artifact subtype is not standard subtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CustomSubtype();
    /// <summary>
    /// Gets name of artifact subtype. May be used  if artifact subtype is not standard subtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomSubtype(System::String value);
    /// <summary>
    /// Gets artifact type. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Artifact::ArtifactType get_Type();
    /// <summary>
    /// Gets artifact type. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Type(Artifact::ArtifactType value);
    /// <summary>
    /// Gets artifact subtype. If artifact has non-standard subtype, name of the subtype may be read via CustomSubtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API Artifact::ArtifactSubtype get_Subtype();
    /// <summary>
    /// Gets artifact subtype. If artifact has non-standard subtype, name of the subtype may be read via CustomSubtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Subtype(Artifact::ArtifactSubtype value);
    /// <summary>
    /// Gets collection of artifact internal operators.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Contents();
    /// <summary>
    /// Gets XForm of the artifact (if XForm is used).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> get_Form();
    /// <summary>
    /// Gets rectangle of the artifact.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets artifact position.
    /// If this property is specified, then margins and alignments are ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Position() const;
    /// <summary>
    /// Sets artifact position.
    /// If this property is specified, then margins and alignments are ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Position(System::SharedPtr<Point> value);
    /// <summary>
    /// Right margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RightMargin() const;
    /// <summary>
    /// Right margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RightMargin(double value);
    /// <summary>
    /// Left margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LeftMargin() const;
    /// <summary>
    /// Left margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeftMargin(double value);
    /// <summary>
    /// Top margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_TopMargin() const;
    /// <summary>
    /// Top margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TopMargin(double value);
    /// <summary>
    /// Bottom margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_BottomMargin() const;
    /// <summary>
    /// Bottom margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BottomMargin(double value);
    /// <summary>
    /// Horizontal alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API HorizontalAlignment get_ArtifactHorizontalAlignment() const;
    /// <summary>
    /// Horizontal alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ArtifactHorizontalAlignment(HorizontalAlignment value);
    /// <summary>
    /// Vertical alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API VerticalAlignment get_ArtifactVerticalAlignment() const;
    /// <summary>
    /// Vertical alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ArtifactVerticalAlignment(VerticalAlignment value);
    /// <summary>
    /// Gets artifact rotation angle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Rotation();
    /// <summary>
    /// Sets artifact rotation angle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotation(double value);
    /// <summary>
    /// Gets text of the artifact.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text();
    /// <summary>
    /// Gets text of the artifact.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    /// <summary>
    /// Gets image of the artifact (if presents).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<XImage> get_Image();
    /// <summary>
    /// Gets opacity of the artifact. Possible values are in range 0..1.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Opacity() const;
    /// <summary>
    /// Sets opacity of the artifact. Possible values are in range 0..1.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Opacity(double value);
    /// <summary>
    /// Lines of multiline text artifact.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::String>> get_Lines();
    /// <summary>
    /// Text state for artifact text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Text state for artifact text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// If true Artifact is placed behind page contents. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsBackground() const;
    /// <summary>
    /// If true Artifact is placed behind page contents. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsBackground(bool value);
    
    /// <summary>
    /// Constructor of artifact with specified type and subtype
    /// </summary>
    /// <param name="type">Name of artifact type.</param>
    /// <param name="subType">NAme of artifact subtype.</param>
    ASPOSE_PDF_SHARED_API Artifact(System::String type, System::String subType);
    /// <summary>
    /// Constructor of artifact with specified type and subtype
    /// </summary>
    /// <param name="type">Artifact type.</param>
    /// <param name="subType">Artifact subtype.</param>
    ASPOSE_PDF_SHARED_API Artifact(Artifact::ArtifactType type, Artifact::ArtifactSubtype subType);
    
    /// <summary>
    /// Sets text of the artifact. 
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains artifact text.</param>
    ASPOSE_PDF_SHARED_API void SetText(System::SharedPtr<Facades::FormattedText> formattedText);
    /// <summary>
    /// Set text and text properties of the artifact. 
    /// </summary>
    /// <param name="text">Text string.</param>
    /// <param name="textState">Text state.</param>
    ASPOSE_PDF_SHARED_API void SetTextAndState(System::String text, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Sets what string will be replaced with the page number.
    /// The default value is #.
    /// </summary>
    /// <param name="value">String value that should be replaced with the page number.</param>
    ASPOSE_PDF_SHARED_API void SetPageNumberReplacementString(System::String value);
    /// <summary>
    /// Set text and text properties of the artifact. Allows to specify multiple lines.
    /// </summary>
    /// <param name="text">Array of text string.</param>
    /// <param name="textState">Text properties.</param>
    ASPOSE_PDF_SHARED_API void SetLinesAndState(System::ArrayPtr<System::String> text, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Sets image of the artifact. 
    /// </summary>
    /// <param name="imageStream">Stream which contains image data.</param>
    ASPOSE_PDF_SHARED_API void SetImage(System::SharedPtr<System::IO::Stream> imageStream);
    /// <summary>
    /// Sets image of the artifact. 
    /// </summary>
    /// <param name="imageName">Name of image file.</param>
    ASPOSE_PDF_SHARED_API void SetImage(System::String imageName);
    /// <summary>
    /// Sets PDF page which is placed on the document page as artifact. 
    /// </summary>
    /// <param name="page">Page which is placed as Artifcact. </param>
    ASPOSE_PDF_SHARED_API void SetPdfPage(System::SharedPtr<Page> page);
    /// <summary>
    /// Dispose the artifact.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    /// <summary>
    /// Gets custom value of artifact. 
    /// </summary>
    /// <param name="name">Name of value.</param>
    /// <returns>Value, or null if value does not exists.</returns>
    ASPOSE_PDF_SHARED_API System::String GetValue(System::String name);
    /// <summary>
    /// Sets custom value of artifact.
    /// </summary>
    /// <param name="name">Name of custom value.</param>
    /// <param name="value">Custom value in the artifact.</param>
    ASPOSE_PDF_SHARED_API void SetValue(System::String name, System::String value);
    /// <summary>
    /// Remove custom value from the artifact.
    /// </summary>
    /// <param name="name">Name of custom value to be removed.</param>
    ASPOSE_PDF_SHARED_API void RemoveValue(System::String name);
    /// <summary>
    /// Start delated updates. Use this feature if you need make several changes to the same artifact to improve performance. 
    /// Usually artifact operators are changed anytime when artifact property was changed. This causes changing of page contents
    /// everytime when artifact was changed. To avoid this effect put all artifact updates between StartUpdates/SaveUpdates calls.
    /// This allows to change page contents only once.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void BeginUpdates();
    /// <summary>
    /// Saves all updates in artifact which were made after BeginUpdates() call.
    /// </summary>
    ASPOSE_PDF_SHARED_API void SaveUpdates();
    
protected:

    /// <summary>
    /// Top margin of artifact.
    /// </summary>
    double topMargin;
    /// <summary>
    /// Bottom margin of artifact.
    /// </summary>
    double bottomMargin;
    /// <summary>
    /// Left margin of artifact.
    /// </summary>
    double leftMargin;
    /// <summary>
    /// Right margin of artifact.
    /// </summary>
    double rightMargin;
    /// <summary>
    /// Horizontal alginemt of artifact.
    /// </summary>
    HorizontalAlignment horizontalAlignment;
    /// <summary>
    /// Vertical alignment of artifact.
    /// </summary>
    VerticalAlignment verticalAlignment;
    System::SharedPtr<Engine::Data::IPdfDictionary> engineDict;
    /// <summary>
    /// artifacts collection to which artifact does belongs
    /// </summary>
    System::WeakPtr<ArtifactCollection> owner;
    System::SharedPtr<System::Collections::Generic::List<System::String>> text;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    System::SharedPtr<System::IO::Stream> imageStream;
    double opacity;
    static System::String AsposeTag;
    
    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    System::String get_Tag() const;
    System::String get_Name();
    /// <summary>
    /// Gets the PieceInfo dictionary value.
    /// </summary>
    const System::SharedPtr<Engine::Data::IPdfDictionary>& get_PieceInfo() const;
    /// <summary>
    /// Sets the PieceInfo dictionary value.
    /// </summary>
    void set_PieceInfo(System::SharedPtr<Engine::Data::IPdfDictionary> value);
    System::SharedPtr<ArtifactCollection> get_Owner() const;
    void set_Owner(System::SharedPtr<ArtifactCollection> value);
    System::SharedPtr<Aspose::Pdf::Resources> get_Resources() const;
    void set_Resources(System::SharedPtr<Aspose::Pdf::Resources> value);
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<System::IO::Stream> get_ImageStream();
    
    /// <summary>
    /// This constructor is used when artifact is read from the page. 
    /// ARtifactCollection passes page resources, initial matrix, operators of the artifact ("contents") and properties dictionary.
    /// </summary>
    /// <param name="owner"></param>
    /// <param name="resources"></param>
    /// <param name="matrix"></param>
    /// <param name="_contents"></param>
    /// <param name="_properties"></param>
    Artifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Artifact, CODEPORTING_ARGS(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties));
    /// <summary>
    /// Generates operators of artifact contents.
    /// </summary>
    /// <returns>List of artifact operators.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetContents();
    /// <summary>
    /// Gets operators inside the artifact. 
    /// </summary>
    /// <returns>List of operators in the artifact.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators();
    virtual ASPOSE_PDF_SHARED_API void WriteSpecialInfo(System::SharedPtr<XForm> form);
    virtual ASPOSE_PDF_SHARED_API void ModifyContents(System::SharedPtr<OperatorCollection> contents);
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> CreateInstance();
    /// <summary>
    /// Clones artifact on "low level" i.e. only set of operators without analysis 
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Artifact> LowLevelClone();
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> Clone();
    /// <summary>
    /// Deletes the Form associated with the artifact.
    /// </summary>
    void DeleteForm();
    
    virtual ASPOSE_PDF_SHARED_API ~Artifact();
    
private:

    bool updateRequest;
    bool updatesDelayed;
    System::String type;
    System::String subType;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> contents;
    System::SharedPtr<Point> position;
    double rotation;
    bool ownsImageStream;
    System::SharedPtr<Page> page;
    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    /// <summary>
    /// This value is filled if artifact contents should be handled "as is" i.e for artifacts of undefined/unknown types.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> customContents;
    System::SharedPtr<Artifact::ArtifactContext> context;
    System::SharedPtr<Operators::ConcatenateMatrix> setMatrixOperator;
    System::SharedPtr<Operators::Do> doOperator;
    System::SharedPtr<Operators::SelectFont> tfOperator;
    System::SharedPtr<Operators::SetRGBColor> rgOperator;
    System::SharedPtr<Operators::GS> gsOperator;
    System::String name;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> customData;
    System::String tag;
    static System::String AsposeCustomData;
    System::String _pageNumberReplacementString;
    System::SharedPtr<Engine::Data::IPdfDictionary> pr_PieceInfo;
    
    /// <summary>
    /// This property is for internal usage only. Sometimes AdobeAcrobat sets scale for artifacts. 
    /// This property is for correct update of these artifacts.
    /// </summary>
    double get_Scale();
    
    bool _isBackground;
    
    void CollectOperators();
    System::String AssembleText();
    System::SharedPtr<XImage> SearchImageInForm(System::SharedPtr<XForm> form);
    System::SharedPtr<XImage> GetImage(System::SharedPtr<Aspose::Pdf::Resources> res, System::String name);
    System::SharedPtr<Aspose::Pdf::Text::TextState> TranslateFormattedTextToTextState(System::SharedPtr<Facades::FormattedText> formattedText);
    /// <summary>
    /// Returns artifact matrix.
    /// </summary>
    /// <param name="w"></param>
    /// <param name="h"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Matrix> GetMatrix();
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRect();
    System::SharedPtr<Point> GetPosition();
    System::String SubstPageNumber(System::String text);
    /// <summary>
    /// Generates operators to show artifact text and adds required font to the page resources.
    /// </summary>
    /// <returns></returns>
    System::String ShowText();
    /// <summary>
    /// Generates operators to show image of the artifact and adds image as resource. 
    /// </summary>
    /// <returns></returns>
    System::String ShowImage();
    /// <summary>
    /// Generates operators to show PDF page as artifact and adds PDF page into page resources as XForm.
    /// </summary>
    /// <returns></returns>
    System::String ShowPage();
    /// <summary>
    /// Generates operator to set artifact opacity and adds required graphic state object to resources.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> SetOpacity();
    /// <summary>
    /// Initializes custom data in in the artifact dictionary.
    /// </summary>
    void InitializeCustomData();
    void Update();
    
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Artifact::ArtifactType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Artifact::ArtifactType, const char_t*>, 5>& values();
};

template<>
struct EnumMetaInfo<Aspose::Pdf::Artifact::ArtifactSubtype>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Artifact::ArtifactSubtype, const char_t*>, 5>& values();
};



