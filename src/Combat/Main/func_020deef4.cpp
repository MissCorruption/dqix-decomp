#include <globaldefs.h>

struct Struct_020deeb8 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
};

struct Struct_020deef4 {
    unsigned char unknown_0_[0x14];
};

extern "C" int func_020deeb8(int arg0, struct Struct_020deeb8* arg1, int arg2, int arg3, int arg4);
extern "C" int func_020def98(int arg0, void* arg1, void* arg2, short* arg3, int arg4);

// USA: func_020deef4
extern "C" ARM int func_020deef4(int arg0, int arg1, int arg2, short* arg3, short arg4) {
    struct Struct_020deef4 var0;
    struct Struct_020deeb8 var1;
    func_020deeb8((int)&var0, &var1, arg0, arg1, arg2);
    return func_020def98(0, &var1, &var0, arg3, arg4);
}
