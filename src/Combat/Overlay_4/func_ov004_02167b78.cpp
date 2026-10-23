#include <globaldefs.h>

#if defined(jpn)
#define func_ov004_02167b78 func_ov004_02168074
#endif
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void func_ov004_0216794c(short* arg0, short* arg1, short* arg2, char* arg3, int* arg4);
extern "C" int func_020421a0(void);
extern "C" void func_02046380(void* arg0);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
#if defined(jpn)
struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" Struct_0201099c_9* func_020dedd0(Struct_0201099c_10*, int);
extern "C" Struct_0201099c_10* func_ov004_02167908(void* arg0, int arg1);
#else
extern "C" int func_ov004_02167908(void* arg0, int arg1);
#endif
struct Struct_020465c0;
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void* func_020e46c4(void* arg0);
extern "C" void func_020dcf7c(int arg0, void* arg1);

struct Struct_ov004_02170010_2 {
    short unknown_0_;
    short unknown_2_;
};
extern struct Struct_ov004_02170010_2 data_ov004_02170010[];

struct Struct_ov004_02167b78 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_;
};
struct Struct_ov004_02171024 {
    void* unknown_0_;
    struct Struct_ov004_02167b78* unknown_4_;
    void* unknown_8_;
};
extern struct Struct_ov004_02171024 data_ov004_02171024;

struct Struct_ov004_02167b78_2 {
    char unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    int unknown_8_;
};

// USA: func_ov004_02167b78
extern "C" ARM int func_ov004_02167b78(void* arg0, struct Struct_ov004_02170010_2* arg1) {
    struct Struct_ov004_02167b78_2 var0;
    func_ov004_0216794c(&var0.unknown_6_, &var0.unknown_4_, &var0.unknown_2_, &var0.unknown_0_, &var0.unknown_8_);

    int var1 = (short)(var0.unknown_6_ + var0.unknown_4_);
    if (var1 > 0x50) var1 = 0x50;

    void* var2 = (void*)func_020421a0();
    func_02046380(var2);

    GameObject* var3 = GameState::GetInstance()->GetUnknownGameObject();
    if (var3 != 0) {
        func_02046574((struct Struct_02046574_2*)var2, 0, var3->baseStats_->unk);
    }

#if defined(jpn)
    Struct_0201099c_10* var4 = func_ov004_02167908(arg0, 5);
#else
    int var4 = func_ov004_02167908(arg0, 5);
#endif

    func_020465c0((struct Struct_020465c0*)var2, 0, var0.unknown_6_);
    func_020465c0((struct Struct_020465c0*)var2, 1, var0.unknown_4_);
    func_020465c0((struct Struct_020465c0*)var2, 2, var0.unknown_2_);
    func_020465c0((struct Struct_020465c0*)var2, 3, var1);

    if (var4 != 0) {
        if (arg1 == 0) {
            int var5 = var0.unknown_8_;
            if (var5 >= 0) {
                arg1 = &data_ov004_02170010[var5];
            }
        }
        if (arg1 != 0) {
#if defined(jpn)
            Struct_0201099c_9* var6 = func_020dedd0(var4, arg1->unknown_2_);
            if (var6 != 0) {
                func_02046574((struct Struct_02046574_2*)var2, 1, *(char**)((char*)var6 + 4));
            }
#else
            if (data_ov004_02171024.unknown_4_ != 0 && data_ov004_02171024.unknown_0_ != 0 && data_ov004_02171024.unknown_8_ != 0) {
                func_020e46c4(data_ov004_02171024.unknown_4_);
                data_ov004_02171024.unknown_4_->unknown_0_ = data_ov004_02171024.unknown_0_;
                data_ov004_02171024.unknown_4_->unknown_4_ = data_ov004_02171024.unknown_8_;
                memset(data_ov004_02171024.unknown_0_, 0, 0x80);
                memset(data_ov004_02171024.unknown_8_, 0, 0x80);
            }
            func_020dcf7c(arg1->unknown_2_, data_ov004_02171024.unknown_4_);
            *(void**)((char*)var2 + 0x18) = data_ov004_02171024.unknown_4_;
#endif
            func_020465c0((struct Struct_020465c0*)var2, 2, arg1->unknown_0_);
        }
    }
    return 0;
}
