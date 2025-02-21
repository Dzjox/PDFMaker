#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace Structure
{
class Element;
class ElementFactory;
class FigureElement;
class RootElement;
class StructElement;
class TextElement;
} // namespace Structure
namespace Tests
{
class RegressionTests_v23_10;
class RegressionTests_v24_02;
class RegressionTests_v24_06;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Structure {

/// <summary>
/// Collection of base logical structure elements.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ElementCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Structure::Element>>
{
    typedef ElementCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Structure::Element>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Structure::Element;
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<Element>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Count of elements.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Remove item from collection.
    /// </summary>
    /// <param name="item">Item to remove.</param>
    /// <returns>True if element was removed.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(System::SharedPtr<Element> item);
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>Enumerator of elements.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Element>>> GetEnumerator() override;
    
    /// <summary>
    /// Gets Element by index.
    /// </summary>
    /// <param name="index">Index of element.</param>
    /// <returns>Retreived element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Element> idx_get(int32_t index);
    
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_PDF_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_PDF_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_PDF_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_PDF_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_PDF_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_PDF_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_PDF_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    
protected:

    ElementCollection(System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ElementCollection, CODEPORTING_ARGS(System::SharedPtr<Element> parent));
    
    virtual ASPOSE_PDF_SHARED_API ~ElementCollection();
    
private:

    System::WeakPtr<Element> _parent;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> _elements;
    
    static void RemoveFromParent(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> parent, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive);
    void Init();
    
};


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Structure</b> namespace provides classes which help to work with a logical structure of a document which presents 
/// the organization of the document into chapters and sections or the identification of special elements such as figures, tables, and footnotes.
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
/// Class representing base element of logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Element : public System::Object
{
    typedef Element ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Structure::ElementCollection;
    friend class Aspose::Pdf::Structure::StructElement;
    friend class Aspose::Pdf::Structure::RootElement;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    
public:

    /// <summary>
    /// Gets child elements collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ElementCollection> get_Children();
    /// <summary>
    /// (Optional; PDF 1.4) A language specifying the natural language for all text
    /// in the structure element except where overridden by language specifications for nested structure
    /// elements or marked content.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_Lang();
    /// <summary>
    /// (Optional; PDF 1.4) A language specifying the natural language for all text
    /// in the structure element except where overridden by language specifications for nested structure
    /// elements or marked content.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Lang(System::String value);
    /// <summary>
    /// (Optional; PDF 1.4) Text that is an exact replacement for the structure element and its children.
    /// This replacement text (which should apply to as small a piece of content as possible)
    /// is useful when extracting the document's contents in support of accessibility to users
    /// with disabilities or for other purposes.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_ActualText();
    /// <summary>
    /// (Optional; PDF 1.4) Text that is an exact replacement for the structure element and its children.
    /// This replacement text (which should apply to as small a piece of content as possible)
    /// is useful when extracting the document's contents in support of accessibility to users
    /// with disabilities or for other purposes.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_ActualText(System::String value);
    /// <summary>
    /// (Optional) An alternate description of the structure element and its children in
    /// human-readableform, which is useful when extracting the document's contents in support
    /// of accessibility to users with disabilities or for other purposes.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_Alt();
    /// <summary>
    /// (Optional) An alternate description of the structure element and its children in
    /// human-readableform, which is useful when extracting the document's contents in support
    /// of accessibility to users with disabilities or for other purposes.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Alt(System::String value);
    /// <summary>
    /// (Optional; PDF 1.5) The expanded form of an abbreviation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_E();
    /// <summary>
    /// (Optional; PDF 1.5) The expanded form of an abbreviation.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_E(System::String value);
    
    /// <summary>
    /// Remove element.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Remove();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> PdfObject;
    
    System::String get_Type();
    void set_Type(System::String value);
    System::String get_StructureType();
    System::SharedPtr<Element> get_Parent() const;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> get_Attributes();
    
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="engineDict">Engine dictionary.</param>
    /// <param name="parent">Parent element.</param>
    Element(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent);
    Element(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent);
    
    virtual ASPOSE_PDF_SHARED_API ~Element();
    
private:

    System::WeakPtr<Element> _parent;
    System::SharedPtr<ElementCollection> _elements;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> _attrib;
    
    System::String GetAttributeValueString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive);
    
};

//TODO: remove next classes to separate files.
/// <summary>
/// General structure element.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructElement : public Aspose::Pdf::Structure::Element
{
    typedef StructElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Structure::ElementFactory;
    
protected:

    StructElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent));
    
    StructElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent));
    
};

/// <summary>
/// Root structure element.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RootElement : public Aspose::Pdf::Structure::Element
{
    typedef RootElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Structure::ElementFactory;
    
protected:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> get_RoleMap();
    
    RootElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RootElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict, System::SharedPtr<Element> parent));
    
    RootElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RootElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Element> parent));
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> _roleMap;
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose


