#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02170ffc_2 {
#if defined(jpn)
    char unknown_0_[0x8b4];
#else
    char unknown1_0_[0x94c];
#endif
    int unknown_94c_;
};

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" struct Struct_ov000_02170ffc_2* func_02053c6c(unsigned char* arg0);

struct Struct_0203c108_3 {
    char unknown_0_[0x14];
    short unknown_14_;
};
extern "C" void func_0203c108(struct Struct_0203c108_3* arg0, char* arg1);

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov000_02170ffc {
    char unknown_0_[4];
    struct Struct_0201099c_3* unknown_4_;
    char unknown_8_[0x24 - 0x8];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
    struct Struct_0203c108_3 unknown_50_;
#if defined(jpn)
    char unknown_66_[0xc7 - 0x66];
#else
    char unknown1_66_[0x87 - 0x66];
#endif
    unsigned char unknown_87_;
};

extern "C" int func_ov000_021719f8(int* arg0);
#if defined(jpn)
extern "C" int func_ov000_02171a74(struct Struct_ov000_02170ffc* arg0);
#else
extern "C" int func_ov000_02171a74(struct Struct_ov000_02170ffc* arg0, char* arg1);
#endif

// USA: func_ov000_02170ffc
extern "C" ARM void func_ov000_02170ffc(struct Struct_ov000_02170ffc* arg0) {
#if !defined(jpn)
    char var0[0x80];
#endif
    if (arg0->unknown_24_ & 2) {
        return;
    }
    if (arg0->unknown_87_ == 0) {
        return;
    }
    if (func_ov000_021719f8((int*)arg0)) {
#if defined(jpn)
        int var1 = func_ov000_02171a74(arg0);
        struct Struct_0201099c_3* var2 = arg0->unknown_4_;
        if (var2 != NULL && var1 >= 0) {
            func_0203c108(&arg0->unknown_50_, (char*)func_020e0434(var2, var1));
            return;
        }
#else
        __clear(var0, sizeof(var0));
        if (func_ov000_02171a74(arg0, var0) >= 0) {
            func_0203c108(&arg0->unknown_50_, var0);
            return;
        }
#endif
    }
    short var3 = 0x753e;
    GameObject* var4 = GameState::GetInstance()->GetPartyMemberByIndex(arg0->unknown_4c_);
    if (var4 == NULL) {
        return;
    }
    struct Struct_ov000_02170ffc_2* var5 = func_02053c6c((unsigned char*)var4);
    var3 += (signed char)var5->unknown_94c_;
    func_0203c108(&arg0->unknown_50_, (char*)func_020e0434(arg0->unknown_4_, var3));
}
