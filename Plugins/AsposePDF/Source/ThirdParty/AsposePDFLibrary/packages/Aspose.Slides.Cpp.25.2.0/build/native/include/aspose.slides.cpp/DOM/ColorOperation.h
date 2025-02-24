#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IColorOperation.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorFormatImpl;
class ColorOperationCollection;
enum class ColorTransformOperation;
class FloatColor;
namespace PptSerialization
{
class GradientFormatPPTSerialization;
} // namespace PptSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents different color operations used for color transformations.
/// Immutable object.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColorOperation : public Aspose::Slides::IColorOperation
{
    typedef ColorOperation ThisType;
    typedef Aspose::Slides::IColorOperation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ColorFormatImpl;
    friend class Aspose::Slides::ColorOperationCollection;
    friend class Aspose::Slides::PptSerialization::GradientFormatPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the type of an operation.
    /// Read-only <see cref="ColorTransformOperation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ColorTransformOperation get_OperationType() override;
    /// <summary>
    /// Returns a parameter of an operation.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Parameter() override;
    
    /// <summary>
    /// Creates new color transform operation.
    /// </summary>
    /// <param name="op">Operation type.</param>
    ASPOSE_SLIDES_SHARED_API ColorOperation(ColorTransformOperation op);
    /// <summary>
    /// Creates new color transform operation.
    /// </summary>
    /// <param name="op">Operation type.</param>
    /// <param name="parameter">Operation parameter.</param>
    ASPOSE_SLIDES_SHARED_API ColorOperation(ColorTransformOperation op, float parameter);
    
    /// <summary>
    /// Determines whether the two ColorOperation instances are equal.
    /// </summary>
    /// <param name="obj">The ColorOperation to compare with the current ColorOperation.</param>
    /// <returns><b>true</b> if the specified ColorOperation is equal to the current ColorOperation; 
    /// otherwise, <b>false</b>.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type, suitable for use
    /// in hashing algorithms and data structures like a hash table.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsAlphaOperation();
    
    ASPOSE_SLIDES_LOCAL_API void TransformColor(System::SharedPtr<FloatColor> color);
    static ASPOSE_SLIDES_LOCAL_API void ComplementColor(float& r, float& g, float& b);
    static ASPOSE_SLIDES_LOCAL_API void InverseColor(float& r, float& g, float& b);
    static ASPOSE_SLIDES_LOCAL_API float LinearToScLinear(float component);
    static ASPOSE_SLIDES_LOCAL_API float ScLinearToLinear(float component);
    /// @endcond
    
private:

    ASPOSE_SLIDES_LOCAL_API bool get_ParameterUsed();
    
    ColorTransformOperation m_operation;
    float m_parameter;
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<std::vector<float>> limits;
    
    ASPOSE_SLIDES_LOCAL_API void Init(ColorTransformOperation op, float parameter);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


