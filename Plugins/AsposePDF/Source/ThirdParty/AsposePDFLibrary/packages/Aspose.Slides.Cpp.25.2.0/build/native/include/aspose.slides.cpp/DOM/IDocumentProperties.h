#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IHeadingPair;
} // namespace Slides
} // namespace Aspose
namespace System
{
class DateTime;
class TimeSpan;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties of a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDocumentProperties : public virtual System::Object
{
    typedef IDocumentProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the app version.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// The content of this element shall be in the form XX.YYYY, where X and Y represent numerical values;
    /// otherwise, the document shall be considered non-conformant.
    /// Aspose.Slides represents its version in the format XX.YYZZ, where:
    /// XX - major version
    /// YY - minor version
    /// ZZ - patch version
    /// For example, the value 23.0105 means Aspose.Slides version 23.1.5.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_AppVersion() = 0;
    /// <summary>
    /// Returns the name of the application.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NameOfApplication() = 0;
    /// <summary>
    /// Sets the name of the application.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NameOfApplication(System::String value) = 0;
    /// <summary>
    /// Returns the company property.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Company() = 0;
    /// <summary>
    /// Sets the company property.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Company(System::String value) = 0;
    /// <summary>
    /// Returns the manager property.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Manager() = 0;
    /// <summary>
    /// Sets the manager property.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Manager(System::String value) = 0;
    /// <summary>
    /// Returns the intended format of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_PresentationFormat() = 0;
    /// <summary>
    /// Sets the intended format of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PresentationFormat(System::String value) = 0;
    /// <summary>
    /// Determines whether the presentation is shared between multiple people.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SharedDoc() = 0;
    /// <summary>
    /// Determines whether the presentation is shared between multiple people.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SharedDoc(bool value) = 0;
    /// <summary>
    /// Returns the template of a application.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ApplicationTemplate() = 0;
    /// <summary>
    /// Sets the template of a application.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ApplicationTemplate(System::String value) = 0;
    /// <summary>
    /// Total editing time of a presentation.
    /// Read <see cref="System::TimeSpan"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::TimeSpan get_TotalEditingTime() = 0;
    /// <summary>
    /// Total editing time of a presentation.
    /// Write <see cref="System::TimeSpan"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TotalEditingTime(System::TimeSpan value) = 0;
    /// <summary>
    /// Returns the title of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Title() = 0;
    /// <summary>
    /// Sets the title of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Title(System::String value) = 0;
    /// <summary>
    /// Returns the subject of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Subject() = 0;
    /// <summary>
    /// Sets the subject of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Subject(System::String value) = 0;
    /// <summary>
    /// Returns the author of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Author() = 0;
    /// <summary>
    /// Sets the author of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Author(System::String value) = 0;
    /// <summary>
    /// Returns the keywords of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Keywords() = 0;
    /// <summary>
    /// Sets the keywords of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Keywords(System::String value) = 0;
    /// <summary>
    /// Returns the comments of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Comments() = 0;
    /// <summary>
    /// Sets the comments of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Comments(System::String value) = 0;
    /// <summary>
    /// Returns the category of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Category() = 0;
    /// <summary>
    /// Sets the category of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Category(System::String value) = 0;
    /// <summary>
    /// Returns the date a presentation was created. 
    /// Values are in UTC.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::DateTime get_CreatedTime() = 0;
    /// <summary>
    /// Returns the date a presentation was created. 
    /// Values are in UTC.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CreatedTime(System::DateTime value) = 0;
    /// <summary>
    /// Returns the date a presentation was last modified.
    /// Values are in UTC.P
    /// Read-only in case of Presentation.DocumentProperties (because it will be updated internally while IPresentation object saving process). 
    /// Can be changed via DocumentProperties instance returning by method <see cref="IPresentationInfo::ReadDocumentProperties"></see>
    /// Please see the example in <see cref="IPresentationInfo::UpdateDocumentProperties"></see> method summary.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::DateTime get_LastSavedTime() = 0;
    /// <summary>
    /// Returns the date a presentation was last modified.
    /// Values are in UTC.P
    /// Read-only in case of Presentation.DocumentProperties (because it will be updated internally while IPresentation object saving process). 
    /// Can be changed via DocumentProperties instance returning by method <see cref="IPresentationInfo::ReadDocumentProperties"></see>
    /// Please see the example in <see cref="IPresentationInfo::UpdateDocumentProperties"></see> method summary.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LastSavedTime(System::DateTime value) = 0;
    /// <summary>
    /// Returns the date when a presentation was printed last time.
    /// Read <see cref="System::DateTime"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::DateTime get_LastPrinted() = 0;
    /// <summary>
    /// Returns the date when a presentation was printed last time.
    /// Write <see cref="System::DateTime"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LastPrinted(System::DateTime value) = 0;
    /// <summary>
    /// Returns the name of a last person who modified a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_LastSavedBy() = 0;
    /// <summary>
    /// Sets the name of a last person who modified a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LastSavedBy(System::String value) = 0;
    /// <summary>
    /// Returns the presentation revision number.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_RevisionNumber() = 0;
    /// <summary>
    /// Sets the presentation revision number.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RevisionNumber(int32_t value) = 0;
    /// <summary>
    /// Returns the content status of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ContentStatus() = 0;
    /// <summary>
    /// Sets the content status of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ContentStatus(System::String value) = 0;
    /// <summary>
    /// Returns the content type of a presentation.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ContentType() = 0;
    /// <summary>
    /// Sets the content type of a presentation.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ContentType(System::String value) = 0;
    /// <summary>
    /// Returns the HyperlinkBase document property.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_HyperlinkBase() = 0;
    /// <summary>
    /// Sets the HyperlinkBase document property.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HyperlinkBase(System::String value) = 0;
    /// <summary>
    /// Indicates the display mode of the document thumbnail. 
    /// Set this element to <b>true</b> to enable scaling of the document thumbnail to the display. 
    /// Set this element to <b>false</b> to enable cropping of the document thumbnail to show only sections that fits the display.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ScaleCrop() = 0;
    /// <summary>
    /// Indicates the display mode of the document thumbnail. 
    /// Set this element to <b>true</b> to enable scaling of the document thumbnail to the display. 
    /// Set this element to <b>false</b> to enable cropping of the document thumbnail to show only sections that fits the display.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ScaleCrop(bool value) = 0;
    /// <summary>
    /// Indicates whether hyperlinks in a document are up-to-date. 
    /// Set this element to <b>true</b> to indicate that hyperlinks are updated. 
    /// Set this element to <b>false</b> to indicate that hyperlinks are outdated.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_LinksUpToDate() = 0;
    /// <summary>
    /// Indicates whether hyperlinks in a document are up-to-date. 
    /// Set this element to <b>true</b> to indicate that hyperlinks are updated. 
    /// Set this element to <b>false</b> to indicate that hyperlinks are outdated.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinksUpToDate(bool value) = 0;
    /// <summary>
    /// Specifies that one or more hyperlinks in this part were updated exclusively in this part by a producer. 
    /// The next producer to open this document shall update the hyperlink relationships with the new hyperlinks specified in this part.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HyperlinksChanged() = 0;
    /// <summary>
    /// Specifies that one or more hyperlinks in this part were updated exclusively in this part by a producer. 
    /// The next producer to open this document shall update the hyperlink relationships with the new hyperlinks specified in this part.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HyperlinksChanged(bool value) = 0;
    /// <summary>
    /// Specifies the total number of slides in a presentation document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Slides() = 0;
    /// <summary>
    /// Specifies the number of hidden slides in a presentation document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_HiddenSlides() = 0;
    /// <summary>
    /// Specifies the number of slides in a presentation containing notes.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Notes() = 0;
    /// <summary>
    /// Specifies the total number of paragraphs found in a document if applicable.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Paragraphs() = 0;
    /// <summary>
    /// Specifies the total number of words contained in a document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Words() = 0;
    /// <summary>
    /// Specifies the total number of sound or video clips that are present in the document.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_MultimediaClips() = 0;
    /// <summary>
    /// Specifies the title of each document part. 
    /// These parts are not document parts but conceptual representations of document sections.
    /// Read-only <see cref="System::ArrayPtr<System::String>"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> get_TitlesOfParts() = 0;
    /// <summary>
    /// Indicates the grouping of document parts and the number of parts in each group.
    /// Read-only <see cref="T:IHeadingPair[]"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IHeadingPair>> get_HeadingPairs() = 0;
    /// <summary>
    /// Returns the number of custom properties actually contained in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_CountOfCustomProperties() = 0;
    
    /// <summary>
    /// Return a custom property name at the specified index.
    /// </summary>
    /// <param name="index">The zero-based index of a custom property to get.</param>
    /// <returns>Custom property name at the specified index.</returns>
    /// <exception cref="System::ArgumentOutOfRangeException">
    /// Index is less than zero. Index is equal to or greater than Count.
    /// </exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetCustomPropertyName(int32_t index) = 0;
    /// <summary>
    /// Remove a custom property associated with a specified name.
    /// </summary>
    /// <param name="name">Name of a custom property to remove.</param>
    /// <returns>Return true if a property was removed, false otherwise.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool RemoveCustomProperty(System::String name) = 0;
    /// <summary>
    /// Check presents of a custom property with a specified name.
    /// </summary>
    /// <param name="name">Name of a custom property to check.</param>
    /// <returns>Return true if property exists, false otherwise.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool ContainsCustomProperty(System::String name) = 0;
    
    /// <summary>
    /// Returns the custom property associated with a specified name.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>double</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> idx_get(System::String name) = 0;
    /// <summary>
    /// Sets the custom property associated with a specified name.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    /// <remarks>
    /// Value can be <b>int</b>, <b>float</b>, <b>double</b>, <b>string</b>, <b>bool</b> or <b>DateTime</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void idx_set(System::String name, System::SharedPtr<System::Object> value) = 0;
    
    /// <summary>
    /// Removes all custom properties.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ClearCustomProperties() = 0;
    /// <summary>
    /// Clears and sets default values for all builtIn properties.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ClearBuiltInProperties() = 0;
    /// <summary>
    ///  Gets a named boolean value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void GetCustomPropertyValue(System::String name, bool& value) = 0;
    /// <summary>
    /// Gets a named integer value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void GetCustomPropertyValue(System::String name, int32_t& value) = 0;
    /// <summary>
    /// Gets a named DateTime value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void GetCustomPropertyValue(System::String name, System::DateTime& value) = 0;
    /// <summary>
    /// Gets a named string value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void GetCustomPropertyValue(System::String name, System::String& value) = 0;
    /// <summary>
    /// Gets a named float value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void GetCustomPropertyValue(System::String name, float& value) = 0;
    /// <summary>
    /// Gets a named double value from the custom properties.
    /// </summary>
    /// <param name="name">Name of the custom property to get.</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void GetCustomPropertyValue(System::String name, double& value) = 0;
    /// <summary>
    /// Sets a named boolean custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCustomPropertyValue(System::String name, bool value) = 0;
    /// <summary>
    /// Sets a named integer custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCustomPropertyValue(System::String name, int32_t value) = 0;
    /// <summary>
    /// Sets a named DateTime custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCustomPropertyValue(System::String name, System::DateTime value) = 0;
    /// <summary>
    /// Sets a named string custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCustomPropertyValue(System::String name, System::String value) = 0;
    /// <summary>
    /// Sets a named float custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCustomPropertyValue(System::String name, float value) = 0;
    /// <summary>
    /// Sets a named double custom property.
    /// </summary>
    /// <param name="name">Name of the custom property to set</param>
    /// <param name="value">Custom property value</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetCustomPropertyValue(System::String name, double value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


