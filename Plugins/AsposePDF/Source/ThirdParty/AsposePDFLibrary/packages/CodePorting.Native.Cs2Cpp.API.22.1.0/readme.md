# Description

CodePorting.Native Cs2Cpp is a framework capable of translating C# code to C++. The resulting code provides the same API original .Net code had and can run in the native (unmanaged) C++ environment.

CodePorting.Native.Cs2Cpp.API package contains a C++ Library with a substitution for .Net classes and some service code. The ported code is ultimately dependent on this component.

If you use the full CodePorting.Native Cs2Cpp package to translate your code, this library is already included in it, and you don't need to manage this dependency manually as the porter will generate CMake project files with proper references. However, if you're planning to distribute your ported code, providing the dependency on CodePorting.Native.Cs2Cpp.API Nuget package (where applicable) is the easiest way to do so. Alternatively, you may ask your clients to [download respectful CodePorting.Native.Cs2Cpp packages from the CodePorting website](https://downloads.codeporting.com/).

Always make sure that the version of the porter used to translate your code matches the version of the CodePorting.Native.Cs2Cpp.API package you use. Failing to do so can result in compilation and/or runtime errors, since the API may change between the versions.

# Usage

The types from this package can be used in the client's code to interact with the ported code. Please make sure to use proper smart pointer wrappers for class-like types. For more information, please refer [to the product documentation](https://docs.codeporting.com/native/cs2cpp/).

```
#include <system/string.h>
#include <system/console.h>
#include <system/collections/list.h>
#include <MyPortedProject/MyPortedClass.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace MyPortedProject;

int main(int, char*[])
{
    auto list = MakeObject<List<String>>();
    list->Add(u"Apple");
    list->Add(u"Banana");
    list->Add(u"Apricot");
    list->Sort();

    auto myobj = MakeObject<MyPortedClass>();
    list = myobj->Process(list);

    for (const auto &item : list)
        Console::WriteLine(item);
    return 0;
}
```

# Resources

* **Website:** [www.codeporting.com](https://www.codeporting.com/)
* **Product Home:** [CodePorting.Native Cs2Cpp](https://products.codeporting.com/native/cs2cpp)
* **Download:** [Install CodePorting.Native Cs2Cpp](https://downloads.codeporting.com/)
* **Documentation:** [CodePorting.Native Cs2Cpp Documentation](https://docs.codeporting.com/native/cs2cpp/)
* **Free Support Forum:** [CodePorting.Native Cs2Cpp Free Support Forum](https://forum.codeporting.com/)
* **Blog:** [CodePorting.Native Cs2Cpp Blog](https://blog.codeporting.com/)
