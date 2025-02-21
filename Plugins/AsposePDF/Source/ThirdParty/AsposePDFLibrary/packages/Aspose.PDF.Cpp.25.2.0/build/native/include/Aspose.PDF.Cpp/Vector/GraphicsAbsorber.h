#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/idisposable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Presentation
{
class Presenter;
} // namespace Presentation
} // namespace Engine
class LayerProcessor;
class Matrix;
class Operator;
class OperatorCollection;
class Page;
class Resources;
namespace Vector
{
class GraphicElementCollection;
class GraphicState;
class SubPath;
class XFormPlacement;
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
template <typename, typename> class Dictionary;
template <typename> class List;
template <typename> class Stack;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Vector {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Vector</b> is a root namespace for graphics operations.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Represents an absorber object of graphics elements.
/// Performs graphics search and provides access to search results via <see cref="GraphicsAbsorber::Elements"></see> collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GraphicsAbsorber : public System::IDisposable
{
    typedef GraphicsAbsorber ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Presentation::Presenter;
    friend class Aspose::Pdf::LayerProcessor;
    
public:

    /// <summary>
    /// Gets collection of search occurrences that are presented with <see cref="GraphicElement"></see> objects.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<GraphicElementCollection> get_Elements() const;
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    /// <param name="page">PDF document page object.</param>
    ASPOSE_PDF_SHARED_API void Visit(System::SharedPtr<Page> page);
    /// <summary> 
    /// Suppresses update for <see cref="Page::Contents"></see> and all <see cref="XForm::Contents"></see> 
    /// Was made for performance increase, see also <seealso cref="OperatorCollection::SuppressUpdate"></seealso>.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void SuppressUpdate();
    /// <summary> 
    /// Resume update for <see cref="Page::Contents"></see> and all <see cref="XForm::Contents"></see> 
    /// Was made for performance increase, see also <seealso cref="OperatorCollection::ResumeUpdate"></seealso>.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ResumeUpdate();
    /// <summary>
    /// Releases all resources used by the <see cref="GraphicsAbsorber"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
    ASPOSE_PDF_SHARED_API GraphicsAbsorber();
    
protected:

    System::SharedPtr<Matrix> CTM;
    
    /// <summary>
    /// Performs search on the specified XForm.
    /// </summary>
    /// <param name="xForm">The XForm to processing.</param>
    /// <param name="ctm">The current transformation matrix.</param>
    /// <param name="page">The current page.</param>
    void Visit(System::SharedPtr<XForm> xForm, System::SharedPtr<Matrix> ctm, System::SharedPtr<Page> page);
    static bool IsPathPaintingOperator(System::String commandName);
    /// <summary>
    /// Releases all resources used by the <see cref="GraphicsAbsorber"></see> class.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void Dispose(bool disposing);
    
    virtual ASPOSE_PDF_SHARED_API ~GraphicsAbsorber();
    
private:

    bool _saveFullOperators;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<XFormPlacement>>> _processedXForms;
    System::SharedPtr<GraphicElementCollection> _elements;
    System::SharedPtr<SubPath> _currentSubPath;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<OperatorCollection>>> _allProcessedContents;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<GraphicState>>> _graphicStates;
    bool _disposed;
    
    void CreateMatrix(System::SharedPtr<Page> page);
    void InitializeCollections();
    void ProcessOperators(System::SharedPtr<GraphicState> currentGS, System::SharedPtr<OperatorCollection> currentcontent, System::SharedPtr<Resources> currentResources, System::SharedPtr<Page> page, System::SharedPtr<XFormPlacement> currentPlacement = nullptr);
    void ProccesXForm(System::SharedPtr<GraphicState> currentGS, System::SharedPtr<Operator> op, System::SharedPtr<Resources> currentResources, System::SharedPtr<OperatorCollection> currentContent, System::SharedPtr<XFormPlacement> currentPlacement, System::SharedPtr<Page> page);
    void Add(System::SharedPtr<Operator> op, System::SharedPtr<XFormPlacement> placement, bool needToAdd);
    
};

} // namespace Vector
} // namespace Pdf
} // namespace Aspose


