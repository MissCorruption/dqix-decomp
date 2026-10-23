#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205c508;
extern "C" void func_0205c508(struct Struct_0205c508* arg0, int* arg1, int* arg2);

extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);

extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);

struct Struct_ov000_02179ed8 {
    char unknown_0_[0x23];
    signed char unknown_23_;
    char unknown_24_[0x4c - 0x24];
    int unknown_4c_;
};

// USA: func_ov000_02179ed8
extern "C" ARM void func_ov000_02179ed8(char* arg0, struct Struct_ov000_02179ed8* arg1, char* arg2) {
    if (arg1 != NULL && arg2 != NULL) {
        int var0, var1;
        func_0205c508((struct Struct_0205c508*)(arg0 + 0x1dc), &var0, &var1);
        int var2 = var0 << 24;
        GameObject* var3 = GameState::GetInstance()->GetPartyMemberByIndex(arg1->unknown_4c_);
        if (var3 != NULL) {
#if defined(jpn)
            int var4 = *(int*)((char*)func_02053c6c((unsigned char*)var3) + 0x8b8);
#else
            int var4 = *(int*)((char*)func_02053c6c((unsigned char*)var3) + 0x950);
#endif
            signed char var5 = arg1->unknown_23_;
            if (func_ov000_0217542c(arg0)) {
                func_02041c08(arg2, var5 - (var2 >> 24), 8, 5, 5, 5);
            }
            func_02041ea4(arg2, var5 - (var2 >> 24));
            func_02041b70(arg2, var5 - (var2 >> 24), (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), (short)(var4 + 0x63)));
        }
    }
}
