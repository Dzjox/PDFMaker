#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IEffectStyleCollectionEffectiveData;
class IFillFormatCollectionEffectiveData;
class ILineFormatCollectionEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Immutable object which contains effective format scheme properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::Theme::IThemeEffectiveData">IThemeEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IFormatSchemeEffectiveData : public virtual System::Object
{
    typedef IFormatSchemeEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a collection of theme defined fill styles.
    /// </summary>
    /// <param name="styleColor">Color <see cref="System::Drawing::Color"></see></param>
    /// <returns>Collection of effective fill formats <see cref="Aspose::Slides::Theme::IFillFormatCollectionEffectiveData">IFillFormatCollectionEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatCollectionEffectiveData> GetFillStyles(System::Drawing::Color styleColor) = 0;
    /// <summary>
    /// Returns a collection of theme defined line styles.
    /// </summary>
    /// <param name="styleColor">Color <see cref="System::Drawing::Color"></see></param>
    /// <returns>Collection of effective line formats <see cref="Aspose::Slides::Theme::ILineFormatCollectionEffectiveData">ILineFormatCollectionEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatCollectionEffectiveData> GetLineStyles(System::Drawing::Color styleColor) = 0;
    /// <summary>
    /// Returns a collection of theme defined effect styles.
    /// </summary>
    /// <param name="styleColor">Color <see cref="System::Drawing::Color"></see></param>
    /// <returns>Collection of effective effect styles <see cref="Aspose::Slides::Theme::IEffectStyleCollectionEffectiveData">IEffectStyleCollectionEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectStyleCollectionEffectiveData> GetEffectStyles(System::Drawing::Color styleColor) = 0;
    /// <summary>
    /// Returns a collection of theme defined background fill styles.
    /// </summary>
    /// <param name="styleColor">Color <see cref="System::Drawing::Color"></see></param>
    /// <returns>Collection of effective background fill formats <see cref="Aspose::Slides::Theme::IFillFormatCollectionEffectiveData">IFillFormatCollectionEffectiveData</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatCollectionEffectiveData> GetBackgroundFillStyles(System::Drawing::Color styleColor) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


