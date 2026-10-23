#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_0215fa1c_20 = 0xc, Enum_ov006_0215fa1c_116 = 0x6c, Enum_ov006_0215fa1c_4 = 2 };
#else
enum { Enum_ov006_0215fa1c_20 = 0x14, Enum_ov006_0215fa1c_116 = 0x74, Enum_ov006_0215fa1c_4 = 4 };
#endif

struct Struct_02080fa8;
struct Struct_02081164;
struct Struct_ov006_0215fa1c {
    char unknown_0_[Enum_ov006_0215fa1c_20];
    Struct_02080fa8* unknown_14_;
    char unknown_18_[Enum_ov006_0215fa1c_116-Enum_ov006_0215fa1c_20-4];
    int unknown_74_;
    char unknown_78_[0x366-Enum_ov006_0215fa1c_116-4];
    short unknown_366_;
    char unknown_368_[0x38f-0x368];
    unsigned char unknown_38f_;
};
extern "C" void func_02080b54(void*, int);
extern "C" void func_02080b40(void*, int);
extern "C" void func_0208103c(void*, int, int);
extern "C" void func_02080fa8(Struct_02080fa8*, int, int);
extern "C" void func_02081164(Struct_02081164*, int, int);
extern "C" void func_020806d8(void*, int, int, int, int);
extern "C" int func_ov006_02154138(int*);
extern "C" void func_020813ec(void*, int);

// USA: func_ov006_0215fa1c
extern "C" ARM void func_ov006_0215fa1c(Struct_ov006_0215fa1c* arg0, int arg1) {
    Struct_02080fa8* var0 = arg0->unknown_14_;
    func_02080b54(var0, 0xd);
    func_02080b40(var0, 0x56);
    func_0208103c(arg0->unknown_14_, 0x56, 0x2b);
    if (arg0->unknown_38f_ != 10 && arg0->unknown_38f_ != 3) {
        int var1 = 0x2c;
        if (!arg1) {
            switch (arg0->unknown_366_) {
            case 0x25: var1 = 0x12; break;
            case 0x26: var1 = 0x13; break;
            }
        }
        func_0208103c(var0, 0x57, var1);
        func_02080b40(var0, 0x57);
        func_020806d8(var0, 0xd, 0x57, 1, Enum_ov006_0215fa1c_4);
        if (arg1) {
            unsigned int var2 = (unsigned short)func_ov006_02154138(&arg0->unknown_74_);
            float var3 = (float)var2 / 448.0f;
            var3 *= 10000.0f;
            int var4 = (int)var3;
            int var5 = (var4 - var4 % 100) / 100;
            if (var2 && var5 <= 0) var5 = 1;
            if (var5 > 100) var5 = 100;
            func_02080fa8(var0, 0x58, var5);
            func_02080b40(var0, 0x58);
            func_0208103c(arg0->unknown_14_, 0x56, 0x2e);
        }
    }
    func_02081164((Struct_02081164*)var0, 0xd, 1);
    func_020813ec(var0, 0xd);
}
