#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#include "Resource/MessageUpdate.h"

#if defined(jpn)
extern "C" void func_02041bbc(Struct_0204166c* arg0);
#define func_020416c0 func_02041bbc
enum { Enum_02043040_0 = 14 };
#else
extern "C" void func_020416c0(Struct_0204166c* arg0);
enum { Enum_02043040_0 = 0 };
#endif

// USA: func_02043040
extern "C" ARM void func_02043040(Struct_02021b84* arg0) {
    memset(arg0->unknown_2cc_, 0, sizeof(arg0->unknown_2cc_));
    arg0->unknown_9b4_ = Enum_02043040_0;
    for (int var0 = Enum_02043040_0; var0 < 0x80; ++var0) {
        func_020416c0(&arg0->unknown_9b8_[var0]);
        arg0->unknown_17b8_[var0] = 0;
    }
    arg0->unknown_1868_ = 0;
    arg0->unknown_9a0_ = 0;
    arg0->unknown_19b2_ = 0;
    arg0->unknown_19b4_ = 0;
}
