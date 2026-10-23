#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021dc0d8_668 = 0x218, Enum_ov025_021dc0d8_22865 = 0x5b41 };
#else
enum { Enum_ov025_021dc0d8_668 = 0x29c, Enum_ov025_021dc0d8_22865 = 0x5951 };
#endif

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" void func_ov025_021dfce0(void* arg0);
extern "C" int func_ov025_021dffac(void* arg0);
extern "C" void func_ov025_021e0638(void* arg0);

struct Struct_ov025_021dc0d8 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

// USA: func_ov025_021dc0d8
extern "C" ARM void func_ov025_021dc0d8(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + Enum_ov025_021dc0d8_668);
    void* var1 = func_ov000_02160f20(arg0);
    func_ov025_021dfce0(arg0);
    if (func_ov000_0215fc60((char*)var0) != 0) {
        struct Struct_ov000_02160094* var2 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)var1, 0);
        if (var2 != NULL) {
            if (*(unsigned short*)((char*)var2 + 0x20) == 0) {
                return;
            }
        }
    }
    {
        int var3 = func_ov025_021dffac(arg0);
        unsigned char var4 = (unsigned char)var3;
        struct Struct_ov025_021dc0d8* var5 = (struct Struct_ov025_021dc0d8*)((char*)arg0 + Enum_ov025_021dc0d8_22865);
        var5->unknown_0_2_ = var4;
        if (var5->unknown_0_2_ != 1) {
            return;
        }
    }
    func_ov025_021e0638(arg0);
}
