#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/IGradientStopCollection.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class GradientFormat;
class GradientFormatImpl;
class GradientStop;
class GradientStopCollectionEffectiveData;
class GradientStopCollectionImpl;
class IDOMObject;
class IGradientStop;
namespace PptSerialization
{
class GradientFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class GradientFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
enum class PresetColor;
enum class SchemeColor;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represnts a collection of gradient stops.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GradientStopCollection final : public Aspose::Slides::PVIObject, public Aspose::Slides::IGradientStopCollection
{
    typedef GradientStopCollection ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IGradientStopCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GradientFormatImpl;
    friend class Aspose::Slides::GradientFormat;
    friend class Aspose::Slides::GradientStop;
    friend class Aspose::Slides::PptxSerialization::PartParser::GradientFormatPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::GradientFormatPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the number of gradient stops in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
    /// <summary>
    /// Returns the gradient stop by index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientStop> idx_get(int32_t index) override;
    
    /// <summary>
    /// Creates the new gradient stop and adds it to the end of collection.
    /// </summary>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="color">Color of the new radient stop.</param>
    /// <returns>Index of the new gradient stop in the collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientStop> Add(float position, System::Drawing::Color color) override;
    /// <summary>
    /// Creates the new gradient stop and adds it to the end of collection.
    /// </summary>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="presetColor">Color of the new radient stop.</param>
    /// <returns>Index of the new gradient stop in the collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientStop> Add(float position, PresetColor presetColor) override;
    /// <summary>
    /// Creates the new gradient stop and adds it to the end of collection.
    /// </summary>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="schemeColor">Color of the new radient stop.</param>
    /// <returns>Index of the new gradient stop in the collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientStop> Add(float position, SchemeColor schemeColor) override;
    /// <summary>
    /// Creates the new gradient stop and inserts it at the specified index to the collection.
    /// </summary>
    /// <param name="index">Index in the collection where new gradient stop will be inserted.</param>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="color">Color of the new radient stop.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, float position, System::Drawing::Color color) override;
    /// <summary>
    /// Creates the new gradient stop and inserts it at the specified index to the collection.
    /// </summary>
    /// <param name="index">Index in the collection where new gradient stop will be inserted.</param>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="presetColor">Color of the new radient stop.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, float position, PresetColor presetColor) override;
    /// <summary>
    /// Creates the new gradient stop and inserts it at the specified index to the collection.
    /// </summary>
    /// <param name="index">Index in the collection where new gradient stop will be inserted.</param>
    /// <param name="position">Position of the new gradient stop.</param>
    /// <param name="schemeColor">Color of the new radient stop.</param>
    ASPOSE_SLIDES_SHARED_API void Insert(int32_t index, float position, SchemeColor schemeColor) override;
    /// <summary>
    /// Removes a gradient stop at the specified index.
    /// </summary>
    /// <param name="index">Index of a gradient stop that should be deleted.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all gradient stops from a collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IGradientStop>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements from the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the target array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IGradientStop>> array, int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientStopCollectionImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    System::Event<void()> GradientStopCollectionChanged;
    
    ASPOSE_SLIDES_LOCAL_API GradientStopCollection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStopCollection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientStopCollectionEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IGradientStop> Add();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IGradientStop> NoEventAdd();
    ASPOSE_SLIDES_LOCAL_API void NoEventClear();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientStop> GetByPosition(float position);
    ASPOSE_SLIDES_LOCAL_API void OnGradientStopCollectionChanged();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~GradientStopCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IGradientStop>>> m_stops;
    
};

} // namespace Slides
} // namespace Aspose


