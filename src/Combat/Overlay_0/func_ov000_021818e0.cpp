#include <globaldefs.h>

struct Struct_ov000_021600f8 { char unknown_0_[0x20]; struct Struct_ov000_021600f8* unknown_20_; };
struct Struct_ov000_0215440c { char unknown_0_[9]; unsigned char unknown_9_; char unknown_a_[10]; struct Struct_ov000_021600f8* unknown_14_; };
extern "C" struct Struct_ov000_021600f8* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);

struct Struct_ov000_02160094 { char unknown_0_[0x30]; struct Struct_ov000_02160094* unknown_30_; };
struct Struct_ov000_0215440c_2 { char unknown_0_[8]; unsigned char unknown_8_; char unknown_9_[7]; struct Struct_ov000_02160094* unknown_10_; };
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);

extern "C" int func_ov000_0215ffa0(struct Struct_ov000_021600f8* arg0);

// USA: func_ov000_021818e0
extern "C" ARM int func_ov000_021818e0(int arg0, int arg1, void* arg2, int* arg3) {
    switch (arg0) {
    case 0: {
        struct Struct_ov000_0215440c* var0 = (struct Struct_ov000_0215440c*)arg2;
        if (var0->unknown_9_ < arg1 + 1) return 0;
        struct Struct_ov000_021600f8* var1 = func_ov000_021600f8(var0, arg1);
        *arg3 = *(short*)((char*)var1 + 0xe);
        return 1;
    }
    case 1: {
        struct Struct_ov000_0215440c_2* var2 = (struct Struct_ov000_0215440c_2*)arg2;
        if (var2->unknown_8_ < arg1 + 1) return 0;
        struct Struct_ov000_02160094* var3 = func_ov000_02160094(var2, arg1);
        *arg3 = *(unsigned short*)((char*)var3 + 0x20);
        return 1;
    }
    case 2: {
        struct Struct_ov000_0215440c* var4 = (struct Struct_ov000_0215440c*)arg2;
        if (var4->unknown_9_ < arg1 + 1) return 0;
        struct Struct_ov000_021600f8* var5 = func_ov000_021600f8(var4, arg1);
        *arg3 = func_ov000_0215ffa0(var5);
        return 1;
    }
    }
    return 0;
}
