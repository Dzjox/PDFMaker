#include "pch.h"
#include <iostream>
#include "Aspose.Pdf.h"
#include "AsposeHelper.h"

using namespace System;
using namespace Aspose::Pdf;
using namespace Aspose::Pdf::Text;

namespace AsposeHelper
{
	void CreatePDF() 
	{
		std::cout << "Creating PDF" << "\n";

		// ExStart:CreatePdf	
		auto doc = MakeObject<Document>();
		auto pages = doc->get_Pages();
		pages->Add();


		// Numeration of Pages starts from 1
		auto page = pages->idx_get(1);
		auto paragraps = page->get_Paragraphs();

		paragraps->Add(MakeObject<TextFragment>(u"Hello World!"));

		std::cout << "Creating PDF 1" << "\n";

		auto text = MakeObject<TextFragment>(u"This example is created by Aspose.Pdf for C++.");
		auto ts = text->get_TextState();

		std::cout << "Creating PDF 2" << "\n";

		ts->set_FontSize(16);
		ts->set_FontStyle(FontStyles::Italic);
		paragraps->Add(text);

		std::cout << "Creating PDF 3" << "\n";

		doc->Save(u"input_out.pdf");

		std::cout << "Pdf file created successfully." << "\n";
		//// ExEnd:CreatePdf
		////Console::WriteLine(u"Pdf file created successfully.");
	}

	void CreatePPTX()
	{
		std::cout << "Creating PPTX" << "\n";

		//// ExStart:CreatePdf	
		//auto doc = MakeObject<Document>();
		//auto pages = doc->get_Pages();
		//pages->Add();
		//// Numeration of Pages starts from 1
		//auto page = pages->idx_get(1);
		//auto paragraps = page->get_Paragraphs();

		//paragraps->Add(MakeObject<TextFragment>(u"Hello World!"));

		//auto text = MakeObject<TextFragment>(u"This example is created by Aspose.Pdf for C++.");
		//auto ts = text->get_TextState();

		//ts->set_FontSize(16);
		//ts->set_FontStyle(FontStyles::Italic);
		//paragraps->Add(text);

		//doc->Save(u"..\\Data\\Text\\input_out.pptx", (SaveFormat) 3);
		//// ExEnd:CreatePdf
		////Console::WriteLine(u"Pptx file created successfully.");
	}
}