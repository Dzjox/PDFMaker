#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/timespan.h>
#include <system/date_time.h>
#include <system/array.h>
#include <DOM/IGenericCloneable.h>
#include <DOM/IDocumentProperties.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartTitleRenderContext;
} // namespace Charts
class IHeadingPair;
namespace OdpSerialization
{
namespace PartParser
{
class MetaPartParser;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class PptDeserializator;
class PptSerializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class AxisPPTXSerialization;
class ChartSeriesPPTXSerialization;
class ChartTitlePPTXSerialization;
class DataLabelsPPTXSerialization;
class LegendPPTXSerialization;
} // namespace Chart
} // namespace PartParser
class PptxDeserializator;
class PptxSerializator;
} // namespace PptxSerialization
class Presentation;
class PresentationTemplate;
namespace Serialization
{
class CoreDocPropertiesPartParser;
class CustomDocPropertiesPartParser;
class ExtendedDocPropertiesPartParser;
} // namespace Serialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class SortedList;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties of a presentation.
/// </summary>
/// <example>
/// The following example shows how to access built-in Properties of PowerPoint Presentation.
/// <code>
/// // Instantiate the Presentation class that represents the presentation
/// auto pres = System::MakeObject<Presentation>(dataDir + u"AccessBuiltin Properties.pptx");
/// 
/// // Create a reference to IDocumentProperties object associated with Presentation
/// System::SharedPtr<IDocumentProperties> documentProperties = pres->get_DocumentProperties();
/// // Display the builtin properties
/// System::Console::WriteLine(System::String(u"Category : ") + documentProperties->get_Category());
/// System::Console::WriteLine(System::String(u"Current Status : ") + documentProperties->get_ContentStatus());
/// System::Console::WriteLine(System::String(u"Creation Date : ") + documentProperties->get_CreatedTime());
/// System::Console::WriteLine(System::String(u"Author : ") + documentProperties->get_Author());
/// System::Console::WriteLine(System::String(u"Description : ") + documentProperties->get_Comments());
/// </code>
/// The following example shows how to modify built-in Properties of PowerPoint Presentation.
/// <code>
/// // Instantiate the Presentation class that represents the Presentation
/// auto presentation = System::MakeObject<Presentation>(dataDir + u"ModifyBuiltinProperties.pptx");
/// 
/// // Create a reference to IDocumentProperties object associated with Presentation
/// System::SharedPtr<IDocumentProperties> documentProperties = presentation->get_DocumentProperties();
/// // Set the builtin properties
/// documentProperties->set_Author(u"Aspose.Slides for .NET");
/// documentProperties->set_Title(u"Modifying Presentation Properties");
/// documentProperties->set_Subject(u"Aspose Subject");
/// // Save your presentation to a file
/// presentation->Save(u"DocumentProperties_out.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS DocumentProperties : public Aspose::Slides::IDocumentProperties, public Aspose::Slides::IGenericCloneable<System::SharedPtr<Aspose::Slides::IDocumentProperties>>
{
    typedef DocumentProperties ThisType;
    typedef Aspose::Slides::IDocumentProperties BaseType;
    typedef Aspose::Slides::IGenericCloneable<System::SharedPtr<Aspose::Slides::IDocumentProperties>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::MetaPartParser;
    friend class Aspose::Slides::Serialization::CoreDocPropertiesPartParser;
    friend class Aspose::Slides::Serialization::CustomDocPropertiesPartParser;
    friend class Aspose::Slides::Serialization::ExtendedDocPropertiesPartParser;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::Charts::ChartTitleRenderContext;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxisPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTitlePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::LegendPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptxSerialization::PptxSerializator;
    friend class Aspose::Slides::PresentationTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the app version.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_AppVersion() override;
    /// <summary>
    /// Returns the name of the application.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_NameOfApplication() override;
    /// <summary>
    /// Sets the name of the application.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NameOfApplication(System::String value) override;
    /// <summary>
    /// Returns the company property.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Company() override;
    /// <summary>
    /// Sets the company property.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Company(System::String value) override;
    /// <summary>
    /// Returns the manager property.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Manager() override;
    /// <summary>
    /// Sets the manager property.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Manager(System::String value) override;
    /// <summary>
    /// Returns the intended format of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_PresentationFormat() override;
    /// <summary>
    /// Sets the intended format of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PresentationFormat(System::String value) override;
    /// <summary>
    /// Determines whether the presentation is shared between multiple people.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SharedDoc() override;
    /// <summary>
    /// Determines whether the presentation is shared between multiple people.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SharedDoc(bool value) override;
    /// <summary>
    /// Returns the template of a application.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ApplicationTemplate() override;
    /// <summary>
    /// Sets the template of a application.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ApplicationTemplate(System::String value) override;
    /// <summary>
    /// Total editing time of a presentation.
    /// Read <see cref="System::TimeSpan"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::TimeSpan get_TotalEditingTime() override;
    /// <summary>
    /// Total editing time of a presentation.
    /// Write <see cref="System::TimeSpan"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TotalEditingTime(System::TimeSpan value) override;
    /// <summary>
    /// Returns the title of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Title() override;
    /// <summary>
    /// Sets the title of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Title(System::String value) override;
    /// <summary>
    /// Returns the subject of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Subject() override;
    /// <summary>
    /// Sets the subject of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Subject(System::String value) override;
    /// <summary>
    /// Returns the author of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Author() override;
    /// <summary>
    /// Sets the author of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Author(System::String value) override;
    /// <summary>
    /// Returns the keywords of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Keywords() override;
    /// <summary>
    /// Sets the keywords of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Keywords(System::String value) override;
    /// <summary>
    /// Returns the comments of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Comments() override;
    /// <summary>
    /// Sets the comments of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Comments(System::String value) override;
    /// <summary>
    /// Returns the category of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Category() override;
    /// <summary>
    /// Sets the category of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Category(System::String value) override;
    /// <summary>
    /// Returns the date a presentation was created.
    /// Values are in UTC.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::DateTime get_CreatedTime() override;
    /// <summary>
    /// Returns the date a presentation was created.
    /// Values are in UTC.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CreatedTime(System::DateTime value) override;
    /// <summary>
    /// Returns the date a presentation was last modified.
    /// Values are in UTC.
    /// Read-only in case of Presentation::get_DocumentProperties (because it will be updated internally while IPresentation object saving process). 
    /// Can be changed via DocumentProperties instance returning by method <see cref="IPresentationInfo::ReadDocumentProperties"></see>
    /// Please see the example in <see cref="IPresentationInfo::UpdateDocumentProperties"></see> method summary.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::DateTime get_LastSavedTime() override;
    /// <summary>
    /// Returns the date a presentation was last modified.
    /// Values are in UTC.
    /// Read-only in case of Presentation::get_DocumentProperties (because it will be updated internally while IPresentation object saving process). 
    /// Can be changed via DocumentProperties instance returning by method <see cref="IPresentationInfo::ReadDocumentProperties"></see>
    /// Please see the example in <see cref="IPresentationInfo::UpdateDocumentProperties"></see> method summary.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LastSavedTime(System::DateTime value) override;
    /// <summary>
    /// Returns the date when a presentation was printed last time.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::DateTime get_LastPrinted() override;
    /// <summary>
    /// Returns the date when a presentation was printed last time.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LastPrinted(System::DateTime value) override;
    /// <summary>
    /// Returns the name of a last person who modified a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_LastSavedBy() override;
    /// <summary>
    /// Sets the name of a last person who modified a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LastSavedBy(System::String value) override;
    /// <summary>
    /// Returns the presentation revision number.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_RevisionNumber() override;
    /// <summary>
    /// Sets the presentation revision number.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RevisionNumber(int32_t value) override;
    /// <summary>
    /// Returns the content status of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ContentStatus() override;
    /// <summary>
    /// Sets the content status of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ContentStatus(System::String value) override;
    /// <summary>
    /// Returns the content type of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ContentType() override;
    /// <summary>
    /// Sets the content type of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ContentType(System::String value) override;
    /// <summary>
    /// Returns the HyperlinkBase document property.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_HyperlinkBase() override;
    /// <summary>
    /// Sets the HyperlinkBase document property.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HyperlinkBase(System::String value) override;
    /// <summary>
    /// Returns the number of custom properties actually contained in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_CountOfCustomProperties() override;
    /// <summary>
    /// Indicates the display mode of the document thumbnail. 
    /// Set this element to <b>true</b> to enable scaling of the document thumbnail to the display. 
    /// Set this element to <b>false</b> to enable cropping of the document thumbnail to show only sections that fits the display.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ScaleCrop() override;
    /// <summary>
    /// Indicates the display mode of the document thumbnail. 
    /// Set this element to <b>true</b> to enable scaling of the document thumbnail to the display. 
    /// Set this element to <b>false</b> to enable cropping of the document thumbnail to show only sections that fits the display.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ScaleCrop(bool value) override;
    /// <summary>
    /// Indicates whether hyperlinks in a document are up-to-date. 
    /// Set this element to <b>true</b> to indicate that hyperlinks are updated. 
    /// Set this element to <b>false</b> to indicate that hyperlinks are outdated.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_LinksUpToDate() override;
    /// <summary>
    /// Indicates whether hyperlinks in a document are up-to-date. 
    /// Set this element to <b>true</b> to indicate that hyperlinks are updated. 
    /// Set this element to <b>false</b> to indicate that hyperlinks are outdated.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinksUpToDate(bool value) override;
    /// <summary>
    /// Specifies that one or more hyperlinks in this part were updated exclusively in this part by a producer. 
    /// The next producer to open this document shall update the hyperlink relationships with the new hyperlinks specified in this part.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_HyperlinksChanged() override;
    /// <summary>
    /// Specifies that one or more hyperlinks in this part were updated exclusively in this part by a producer. 
    /// The next producer to open this document shall update the hyperlink relationships with the new hyperlinks specified in this part.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HyperlinksChanged(bool value) override;
    /// <summary>
    /// Returns the total number of slides in a presentation document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Slides() override;
    /// <summary>
    /// Returns the number of hidden slides in a presentation document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_HiddenSlides() override;
    /// <summary>
    /// Returns the number of slides in a presentation containing notes.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Notes() override;
    /// <summary>
    /// Returns the total number of paragraphs found in a document if applicable.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Paragraphs() override;
    /// <summary>
    /// Returns the total number of words contained in a document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Words() override;
    /// <summary>
    /// Returns the total number of sound or video clips that are present in the document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_MultimediaClips() override;
    /// <summary>
    /// Specifies the title of each document part. 
    /// These parts are not document parts but conceptual representations of document sections.
    /// Read-only <see cref="System::ArrayPtr<System::String>"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> get_TitlesOfParts() override;
    /// <summary>
    /// Indicates the grouping of document parts and the number of parts in each group.
    /// Read-only <see cref="T:IHeadingPair[]"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IHeadingPair>> get_HeadingPairs() override;
    
    /// <summary>
    /// Return a custom property name at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of a custom property to get.</param>
    /// <returns>Custom property name at the specified index.</returns>
    /// <exception cref="System::ArgumentOutOfRangeException">Index is less than zero. Index is equal to or greater than Count.</exception>
    ASPOSE_SLIDES_SHARED_API System::String GetCustomPropertyName(int32_t index) override;
    /// <summary>
    /// Remove a custom property associated with a specified name.
    /// </summary>
    /// <param name="name">Name of a custom property to remove.</param>
    /// <returns>Return true if a property was removed, false otherwise.</returns>
    ASPOSE_SLIDES_SHARED_API bool RemoveCustomProperty(System::String name) override;
    /// <summary>
    /// Check presents of a custom property with a specified name.
    /// </summary>
    /// <param name="name">Name of a custom property to check.</param>
    /// <returns>Return true if property exists, false otherwise.</returns>
    ASPOSE_SLIDES_SHARED_API bool ContainsCustomProperty(System::String name) override;
    
    /// <summary>
    /// Returns the custom property associated with a specified name.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> idx_get(System::String name) override;
    /// <summary>
    /// Sets the custom property associated with a specified name.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void idx_set(System::String name, System::SharedPtr<System::Object> value) override;
    
    /// <summary>
    ///  Gets a named boolean value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void GetCustomPropertyValue(System::String name, bool& value) override;
    /// <summary>
    /// Gets a named integer value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void GetCustomPropertyValue(System::String name, int32_t& value) override;
    /// <summary>
    /// Gets a named DateTime value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void GetCustomPropertyValue(System::String name, System::DateTime& value) override;
    /// <summary>
    /// Gets a named string value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void GetCustomPropertyValue(System::String name, System::String& value) override;
    /// <summary>
    /// Gets a named float value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void GetCustomPropertyValue(System::String name, float& value) override;
    /// <summary>
    /// Gets a named double value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get.</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void GetCustomPropertyValue(System::String name, double& value) override;
    /// <summary>
    /// Sets a named boolean custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void SetCustomPropertyValue(System::String name, bool value) override;
    /// <summary>
    /// Sets a named integer custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void SetCustomPropertyValue(System::String name, int32_t value) override;
    /// <summary>
    /// Sets a named DateTime custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void SetCustomPropertyValue(System::String name, System::DateTime value) override;
    /// <summary>
    /// Sets a named string custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void SetCustomPropertyValue(System::String name, System::String value) override;
    /// <summary>
    /// Sets a named float custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void SetCustomPropertyValue(System::String name, float value) override;
    /// <summary>
    /// Sets a named double custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    ASPOSE_SLIDES_SHARED_API void SetCustomPropertyValue(System::String name, double value) override;
    /// <summary>
    /// Removes all custom properties.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void ClearCustomProperties() override;
    /// <summary>
    /// Clears and sets default values for all builtIn properties.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void ClearBuiltInProperties() override;
    
    /// <summary>
    /// Initializes new instance of class <see cref="Aspose::Slides::DocumentProperties">DocumentProperties</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API DocumentProperties();
    
    /// <summary>
    /// Clones current object
    /// </summary>
    /// <returns>Clone</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Clones current object
    /// </summary>
    /// <returns>Clone</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDocumentProperties> CloneT() override;
    
protected:

    /// @cond
    /// <summary>
    /// Returns the app version.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AppVersion(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> get_Thumbnail() const;
    ASPOSE_SLIDES_LOCAL_API void set_Thumbnail(System::ArrayPtr<uint8_t> value);
    /// <summary>
    /// Returns the total number of slides in a presentation document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Slides(int32_t value);
    /// <summary>
    /// Returns the number of hidden slides in a presentation document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HiddenSlides(int32_t value);
    /// <summary>
    /// Returns the number of slides in a presentation containing notes.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Notes(int32_t value);
    /// <summary>
    /// Returns the total number of paragraphs found in a document if applicable.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Paragraphs(int32_t value);
    /// <summary>
    /// Returns the total number of words contained in a document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Words(int32_t value);
    /// <summary>
    /// Returns the total number of sound or video clips that are present in the document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MultimediaClips(int32_t value);
    /// <summary>
    /// Specifies the title of each document part. 
    /// These parts are not document parts but conceptual representations of document sections.
    /// Read-only <see cref="System::ArrayPtr<System::String>"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TitlesOfParts(System::ArrayPtr<System::String> value);
    /// <summary>
    /// Indicates the grouping of document parts and the number of parts in each group.
    /// Read-only <see cref="T:IHeadingPair[]"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HeadingPairs(System::ArrayPtr<System::SharedPtr<IHeadingPair>> value);
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> GetCustomProperty(System::String name);
    ASPOSE_SLIDES_LOCAL_API void SetCustomProperty(System::String name, System::SharedPtr<System::Object> holder);
    
    ASPOSE_SLIDES_LOCAL_API DocumentProperties(System::SharedPtr<Presentation> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentProperties, CODEPORTING_ARGS(System::SharedPtr<Presentation> parent));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::String GetNameOfApplicationFromAssembly();
    static ASPOSE_SLIDES_LOCAL_API System::String GetAppVersionFromAssembly();
    ASPOSE_SLIDES_LOCAL_API bool IsCreatedBySupportedApplication();
    ASPOSE_SLIDES_LOCAL_API void RecordLastSavedTime(System::DateTime dateTime);
    /// @endcond
    
private:

    System::ArrayPtr<uint8_t> pr_Thumbnail;
    int32_t pr_Slides;
    int32_t pr_HiddenSlides;
    int32_t pr_Notes;
    int32_t pr_Paragraphs;
    int32_t pr_Words;
    int32_t pr_MultimediaClips;
    System::ArrayPtr<System::String> pr_TitlesOfParts;
    System::ArrayPtr<System::SharedPtr<IHeadingPair>> pr_HeadingPairs;
    System::SharedPtr<System::Collections::Generic::SortedList<System::String, System::SharedPtr<System::Object>>> m_customProperties;
    int32_t m_revision;
    System::TimeSpan m_totalTime;
    System::ArrayPtr<System::String> m_builtInStrings;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_titleIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_subjectIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_authorIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_keywordsIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_commentsIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_categoryIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_contentStatusIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_contentTypeIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_lastSavedByIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_nameOfApplicationIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_companyIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_managerIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_presentationFormatIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_applicationTemplateIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_hyperlinkBaseIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_appVersionIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_stringPropsCount;
    System::ArrayPtr<System::DateTime> m_builtInDateTimes;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_createdTimeIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_lastSavedTimeIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_lastPrintedIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_datePropsCount;
    System::ArrayPtr<bool> m_builtInBools;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_sharedDocIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_scaleCropIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_linksUpToDateIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_hyperlinksChangedIndex;
    static const ASPOSE_SLIDES_LOCAL_API int32_t c_boolPropsCount;
    System::WeakPtr<Presentation> m_parent;
    
    ASPOSE_SLIDES_LOCAL_API void Init();
    
};

} // namespace Slides
} // namespace Aspose


