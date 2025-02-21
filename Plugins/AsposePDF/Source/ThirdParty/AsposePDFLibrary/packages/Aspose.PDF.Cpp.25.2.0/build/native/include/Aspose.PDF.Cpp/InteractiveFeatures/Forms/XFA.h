#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class WidgetAnnotation;
class XfdfWriter;
} // namespace Annotations
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class Document;
namespace Engine
{
namespace Interactive
{
class XDP;
} // namespace Interactive
} // namespace Engine
namespace Facades
{
class Form;
} // namespace Facades
namespace Forms
{
class Field;
class Form;
class XfaField;
} // namespace Forms
class Page;
class Point;
namespace Tests
{
class RegressionTests_v6_8;
class RegressionTests_v7_1;
class RegressionTests_v7_4;
class RegressionTests_v8_6;
} // namespace Tests
class XfaMerge;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlDocument;
class XmlNamespaceManager;
class XmlNode;
class XmlNodeList;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Represents XML form regarding XML Forms Architecture (XFA).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS XFA final : public System::Object
{
    typedef XFA ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Forms::XfaField;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Annotations::XfdfWriter;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    
protected:

    /// <summary>
    /// Class for parsing and recalculation positions, sizes, coordinates in different units (mm, in, pt etc)
    /// </summary>
    class PositionValue : public System::Object
    {
        typedef PositionValue ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets value recalculated to pixels. 
        /// </summary>
        double get_Value();
        
        PositionValue(System::SharedPtr<Page> page, System::String s);
        
    private:
    
        double value;
        System::String meausreUnit;
        System::SharedPtr<Page> _page;
        
    };
    
    /// <summary>
    /// Describes field caption
    /// </summary>
    class FieldCaption : public System::Object
    {
        typedef FieldCaption ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets reserved space for  the caption.
        /// </summary>
        double get_Margin() const;
        System::String get_Text() const;
        
        FieldCaption(System::SharedPtr<Page> page, System::SharedPtr<System::Xml::XmlNode> fieldTemplate);
        
    private:
    
        double _reserved;
        System::String _text;
        
    };
    
    
public:

    /// <summary>
    /// XFA Template component of an XFA form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNode> get_Template();
    /// <summary>
    /// XFA Form Component of an XFA form. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNode> get_Form();
    /// <summary>
    /// XFA Datasets component of an XFA form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNode> get_Datasets();
    /// <summary>
    /// XFA Config component of an XFA form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNode> get_Config();
    /// <summary>
    /// XML Data Package (all XFA form components within a surrounding XML container).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlDocument> get_XDP();
    /// <summary>
    /// List of field names in the form template.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_FieldNames();
    /// <summary>
    /// Gets the namespace for the XFA form. The following namepsaces are defined: "data" for form data and "tpl" for form template. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    /// <summary>
    /// Gets of sets data node value according <paramref name="path"></paramref>.
    /// </summary>
    /// <param name="path">
    /// Data node path, e.g. form1[0].Subform1[0].Subform2[0].Subform3[0].TextField[0]. 
    /// Be sure to include indices even if data contains only single occurences of each nodes, 
    /// i.e. write node1[0].node2[0]... instead of node1.node2...
    /// </param>
    /// <returns>Data node value.</returns>
    ASPOSE_PDF_SHARED_API System::String idx_get(System::String path);
    /// <summary>
    /// Gets of sets data node value according <paramref name="path"></paramref>.
    /// </summary>
    /// <param name="path">
    /// Data node path, e.g. form1[0].Subform1[0].Subform2[0].Subform3[0].TextField[0]. 
    /// Be sure to include indices even if data contains only single occurences of each nodes, 
    /// i.e. write node1[0].node2[0]... instead of node1.node2...
    /// </param>
    /// <param name="value">Data node value.</param>
    ASPOSE_PDF_SHARED_API void idx_set(System::String path, System::String value);
    
    /// <summary>
    /// Returns XML node of XFA field tempalte. 
    /// </summary>
    /// <param name="fieldName">Path of the field which template must be found.</param>
    /// <returns>XL node with field template.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    /// <summary>
    /// Returns list of all field templates on XFA form.
    /// </summary>
    /// <returns>List of field templates.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Xml::XmlNodeList> GetFieldTemplates();
    /// <summary>
    /// Sets image for XFA field. 
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <param name="image">Stream which contains image.</param>
    ASPOSE_PDF_SHARED_API void SetFieldImage(System::String fieldName, System::SharedPtr<System::IO::Stream> image);
    
protected:

    /// <summary>
    /// Initializes new instance of the <see cref="XFA"></see> class.
    /// </summary>
    XFA(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XFA, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    bool IsEmpty();
    /// <summary>
    /// Returns namespace manager with namespaces used for template and data.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetNamespaceManager();
    /// <summary>
    /// Flatten field of XFA form.
    /// </summary>
    /// <param name="field">XFA form field node.</param>
    static void FlattenXfaField(System::SharedPtr<System::Xml::XmlNode> field);
    static void HideXfaField(System::SharedPtr<System::Xml::XmlNode> field);
    /// <summary>
    /// Returns data node for XFA field.
    /// </summary>
    /// <param name="path">Field path</param>
    /// <returns>Field node.</returns>
    System::SharedPtr<System::Xml::XmlNode> GetFieldNode(System::String path);
    /// <summary>
    /// Start cached updates mode. All changes made to XFA will be cached and saved into document structure at EndCachedUpdates call. 
    /// This allows to improve preformacne by avoiding redudant operations on saving XML packets into document when a lot of changes to 
    /// XFA are made.
    /// </summary>
    void BeginCachedUpdates();
    /// <summary>
    /// Ends cahced updates and saves all data into document structure.
    /// </summary>
    void EndCachedUpdates();
    /// <summary>
    /// Returns page area position 
    /// </summary>
    /// <param name="page">PDF page (to get UserUnits value)</param>
    /// <returns></returns>
    System::SharedPtr<Point> GetPageContentArea(System::SharedPtr<Page> page);
    System::String GetFieldPath(System::SharedPtr<System::Xml::XmlNode> node);
    System::SharedPtr<System::Xml::XmlNode> GetForm(System::String path, bool allowCreate);
    /// <summary>
    /// Returns node by its path.
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    System::SharedPtr<System::Xml::XmlNode> GetNodeByPath(System::String path);
    /// <summary>
    /// Returns string value by data reference string.
    /// </summary>
    /// <param name="dataRef">Data reference string.</param>
    /// <returns>Value</returns>
    System::String GetValueByDataRef(System::String dataRef);
    /// <summary>
    /// Sets value by reference string. 
    /// </summary>
    /// <param name="dataRef">Data reference string</param>
    /// <param name="value">Value</param>
    void SetValueByDataRef(System::String dataRef, System::String value);
    bool HasNode(System::String path);
    System::SharedPtr<XfaField> GetXfaField(System::String path);
    System::SharedPtr<System::Xml::XmlNodeList> GetBindings();
    
    virtual ASPOSE_PDF_SHARED_API ~XFA();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Interactive::XDP> _xdp;
    System::WeakPtr<Document> _document;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> _fieldPath;
    System::SharedPtr<System::Xml::XmlNamespaceManager> _nsmgr;
    
    /// <summary>
    /// Fill _fieldPath hashtable which reflects relation between reference path and field.
    /// This relation is obtained from XFA template, bind tags.
    /// </summary>
    /// <param name="fields">Collection of fields.</param>
    /// <param name="root">Name of root field.</param>
    /// <param name="fieldPathTable">Hash of field paths.</param>
    void BuildFieldPath(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String root, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fieldPathTable);
    /// <summary>
    /// Gets table of fields by field path.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFieldPath();
    System::String ExtractName(System::String name);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> GetFormFieldsByShortName(System::String root, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String shortName);
    System::SharedPtr<Field> FindClosestField(System::String path);
    System::SharedPtr<Field> FindClosestField(System::ArrayPtr<System::String> path, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Field>>> fields);
    int32_t Coincidence(System::ArrayPtr<System::String> path1, System::ArrayPtr<System::String> path2);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


