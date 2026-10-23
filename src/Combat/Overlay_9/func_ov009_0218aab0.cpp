#if defined(jpn)
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"
extern "C" void* memcpy(void*, const void*, unsigned int);

extern "C" int func_020421a0();
extern "C" int func_020e0434(Struct_0201099c_3*, int);
struct Struct_02108760;
extern Struct_02108760 data_02108760;
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern "C" void func_ov009_0218b200(Struct_ov009_021842a0*, int);
extern "C" void func_ov009_0218b2e8(Struct_ov009_021842a0*);
extern "C" void func_ov009_0218b680(Struct_ov009_021842a0*);
extern "C" void func_ov009_0218b850(Struct_ov009_021842a0*);
extern const char data_ov009_0218bc73[];
extern const char data_ov009_0218bc76[];
extern const char data_ov009_0218bc79[];
extern const char data_ov009_0218bc7c[];
extern const char data_ov009_0218bc7f[];
extern const char data_ov009_0218bc82[];
extern const char data_ov009_0218bc85[];
extern const char data_ov009_0218bc88[];

// JPN: func_ov009_0218aab0
extern "C" ARM int func_ov009_0218aab0(Struct_ov009_021842a0* arg0, unsigned char arg1)
{
    func_020421a0();
    char var0[3] = {};
    int var1 = -1;
    int var2 = 0;
    const char* var3 = (const char*)func_020e0434(&arg0->unknown_e0_, (short)(arg0->unknown_d8d_ + 0x4268));
    memcpy(var0, var3 + arg1 * 2, 2);
    func_0205eaa0(&data_02108760, 1, 0);
    if (func_02001aec(var0, data_ov009_0218bc73, 2) == 0) {
        arg0->unknown_d9c_ |= 0x200000;
    } else if (func_02001aec(var0, data_ov009_0218bc76, 2) == 0) {
        func_ov009_0218b200(arg0, 0);
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_];
    } else if (func_02001aec(var0, data_ov009_0218bc79, 2) == 0) {
        arg0->unknown_d8d_ = 0;
        arg0->unknown_d9c_ |= 0x2000;
    } else if (func_02001aec(var0, data_ov009_0218bc7c, 2) == 0) {
        arg0->unknown_d8d_ = 1;
        arg0->unknown_d9c_ |= 0x2000;
    } else if (func_02001aec(var0, data_ov009_0218bc7f, 2) == 0) {
        func_ov009_0218b2e8(arg0);
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_] - 1;
    } else if (func_02001aec(var0, data_ov009_0218bc82, 2) == 0) {
        func_ov009_0218b680(arg0);
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_] - 1;
    } else if (func_02001aec(var0, data_ov009_0218bc85, 2) == 0) {
    } else if (func_02001aec(var0, data_ov009_0218bc88, 2) == 0) {
        if (arg0->unknown_d95_ == 1) {
            func_ov009_0218b850(arg0);
            arg0->unknown_d9c_ |= 0x8000;
        }
    } else {
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_];
        if (var1 >= 5) --var1;
        memcpy(&arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], var0, 2);
        arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
        var2 = 1;
    }
    if (var1 >= 0) arg0->unknown_d9c_ |= 0x8000;
    return var2;
}
#endif
