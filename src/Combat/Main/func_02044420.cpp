#include <globaldefs.h>
#include "Resource/MessageUpdate.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_02044420_65312 = 0xff22 };
#else
enum { Enum_02044420_65312 = 0xff20 };
#endif

#if defined(jpn)
extern "C" ARM int func_02069444(void* arg0, unsigned short var0) {
    int var1 = 0;
    if (!func_02069430(arg0, var0)) return 0;
#else
// USA: func_02044420
extern "C" ARM int func_02044420(void* arg0, void* arg1) {
    unsigned short var0;
    int var1 = 0;
    memcpy(&var0, arg1, 2);
    if (!func_02044494(arg0, &var0)) {
        return 0;
    }
#endif
    switch (var0) {
    case Enum_02044420_65312 + 0:
    case Enum_02044420_65312 + 1:
    case Enum_02044420_65312 + 3:
    case Enum_02044420_65312 + 4:
        var1 = 1;
        break;
    case Enum_02044420_65312 + 2:
    case Enum_02044420_65312 + 5:
        var1 = 2;
        break;
    }
    return var1;
}
