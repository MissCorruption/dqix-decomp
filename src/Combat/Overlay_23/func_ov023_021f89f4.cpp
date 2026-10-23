#include <globaldefs.h>

struct Struct_ov023_021f6ed8;
extern "C" ARM void func_ov023_021f6ed8(struct Struct_ov023_021f6ed8* arg0);

struct Struct_ov023_021f89f4 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };
#if defined(jpn)
struct Struct_ov023_021f89f4_2 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 7; };
#else
struct Struct_ov023_021f89f4_2 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 6; unsigned char unknown_0_7_ : 1; };
#endif


// USA: func_ov023_021f89f4
extern "C" ARM int func_ov023_021f89f4(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10) {
    func_ov023_021f6ed8((struct Struct_ov023_021f6ed8*)arg0);
    *(short*)(arg0 + 0x4) = 8;
    *(short*)(arg0 + 0x6) = arg2;
    *(short*)(arg0 + 0x8) = arg3;
    *(short*)(arg0 + 0xa) = 0;
    *(int*)(arg0 + 0x10) = 0;
    *(int*)(arg0 + 0x1c) = 2;

    struct Struct_ov023_021f89f4_2* var0 = (struct Struct_ov023_021f89f4_2*)(arg0 + 0x45);
    var0->unknown_0_1_ = 0;
    *(short*)(arg0 + 0x42) = 0;
#if defined(jpn)

#else
    var0->unknown_0_7_ = 0;
#endif

    *(int*)(arg0 + 0x20) = 0;
    *(int*)(arg0 + 0x24) = -0x10000;
    *(int*)(arg0 + 0x28) = -0x3000;
    *(int*)(arg0 + 0x2c) = 0;
    *(short*)(arg0 + 0x30) = 0;
    *(short*)(arg0 + 0x32) = 0;
    *(short*)(arg0 + 0x34) = arg4;
    *(short*)(arg0 + 0x36) = arg5;
    *(short*)(arg0 + 0x38) = arg6;
    *(short*)(arg0 + 0x3a) = arg7;
    *(short*)(arg0 + 0x3c) = arg8;

    struct Struct_ov023_021f89f4* var1 = (struct Struct_ov023_021f89f4*)(arg0 + 0x44);
    var1->unknown_0_0_ = (unsigned char)arg9;
    var1->unknown_0_4_ = (unsigned char)arg10;

    var0->unknown_0_0_ = 0;
    *(short*)(arg0 + 0x46) = 0;
    *(short*)(arg0 + 0x48) = 0;
    *(short*)(arg0 + 0x4a) = 0;
    *(short*)(arg0 + 0x4c) = 0;
    return 1;
}
