#if defined(jpn)
#include <globaldefs.h>
#include <std_library_functions.h>
#include "Resource/CharacterCreationUI.h"

extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_020d2ff0(const char*);

// JPN: func_ov009_0218b850
extern "C" ARM void func_ov009_0218b850(Struct_ov009_021842a0* arg0)
{
    const char* var0 = (const char*)func_020e0434(&arg0->unknown_e0_, 0x4272);
    memcpy(arg0->unknown_d74_[arg0->unknown_da3_], var0, 11);
    int var1 = rand() % 101;
    short var2 = (arg0->unknown_da3_ * 1000 + 0x4e20) + var1;
    int var3 = func_020d2ff0((const char*)func_020e0434(&arg0->unknown_e0_, var2));
    const char* var4 = (const char*)func_020e0434(&arg0->unknown_e0_, var2);
    memcpy(arg0->unknown_d74_[arg0->unknown_da3_], var4, var3);
    arg0->unknown_d8a_[arg0->unknown_da3_] = var3 / 2;
}
#endif
