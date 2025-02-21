#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class PdfPrintPageInfo;
} // namespace Facades
namespace Printing
{
class PdfQueryPageSettingsEventArgs;
} // namespace Printing
} // namespace Pdf
} // namespace Aspose
namespace System
{
class Object;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

using PdfQueryPageSettingsEventHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<Aspose::Pdf::Printing::PdfQueryPageSettingsEventArgs>, System::SharedPtr<PdfPrintPageInfo>)>;
} // namespace Facades
} // namespace Pdf
} // namespace Aspose


