#pragma once

#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/details/pointer_collection_helpers.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIPropertyBase.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Portable
{
template <typename TArg,typename TResult> using Func1 = System::MulticastDelegate<TResult(TArg)>;
} // namespace Portable
} // namespace Foundation
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

template<typename T, typename TRealObject>
class ASPOSE_SLIDES_LOCAL_API PVIProperty : public Aspose::Slides::PVIPropertyBase
{
    typedef PVIProperty<T, TRealObject> ThisType;
    typedef Aspose::Slides::PVIPropertyBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    /// @cond
    template<typename FT0, typename FT1> friend class Aspose::Slides::PVIProperty;
    /// @endcond
    
public:

    using SetHandler = System::MulticastDelegate<void(TRealObject, T)>;
    
    
public:

    T DefaultValue;
    Aspose::Foundation::Portable::Func1<TRealObject, T> Get;
    SetHandler Set;
    
    PVIProperty(T defaultValue, Aspose::Foundation::Portable::Func1<TRealObject, T> get, SetHandler set)
        : DefaultValue(T())
    {
        DefaultValue = defaultValue;
        Get = get;
        Set = set;
    }
    
    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(DefaultValue);
                System::Details::CollectionHelpers::SetWeakPointer(0, Get);
                System::Details::CollectionHelpers::SetWeakPointer(0, Set);
                break;
                
            case 1:
                System::Details::CollectionHelpers::SetWeakPointer(1, Get);
                System::Details::CollectionHelpers::SetWeakPointer(1, Set);
                break;
                
        }
    }
    
};

} // namespace Slides
} // namespace Aspose


