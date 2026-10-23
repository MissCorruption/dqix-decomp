#include <globaldefs.h>
#include "Combat/EntryGetterTypes.h"

#if defined(jpn)
enum { Enum_020409e0_724 = 0x2c8 };
#else
enum { Enum_020409e0_724 = 0x2d4 };
#endif
extern "C" int func_0203cdf8(struct Struct_0203cdf8*);

// USA: func_020409e0
extern "C" ARM int func_020409e0(Struct_0203dce4* arg0) {
    if (arg0->unknown_14_) {
        return func_0203cdf8((struct Struct_0203cdf8*)(arg0->unknown_14_));
    }
    if (arg0->unknown_18_) {
        return *(int*)((char*)arg0->unknown_18_ + 0xb0);
    }
    if (arg0->unknown_1c_) {
        return *(int*)((char*)arg0->unknown_1c_ + Enum_020409e0_724);
    }
    return 0;
}
