#if defined(jpn)
enum { Enum_ov025_021dc590_680 = 0x224, Enum_ov025_021dc590_16644 = 0x40c0, Enum_ov025_021dc590_16568 = 0x4074, Enum_ov025_021dc590_1096 = 0x488 };
#else
enum { Enum_ov025_021dc590_680 = 0x2a8, Enum_ov025_021dc590_16644 = 0x4104, Enum_ov025_021dc590_16568 = 0x40b8, Enum_ov025_021dc590_1096 = 0x448 };
#endif

#include <globaldefs.h>

extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" void func_ov025_021e9778(void* arg0);
extern "C" int func_ov025_021e9528(char* arg0);
extern "C" int func_ov025_021dc940(void* arg0);
extern "C" void func_ov025_021e9558(void* arg0);
extern "C" ARM void func_ov025_021def30(unsigned char* arg0);

struct Struct_ov025_021dc590 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov025_021dc590_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov025_021dc590_3 {
    char unknown_0_[0xb];
    struct Struct_ov025_021dc590_2 unknown_b_;
    char unknown_c_[4];
    struct Struct_ov025_021dc590* unknown_10_;
};

// USA: func_ov025_021dc590
extern "C" ARM void func_ov025_021dc590(void* arg0) {
    struct Struct_ov025_021dc590_3* var0 = (struct Struct_ov025_021dc590_3*)func_ov000_02160f20(arg0);
    func_ov025_021e9778((char*)arg0 + Enum_ov025_021dc590_680);
    if (!func_ov025_021e9528((char*)arg0 + Enum_ov025_021dc590_680)) {
        return;
    }
    if (!func_ov025_021dc940(arg0)) {
        return;
    }
    func_ov025_021e9558((char*)arg0 + Enum_ov025_021dc590_680);

    struct Struct_ov025_021dc590* var1 = var0->unknown_10_;
    if (var1 != NULL) {
        int var2 = var1->unknown_20_;
        int var3 = (var2 >= 0 && var2 <= 3) ? 1 : 0;
        if (var3) {
            void* var4;
            int var5 = (var2 >= 0 && var2 <= 3) ? 1 : 0;
            if (var5) {
                for (int var6 = 0; var6 < 4; var6++) {
                    int var7 = *(int*)((char*)arg0 + var6 * Enum_ov025_021dc590_1096 + Enum_ov025_021dc590_16644);
                    if (var2 == var7) {
                        var4 = (char*)arg0 + Enum_ov025_021dc590_16568 + var6 * Enum_ov025_021dc590_1096;
                        goto found;
                    }
                }
            }
            var4 = 0;
            found:
            if (var4 != 0) {
                if (var0->unknown_b_.unknown_0_2_ == 0) {
                    signed char var8 = *(signed char*)((char*)var4 + 0x18);
                    *((unsigned char*)var4 + var8 + 0x10) = 0x66;
                }
            }
        }
    }
    func_ov025_021def30((unsigned char*)arg0);
}
