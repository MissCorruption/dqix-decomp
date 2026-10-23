#include <globaldefs.h>
#include "std_library_functions.h"
struct Struct_02020cb8_7 { short unknown_0_; short unknown_2_; char unknown_4_; char unknown_5_; char unknown_6_[2]; int unknown_8_; int unknown_c_; };
struct Struct_0204b4c0 { char unknown_0_[0xc]; int unknown_c_[4]; unsigned char unknown_1c_0_ : 4; unsigned char unknown_1c_4_ : 4; };
extern "C" void __clear(void*, unsigned int);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern "C" void func_0204a9c4(Struct_0204b4c0*, unsigned int, unsigned int, const void*);
extern "C" void func_0204ac60(void*, unsigned int, const void*);
extern "C" void func_0204acb0(Struct_02020cb8_7*);
extern "C" void func_0204ade8(Struct_02020cb8_7*, unsigned int, unsigned int, const void*);
extern char data_020f0238[];
extern char data_020f023d[];
extern char data_020f0242[];

// USA: func_0204b4c0
extern "C" ARM void func_0204b4c0(Struct_0204b4c0* arg0, const void* arg1) {
    if (!arg1) return;
    char var0[5];
    Struct_02020cb8_7 var1;
    __clear(var0, 5);
    memcpy(var0, arg1, 5);
    if (func_02001aec(var0, data_020f0238, 4) == 0) {
        func_0204a9c4(arg0, arg0->unknown_1c_0_, arg0->unknown_1c_4_, arg1);
    } else if (func_02001aec(var0, data_020f023d, 4) == 0) {
        func_0204ac60(arg0->unknown_c_, arg0->unknown_1c_0_, arg1);
    } else if (func_02001aec(var0, data_020f0242, 4) == 0) {
        func_0204acb0(&var1);
        func_0204ade8(&var1, arg0->unknown_1c_0_, arg0->unknown_1c_4_, arg1);
    }
}
