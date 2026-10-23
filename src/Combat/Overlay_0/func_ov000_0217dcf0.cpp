#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov000_0217dcf0_7520 = 0x1f98, Enum_ov000_0217dcf0_7528 = 0x1fa0,
       Enum_ov000_0217dcf0_7531 = 0x1fa3, Enum_ov000_0217dcf0_7538 = 0x1faa };
#else
enum { Enum_ov000_0217dcf0_7520 = 0x1d60, Enum_ov000_0217dcf0_7528 = 0x1d68,
       Enum_ov000_0217dcf0_7531 = 0x1d6b, Enum_ov000_0217dcf0_7538 = 0x1d72 };
#endif

struct Struct_0205c570;
struct Struct_0205d6a0;
struct Struct_02108760;

extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" int func_ov000_0217c5f4(void* arg0);
extern "C" int func_ov000_0217c594(void* arg0, int arg1);
extern "C" void func_ov000_02176e3c(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_021c847c(void);

extern char data_02108760[];

struct Struct_ov000_0217dcf0 {
    char unknown_0_[0x3c];
    unsigned int unknown_3c_0_ : 30;
    unsigned int unknown_3f_6_ : 1;
    unsigned int unknown_3f_7_ : 1;
};

struct Struct_ov000_0217dcf0_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_0217dcf0
extern "C" ARM void func_ov000_0217dcf0(char* arg0, int arg1, int arg2) {
    *(unsigned short*)(arg0 + Enum_ov000_0217dcf0_7538) |= 0x100;
    *(unsigned char*)(arg0 + Enum_ov000_0217dcf0_7531) = func_0205d794((struct Struct_0205c570*)(arg0 + 0x188));
    if (func_ov000_0217c594(arg0, 0)) {
        func_0205eaa0((struct Struct_02108760*)data_02108760, 1, 0);
        GameState* var0 = GameState::GetInstance();
        unsigned char* var1 = (unsigned char*)func_02010828(var0);
        signed char var2 = *(signed char*)(arg0 + Enum_ov000_0217dcf0_7531);
        if (var2 < var1[0xf7c]) {
            struct Struct_ov000_0217dcf0_2* var3 = &((struct Struct_ov000_0217dcf0_2*)(arg0 + 0x958))[*(signed char*)(arg0 + var2 + 0x70)];
            GameObject* var4 = var0->GetPartyMemberByIndex((signed char)var3->unknown_4c_);
            if (var4 != NULL) {
                struct Struct_ov000_0217dcf0* var5 = (struct Struct_ov000_0217dcf0*)var4->baseStats_;
                unsigned short var6 = var5->unknown_3f_6_;
                var6++;
                var6 %= 2;
                var5->unknown_3f_6_ = var6;
                func_ov000_02176e3c(arg0, 0, *(signed char*)(arg0 + *(signed char*)(arg0 + Enum_ov000_0217dcf0_7528) + Enum_ov000_0217dcf0_7520), arg1, arg2, 0);
                func_ov017_021c847c();
            }
        }
    } else if (func_ov000_0217c5f4(arg0)) {
        func_0205d6a0((struct Struct_0205d6a0*)(arg0 + 0x188), 0);
        *(unsigned char*)(arg0 + *(signed char*)(arg0 + Enum_ov000_0217dcf0_7528) + Enum_ov000_0217dcf0_7520) = 0;
        *(signed char*)(arg0 + Enum_ov000_0217dcf0_7528) = *(signed char*)(arg0 + Enum_ov000_0217dcf0_7528) - 1;
        func_ov000_0217c638(arg0, arg1, arg2);
    }
}
