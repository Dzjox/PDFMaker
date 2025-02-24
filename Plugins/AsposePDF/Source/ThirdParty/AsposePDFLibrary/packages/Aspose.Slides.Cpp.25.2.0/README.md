# C++ Class Library to Process Presentations

![Version 25.2](https://img.shields.io/badge/nuget-v25.2-blue) ![Nuget](https://img.shields.io/nuget/dt/Aspose.Slides.Cpp)

[![banner](https://raw.githubusercontent.com/Aspose/aspose.github.io/master/img/banners/aspose_slides-for-cpp-banner.png)](https://downloads.aspose.com/slides/cpp)

[Product Page](https://products.aspose.com/slides/cpp/) | [Docs](https://docs.aspose.com/slides/cpp/) | [Demos](https://products.aspose.app/slides/family) | [API Reference](https://reference.aspose.com/slides/cpp) | [Examples](https://github.com/aspose-slides/Aspose.Slides-for-C) | [Blog](https://blog.aspose.com/category/slides/) | [Search](https://search.aspose.com/) | [Free Support](https://forum.aspose.com/c/slides) | [Temporary License](https://purchase.aspose.com/temporary-license) | [32-bit edition](https://www.nuget.org/packages/Aspose.Slides.Cpp.x86)

A [standalone C++ class library](https://products.aspose.com/slides/cpp/) to create, read, write, edit & convert Microsoft PowerPoint&reg; presentations without needing PowerPoint or Office Automation.

Without having to install PowerPoint or any 3rd party component, you can use Aspose.Slides to build different types of C++ applications. For example, Aspose, using its own APIs, developed these free web applications for popular conversion processes: [PowerPoint to Word](https://products.aspose.app/slides/conversion/ppt-to-word), [PowerPoint to PDF](https://products.aspose.app/slides/conversion), and [PowerPoint to JPG](https://products.aspose.app/slides/conversion/ppt-to-jpg). 

>Aspose.Slides for C++ requires you to use C++ to code. 
>For .NET, Java and Python languages, we recommend you get [Aspose.Slides for .NET](https://products.aspose.com/slides/net/), [Aspose.Slides for Java](https://products.aspose.com/slides/java/) and [Aspose.Slides for Python via .NET](https://products.aspose.com/slides/python-net/), respectively. 

## Presentation Processing Features

- Create, open, and work with presentations without Microsoft PowerPoint.
- [Convert presentation](https://docs.aspose.com/slides/cpp/convert-presentation/) to any of the [supported file formats](https://docs.aspose.com/slides/cpp/supported-file-formats/).
- Adding, formatting, and manipulating charts, shapes, slides, SmartArt, [tables](https://docs.aspose.com/slides/cpp/powerpoint-table/), and text in presentations.

## Read & Write PowerPoint Files

**Microsoft PowerPoint:** PPT, POT, PPS, PPTX, POTX, PPSX, PPTM, PPSM, POTM\
**OpenDocument:** ODP, OTP\
**Metafile:** EMF\
**Image:** TIFF, XML

## Save Presentation As

**Fixed Layout:** PDF, XPS\
**Image:** JPEG, PNG, GIF, BMP, SVG\
**Web:** HTML

## Platform Independence

Aspose.Slides for C++ is a native C++ library that supports 32-bit and 64-bit operating systems. The supported platforms include Windows (Microsoft Visual Studio 2017 or later), Linux (Clang 3.9 or later, GCC 6.1 or later) and macOS (Xcode 13.4 or later). All versions of Aspose.Slides for C++ are available on the [download page](https://releases.aspose.com/slides/cpp).

## Get Started

Let's give Aspose.Slides for C++ a try! Simply execute `Install-Package Aspose.Slides.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.Slides for C++ and want to upgrade the version, please execute `Update-Package Aspose.Slides.Cpp` to get the latest version.

## Create PPTX Presentation using C++

Try executing the below code snippet to see how Aspose.Slides for C++ performs in your environment or check the [GitHub Repository](https://github.com/aspose-slides/Aspose.Slides-for-C) for other common usage scenarios. 

```c++
// instantiate Presentation class that represents PPTX file
SharedPtr<Presentation> pres = MakeObject<Presentation>();
SharedPtr<ISlide> slide = pres->get_Slides()->idx_get(0);

// add an autoshape of type line
slide->get_Shapes()->AddAutoShape(Aspose::Slides::ShapeType::Line, 50.0, 150.0, 300.0, 0.0);
// save presentation
pres->Save(u"output.pptx", Aspose::Slides::Export::SaveFormat::Pptx);
```

## Convert PPTX to PDF using C++

The following code sample demonstrates the conversion of Microsoft PowerPoint PPTX presentation to PDF format with C++:

```c++
// instantiate Presentation class that represents PPTX file
SharedPtr<Presentation> pres = MakeObject<Presentation>(u"template.pptx");
pres->Save(u"output.pdf", Aspose::Slides::Export::SaveFormat::Pdf);
```

[Product Page](https://products.aspose.com/slides/cpp/) | [Docs](https://docs.aspose.com/slides/cpp/) | [Demos](https://products.aspose.app/slides/family) | [API Reference](https://reference.aspose.com/slides/cpp) | [Examples](https://github.com/aspose-slides/Aspose.Slides-for-C) | [Blog](https://blog.aspose.com/category/slides/) | [Search](https://search.aspose.com/) | [Free Support](https://forum.aspose.com/c/slides) | [Temporary License](https://purchase.aspose.com/temporary-license) | [32-bit edition](https://www.nuget.org/packages/Aspose.Slides.Cpp.x86)
