#include <globaldefs.h>
#include "Combat/Main/BattleList.h"

extern "C" int func_020421a0();
extern "C" void func_02046380(void);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_02042764(unsigned char* arg0, char* arg1, int arg2);

struct Struct_020e4b34 { int unknown_0_; int unknown_4_; unsigned int unknown_8_; };
extern "C" void func_020e4b34(Struct_020e4b34* arg0, void* arg1, int arg2, unsigned int arg3,
    unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7,
    unsigned char arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11);

extern "C" int func_020e51cc(int arg0);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

extern "C" void func_0204500c(void*, int, int, int);

struct Struct_ov003_02170960 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 28;
    char unknown_10_[0x1e];
    unsigned char unknown_2e_0_ : 1;
};

struct Struct_ov003_02170960_2 { char unknown_0_[0xd8]; struct Struct_0201099c_3* unknown_d8_; };

// USA: func_ov003_02170960
extern "C" ARM void func_ov003_02170960(struct Struct_ov003_02170960_2* arg0, int arg1, struct Struct_ov003_02170960* arg2) {
    int var0 = func_020421a0();
    func_02046380();

    Struct_020e4b34 var1;
    Struct_020e4b34 var2;
    char var3[0x30];
    __clear(var3, 0x30);

    if (arg2 != 0) {
        func_02042764((unsigned char*)arg2, var3, 1);

        func_020e4b34(&var1, var3, 0, 0, 0, 0, 0, arg2->unknown_2e_0_, 0, 1, 0, 1);
        *(void**)(var0 + 0x10) = &var1;

        int var4 = func_020e51cc(arg2->unknown_c_0_);

        func_020e4b34(&var2, (void*)var4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *(void**)(var0 + 0x28) = &var2;
    }

    int var5 = func_020e0434(arg0->unknown_d8_, (short)arg1);
    func_0204500c((void*)var0, var5, 0, 0xe3);

    *(unsigned char*)(var0 + 0x1000 + 0x9b2) = 1;
    *(int*)(var0 + 0x99c) = 2;
}
