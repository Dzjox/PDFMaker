#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Sanitization {

/// <summary>
/// This interface represents recovery API.
/// </summary>
class IRecovery : public virtual System::Object
{
    typedef IRecovery ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the history of recovery.
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::List<System::String>> get_Log() = 0;
    
    /// <summary>
    /// Cleaning up a document for recovery.
    /// </summary>
    virtual void Recover() = 0;
    /// <summary>
    /// Removes data before %PDF.
    /// </summary>
    virtual void TrimTop() = 0;
    /// <summary>
    /// Removes data after last %%EOF.
    /// </summary>
    virtual void TrimBottom() = 0;
    
};

} // namespace Sanitization
} // namespace Pdf
} // namespace Aspose


