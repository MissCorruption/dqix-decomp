#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_02169b04;

struct Struct_ov000_0215440c {
    char unknown_0_[9];
    unsigned char unknown_9_;
};

struct Struct_ov000_021600f8 {
    char unknown_0_[0x18];
    unsigned char unknown_18_;
};

struct Struct_ov025_021e9b2c {
    char unknown_0_[8];
    void* unknown_8_;
};

struct Struct_ov025_021e9778_3 {
    struct Struct_ov000_02169b04* unknown_0_;
    char unknown_4_[0x1c4 - 0x4];
    unsigned int unknown_1c4_;
    char unknown_1c8_[0x53c - 0x1c8];
    unsigned char unknown_53c_;
    char unknown_53d_[0x5c8 - 0x53d];
    unsigned short unknown_5c8_;
};

extern unsigned int data_ov025_021ef9a4;

extern "C" void* func_ov000_02160130(void);
extern "C" Struct_ov000_0215440c* func_ov000_02160f20(void* arg0);
extern "C" void func_ov025_021df9b0(void* arg0);
struct Struct_ov000_02163a7c;
extern "C" void func_ov000_02163a7c(Struct_ov000_02163a7c*);
extern "C" void* func_ov000_02169b04(struct Struct_ov000_02169b04* arg0, int arg1);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" Struct_ov025_021e9b2c* func_ov000_0215fff4(void* arg0, int arg1, int arg2);
extern "C" short func_ov000_0215ffa0(void* arg0);
extern "C" void func_ov025_021eb6fc(Struct_ov025_021e9778_3* arg0, int arg1);
extern "C" void func_ov025_021ea474(Struct_ov025_021e9778_3* arg0);
extern "C" void func_ov025_021eb7fc(Struct_ov025_021e9778_3* arg0);
extern "C" void func_ov025_021e9d14(Struct_ov025_021e9778_3* arg0);
extern "C" void func_ov025_021ea958(Struct_ov025_021e9778_3* arg0, bool arg1, int arg2, int arg3);

// USA: func_ov025_021e9b2c
extern "C" ARM void func_ov025_021e9b2c(Struct_ov025_021e9778_3* arg0) {
#if defined(jpn)
 enum { Enum_ov025_021e9b2c_23216 = 0x5ca0 };
#else
 enum { Enum_ov025_021e9b2c_23216 = 0x5ab0 };
#endif
    GameState::GetInstance();
    void* var0 = func_ov000_02160130();
    Struct_ov000_0215440c* var1 = func_ov000_02160f20(var0);
    if (data_ov025_021ef9a4 & 8) {
        func_ov025_021eb6fc(arg0, 0);
        func_ov025_021ea474(arg0);
        func_ov025_021eb7fc(arg0);
        func_ov025_021df9b0((char*)var0 + Enum_ov025_021e9b2c_23216);
        func_ov000_02163a7c((Struct_ov000_02163a7c*)var0);
    }
    if (arg0->unknown_1c4_ & 0x10) {
        arg0->unknown_1c4_ &= ~0x10;
        if (!(data_ov025_021ef9a4 & 0x20)) {
            data_ov025_021ef9a4 |= 0x20;
            if (!((arg0->unknown_0_ != NULL && func_ov000_02169b04(arg0->unknown_0_, 0x69) != NULL) ||
                  func_ov000_02169b04(arg0->unknown_0_, 0x89) != NULL)) {
                func_ov025_021e9d14(arg0);
            }
            int var2 = 1;
            for (int var3 = 0; var3 < var1->unknown_9_; var3++) {
                Struct_ov000_021600f8* var4 = func_ov000_021600f8(var1, var3);
                if (var4 == NULL) {
                    continue;
                }
                for (int var5 = 0; var5 < var4->unknown_18_; var5++) {
                    Struct_ov025_021e9b2c* var6 = func_ov000_0215fff4(var4, var5, 0);
                    if (var6 != NULL && var6->unknown_8_ != NULL) {
                        var2 = 0;
                        break;
                    }
                }
            }
            if (var2) {
                bool var7 = true;
                Struct_ov000_021600f8* var8 = func_ov000_021600f8(var1, 0);
                if (var8 != NULL) {
                    int var9 = func_ov000_0215ffa0(var8);
                    var7 = (var9 >= 0 && var9 <= 3) ? 1 : 0;
                }
                func_ov025_021ea958(arg0, var7, 1, -1);
            } else {
                arg0->unknown_53c_ = 0;
            }
        }
    }
    if (arg0->unknown_5c8_ >= 0xff) {
        return;
    }
    if (arg0->unknown_53c_ == 0) {
        return;
    }
    func_ov025_021ea958(arg0, (arg0->unknown_5c8_ <= 3) ? 1 : 0, 1, -1);
}
