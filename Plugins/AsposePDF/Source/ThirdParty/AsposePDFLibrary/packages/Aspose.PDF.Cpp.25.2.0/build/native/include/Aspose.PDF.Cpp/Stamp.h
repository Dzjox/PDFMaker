﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/nullable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
enum class HorizontalAlignment;
class ImageStamp;
class Matrix;
class Page;
class PdfPageStamp;
class Point;
class Rectangle;
enum class Rotation;
class TextStamp;
enum class VerticalAlignment;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// An abstract class for various kinds of stamps which come as descendants.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Stamp : public System::Object
{
    typedef Stamp ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    
public:

    /// <summary>
    /// Sets or gets a bool value that indicates the content is stamped as background.
    /// If the value is true, the stamp content is layed at the bottom.
    /// By defalt, the value is false, the stamp content is layed at the top.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Background() const;
    /// <summary>
    /// Sets or gets a bool value that indicates the content is stamped as background.
    /// If the value is true, the stamp content is layed at the bottom.
    /// By defalt, the value is false, the stamp content is layed at the top.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Background(bool value);
    /// <summary>
    /// Gets a value to indicate the stamp opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Opacity() const;
    /// <summary>
    /// Sets a value to indicate the stamp opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Opacity(double value);
    /// <summary>
    /// Gets a value to indicate the stamp outline opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_OutlineOpacity() const;
    /// <summary>
    /// Sets a value to indicate the stamp outline opacity. The value is from 0.0 to 1.0.
    /// By default the value is 1.0.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutlineOpacity(double value);
    /// <summary>
    /// Gets a value of the stamp outline width.
    /// By default the value is 1.0.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_OutlineWidth() const;
    /// <summary>
    /// Sets a value of the stamp outline width.
    /// By default the value is 1.0.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OutlineWidth(double value);
    /// <summary>
    /// Sets or gets the rotation of stamp content according <see cref="Rotation"></see> values.
    /// Note. This property is for set angles which are multiples of 90 degrees (0, 90, 180, 270 degrees).
    /// To set arbitrary angle use RotateAngle property. 
    /// If angle set by ArbitraryAngle is not multiple of 90 then Rotate property returns Rotation.None.
    /// </summary>
    ASPOSE_PDF_SHARED_API Rotation get_Rotate();
    /// <summary>
    /// Sets or gets the rotation of stamp content according <see cref="Rotation"></see> values.
    /// Note. This property is for set angles which are multiples of 90 degrees (0, 90, 180, 270 degrees).
    /// To set arbitrary angle use RotateAngle property. 
    /// If angle set by ArbitraryAngle is not multiple of 90 then Rotate property returns Rotation.None.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotate(Rotation value);
    /// <summary>
    /// Horizontal stamp coordinate, starting from the left.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double get_XIndent();
    /// <summary>
    /// Horizontal stamp coordinate, starting from the left.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_XIndent(double value);
    /// <summary>
    /// Vertical stamp coordinate, starting from the bottom.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double get_YIndent();
    /// <summary>
    /// Vertical stamp coordinate, starting from the bottom.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_YIndent(double value);
    /// <summary>
    /// Gets Horizontal alignment of stamp on the page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment() const;
    /// <summary>
    /// Sets Horizontal alignment of stamp on the page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets vertical alignment of stamp on page.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment() const;
    /// <summary>
    /// Sets vertical alignment of stamp on page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets left margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LeftMargin() const;
    /// <summary>
    /// Sets left margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeftMargin(double value);
    /// <summary>
    /// Gets right margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RightMargin() const;
    /// <summary>
    /// Sets right margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RightMargin(double value);
    /// <summary>
    /// Gets bottom margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_BottomMargin() const;
    /// <summary>
    /// Sets bottom margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BottomMargin(double value);
    /// <summary>
    /// Gets top margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_TopMargin() const;
    /// <summary>
    /// Sets top margin of stamp.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TopMargin(double value);
    /// <summary>
    /// Horizontal zooming factor of the stamp. Allows to scale stamp horizontally.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_ZoomX() const;
    /// <summary>
    /// Horizontal zooming factor of the stamp. Allows to scale stamp horizontally.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ZoomX(double value);
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double get_Width();
    /// <summary>
    /// Desired width of the stamp on the page. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API double get_Height();
    /// <summary>
    /// Desired height of the stamp on the page. 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Height(double value);
    /// <summary>
    /// Vertical zooming factor of the stamp. Allows to scale stamp vertically.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_ZoomY() const;
    /// <summary>
    /// Vertical zooming factor of the stamp. Allows to scale stamp vertically.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ZoomY(double value);
    /// <summary>
    /// Zooming factor of the stamp. Allows to scale stamp.
    /// Please note that pair of properties ZoomX and ZoomY allows to set zoom factor for every axe separately. 
    /// Setting of this property changes both ZoomX and ZoomY properties. 
    /// If ZoomX and ZoomY are different then Zoom property returns ZoomX value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Zoom() const;
    /// <summary>
    /// Zooming factor of the stamp. Allows to scale stamp.
    /// Please note that pair of properties ZoomX and ZoomY allows to set zoom factor for every axe separately. 
    /// Setting of this property changes both ZoomX and ZoomY properties. 
    /// If ZoomX and ZoomY are different then Zoom property returns ZoomX value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Zoom(double value);
    /// <summary>
    /// Gets rotate angle of stamp in degrees.
    /// This property allows to set arbitrary rotate angle. 
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RotateAngle();
    /// <summary>
    /// Sets rotate angle of stamp in degrees.
    /// This property allows to set arbitrary rotate angle. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RotateAngle(double value);
    
    /// <summary>
    /// Adds stamp on the page.
    /// </summary>
    /// <param name="page">
    /// The page to add stamp.
    /// </param>
    virtual ASPOSE_PDF_SHARED_API void Put(System::SharedPtr<Page> page) = 0;
    /// <summary>
    /// Sets stamp Id.
    /// </summary>
    /// <param name="value">New value of Stamp ID.</param>
    ASPOSE_PDF_SHARED_API void setStampId(int32_t value);
    /// <summary>
    /// Returns stamp ID.
    /// </summary>
    /// <returns>Identifier of the stamp.</returns>
    ASPOSE_PDF_SHARED_API int32_t getStampId();
    
    ASPOSE_PDF_SHARED_API Stamp();
    
protected:

    System::Nullable<int32_t> _mcid;
    /// <summary>
    /// Horizontal alignment of the stamp.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment _horizontalAlignment;
    /// <summary>
    /// Vertical alignemtn of the stamp.
    /// </summary>
    Aspose::Pdf::VerticalAlignment _verticalAlignment;
    
    /// <summary>
    /// Returns rectangle of the stamp on page.
    /// </summary>
    /// <returns>Stamp rectangle.</returns>
    virtual System::SharedPtr<Rectangle> getRect() = 0;
    /// <summary>
    /// Returns point if the stamp on the page.
    /// </summary>
    /// <param name="page">Page where the stamp is placed.</param>
    /// <returns>Point of the stamp.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> getPoint(System::SharedPtr<Page> page);
    /// <summary>
    /// This method checks document to which stamp is applied. If the document was changed then cached objects (for example Form XObject, Image, graphic state etc)
    /// Are cleared. This is made to avoid document damage (see for example 36049)
    /// </summary>
    /// <param name="doc"></param>
    void UpdateCache(System::SharedPtr<Document> doc);
    virtual ASPOSE_PDF_SHARED_API void ClearCache();
    System::SharedPtr<Engine::Data::IPdfDictionary> GetParentResources(System::SharedPtr<Engine::Data::IPdfDictionary> dict);
    System::SharedPtr<Engine::Data::IPdfDictionary> GetResources(System::SharedPtr<Page> page);
    /// <summary>
    /// Add G state on the page for stamp.
    /// </summary>
    /// <param name="page">Page where </param>
    /// <returns>Name of added GState.</returns>
    ASPOSE_PDF_SHARED_API System::String addExtGState(System::SharedPtr<Page> page);
    /// <summary>
    /// Calculates matrix of the stamp
    /// </summary>
    /// <param name="page">Page for which matrix is requested.</param>
    /// <returns>Matrix of the page.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> getMatrix(System::SharedPtr<Page> page);
    /// <summary>
    /// Retuns matrix which used for rotation the stamp; 
    /// </summary>
    /// <returns>Rotation matrix for the stamp.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> getStampRotationMatrix();
    /// <summary>
    /// Returns transformation matrix for page.
    /// </summary>
    /// <param name="page">Page where stamp is placed.</param>
    /// <returns>Rotation matrix of the stamp.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> getPageRotationMatrix(System::SharedPtr<Page> page);
    /// <summary>
    /// Returns scaling matrix of the stamp.
    /// </summary>
    /// <returns>Scale matrix of the stamp.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> getScaleMatrix();
    /// <summary>
    /// This matrix used in CM operator; it's must be different for Image Stamp
    /// </summary>
    /// <returns>Requested matrix.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix> getSizeMatrix();
    /// <summary>
    /// Write operators for showing stamp to the page contents.
    /// </summary>
    /// <param name="page">Page where stamp should be drawn.</param>
    /// <param name="name">Name of the stamp.</param>
    /// <param name="xIndent">Indent for X axis.</param>
    /// <param name="yIndent">Indent for Y axis.</param>
    virtual ASPOSE_PDF_SHARED_API void drawStampOnPage(System::SharedPtr<Page> page, System::String name, double xIndent = 0, double yIndent = 0);
    void updateStampId(System::SharedPtr<Engine::Data::IPdfPrimitive> instance);
    
private:

    bool _background;
    double _nonstrokingOpacity;
    double _strokingOpacity;
    double _lineWidth;
    double _rotate;
    double _xindent;
    double _yindent;
    System::SharedPtr<Matrix> _rotationMatrix;
    System::SharedPtr<Rectangle> _stampRect;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _zoomX;
    double _zoomY;
    int32_t _stampId;
    System::SharedPtr<Engine::Data::IPdfObject> _gState;
    System::SharedPtr<Document> _attachedDocument;
    
    double NormalizeAngle(double angle);
    bool IsBracketed(System::SharedPtr<Page> page);
    
};

} // namespace Pdf
} // namespace Aspose


