#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "DOM/IGenericCloneable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class ColorTransformOperation;
class IColorOperation;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of color transform operations.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorOperationCollection : public Aspose::Slides::IGenericCloneable<System::SharedPtr<Aspose::Slides::IColorOperationCollection>>, public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IColorOperation>>
{
    typedef IColorOperationCollection ThisType;
    typedef Aspose::Slides::IGenericCloneable<System::SharedPtr<Aspose::Slides::IColorOperationCollection>> BaseType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IColorOperation>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the operation at the specified index.
    /// Read <see cref="Aspose::Slides::IColorOperation">IColorOperation</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperation> idx_get(int32_t index) = 0;
    /// <summary>
    /// Sets the operation at the specified index.
    /// Write <see cref="Aspose::Slides::IColorOperation">IColorOperation</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(int32_t index, System::SharedPtr<IColorOperation> value) = 0;
    
    /// <summary>
    /// Adds a new operation to the end of collection.
    /// </summary>
    /// <param name="operation">Operation type.</param>
    /// <param name="parameter">Operation's parameter. </param>
    /// <returns>Added operation.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperation> Add(ColorTransformOperation operation, float parameter) = 0;
    /// <summary>
    /// Adds a new operation to the end of collection.
    /// </summary>
    /// <param name="operation">Operation type.</param>
    /// <returns>Added operation.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperation> Add(ColorTransformOperation operation) = 0;
    /// <summary>
    /// Inserts the new operation to a collection.
    /// </summary>
    /// <param name="position">The index at which the operation will be inserted.</param>
    /// <param name="operation">Operation type.</param>
    /// <param name="parameter">Operation's parameter. </param>
    /// <returns>Inserted operation.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperation> Insert(int32_t position, ColorTransformOperation operation, float parameter) = 0;
    /// <summary>
    /// Inserts the new operation to a collection.
    /// </summary>
    /// <param name="position">The index at which the operation will be inserted.</param>
    /// <param name="operation">Operation type.</param>
    /// <returns>Inserted operation.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorOperation> Insert(int32_t position, ColorTransformOperation operation) = 0;
    /// <summary>
    /// Removes the color operation from a collection.
    /// </summary>
    /// <param name="index">Index of a color operation to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all color operations.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Slides
} // namespace Aspose


