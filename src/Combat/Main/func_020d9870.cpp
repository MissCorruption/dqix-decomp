#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
extern char data_020f29cc;
#endif

extern "C" int func_ov017_021959b4(void);
extern "C" void* func_020421a0(void);
extern "C" void* func_0202ae18(void);
extern "C" char* func_020100f8(char*);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void func_020d9a58(void* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_021cf730(int arg0, int arg1);
extern "C" void func_020a27b8(unsigned char* arg0);
extern "C" void func_020531f0(void* arg0);
struct Struct_02018300_3;
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void func_020e11a4(void);
extern "C" void func_02046380(void* arg0);
extern "C" int func_020e51cc(int arg0);
#if !defined(jpn)
extern "C" void func_0204500c(void* arg0, void* arg1, int arg2, int arg3);
#endif
extern "C" int func_020457e0(void* arg0);
extern "C" void func_ov017_021ab860(short arg0, int arg1);
extern "C" void func_020e1154(void* arg0);
extern "C" void func_02043204(char* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_020d9ab0(void* arg0);
extern "C" int func_0201b5d8(int arg0);

struct Struct_020d9870 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x8 - 0x2];
    unsigned char unknown_8_;
};

// USA: func_020d9870
extern "C" ARM void func_020d9870(struct Struct_020d9870* arg0) {
#if defined(jpn)
    enum { Enum_020d9870_6578 = 0x17e2, Enum_020d9870_2456 = 0x868 };
#else
    enum { Enum_020d9870_6578 = 0x19b2, Enum_020d9870_2456 = 0x998 };
#endif
    GameState* var0 = GameState::GetInstance();
    GetGameResources();
    void* var1 = var0->GetUnknownGameObject();
    void* var2 = func_020421a0();
    Struct_0208cb08* var3 = func_02094a00();
    void* var4 = func_0202ae18();
    char* var5 = func_020100f8((char*)var0);
    unsigned short* var6 = func_02012fe4();

    if (func_ov017_021959b4() != 0) {
        func_020d9a58(arg0);
        return;
    }

    if (arg0->unknown_8_ == 0) {
        if (func_0202b7d8((int*)var4) != 0 && func_0202c508(var4) != 0) {
            func_ov017_021cf730(-1, 0);
        }
        func_020a27b8((unsigned char*)var5);
        arg0->unknown_8_ = 1;
    } else if (arg0->unknown_8_ == 1) {
        func_02094b30(var3, 0x20e, 0);
        arg0->unknown_8_ = 2;
    } else if (arg0->unknown_8_ == 2) {
        if (func_02094b4c(var3) != 0) {
            arg0->unknown_8_ = 3;
        }
    } else if (arg0->unknown_8_ == 3) {
        if (var1 != NULL) {
            func_020531f0(var1);
            func_020397cc((Struct_02018300_3*)var1, 1);
        }
        func_020e11a4();
        func_02046380(var2);
#if defined(jpn)
        func_0204500c(var2, &data_020f29cc, 0);
#else
        func_0204500c(var2, (void*)func_020e51cc(0x3e), 0, 0xe3);
#endif
        *(unsigned char*)((char*)var2 + Enum_020d9870_6578) = 0;
        *(int*)((char*)var2 + Enum_020d9870_2456) = 1;
        arg0->unknown_8_ = 4;
    } else if (arg0->unknown_8_ == 4) {
        if (*(int*)((char*)var2 + Enum_020d9870_2456) == 0) {
            if (func_020457e0(var2) == 0) {
                func_ov017_021ab860(*(short*)((char*)var1 + 4), 1);
                func_020e1154((void*)0xbb8);
            }
            func_02043204((char*)var2);
            arg0->unknown_8_ = 5;
        }
    } else if (arg0->unknown_8_ == 5) {
        func_020397c0(var1);
        func_020d9ab0(arg0);
    }

    if (func_0201b5d8(*var6) != 0) {
        return;
    }
    func_020d9ab0(arg0);
}
