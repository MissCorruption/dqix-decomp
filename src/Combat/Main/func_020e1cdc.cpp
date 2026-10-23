#include <globaldefs.h>

#if defined(jpn)
extern char data_020f2d2c[];
extern char data_020f2d31[];
enum { Enum_020e1cdc_12 = 12, Enum_020e1cdc_9 = 9, Enum_020e1cdc_12_2 = 12, Enum_020e1cdc_11 = 11 };
#else
enum { Enum_020e1cdc_9_2 = 9, Enum_020e1cdc_1 = 1, Enum_020e1cdc_11_2 = 11, Enum_020e1cdc_1_2 = 1 };
#endif

#if defined(jpn)
#define func_020e1cdc func_020e38d4
#endif
struct Struct_020e1cdc { char unknown_0_[0x38]; unsigned char unknown_38_, unknown_39_, unknown_3a_, unknown_3b_; };
struct Struct_020e1cdc_2 { const void* unknown_0_; Struct_020e1cdc* unknown_4_; unsigned char unknown_8_; };
extern "C" int func_020e51cc(int);
extern "C" int func_020420e8(int, unsigned char);
extern "C" void func_020e1b2c(Struct_020e1cdc_2*, int);
extern "C" int func_020e1f1c(Struct_020e1cdc_2*);
extern "C" void func_020e2110(Struct_020e1cdc_2*);
extern "C" void func_020e2310(char*, int, int, int, int, unsigned char, unsigned char);
extern "C" void func_020e23f4(Struct_020e1cdc_2*);
void FreeVRAMStagingMemory(const void*);
// USA: func_020e1cdc
extern "C" ARM int func_020e1cdc(Struct_020e1cdc_2* arg0, int arg1) {
    if (!arg0->unknown_4_) return 1;
    arg0->unknown_4_->unknown_38_ = 0xc2;
    arg0->unknown_4_->unknown_39_ = 0x48;
    arg0->unknown_4_->unknown_3a_ = 0x3c;
    arg0->unknown_4_->unknown_3b_ = 0x2c;
#if !defined(jpn)
    int var0 = func_020e51cc(27);
    int var1 = func_020e51cc(28);
    int var2 = func_020420e8(var0, 1);
    int var3 = func_020420e8(var1, 1);
    if (var2 < var3) var2 = var3;
    int var4 = var2 + 24;
    arg0->unknown_4_->unknown_38_ = 256 - (var4 + 2);
    arg0->unknown_4_->unknown_3a_ = var4;
#endif
    func_020e1b2c(arg0, arg1);
    if (func_020e1f1c(arg0)) {
        arg0->unknown_8_ = 0;
        func_020e2110(arg0);
#if defined(jpn)
        func_020e2310((char*)arg0, 0, 12, 8, (int)data_020f2d2c, Enum_020e1cdc_12, Enum_020e1cdc_9);
        func_020e2310((char*)arg0, 1, 12, 24, (int)data_020f2d31, Enum_020e1cdc_12_2, Enum_020e1cdc_11);
#else
        func_020e2310((char*)arg0, 0, 12, 8, var0, Enum_020e1cdc_9_2, Enum_020e1cdc_1);
        func_020e2310((char*)arg0, 1, 12, 24, var1, Enum_020e1cdc_11_2, Enum_020e1cdc_1_2);
#endif
        func_020e23f4(arg0);
        if (arg0->unknown_0_) FreeVRAMStagingMemory(arg0->unknown_0_);
        return 0;
    }
    return 1;
}
