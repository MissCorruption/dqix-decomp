#include <globaldefs.h>
#include "Combat/EntryGetterTypes.h"

struct Struct_0203cdd8;
extern "C" void func_0203cdd8(Struct_0203cdd8*, int);

// USA: func_02040af0
extern "C" ARM void func_02040af0(Struct_0203dce4* arg0, int arg1) {
    if (arg0->unknown_14_) {
        func_0203cdd8((Struct_0203cdd8*)arg0->unknown_14_, arg1);
        return;
    }
    if (arg0->unknown_18_) {
        *(int*)((char*)arg0->unknown_18_ + 0xb0) = arg1;
        return;
    }
    if (arg0->unknown_1c_) {
#if defined(jpn)
        *(int*)((char*)arg0->unknown_1c_ + 0x2c8) = arg1;
#else
        *(int*)((char*)arg0->unknown_1c_ + 0x2d4) = arg1;
#endif
    }
}
