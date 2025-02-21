#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose
{
namespace Pdf
{
class OperatorCollection;
class Resources;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents objects that contain a collection of operators as their contents.
/// </summary>
class IOperatorContainer : public virtual System::Object
{
    typedef IOperatorContainer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the collection of operators.
    /// </summary>
    virtual System::SharedPtr<OperatorCollection> get_Contents() = 0;
    /// <summary>
    /// Gets the resources referenced by operators in the <see cref="Contents"></see>.
    /// </summary>
    virtual System::SharedPtr<Aspose::Pdf::Resources> get_Resources() = 0;
    
    /// <summary>
    /// Retrieves the resources associated with the operator container.
    /// </summary>
    /// <returns>A <see cref="Resources"></see> object representing the resources of the operator container.</returns>
    virtual System::SharedPtr<Aspose::Pdf::Resources> GetResources() = 0;
    
};

} // namespace Pdf
} // namespace Aspose


