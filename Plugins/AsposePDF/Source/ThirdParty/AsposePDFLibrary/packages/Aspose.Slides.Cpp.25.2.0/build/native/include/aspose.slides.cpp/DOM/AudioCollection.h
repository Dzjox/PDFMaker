#pragma once

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/IAudioCollection.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Blob
{
class IBlobHandler;
} // namespace Blob
} // namespace Foundation
namespace Slides
{
class Audio;
class IAudio;
enum class LoadingStreamBehavior;
namespace OdpSerialization
{
class OdpDeserializationContext;
} // namespace OdpSerialization
namespace PptxSerialization
{
class PptxDeserializationContext;
} // namespace PptxSerialization
} // namespace Slides
namespace Zip
{
class ZipEntry;
} // namespace Zip
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
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of embedded audio files.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AudioCollection : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::IAudioCollection
{
    typedef AudioCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::IAudioCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::OdpDeserializationContext;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializationContext;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IAudio>>;
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
    /// Returns a number of audio files in the collection.
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
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds a copy of an audio file from an another presentation.
    /// </summary>
    /// <param name="audio">Source audio.</param>
    /// <returns>Added audio.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<IAudio> audio) override;
    /// <summary>
    /// Creates and adds a audio to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add audio from.</param>
    /// <returns>Added audio.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Creates and adds a audio to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add video audio from.</param>
    /// <param name="loadingStreamBehavior">The behavior which will be applied to the stream.</param>
    /// <returns>Added audio.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<System::IO::Stream> stream, LoadingStreamBehavior loadingStreamBehavior) override;
    /// <summary>
    /// Creates and adds a audio to a presentation from byte array.
    /// </summary>
    /// <param name="audioData">Audio bytes.</param>
    /// <returns>Added audio.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAudio> AddAudio(System::ArrayPtr<uint8_t> audioData) override;
    /// <summary>
    /// Copies audios to specified array starting from specified index.
    /// </summary>
    /// <param name="array">Array.</param>
    /// <param name="index">Index.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IAudio>> array, int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IAudio>>> GetEnumerator() override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API AudioCollection(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AudioCollection, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<Zip::ZipEntry> audioData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<Aspose::Foundation::Blob::IBlobHandler> blobHandler);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~AudioCollection();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IAudio>>> _audios;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Audio> AddAudio(System::ArrayPtr<uint8_t> audioData, System::String contentType, System::String extension);
    ASPOSE_SLIDES_LOCAL_API bool TryFindIfAlreadyAdded(System::ArrayPtr<uint8_t> audioData, System::SharedPtr<Audio>& alreadyAddedAudio);
    
};

} // namespace Slides
} // namespace Aspose


