#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205c570;
struct Struct_02108760;
struct Struct_0205d6a0;

struct Struct_ov000_0217d438 {
#if defined(jpn)
    char unknown_0_[0x8b4];
#else
    char unknown1_0_[0x94c];
#endif
    int unknown_94c_;
};

struct Struct_ov000_0217d438_2 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov000_0217d438_3 {
    char unknown_0_[0x188];
    char unknown_188_[0x958 - 0x188];
    struct Struct_ov000_0217d438_2 unknown_958_[4];
#if defined(jpn)
    char unknown_1b78_[0x1f98 - (0x958 + 4 * 0x488)];
#else
    char unknown_1a78_[0x1d60 - 0x1a78];
#endif
    unsigned char unknown_1d60_[8];
    signed char unknown_1d68_;
    char unknown_1d69_[0x1d6b - 0x1d69];
    signed char unknown_1d6b_;
    signed char unknown_1d6c_;
    char unknown_1d6d_[0x1d72 - 0x1d6d];
    unsigned short unknown_1d72_;
    signed char unknown_1d74_[4];
};

extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" int func_ov000_0217c5f4(void* arg0);
extern "C" int func_ov000_0217c594(void* arg0, int arg1);
extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);
extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" struct Struct_ov000_0217d438* func_02053c6c(unsigned char* arg0);
extern "C" void func_ov000_02170ffc(void* arg0);
extern "C" int func_ov000_02177798(void* arg0);
extern "C" void func_ov017_021c847c();
extern "C" void func_ov000_0217fa60(void* arg0);
extern "C" void func_ov000_02174c14(void* arg0);
extern struct Struct_02108760 data_02108760;

static inline int inline_ov000_02156cc4_2(signed char arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov000_0217d438
extern "C" ARM void func_ov000_0217d438(struct Struct_ov000_0217d438_3* arg0, int arg1, int arg2) {
    arg0->unknown_1d72_ |= 0x100;
    arg0->unknown_1d6c_ = func_0205d794((struct Struct_0205c570*)arg0->unknown_188_);
    if (func_ov000_0217c594(arg0, 0) != 0) {
        func_0205eaa0(&data_02108760, 1, 0);
        GameState* var0 = GameState::GetInstance();
        arg0->unknown_1d72_ |= 0x100;
        signed char var1 = arg0->unknown_1d74_[arg0->unknown_1d6b_];
        if (inline_ov000_02156cc4_2(var1)) {
            void* var2 = func_ov000_02161318(arg0, var1);
            if (var2 != NULL) {
                GameObject* var3 = var0->GetPartyMemberByIndex(var1);
                if (var3 != NULL) {
                    struct Struct_ov000_0217d438* var4 = func_02053c6c((unsigned char*)var3);
                    if ((signed char)var4->unknown_94c_ != arg0->unknown_1d6c_) {
                        var4->unknown_94c_ = arg0->unknown_1d6c_;
                        func_ov000_02170ffc(var2);
                        func_ov000_02177798(arg0);
                    }
                }
            }
        } else {
            struct Struct_ov000_0217d438_2* var5;
            for (int var6 = 0; var6 < 4; var6++) {
                var5 = &arg0->unknown_958_[var6];
                GameObject* var7 = var0->GetPartyMemberByIndex(var5->unknown_4c_);
                if (var7 == NULL) {
                    continue;
                }
                if (var5->unknown_24_ & 2) {
                    continue;
                }
                if (!(var7->obj3D_.unknown_0_ & 0x1000)) {
                    continue;
                }
                struct Struct_ov000_0217d438* var8 = func_02053c6c((unsigned char*)var7);
                if ((signed char)var8->unknown_94c_ == arg0->unknown_1d6c_) {
                    continue;
                }
                var8->unknown_94c_ = arg0->unknown_1d6c_;
                func_ov000_02170ffc(var5);
            }
            func_ov017_021c847c();
            func_ov000_0217fa60(arg0);
            func_ov000_02174c14(arg0);
            return;
        }
        func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_188_, 0);
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0;
        arg0->unknown_1d68_ = arg0->unknown_1d68_ - 1;
        func_ov000_0217c638(arg0, arg1, arg2);
        func_ov017_021c847c();
    } else if (func_ov000_0217c5f4(arg0) != 0) {
        func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_188_, 0);
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0;
        arg0->unknown_1d68_ = arg0->unknown_1d68_ - 1;
        func_ov000_0217c638(arg0, arg1, arg2);
    }
}
