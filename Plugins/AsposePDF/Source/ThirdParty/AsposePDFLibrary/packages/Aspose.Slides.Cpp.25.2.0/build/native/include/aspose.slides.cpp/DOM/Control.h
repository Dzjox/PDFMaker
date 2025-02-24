#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/guid.h>
#include <system/array.h>
#include <DOM/IControl.h>

#include "DOM/DomObject.h"
#include "DOM/ControlCollection.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ControlPropertiesCollection;
namespace DOM
{
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class ControlPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
} // namespace UnsupportedProps
} // namespace DOM
namespace Drawing
{
class Canvas;
class RenderContext;
} // namespace Drawing
class IBaseSlide;
class IControlPropertiesCollection;
class IPictureFillFormat;
class IPresentation;
class IShapeFrame;
enum class PersistenceType;
class PictureFillFormat;
namespace PptSerialization
{
class LayoutSlidePPTSerialization;
class OleObjectPptSerialization;
class ShapePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class ActiveXPartParser;
class ControlCollectionPPTXSerialization;
class ControlPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ControlPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
namespace View
{
class SlideView;
} // namespace View
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an ActiveX control.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Control : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::ControlCollection>>, public Aspose::Slides::IControl
{
    typedef Control ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::ControlCollection>> BaseType;
    typedef Aspose::Slides::IControl BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::ControlCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::ActiveXPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::ControlCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ControlPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::ShapePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::OleObjectPptSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the method used to store properties of the ActiveX control.
    /// Read only <see cref="PersistenceType"></see>.
    /// </summary>
    /// <example>
    /// Next example shows the using Persistence property for checking if properties of ActiveX object may be changed as XML based ActiveX properties:
    /// <code>
    /// if (control->get_Persistence() == PersistenceType::PersistPropertyBag)
    /// {
    ///     control->get_Properties()->idx_set(u"Value", value);
    /// }
    /// else
    /// {
    ///     // Use your own method for managing ActiveX properties stored in its binary file
    ///     YourMethodHere(control->get_ActiveXControlBinary());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API PersistenceType get_Persistence() override;
    /// <summary>
    /// Gets the name of this control.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Sets the name of this control.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Gets class id of this control.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Guid get_ClassId() override;
    /// <summary>
    /// Gets class id of this control.
    /// Read-only <see cref="System::Guid"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ClassId(System::Guid value);
    /// <summary>
    /// Returns Control image fill properties object.
    /// Read-only <see cref="Aspose::Slides::IPictureFillFormat">IPictureFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPictureFillFormat> get_SubstitutePictureFormat() override;
    /// <summary>
    /// Returns control's frame.
    /// Read <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeFrame> get_Frame() override;
    /// <summary>
    /// Sets control's frame.
    /// Write <see cref="Aspose::Slides::IShapeFrame">IShapeFrame</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Frame(System::SharedPtr<IShapeFrame> value) override;
    /// <summary>
    /// Returns a collection of ActiveX properties.
    /// <remarks>Note: Aspose.Slides supports only XML based ActiveX properties. If properties stored in binary format, this property will return null.</remarks>
    /// Read-only <see cref="Aspose::Slides::IControlPropertiesCollection">IControlPropertiesCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IControlPropertiesCollection> get_Properties() override;
    /// <summary>
    /// Specifies the persistence of an ActiveX control when the method used to persist is either PersistStream, PersistStreamInit or PersistStorage.
    /// </summary>
    /// <example>
    /// Next example shows the using ActiveXControlBinary property for changing ActiveX properties:
    /// <code>
    /// if (control->get_Persistence() == PersistenceType::PersistPropertyBag)
    /// {
    ///     control->get_Properties()->idx_set(u"Value", value);
    /// }
    /// else
    /// {
    ///     // Use your own method for managing ActiveX properties stored in its binary file
    ///     YourMethodHere(control->get_ActiveXControlBinary());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_ActiveXControlBinary() override;
    
    /// <summary>
    /// Returns an ActiveX property at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Property(System::String name) override;
    /// <summary>
    /// Set an ActiveX property at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Property(System::String name, System::String value) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ControlPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DOM::UnsupportedProps::PPTUnsupportedProps::ControlPPTUnsupportedProps> get_PPTUnsupportedProps();
    /// <summary>
    /// Gets the method used to store properties of the ActiveX control.
    /// Read only <see cref="PersistenceType"></see>.
    /// </summary>
    /// <example>
    /// Next example shows the using Persistence property for checking if properties of ActiveX object may be changed as XML based ActiveX properties:
    /// <code>
    /// if (control->get_Persistence() == PersistenceType::PersistPropertyBag)
    /// {
    ///     control->get_Properties()->idx_set(u"Value", value);
    /// }
    /// else
    /// {
    ///     // Use your own method for managing ActiveX properties stored in its binary file
    ///     YourMethodHere(control->get_ActiveXControlBinary());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Persistence(PersistenceType value);
    /// <summary>
    /// Specifies the persistence of an ActiveX control when the method used to persist is either PersistStream, PersistStreamInit or PersistStorage.
    /// </summary>
    /// <example>
    /// Next example shows the using ActiveXControlBinary property for changing ActiveX properties:
    /// <code>
    /// if (control->get_Persistence() == PersistenceType::PersistPropertyBag)
    /// {
    ///     control->get_Properties()->idx_set(u"Value", value);
    /// }
    /// else
    /// {
    ///     // Use your own method for managing ActiveX properties stored in its binary file
    ///     YourMethodHere(control->get_ActiveXControlBinary());
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ActiveXControlBinary(System::ArrayPtr<uint8_t> value);
    ASPOSE_SLIDES_LOCAL_API bool get_Unprocessed() const;
    ASPOSE_SLIDES_LOCAL_API void set_Unprocessed(bool value);
    
    ASPOSE_SLIDES_LOCAL_API Control(System::SharedPtr<ControlCollection> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Control, CODEPORTING_ARGS(System::SharedPtr<ControlCollection> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void Draw(System::SharedPtr<Drawing::Canvas> canvas, System::SharedPtr<Drawing::RenderContext> rc);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Control();
    
private:

    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ControlPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<DOM::UnsupportedProps::PPTUnsupportedProps::ControlPPTUnsupportedProps> m_pptUnsupportedProps;
    System::String m_name;
    System::SharedPtr<PictureFillFormat> m_substitutePictureFormat;
    System::SharedPtr<IShapeFrame> m_shapeFrame;
    System::SharedPtr<ControlPropertiesCollection> m_props;
    System::Guid m_classId;
    System::ArrayPtr<uint8_t> m_activeXControlBinary;
    PersistenceType m_persistence;
    bool pr_Unprocessed;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
};

} // namespace Slides
} // namespace Aspose


