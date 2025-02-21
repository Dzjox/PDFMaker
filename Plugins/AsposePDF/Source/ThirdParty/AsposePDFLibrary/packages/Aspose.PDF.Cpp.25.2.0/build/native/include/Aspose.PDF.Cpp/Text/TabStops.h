#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icloneable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Text
{
enum class TabAlignmentType;
enum class TabLeaderType;
class TabStop;
class TextFragment;
class TextState;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Xml
{
class XmlReader;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a collection of <see cref="TabStop"></see> objects.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TabStops : public System::ICloneable
{
    typedef TabStops ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Text::TextState;
    
public:

    /// <summary>
    /// Gets value indicating that this <see cref="TabStops"></see> instance is already attached to <see cref="TextFragment"></see> and became readonly.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsReadOnly() const;
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"></see> class with specified position and 
    /// add it to the TabStops collection.
    /// </summary>
    /// <param name="position">The position of the tab stop.</param>
    /// <returns>The new <see cref="TabStop"></see> object.</returns>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStops"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API TabStops();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"></see> class and add it to the 
    /// TabStops collection.
    /// </summary>
    /// <returns>The new <see cref="TabStop"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TabStop> Add();
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"></see> class with specified position and 
    /// add it to the TabStops collection.
    /// </summary>
    /// <param name="position">The position of the tab stop.</param>
    /// <returns>The new <see cref="TabStop"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TabStop> Add(float position);
    /// <summary>
    /// Add instance of the <see cref="TabStop"></see> class to the TabStops collection.
    /// </summary>
    /// <param name="tabStop">The <see cref="TabStop"></see> object.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<TabStop> tabStop);
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"></see> class with specified position and leader 
    /// type and add it to the TabStops collection.
    /// </summary>
    /// <param name="position">The position of the tab stop.</param>
    /// <param name="leaderType">The leader type of the tab stop.</param>
    /// <returns>The new <see cref="TabStop"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TabStop> Add(float position, TabLeaderType leaderType);
    /// <summary>
    /// Clones a new <see cref="TabStops"></see> objects.
    /// </summary>
    /// <returns>The new <see cref="TabStops"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
    /// <summary>
    /// Gets a <see cref="TabStop"></see> object from the collection according to TabStop index.
    /// </summary>
    /// <param name="index">Zero-based index of element in <see cref="TabStops"></see> collection.</param>
    /// <returns><see cref="TabStop"></see> object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<TabStop> idx_get(int32_t index);
    /// <summary>
    /// Sets a <see cref="TabStop"></see> object from the collection according to TabStop index.
    /// </summary>
    /// <param name="index">Zero-based index of element in <see cref="TabStops"></see> collection.</param>
    /// <param name="value"><see cref="TabStop"></see> object.</param>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<TabStop> value);
    
protected:

    /// <summary>
    /// Gets position from which distribution of tab stops will be continued. 
    /// </summary>
    double get_lastPosition() const;
    /// <summary>
    /// Gets position from which distribution of tab stops will be continued. 
    /// </summary>
    void set_lastPosition(double value);
    /// <summary>
    /// Gets shift from which distribution of tab stops will be continued. 
    /// </summary>
    double get_lastShift() const;
    /// <summary>
    /// Gets shift from which distribution of tab stops will be continued. 
    /// </summary>
    void set_lastShift(double value);
    /// <summary>
    /// Gets current tab alignment.
    /// </summary>
    TabAlignmentType get_currentAlignment() const;
    /// <summary>
    /// Gets current tab alignment.
    /// </summary>
    void set_currentAlignment(TabAlignmentType value);
    /// <summary>
    /// Gets current tab leader type.
    /// </summary>
    TabLeaderType get_currentLeaderType() const;
    /// <summary>
    /// Gets current tab leader type.
    /// </summary>
    void set_currentLeaderType(TabLeaderType value);
    /// <summary>
    /// Contains pre-calculated tab leader length. It used by TextFragment. It should not use it if you don't sure.
    /// </summary>
    double get_currentLeaderLength() const;
    /// <summary>
    /// Contains pre-calculated tab leader length. It used by TextFragment. It should not use it if you don't sure.
    /// </summary>
    void set_currentLeaderLength(double value);
    /// <summary>
    /// Gets value indicating that this <see cref="TabStops"></see> instance is already attached to <see cref="TextFragment"></see> and became readonly.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsReadOnly(bool value);
    
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TabStop>>> _list;
    bool _attached;
    double pr_lastPosition;
    double pr_lastShift;
    TabAlignmentType pr_currentAlignment;
    TabLeaderType pr_currentLeaderType;
    double pr_currentLeaderLength;
    
    /// <summary>
    /// Removes a <see cref="TabStop"></see> object from the collection.
    /// </summary>
    /// <param name="stop"></param>
    void Remove(System::SharedPtr<TabStop> stop);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


