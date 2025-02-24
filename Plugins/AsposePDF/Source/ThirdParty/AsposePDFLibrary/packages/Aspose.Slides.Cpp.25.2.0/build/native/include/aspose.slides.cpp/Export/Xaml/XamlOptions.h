#pragma once
//Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Export/Xaml/IXamlOptions.h>
#include <drawing/size_f.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Serialization
{
namespace XamlSerialization
{
namespace Utils
{
class ScaleHelper;
} // namespace Utils
namespace Wpf
{
class WpfCs;
class WpfSolution;
class WpfXaml;
namespace XamlObjects
{
class WpfBlockOpenTag;
class WpfCustomObject;
class WpfEllipseObject;
class WpfImageObject;
class WpfLineObject;
class WpfRectangleObject;
class WpfTableObject;
class WpfTextBoxObject;
} // namespace XamlObjects
} // namespace Wpf
namespace XamarinForms
{
class XamarinFormsCs;
class XamarinFormsSolution;
class XamarinFormsXaml;
namespace XamlObjects
{
class XamarinBlockOpenTag;
class XamarinCustomObject;
class XamarinEllipseObject;
class XamarinImageObject;
class XamarinLabelObject;
class XamarinLineObject;
class XamarinRectangleObject;
class XamarinTableObject;
} // namespace XamlObjects
} // namespace XamarinForms
class XamlExportBuilder;
class XamlObjectBuilder;
class XamlShapeParser;
} // namespace XamlSerialization
} // namespace Serialization
} // namespace DOM
namespace Export
{
namespace Xaml
{
enum class ExportType;
class ICustomXamlObject;
class IXamlOutputSaver;
class XamlExporter;
enum class XamlType;
} // namespace Xaml
} // namespace Export
class Presentation;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

namespace Xaml {

/// <summary>
/// Options that control how a XAML document is saved.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
/// options->set_ExportHiddenSlides(true);
/// 
/// pres->Save(options);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS XamlOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::Xaml::IXamlOptions
{
    typedef XamlOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::Xaml::IXamlOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::Xaml::XamlExporter;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamlShapeParser;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Utils::ScaleHelper;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::WpfCs;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::WpfSolution;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::WpfXaml;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfBlockOpenTag;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfCustomObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfEllipseObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfImageObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfLineObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfRectangleObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfTableObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::Wpf::XamlObjects::WpfTextBoxObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamarinFormsCs;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamarinFormsSolution;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamarinFormsXaml;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinBlockOpenTag;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinCustomObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinEllipseObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinImageObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinLabelObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinLineObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinRectangleObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamarinForms::XamlObjects::XamarinTableObject;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamlExportBuilder;
    friend class Aspose::Slides::DOM::Serialization::XamlSerialization::XamlObjectBuilder;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:

    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
    /// options->set_ExportHiddenSlides(true);
    /// 
    /// pres->Save(options);
    /// </code>
    /// </example>  
    ASPOSE_SLIDES_SHARED_API bool get_ExportHiddenSlides() override;
    /// <summary>
    /// Determines whether hidden slides will be exported.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// SharedPtr<IXamlOptions> options = System::MakeObject<XamlOptions>();
    /// options->set_ExportHiddenSlides(true);
    /// 
    /// pres->Save(options);
    /// </code>
    /// </example>  
    ASPOSE_SLIDES_SHARED_API void set_ExportHiddenSlides(bool value) override;
    /// <summary>
    /// Represents an implementation of IOutputSaver interface.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IXamlOutputSaver> get_OutputSaver() override;
    /// <summary>
    /// Represents an implementation of IOutputSaver interface.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_OutputSaver(System::SharedPtr<IXamlOutputSaver> value) override;
    
    /// <summary>
    /// Creates the XamlOptions instance.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API XamlOptions();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_UseDevelopmentAttributes() const;
    ASPOSE_SLIDES_LOCAL_API void set_UseDevelopmentAttributes(bool value);
    ASPOSE_SLIDES_LOCAL_API System::Drawing::SizeF get_DeviceScreenSize() const;
    ASPOSE_SLIDES_LOCAL_API void set_DeviceScreenSize(System::Drawing::SizeF value);
    ASPOSE_SLIDES_LOCAL_API System::String get_RootNamespace();
    ASPOSE_SLIDES_LOCAL_API void set_RootNamespace(System::String value);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::Export::Xaml::ExportType get_ExportType() const;
    ASPOSE_SLIDES_LOCAL_API void set_ExportType(Aspose::Slides::Export::Xaml::ExportType value);
    ASPOSE_SLIDES_LOCAL_API System::String get_SolutionName() const;
    ASPOSE_SLIDES_LOCAL_API void set_SolutionName(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_ProjectName() const;
    ASPOSE_SLIDES_LOCAL_API void set_ProjectName(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::String get_SlidesName();
    ASPOSE_SLIDES_LOCAL_API void set_SlidesName(System::String value);
    ASPOSE_SLIDES_LOCAL_API bool get_ExportWithSlideShow() const;
    ASPOSE_SLIDES_LOCAL_API void set_ExportWithSlideShow(bool value);
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::Export::Xaml::XamlType get_XamlType() const;
    ASPOSE_SLIDES_LOCAL_API void set_XamlType(Aspose::Slides::Export::Xaml::XamlType value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ICustomXamlObject> get_WpfTableExport() const;
    ASPOSE_SLIDES_LOCAL_API void set_WpfTableExport(System::SharedPtr<ICustomXamlObject> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ICustomXamlObject> get_XamarinFormsTableExport() const;
    ASPOSE_SLIDES_LOCAL_API void set_XamarinFormsTableExport(System::SharedPtr<ICustomXamlObject> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ICustomXamlObject> get_WpfAutoShapeCustomExport() const;
    ASPOSE_SLIDES_LOCAL_API void set_WpfAutoShapeCustomExport(System::SharedPtr<ICustomXamlObject> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ICustomXamlObject> get_XamarinFormsAutoShapeCustomExport() const;
    ASPOSE_SLIDES_LOCAL_API void set_XamarinFormsAutoShapeCustomExport(System::SharedPtr<ICustomXamlObject> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ICustomXamlObject> get_WpfChartExport() const;
    ASPOSE_SLIDES_LOCAL_API void set_WpfChartExport(System::SharedPtr<ICustomXamlObject> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ICustomXamlObject> get_XamarinFormsChartExport() const;
    ASPOSE_SLIDES_LOCAL_API void set_XamarinFormsChartExport(System::SharedPtr<ICustomXamlObject> value);
    ASPOSE_SLIDES_LOCAL_API System::String get_CurrentPath();
    ASPOSE_SLIDES_LOCAL_API void set_CurrentPath(System::String value);
    /// @endcond
    
private:

    System::String m_rootNamespace;
    System::String m_currentPath;
    System::String m_slidesName;
    bool pr_ExportHiddenSlides;
    System::SharedPtr<IXamlOutputSaver> pr_OutputSaver;
    bool pr_UseDevelopmentAttributes;
    System::Drawing::SizeF pr_DeviceScreenSize;
    Aspose::Slides::Export::Xaml::ExportType pr_ExportType;
    System::String pr_SolutionName;
    System::String pr_ProjectName;
    bool pr_ExportWithSlideShow;
    Aspose::Slides::Export::Xaml::XamlType pr_XamlType;
    System::SharedPtr<ICustomXamlObject> pr_WpfTableExport;
    System::SharedPtr<ICustomXamlObject> pr_XamarinFormsTableExport;
    System::SharedPtr<ICustomXamlObject> pr_WpfAutoShapeCustomExport;
    System::SharedPtr<ICustomXamlObject> pr_XamarinFormsAutoShapeCustomExport;
    System::SharedPtr<ICustomXamlObject> pr_WpfChartExport;
    System::SharedPtr<ICustomXamlObject> pr_XamarinFormsChartExport;
    
};

} // namespace Xaml
} // namespace Export
} // namespace Slides
} // namespace Aspose


