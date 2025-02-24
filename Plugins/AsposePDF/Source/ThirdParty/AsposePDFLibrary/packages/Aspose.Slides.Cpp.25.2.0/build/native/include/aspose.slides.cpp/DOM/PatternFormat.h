#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <system/array.h>
#include <DOM/IPatternFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorFormat;
class FillFormat;
class FillFormatImpl;
class IColorFormat;
class IDOMObject;
class IImage;
class IPatternFormatEffectiveData;
class LineFillFormat;
class LineFillFormatImpl;
class PatternFillParam;
class PatternFormat;
class PatternFormatEffectiveData;
class PatternFormatImpl;
enum class PatternStyle : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Bitmap;
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a pattern to fill a shape.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PatternFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IPatternFormat
{
    typedef PatternFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IPatternFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PatternFillParam;
    friend class Aspose::Slides::PatternFormatEffectiveData;
    friend class Aspose::Slides::FillFormatImpl;
    friend class Aspose::Slides::LineFillFormat;
    friend class Aspose::Slides::PatternFormatImpl;
    friend class Aspose::Slides::FillFormat;
    friend class Aspose::Slides::LineFillFormatImpl;
    /// @endcond
    
protected:

    /// @cond
    class ASPOSE_SLIDES_LOCAL_API Pattern : public System::Object
    {
        typedef Pattern ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::ArrayPtr<std::vector<uint8_t>> patternData;
        int32_t colorNum;
        
        Pattern();
        
    };
    
    /// @endcond
    
public:

    /// <summary>
    /// Returns the pattern style.
    /// Read <see cref="Slides::PatternStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::PatternStyle get_PatternStyle() override;
    /// <summary>
    /// Sets the pattern style.
    /// Write <see cref="Slides::PatternStyle"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PatternStyle(Aspose::Slides::PatternStyle value) override;
    /// <summary>
    /// Returns the foreground pattern color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ForeColor() override;
    /// <summary>
    /// Returns the background pattern color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_BackColor() override;
    
    /// @deprecated Use GetTile(Color background, Color foreground) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Creates a tile image for the pattern fill with a specified colors.
    /// </summary>
    /// <param name="background">The background <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <param name="foreground">The foreground <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <returns>Tile <see cref="System::Drawing::Bitmap"></see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetTileImage(System::Drawing::Color background, System::Drawing::Color foreground) override;
    /// <summary>
    /// Creates a tile image for the pattern fill with a specified colors.
    /// </summary>
    /// <param name="background">The background <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <param name="foreground">The foreground <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <returns>Tile <see cref="Aspose::Slides::IImage">IImage</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetTile(System::Drawing::Color background, System::Drawing::Color foreground) override;
    /// @deprecated Use GetTile(Color styleColor) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Creates a tile image for the pattern fill.
    /// </summary>
    /// <param name="styleColor">The default <see cref="System::Drawing::Color"></see>, 
    /// defined in ShapeEx's StyleEx object. Fill's colors can depend on this.</param>
    /// <returns>Tile <see cref="System::Drawing::Bitmap"></see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Drawing::Bitmap> GetTileImage(System::Drawing::Color styleColor) override;
    /// <summary>
    /// Creates a tile image for the pattern fill.
    /// </summary>
    /// <param name="styleColor">The default <see cref="System::Drawing::Color"></see></param>
    /// <returns>Tile <see cref="Aspose::Slides::IImage">IImage</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IImage> GetTile(System::Drawing::Color styleColor) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PatternFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<PatternFormat::Pattern>>>& Patterns();
    
    System::Event<void()> PatternFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API PatternFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PatternFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PatternFormatEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void Reset(bool notifyChanged = true);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<PatternFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IPatternFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<PatternFormat> source);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> CreatePatternImage(bool indexed, Aspose::Slides::PatternStyle patternStyle, System::Drawing::Color background, System::Drawing::Color foreground);
    ASPOSE_SLIDES_LOCAL_API void OnPatternFormatChanged();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PatternFormat();
    
private:

    System::SharedPtr<ColorFormat> m_foreColor;
    System::SharedPtr<ColorFormat> m_backColor;
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<PatternFormat::Pattern>>> LoadPatterns(System::String path);
    
};

} // namespace Slides
} // namespace Aspose


