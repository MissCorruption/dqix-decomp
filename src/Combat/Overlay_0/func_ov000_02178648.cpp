#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201099c_3;

extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041dd0(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02041e70(char* arg0, int arg1);
extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_ov000_02170c7c(void* arg0);

struct Struct_ov000_02178648 {
    char unknown_0_[0x3c];
    unsigned int unknown_3c_0_ : 30;
    unsigned int unknown_3f_6_ : 1;
    unsigned int unknown_3f_7_ : 1;
};

struct Struct_ov000_02178648_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_02178648
extern "C" ARM void func_ov000_02178648(char* arg0, char* arg1) {
    if (arg1 == NULL) return;

#if defined(jpn)
    signed char var0 = *(signed char*)(arg0 + 0x1fa3);
#else
    signed char var0 = *(signed char*)(arg0 + 0x1d6b);
#endif
    int var1 = 0;
    unsigned char var2;
    GameState* var3 = GameState::GetInstance();
    func_02010828(var3);

    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    var2 = *(unsigned char*)(arg0 + 0x79);
    for (unsigned char var4 = 0; var4 < var2; var4++) {
        struct Struct_ov000_02178648_2* var5 = &((struct Struct_ov000_02178648_2*)(arg0 + 0x958))[*(signed char*)(arg0 + var4 + 0x70)];
        GameObject* var6 = var3->GetPartyMemberByIndex((signed char)var5->unknown_4c_);
        if (var6 != NULL) {
            func_02041dd0(arg1, func_ov000_02170c7c(var5));
            func_02041b70(arg1, var1, (const char*)var6->baseStats_);
            func_02041e70(arg1, 0xf);
            func_02041a28(arg1, 0x46);
            struct Struct_ov000_02178648* var7 = (struct Struct_ov000_02178648*)var6->baseStats_;
            func_02042058(arg1, (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), (short)((unsigned short)var7->unknown_3f_6_ + 0x7551)));
            if (var4 != var2 - 1) {
                func_02042058(arg1, (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0));
            }
        }
        var1++;
    }
#if !defined(jpn)
    func_02041a28(arg1, 0x7a);
#endif
}
