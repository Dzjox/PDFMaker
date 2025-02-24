#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IBaseShapeLock.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShapeLock;
class ConnectorLock;
class GraphicalObjectLock;
class GroupShapeLock;
enum class LockField : uint8_t;
class PictureFrameLock;
namespace PptSerialization
{
class BaseShapeLockPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class BaseShapeLockPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BaseShapeLockPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseShapeLockPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a base class for locks (disabled operation).
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseShapeLock : public virtual Aspose::Slides::IBaseShapeLock
{
    typedef BaseShapeLock ThisType;
    typedef Aspose::Slides::IBaseShapeLock BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::AutoShapeLock;
    friend class Aspose::Slides::ConnectorLock;
    friend class Aspose::Slides::GraphicalObjectLock;
    friend class Aspose::Slides::GroupShapeLock;
    friend class Aspose::Slides::PictureFrameLock;
    friend class Aspose::Slides::PptSerialization::BaseShapeLockPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseShapeLockPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Return true if all lock-flags are disabled.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_NoLocks() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::BaseShapeLockPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::BaseShapeLockPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API BaseShapeLock();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BaseShapeLock, CODEPORTING_ARGS());
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API BaseShapeLock(uint16_t sign);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BaseShapeLock, CODEPORTING_ARGS(uint16_t sign));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API uint16_t CombineFields(const System::ArrayPtr<LockField>& fields);
    ASPOSE_SLIDES_LOCAL_API bool GetField(LockField field);
    ASPOSE_SLIDES_LOCAL_API void SetField(LockField field, bool value);
    static ASPOSE_SLIDES_LOCAL_API bool GetField(uint16_t values, LockField field);
    /// @endcond
    
private:

    uint16_t m_locks;
    uint16_t m_significant;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::BaseShapeLockPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::BaseShapeLockPPTUnsupportedProps> m_pptUnsupportedProps;
    
};

} // namespace Slides
} // namespace Aspose


