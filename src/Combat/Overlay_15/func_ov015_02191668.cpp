#if defined(jpn)
#define R(j,u) (j)
#define data_ov001_02164ca4 data_ov001_02166270
#define data_ov028_021d9aa0 data_ov028_021da400
#define func_ov014_02188330 func_ov014_02189234
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_02191f04 func_ov015_02192a48
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov015_02190d7c_2 {};
struct Struct_ov015_02190d7c : Struct_ov015_02190d7c_2 {
    char unknown_0_[0x34];
    int unknown_34_;
    signed char unknown_38_;
    char unknown_39_[0x194-0x39];
    int unknown_194_;
    int unknown_198_;
    char unknown_19c_[8];
    int unknown_1a4_;
    char unknown_1a8_[0x268-0x1a8];
    short unknown_268_[0x2e];
    int unknown_2c4_;
};
struct Struct_ov000_02179cdc_2 { char unknown_0_[0xb]; unsigned char unknown_b_; };
extern "C" int func_ov015_021925a8(Struct_ov015_02190d7c*);
extern "C" void func_ov015_02191874(Struct_ov015_02190d7c*);
extern "C" int func_ov015_02191284(int*);
extern "C" void func_ov015_02191ea4(Struct_ov015_02190d7c*, int);
extern "C" void func_ov015_02191f04(Struct_ov015_02190d7c*);
extern "C" void func_ov015_02192064(Struct_ov015_02190d7c*, int);
extern "C" Struct_ov000_02179cdc_2* func_ov015_02193160(Struct_ov015_02190d7c*, int, int*);
extern "C" void func_ov015_021931b4(Struct_ov015_02190d7c*, int);
extern "C" int func_ov015_021931cc(Struct_ov015_02190d7c_2*);
extern "C" void func_ov015_02192700(Struct_ov015_02190d7c*, int);

// USA: func_ov015_02191668
extern "C" ARM void func_ov015_02191668(Struct_ov015_02190d7c* arg0) {
    if (func_ov015_021925a8(arg0)) return;
    if (arg0->unknown_1a4_ == 0x27) func_ov015_02191874(arg0);
    if (g_keyManager.TestKeysPressed(1)) {
        int var0 = func_ov015_02191284(&arg0->unknown_2c4_);
        arg0->unknown_268_[arg0->unknown_1a4_] = var0;
        switch (arg0->unknown_1a4_) {
        case 0x24: func_ov015_02191ea4(arg0, var0); break;
        case 0x26: func_ov015_02191f04(arg0); break;
        case 0x25: func_ov015_02192064(arg0, var0); break;
        case 0x27: break;
        default:
            int var1 = 0;
            func_ov015_02193160(arg0, arg0->unknown_1a4_, &var1);
            var0 += var1;
            Struct_ov000_02179cdc_2* var2 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var0);
            if (var2->unknown_b_) {
                func_ov015_021931b4(arg0, arg0->unknown_1a4_);
                arg0->unknown_1a4_ = var2->unknown_b_;
                func_ov015_02192700(arg0, 0);
            }
            break;
        }
    } else if (g_keyManager.TestKeysPressed(2)) {
        if (arg0->unknown_1a4_ > 0x23) {
            arg0->unknown_268_[arg0->unknown_1a4_] = func_ov015_02191284(&arg0->unknown_2c4_);
            arg0->unknown_1a4_ = func_ov015_021931cc(arg0);
            func_ov015_02192700(arg0, 0);
        } else {
            int var3 = arg0->unknown_194_;
            arg0->unknown_194_ = arg0->unknown_198_;
            arg0->unknown_198_ = var3;
            int var4;
            do { var4 = func_ov015_021931cc(arg0); } while (var4 >= 0x23);
            if (arg0->unknown_38_ >= 0) {
                switch (arg0->unknown_38_) {
                case 0: case 1:
                    while (var4 >= 0xf) var4 = func_ov015_021931cc(arg0);
                    break;
                case 2:
                    while (var4 >= 0x21) var4 = func_ov015_021931cc(arg0);
                    break;
                }
                arg0->unknown_38_ = -1;
                if (arg0->unknown_194_ == 1) arg0->unknown_194_ = 0;
            }
            arg0->unknown_1a4_ = var4;
            func_ov015_02192700(arg0, 0);
            arg0->unknown_34_ = 0;
        }
    }
}
