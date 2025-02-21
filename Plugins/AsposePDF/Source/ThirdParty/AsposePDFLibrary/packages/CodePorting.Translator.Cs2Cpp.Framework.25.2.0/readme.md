# Description

CodePorting.Translator Cs2Cpp is a framework capable of translating C# code to C++. The resulting code provides the same API original .Net code had and can run in the translated (unmanaged) C++ environment.

CodePorting.Translator.Cs2Cpp.Framework package contains a C++ Library with a substitution for .Net classes and some service code. The translated code is ultimately dependent on this component.

If you use the full CodePorting.Translator Cs2Cpp package to translate your code, this library is already included in it, and you don't need to manage this dependency manually as the translator will generate CMake project files with proper references. However, if you're planning to distribute your translated code, providing the dependency on CodePorting.Translator.Cs2Cpp.Framework Nuget package (where applicable) is the easiest way to do so. Alternatively, you may ask your clients to [download respectful CodePorting.Translator.Cs2Cpp packages from the CodePorting website](https://products.codeporting.com/translator/csharp-to-cpp/release).

Always make sure that the version of the translator used to translate your code matches the version of the CodePorting.Translator.Cs2Cpp.Framework package you use. Failing to do so can result in compilation and/or runtime errors, since the API may change between the versions.

# Usage

The types from this package can be used in the client's code to interact with the translated code. Please make sure to use proper smart pointer wrappers for class-like types. For more information, please refer [to the product documentation](https://products.codeporting.com/translator/csharp-to-cpp).

```
#include <system/string.h>
#include <system/console.h>
#include <system/collections/list.h>
#include <MyTranslatedProject/MyTranslatedClass.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace MyTranslatedProject;

int main(int, char*[])
{
    auto list = MakeObject<List<String>>();
    list->Add(u"Apple");
    list->Add(u"Banana");
    list->Add(u"Apricot");
    list->Sort();

    auto myobj = MakeObject<MyTranslatedClass>();
    list = myobj->Process(list);

    for (const auto &item : list)
        Console::WriteLine(item);
    return 0;
}
```

# Resources

* **Website:** [www.codeporting.com](https://www.codeporting.com)
* **Product Home:** [CodePorting.Translator Cs2Cpp](https://products.codeporting.com/translator/csharp-to-cpp)
* **Download:** [Install CodePorting.Translator Cs2Cpp](https://products.codeporting.com/translator/csharp-to-cpp/release)
* **Documentation:** [CodePorting.Translator Cs2Cpp Documentation](https://products.codeporting.com/translator/csharp-to-cpp)
* **Articles:** [CodePorting Articles](https://www.codeporting.com/articles)
