#include "pch.h"
#include <iostream>
#include "Aspose.Pdf.h"
#include "AsposeHelper.h"
#include "DOM/Presentation.h"
#include "DOM/ISlide.h"
#include "DOM/ISlideCollection.h"
#include "DOM/IAutoShape.h"
#include "DOM/ShapeType.h"
#include "DOM/IParagraph.h"
#include "DOM/ITextFrame.h"
#include "DOM/IParagraphCollection.h"
#include "DOM/IPortionCollection.h"
#include "DOM/IPortion.h"
#include "DOM/IBaseSlide.h"
#include "DOM/IShapeCollection.h"
#include "DOM/IImageCollection.h"
#include "Export/IPptxOptions.h"
#include "Export/SaveFormat.h"
#include "LoadingStreamBehavior.h"


using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;
using namespace Aspose::Slides;
using namespace System::IO;

namespace AsposeHelper
{
	void CreatePDF(std::vector<std::string> Lines, std::string ImagePath)
	{
		// ExStart:CreatePdf	
		auto doc = MakeObject<Document>();
		auto pages = doc->get_Pages();
		pages->Add();

		//std::cout << "hello 1" << "\n";

		// Numeration of Pages starts from 1
		auto page = pages->idx_get(1);
		auto paragraps = page->get_Paragraphs();

		paragraps->Add(MakeObject<TextFragment>(u"Hello World!"));

		SmartPtr<TextFragment> textFragment;
		SmartPtr<TextFragmentState> textFragmentState;

		for (int i = 0; i < Lines.size(); i++)
		{
			textFragment = MakeObject<TextFragment>(String(Lines[i]));
			textFragmentState = textFragment->get_TextState();
			textFragmentState->set_FontSize(26);
			textFragmentState->set_FontStyle(FontStyles::Italic);
			paragraps->Add(textFragment);

		}

		auto imageStream = System::IO::File::OpenRead(String(ImagePath));
		double x = 100.0, y = 600.0, width = 200.0, height = 200.0;
		auto rect = MakeObject<Aspose::Pdf::Rectangle>(x, y, x + width, y + height);
		page->AddImage(imageStream, rect);

		doc->Save(u"input_out.pdf");
	}

	void CreatePPTX(std::vector<std::string> Lines, std::string ImagePath)
	{

		SharedPtr<Presentation> presentation = MakeObject<Presentation>();

		SharedPtr<ISlide> slide = presentation->get_Slides()->idx_get(0);

		SharedPtr<IAutoShape>  autoShape;
		SharedPtr<ITextFrame> txtFrame;
		SharedPtr<IParagraph> paragraph;
		SharedPtr<IPortion> portion;

		for (int i = 0; i < Lines.size(); i++)
		{
			autoShape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 150, 75, 150, 50);

			autoShape->AddTextFrame(u" ");

			txtFrame = autoShape->get_TextFrame();
			paragraph = txtFrame->get_Paragraphs()->idx_get(0);
			portion = paragraph->get_Portions()->idx_get(0);

			portion->set_Text(String(Lines[i]));

		}

		auto fileStream = MakeObject<FileStream>(String(ImagePath), FileMode::Open);
		auto img = presentation->get_Images()->AddImage(fileStream, LoadingStreamBehavior::KeepLocked);
		presentation->get_Slide(0)->get_Shapes()->AddPictureFrame(ShapeType::Rectangle, 0.0f, 0.0f, 300.0f, 200.0f, img);

		presentation->Save(u"input_out.pptx", Export::SaveFormat::Pptx);
	}
}