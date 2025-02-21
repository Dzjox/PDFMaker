#include "pch.h"
#include <iostream>
#include "Aspose.Pdf.h"
#include "AsposeHelper.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

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

		doc->Save(u"input_out.pptx", (SaveFormat) 3);
	}
}