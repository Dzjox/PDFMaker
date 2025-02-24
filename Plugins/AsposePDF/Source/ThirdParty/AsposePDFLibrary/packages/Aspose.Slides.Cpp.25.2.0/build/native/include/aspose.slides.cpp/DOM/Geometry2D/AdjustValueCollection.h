#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IAdjustValueCollection.h>

#include "DOM/GeometryShape.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class DrawingMLExporter;
} // namespace Export
class IAdjustValue;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class AdjustValueUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Reprasents a collection of shape's adjustments.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AdjustValueCollection final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::GeometryShape>>, public Aspose::Slides::IAdjustValueCollection
{
    typedef AdjustValueCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::GeometryShape>> BaseType;
    typedef Aspose::Slides::IAdjustValueCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GeometryShape;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Return a number of adjustments.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Returns adjustment by index.
    /// </summary>
    /// <param name="index">adjustment's index.</param>
    /// <returns><see cref="Aspose::Slides::AdjustValue">AdjustValue</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAdjustValue> idx_get(int32_t index) override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AdjustValueCollection>& NotDefined();
    
    ASPOSE_SLIDES_LOCAL_API AdjustValueCollection(System::SharedPtr<GeometryShape> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AdjustValueCollection, CODEPORTING_ARGS(System::SharedPtr<GeometryShape> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::AdjustValueUnsupportedProps> GetAdjustValueUnsupportedProp(int32_t index);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~AdjustValueCollection();
    
};

} // namespace Slides
} // namespace Aspose


