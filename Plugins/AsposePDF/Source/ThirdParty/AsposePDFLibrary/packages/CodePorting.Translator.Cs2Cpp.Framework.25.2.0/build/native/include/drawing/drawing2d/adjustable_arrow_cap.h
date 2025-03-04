/// @file drawing/drawing2d/adjustable_arrow_cap.h
#pragma once

#include "fwd.h"

#include "drawing/drawing2d/custom_line_cap.h"

namespace System { namespace Drawing { namespace Drawing2D {

/// Represents an adjustable arrow-shaped line cap.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS AdjustableArrowCap: public CustomLineCap
{
    RTTI_INFO(System::Drawing::Drawing2D::AdjustableArrowCap, ::System::BaseTypesInfo<System::Drawing::Drawing2D::CustomLineCap>)

public:
    /// Constructs a new instance of AdjustableArrowCap with the specified width and height.
    /// @param width The width of the arrow
    /// @param height The height of the arrow
    /// @param is_filled Specifies if the arrow should be filled (true) or not (false)
    ASPOSECPP_SHARED_API AdjustableArrowCap(float width, float height, bool is_filled = true);

    /// Returns the width of the arrow represented by the current object.
    ASPOSECPP_SHARED_API float get_Width() const;
    /// Sets the width of the arrow represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Width(float value);

    /// Returns the height of the arrow represented by the current object.
    ASPOSECPP_SHARED_API float get_Height() const;
    /// Sets the height of the arrow represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Height(float value);

    /// Returns a value that indicates if the arrow represented by the current object is filled.
    /// @returns True if the arrow is filled, otherwise - false
    ASPOSECPP_SHARED_API bool get_Filled() const;
    /// Sets a value that specifies if the arrow represented by the current object is filled.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Filled(bool value);

    /// Sets the distance between the line and the cap represented by the current object.
    /// @returns The inset value
    ASPOSECPP_SHARED_API float get_MiddleInset() const;
    /// Sets the distance between the line and the cap represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_MiddleInset(float value);

private:
    float m_width;
    float m_height;
    float m_inset;

    void Init();
    float GetInternalInset() const;
    static SharedPtr<GraphicsPath> MakeGraphicsPath(float width, float height, float inset, bool is_filled);

};

}}}
