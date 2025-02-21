#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>
#include <system/collections/ienumerator.h>

#include "Aspose.PDF.Cpp/BaseOperatorCollection.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DAnnotation;
} // namespace Annotations
class ApsToPdfConverter;
class Artifact;
class ArtifactCollection;
class ContentsAppender;
class Document;
namespace Engine
{
namespace CommonData
{
namespace Graphics
{
namespace Patterns
{
class TilingPattern;
} // namespace Patterns
} // namespace Graphics
namespace PageContent
{
namespace Operators
{
namespace Commands
{
class CommandsList;
} // namespace Commands
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentCIDType2FontContentUpdater;
class FontUtilities;
class PageAnnotationProcessor;
} // namespace Utilities
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDataStream;
class IPdfPrimitive;
class ITrailerable;
namespace Types
{
class IPdfStreamAccessor;
} // namespace Types
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
namespace ConvertHelpers
{
class LowLevelFontSubstitutor;
} // namespace ConvertHelpers
namespace PdfA
{
class PdfAOperatorValidator;
} // namespace PdfA
class PdfA1ConvertStrategy;
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfXConvertStrategy;
class SearchablePdfConvertStrategy;
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
class ImagePlacementAbsorber;
namespace Interchange
{
class ContentSequencePage;
class ContentSequenceXObject;
} // namespace Interchange
class IOperatorContainer;
class IOperatorSelector;
class LayerProcessor;
class LightweightOperatorCollection;
namespace LogicalStructure
{
class MCRElement;
class StructureElement;
} // namespace LogicalStructure
class Operator;
class Page;
class PdfToApsConverter;
namespace PdfToMarkdown
{
class HeuristicHeaderDetector;
} // namespace PdfToMarkdown
namespace Structure
{
class FigureElement;
class TextElement;
} // namespace Structure
namespace Tagged
{
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace Collections
{
class OperatorCollectionTests;
} // namespace Collections
class RegressionTests_v10_8;
class RegressionTests_v17_12;
class RegressionTests_v17_7;
class RegressionTests_v19_5;
class RegressionTests_v22_05;
class RegressionTests_v22_12;
class RegressionTests_v23_07;
class RegressionTests_v23_08;
class RegressionTests_v23_12;
class RegressionTests_v24_07;
class RegressionTests_v24_12;
class RegressionTests_v6_7;
class RegressionTests_v6_9;
class RegressionTests_v7_2;
namespace Text
{
class TextBuilderTests;
} // namespace Text
} // namespace Tests
namespace Vector
{
class GraphicElement;
class GraphicsAbsorber;
class PositionSetter;
} // namespace Vector
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class HashSet;
template <typename> class ICollection;
template <typename> class IEnumerable;
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents collection of operators
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OperatorCollection : public Aspose::Pdf::BaseOperatorCollection, public System::IDisposable
{
    typedef OperatorCollection ThisType;
    typedef Aspose::Pdf::BaseOperatorCollection BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::PageAnnotationProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Interchange::ContentSequencePage;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::PdfToApsConverter;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::Graphics::Patterns::TilingPattern;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::LightweightOperatorCollection;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Vector::GraphicElement;
    friend class Aspose::Pdf::Vector::GraphicsAbsorber;
    friend class Aspose::Pdf::Vector::PositionSetter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA::PdfAOperatorValidator;
    friend class Aspose::Pdf::PdfToMarkdown::HeuristicHeaderDetector;
    friend class Aspose::Pdf::LayerProcessor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_05;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_08;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    
private:

    enum class UpdateMode
    {
        Delete,
        Insert,
        Add,
        Replace
    };
    
    
private:

    class OperatorsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Operator>>
    {
        typedef OperatorsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Operator>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Operator>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Operator>& get_Current() const override;
        
        OperatorsEnumerator(System::SharedPtr<OperatorCollection> operators);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        static const int32_t DefaultCursor;
        int32_t cursor;
        System::SharedPtr<OperatorCollection> _operators;
        
        bool MoveNextImplementation();
        System::SharedPtr<Operator>* GetCurrentElementPointer();
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Gets count of operators in the collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Indicates wheather collection is limited to fast text extraction
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsFastTextExtractionMode() const override;
    
    /// <summary>
    /// Copies operators into operators list.
    /// </summary>
    /// <param name="array">Array with operators which must to be copied. This array must be Object[] or Operator[].</param>
    /// <param name="index">Starting index from which operators will be copied</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Operator>> array, int32_t index) override;
    /// <summary>
    /// Returns enumerator for collection
    /// </summary>
    /// <returns>Collection enumerator</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Operator>>> GetEnumerator() override;
    /// <summary>
    /// Accepts IOperatorSelector visitor object to process operators.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Adds new operator into collection.
    /// </summary>
    /// <param name="op">Operator which must be added</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<Operator>& op) override;
    /// <summary>
    /// Deletes operator from collection.
    /// </summary>
    /// <param name="index">Index of operator which must be deleted. Operators numbering starts from 1.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Delete(int32_t index);
    /// <summary>
    /// Inserts operator into collection.
    /// </summary>
    /// <param name="index">Index where new operator must be added</param>
    /// <param name="op">Operator which will be insterted</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Insert(int32_t index, System::SharedPtr<Operator> op) override;
    /// <summary>
    /// Replace operators in collection with other operators.
    /// </summary>
    /// <param name="operators">Operators list which will replace operators currently contained in the collection. Eash operator from the list must have correct index in range [1..N] where N is count of operators in the collection</param>
    ASPOSE_PDF_SHARED_API void Replace(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Add operators at the end of the contents operators.
    /// </summary>
    /// <param name="ops">Array of operators to be added. Each operator can have any index (by default -1) because they come to the end of the contents operators i.e. indices are assigned automatically.</param>
    /// <example>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<Operator>>& ops);
    /// <summary>
    /// Insert operators at the the given position.
    /// </summary>
    /// <param name="at">Index from which operators are being started to insert.</param>
    /// <param name="ops">Array of operators to be inserted. Each operator can have any index (by default -1) because their indices adjusted automatically starting from <paramref name="at"></paramref>.</param>
    /// <example>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void Insert(int32_t at, System::ArrayPtr<System::SharedPtr<Operator>> ops);
    
    /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Operator> idx_get(int32_t index) override;
    /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <param name="value">Operator from requested index</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<Operator> value) override;
    
    /// <summary>
    /// Deletes operators from collection.
    /// </summary>
    /// <param name="ops">Array of operators to delete</param>
    /// <example>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void Delete(System::ArrayPtr<System::SharedPtr<Operator>> ops);
    /// <summary>
    /// Deletes operators from collection.
    /// </summary>
    /// <param name="list">The list of operators to delete</param>
    /// <example>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void Delete(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> list);
    /// <summary>
    /// Insert operators at the the given position.
    /// </summary>
    /// <param name="at">Index from which operators are being started to insert.</param>
    /// <param name="ops">Array of operators to be inserted.</param>
    /// <example>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API void Insert(int32_t at, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> ops);
    /// <summary>
    /// Removes all operators from list.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Adds to collection all operators from other collection.
    /// </summary>
    /// <param name="ops">collection whitch contains operators which will be added.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>>& ops);
    /// <summary> 
    /// Suppresses update contents data.
    /// The contents stream is not updated until ResumeUpdate is called.
    /// </summary>
    ASPOSE_PDF_SHARED_API void SuppressUpdate() override;
    /// <summary>
    /// Resumes document update.
    /// Updates contents stream in case there are any pending changes.
    /// Marks all operators as "changed" if invalidate parameter is true.
    /// </summary>
    /// <param name="updateAll">If true, all operators in the collection marked as updated.</param>
    ASPOSE_PDF_SHARED_API void ResumeUpdate(bool updateAll);
    /// <summary>
    /// Resumes document update.
    /// Updates contents stream in case there are any pending changes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ResumeUpdate() override;
    /// <summary>
    /// Cancels last update.
    /// This method may be called when the change should not raise contents update.
    /// </summary>
    ASPOSE_PDF_SHARED_API void CancelUpdate() override;
    /// <summary>
    /// Remove operator from the collection.
    /// </summary>
    /// <param name="op">Operator to be removed.</param>
    /// <returns>True if operator was found and removed. False if operator did not belong to the collection.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(const System::SharedPtr<Operator>& op) override;
    /// <summary>
    /// Returns true if the collection contains given operator.
    /// </summary>
    /// <param name="op">Operator value.</param>
    /// <returns>True - if operator found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Contains(const System::SharedPtr<Operator>& op) const override;
    /// <summary>Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.</summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    bool RequiresReindex;
    
    bool get_IsReadOnlyMode() const;
    void set_IsReadOnlyMode(bool value);
    System::SharedPtr<Engine::Data::IPdfPrimitive> get_Contents() const;
    System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::CommandsList> get_CommandList() const;
    
    System::SharedPtr<IOperatorContainer> Container;
    
    bool get_IsCommandsParsed();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Commands() const;
    void set_Commands(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> value);
    
    /// <summary>
    /// PDF primitive which contains operators list.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfPrimitive> contents;
    
    /// <summary>
    /// Indicates wheather collection is limited to fast text extraction
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsFastTextExtractionMode(bool value) override;
    /// <summary>
    /// Gets bracketed status of operator sequence i.e. is this operators 
    /// are inside of q - Q blocks 
    /// </summary>
    bool get_IsBracketed();
    bool get_IsUpdateSuppressed();
    ASPOSE_PDF_SHARED_API System::SharedPtr<Engine::Data::ITrailerable> get_Trailerable() override;
    
    void ParseContents() const;
    void SetData(System::ArrayPtr<uint8_t> data);
    void SetData(System::SharedPtr<Engine::Data::IPdfPrimitive> data);
    System::ArrayPtr<uint8_t> ReadStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> src);
    void SetStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> src);
    void SetStreamData(System::SharedPtr<Engine::Data::IPdfArray> src);
    void SetArrayData(System::SharedPtr<Engine::Data::IPdfArray> src);
    /// <summary>
    /// Update object stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API void UpdateData() override;
    /// <summary>
    /// Update indexes of operators. This required when operators were inserted/deleted. 
    /// If we dont reindex, incorect indexes may cause fault when we're trying to delete operator by its index. 
    /// Example: PDFNEWNET-33455.
    /// </summary>
    void Reindex();
    
    /// <summary>
    /// Constructor of OperatorCollection. Constructs operators from primitive contains operators list.
    /// </summary>
    /// <param name="contents">Primitive that contains operators.</param>
    /// <param name="container">Owner of this collection.</param>
    OperatorCollection(System::SharedPtr<Engine::Data::IPdfPrimitive> contents, System::SharedPtr<IOperatorContainer> container = nullptr);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OperatorCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfPrimitive> contents, System::SharedPtr<IOperatorContainer> container = nullptr));
    
    /// <summary>
    /// Constructor of OperatorCollection. Constructs operators from primitive contains operators list.
    /// </summary>
    /// <param name="trailerable"></param>
    /// <param name="contents"></param>
    OperatorCollection(System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OperatorCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Engine::Data::IPdfPrimitive> contents));
    /// <summary>
    /// Unregisters events
    /// </summary>
    void UnRegisterEvents();
    /// <summary>
    /// internal unrestricted version of Delete(index)
    /// </summary>
    ASPOSE_PDF_SHARED_API void DeleteUnrestricted(int32_t index) override;
    /// <summary>
    /// internal unrestricted version of indexer
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Operator> GetUnrestricted(int32_t index) override;
    /// <summary>
    /// Returns opetator list.
    /// </summary>
    /// <returns>opetator list.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ToList() override;
    void Resync();
    void FreeMem();
    void cpp_set_container_weak();
    System::SharedPtr<IOperatorContainer> cpp_get_container();
    
    virtual ASPOSE_PDF_SHARED_API ~OperatorCollection();
    
private:

    bool isReadOnlyMode;
    mutable System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> commands;
    System::ArrayPtr<uint8_t> newData;
    int32_t isBracketed;
    int32_t updateSuppressed;
    int32_t suspendedUpdateRequests;
    System::SharedPtr<System::Object> updateSync;
    System::SharedPtr<System::Object> sync;
    mutable System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::CommandsList> commandsList;
    System::WeakPtr<Engine::Data::ITrailerable> trailerable;
    bool pr_IsFastTextExtractionMode;
    System::SharedPtr<System::Collections::Generic::HashSet<System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor>>> events;
    
    System::ArrayPtr<uint8_t> GetData();
    void Insert(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Delete_Internal(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Change(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Operator>>> operators);
    void Append(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Operator>>> operators);
    void UpdateProgram(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators, OperatorCollection::UpdateMode mode);
    /// <summary>
    /// Special version for append operators to avoid extra coping 
    /// </summary>
    /// <param name="operators"></param>
    void UpdateProgram(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Operator>>> operators);
    void RegisterEvents(System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    void RegisterAccessorEvent(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    void AccessorOnDataChanged();
    void set(int32_t index, System::SharedPtr<Operator> value);
    /// <summary>
    /// Returns operator by its index.
    /// </summary>
    /// <param name="index">Index of requested operator. Operators numbering starts from 1.</param>
    /// <returns></returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    System::SharedPtr<Operator> get(int32_t index);
    System::String ToString_NonConst();
    void AddList(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Operator>>> ops);
    bool get_IsBracketed(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Operator>>> operators);
    void Dispose(bool disposing);
    
};

} // namespace Pdf
} // namespace Aspose


