#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_02075910(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_01ff85b8(void* arg0, int arg1);
extern "C" void func_02075acc(int arg0, void* arg1, int arg2, int arg3);

struct Struct_020abae8 {
    int unknown_0_;
    char unknown_4_[0x50];
};

// USA: func_020abae8
extern "C" ARM int func_020abae8(int arg0) {
    int var0;
    if (!func_02075910(0, &var0, 1, 0)) return 0;

    struct Struct_020abae8 var1;
    memset(&var1, 0, 0x54);
    var1.unknown_0_ = func_01ff85b8((char*)&var1 + 4, 0x50);
    func_02075acc(arg0 ? 0x8024 : 0x24, &var1, 0x54, 0);
    return 1;
}
