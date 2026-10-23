#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_02075910(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_01ff85b8(void* arg0, int arg1);
extern "C" void func_02075acc(int arg0, void* arg1, int arg2, int arg3);
extern char data_020f1bf0;

struct Struct_020aba5c {
    int unknown_0_;
    char unknown_4_[4];
    char unknown_8_[12];
};

// USA: func_020aba5c
extern "C" ARM int func_020aba5c(int arg0) {
    int var0;
    if (!func_02075910(0, &var0, 1, 0)) return 0;

    struct Struct_020aba5c var1;
    memset(&var1, 0, 0x14);
    strcpy(var1.unknown_8_, &data_020f1bf0);
    var1.unknown_0_ = func_01ff85b8((char*)&var1 + 4, 0x10);
    func_02075acc(arg0 ? 0x8010 : 0x10, &var1, 0x14, 0);
    return 1;
}
