#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if NETCORE && (NETSTANDARD2_1 || NET5_0 || NET6_0 || NET7_0 || NET8_0)

// C# INACTIVE CODE:
// using KeyValuePair = Aspose.Pdf.Engine.CommonData.KeyValuePair;

// C# preprocessor directive: #endif


#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace CommonData
{
class ITreeNode;
} // namespace CommonData
namespace Data
{
class IPdfDictionary;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents collection of JavaScript.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS JavaScriptCollection : public System::Object
{
    typedef JavaScriptCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// List of keys in JavaScript collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::String>> get_Keys();
    
    /// <summary>
    /// Gets JavaScript from collection by its key.
    /// </summary>
    /// <param name="key">Key value.</param>
    /// <returns>Javascript collection.</returns>
    ASPOSE_PDF_SHARED_API System::String idx_get(System::String key);
    /// <summary>
    /// Sets JavaScript from collection by its key.
    /// </summary>
    /// <param name="key">Key value.</param>
    /// <param name="value">Javascript collection.</param>
    ASPOSE_PDF_SHARED_API void idx_set(System::String key, System::String value);
    
    /// <summary>
    /// Removes JavaScript by its name.
    /// </summary>
    /// <param name="key">Key value.</param>
    /// <returns>True - if javascript removed; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool Remove(System::String key);
    
protected:

    JavaScriptCollection(System::SharedPtr<Engine::Data::IPdfDictionary> root);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(JavaScriptCollection, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> root));
    
private:

    System::SharedPtr<Engine::CommonData::ITreeNode> _javaScript;
    System::SharedPtr<Engine::Data::IPdfDictionary> _root;
    
    System::SharedPtr<Engine::CommonData::ITreeNode> FindLeaf(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key);
    bool RemoveValue(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key);
    System::SharedPtr<Engine::Data::IPdfPrimitive> FindValue(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key);
    void InsertNode(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key, System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    void EnumKeys(System::SharedPtr<Engine::CommonData::ITreeNode> node, System::SharedPtr<System::Collections::Generic::List<System::String>> keys);
    void CreateJavascriptEntry();
    
};

} // namespace Pdf
} // namespace Aspose


