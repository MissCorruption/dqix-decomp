#include <globaldefs.h>
#include <GameState/GameState.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0202c1a4;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_ov017_0218e674;
struct Struct_ov017_021cd748_6 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
    signed char unknown_f_;
    float unknown_10_;
};
struct Struct_ov017_021cd748_7 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char unknown_4_[4];
    unsigned short unknown_8_;
    char unknown_a_[0xc];
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    char unknown_1a_[0x36];
    unsigned short unknown_50_;
#if defined(jpn)
    char unknown_52_[0xc0];
#else
    char unknown1_52_[0xc4];
#endif
    signed char unknown_116_;
    char unknown_117_;
    unsigned short unknown_118_;
    char unknown_11a_[0x5e];
    unsigned char unknown_178_0_ : 1;
    unsigned char unknown_178_1_ : 7;
    unsigned char unknown_179_;
    unsigned char unknown_17a_;
    unsigned char unknown_17b_;
    float unknown_17c_;
    char unknown_180_[0x48];
};
#if defined(jpn)
struct Struct_ov017_021cd748 { unsigned short unknown_0_; char unknown_2_[0x2814]; unsigned short unknown_27d6_; };
#else
struct Struct_ov017_021cd748 { unsigned short unknown_0_; char unknown_2_[0x27d4]; unsigned short unknown_27d6_; };
#endif
struct Struct_ov017_021cd748_2 { unsigned short unknown_0_; };
struct Struct_ov017_021cd748_3 { char unknown_0_[3]; unsigned char unknown_3_; };
#if defined(jpn)
struct Struct_ov017_021cd748_4 { char unknown_0_[0x5a4c]; unsigned char unknown_5cac_; };
#else
struct Struct_ov017_021cd748_4 { char unknown_0_[0x5cac]; unsigned char unknown_5cac_; };
#endif
#if defined(jpn)
struct Struct_ov017_021cd748_5 { char unknown_0_[0x41fc]; unsigned short unknown_44ac_; };
#else
struct Struct_ov017_021cd748_5 { char unknown_0_[0x44ac]; unsigned short unknown_44ac_; };
#endif
struct Struct_0206ea7c_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; char unknown_3_[25]; };
struct Struct_0206ea7c { char unknown_0_[0x332]; unsigned char unknown_332_; char unknown_333_; };
extern "C" Struct_0206ea7c* func_0205ec34();
extern "C" Struct_ov017_021cd748* func_02012fe4();
extern "C" int func_0202c540(Struct_0202c1a4*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" void* func_0200fd0c(GameState*);
extern "C" int func_02046b08(void**);
extern "C" void func_ov017_021baedc(void*, int);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern "C" Struct_0206ea7c_2* func_0206ea7c(Struct_0206ea7c*, int);
extern "C" int func_ov017_021bd3a4(Struct_ov017_0218e674*);
extern "C" int func_0202c508(Struct_0202c1a4*);
extern "C" void func_ov017_021bc6e0(Struct_ov017_021cd748_7*, int, int);

// USA: func_ov017_021cd748
extern "C" ARM void func_ov017_021cd748(int arg0, Struct_ov017_021cd748_6* arg1, GameState* arg2, GameResources* arg3, Struct_0202c1a4* arg4) {
    int var0;
    GameState* var1;
    Struct_ov017_021cd748_7* var2;
    unsigned short var3;
    var1 = GameState::GetInstance();
    Struct_0201bdac_2* var4 = (Struct_0201bdac_2*)arg3->unknown_ptr_array_36fc[0];
    var2 = (Struct_ov017_021cd748_7*)arg3->unknown_ptr_array_371c[6];
    func_0205ec34();
    Struct_ov017_021cd748* var5 = func_02012fe4();
    var3 = var5->unknown_0_;
    if ((func_0202c540(arg4) && arg0 == 0) || arg1->unknown_e_) {
        if (arg1->unknown_f_ >= 0 && arg1->unknown_f_ != func_0202c1a4(arg4)) return;
        if (((Struct_ov017_021cd748_4*)var1)->unknown_5cac_) return;
        var0 = 0;
        if (var3 == arg1->unknown_4_) var0 = 1;
        if (var3 == arg1->unknown_a_) var0 = 1;
        if (!var0 && ((Struct_ov017_021cd748_3*)arg3->unknown_ptr_array_36fc[4])->unknown_3_) {
            unsigned short var6 = ((Struct_ov017_021cd748_2*)func_0200fd0c(arg2))->unknown_0_;
            if (var6 == arg1->unknown_4_) var0 = 1;
            if (var6 == arg1->unknown_a_) var0 = 1;
        }
        if (!var0) return;
        unsigned short var7 = arg1->unknown_8_;
        if (!var7) var7 = arg1->unknown_6_;
        if (!var7) return;
        if (func_02046b08((void**)var4) || arg1->unknown_e_) {
            int var8 = 0;
            if (!var2->unknown_3_) {
                if (var2->unknown_2_) {
                    if (arg1->unknown_8_ == var2->unknown_118_) return;
                    var2->unknown_8_ = var7;
                    if (arg1->unknown_e_) var2->unknown_116_ = arg0;
                    var8 = 1;
                } else {
                    if (var7 == var5->unknown_27d6_) return;
                    func_ov017_021baedc(var2, 1);
                    var2->unknown_8_ = var7;
                    if (arg1->unknown_e_) var2->unknown_116_ = arg0;
                    func_020469b4(var4, (Struct_0201bdac*)var2);
                    var8 = 1;
                }
            }
            if (var8 && func_0202c540(arg4)) {
                Struct_0206ea7c* var9 = func_0205ec34();
                Struct_0206ea7c_2* var10 = func_0206ea7c(var9, var9->unknown_332_);
                var2->unknown_178_0_ = 0;
                var2->unknown_178_1_ = 0;
                var2->unknown_179_ = 0;
                var2->unknown_17a_ = 0;
                var2->unknown_17b_ = 0;
                var2->unknown_17c_ = -1.0f;
                var2->unknown_178_0_ = 1;
                var2->unknown_179_ = var10->unknown_0_;
                var2->unknown_17a_ = var10->unknown_1_;
                var2->unknown_17b_ = var10->unknown_2_;
                var2->unknown_17c_ = arg1->unknown_10_;
            }
        } else {
            if (!func_ov017_021bd3a4((Struct_ov017_0218e674*)var2)) ((Struct_ov017_021cd748_5*)arg3)->unknown_44ac_ = var7;
        }
    } else {
        if (func_0202c508(arg4) && func_ov017_021bd3a4((Struct_ov017_0218e674*)var2)) {
            unsigned short var11 = arg1->unknown_6_;
            unsigned short var12 = var2->unknown_18_;
            unsigned short var13 = var2->unknown_16_;
            if (var11 == var12 || var11 == var13) func_ov017_021bc6e0(var2, arg0, var2->unknown_50_);
        }
    }
}
