#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Background;
class Cell;
class ColorFormat;
class IGeometryShape;
class IPVIObject;
} // namespace Slides
} // namespace Aspose
namespace System
{
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

class ASPOSE_SLIDES_SHARED_CLASS StyleColorGetter
{
    typedef StyleColorGetter ThisType;
    
public:

    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<ColorFormat> GetStyleColor(System::SharedPtr<IPVIObject> accessiblePVIObject);
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormat> GetCellStyleColor(System::SharedPtr<Cell> cell, System::SharedPtr<IPVIObject> accessiblePVIObject);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormat> GetGeometryShapeStyleColor(System::SharedPtr<IGeometryShape> geometryShape, System::SharedPtr<IPVIObject> accessiblePVIObject);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormat> GetBackgroundStyleColor(System::SharedPtr<Background> background);
    
public:
    StyleColorGetter() = delete;
};

} // namespace Slides
} // namespace Aspose


