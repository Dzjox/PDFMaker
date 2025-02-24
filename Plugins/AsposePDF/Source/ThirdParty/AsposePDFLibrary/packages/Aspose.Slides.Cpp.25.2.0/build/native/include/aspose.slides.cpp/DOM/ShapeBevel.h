#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IShapeBevel.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class BevelPresetType;
namespace Drawing
{
namespace ThreeD
{
class Shape3DBaseSettingsManager;
} // namespace ThreeD
} // namespace Drawing
class IDOMObject;
class IShapeBevelEffectiveData;
class ShapeBevelEffectiveData;
class ShapeBevelImpl;
class ThreeDFormat;
class ThreeDFormatImpl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Contains the properties of shape's main face relief.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ShapeBevel final : public Aspose::Slides::PVIObject, public Aspose::Slides::IShapeBevel
{
    typedef ShapeBevel ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IShapeBevel BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::ThreeD::Shape3DBaseSettingsManager;
    friend class Aspose::Slides::ShapeBevelEffectiveData;
    friend class Aspose::Slides::ShapeBevelImpl;
    friend class Aspose::Slides::ThreeDFormatImpl;
    friend class Aspose::Slides::ThreeDFormat;
    /// @endcond
    
public:

    /// <summary>
    /// Bevel width.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Width() override;
    /// <summary>
    /// Bevel width.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(double value) override;
    /// <summary>
    /// Bevel height.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Height() override;
    /// <summary>
    /// Bevel height.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Height(double value) override;
    /// <summary>
    /// Bevel type.
    /// Read <see cref="BevelPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BevelPresetType get_BevelType() override;
    /// <summary>
    /// Bevel type.
    /// Write <see cref="BevelPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BevelType(BevelPresetType value) override;
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <param name="bIsTopBevel">Is top bevel.</param>
    ASPOSE_SLIDES_SHARED_API ShapeBevel(bool bIsTopBevel);
    
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeBevel> TopDefault;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeBevel> BottomDefault;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeBevelImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsTopBevel();
    
    System::Event<void()> ShapeBevelChanged;
    
    ASPOSE_SLIDES_LOCAL_API ShapeBevel(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShapeBevel, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ShapeBevel(System::SharedPtr<IDOMObject> parentImmediate, bool bIsTopBevel);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ShapeBevel, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, bool bIsTopBevel));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeBevelEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IShapeBevel> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IShapeBevelEffectiveData> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ShapeBevel();
    
private:

    ASPOSE_SLIDES_LOCAL_API void OnShapeBevelChanged();
    
};

} // namespace Slides
} // namespace Aspose


