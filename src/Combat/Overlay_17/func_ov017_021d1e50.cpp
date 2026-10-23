#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021cd748_6 { char unknown_0_[4]; unsigned short unknown_4_; unsigned short unknown_6_; unsigned short unknown_8_; unsigned short unknown_a_; short unknown_c_; short unknown_e_; short unknown_10_; };
struct Struct_ov017_021d1e50 { unsigned short unknown_0_; char unknown_2_[5]; unsigned char unknown_7_; char unknown_8_[8]; Vector3i unknown_10_; unsigned short unknown_1c_; char unknown_1e_[0x43]; unsigned char unknown_61_; };
struct Struct_ov017_021d1e50_2 {
    unsigned short unknown_0_;
#if defined(jpn)
    char unknown_2_[0x27f6];
#else
    char unknown1_2_[0x27b6];
#endif
    Vector3i unknown_27b8_;
};
struct Struct_0201bdac_2;
struct Struct_0201bdac { char unknown_0_[8]; };
struct Struct_ov017_021d1e50_3 : Struct_0201bdac {
    unsigned short unknown_8_;
#if defined(jpn)
    char unknown_a_[0xf7];
#else
    char unknown1_a_[0xfb];
#endif
    unsigned char unknown_105_;
};
struct Struct_0202c1a4;
extern "C" int func_0202c1a4(Struct_0202c1a4*);
extern "C" int func_02046b08(void**);
extern "C" Struct_ov017_021d1e50_2* func_02012fe4();
extern "C" void func_ov017_021baedc(Struct_ov017_021d1e50_3*, int);
extern "C" void func_ov017_021bbbf8(void*, unsigned short);
extern "C" int func_0201079c(char*);
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern "C" void* func_0200fd0c(GameState*);
extern "C" void func_02070378(char*);
extern "C" void func_0200fcfc(void*, const void*);
extern "C" void func_ov017_0219e310(unsigned char*, int);
extern "C" void func_ov017_021a65c4(void*, unsigned char, int);

// USA: func_ov017_021d1e50
extern "C" ARM void func_ov017_021d1e50(int arg0, Struct_ov017_021cd748_6* arg1, GameState* arg2, GameResources* arg3, Struct_0202c1a4* arg4) {
    Struct_ov017_021d1e50* var0;
    int var1;
    int var2;
    int var3;
    Struct_0201bdac_2* var4;
    Struct_ov017_021d1e50_3* var5;
    if (!func_0202c1a4(arg4)) return;
    var4 = (Struct_0201bdac_2*)arg3->unknown_ptr_array_36fc[0];
    if (!func_02046b08((void**)var4)) return;
    Struct_ov017_021d1e50_2* var6 = func_02012fe4();
    var2 = var6->unknown_0_;
    if (var2 != 0x1901 && var2 != 0x1902 && var2 != 0x1903 && var2 != 0x1904) return;
    if (arg1->unknown_8_ || arg1->unknown_a_) {
        var5 = (Struct_ov017_021d1e50_3*)arg3->unknown_ptr_array_371c[6];
        func_ov017_021baedc(var5, 1);
        var3 = arg1->unknown_8_;
        int var7 = arg1->unknown_a_;
        if (!var3) { var3 = var7; var7 = 0; }
        var5->unknown_8_ = var3;
        func_ov017_021bbbf8(var5, var7);
        if (func_0201079c((char*)arg2) >= 0x13 && var3 == 0x7345 && (unsigned int)(var2 - 0x1901) <= 3) var5->unknown_105_ = 1;
        func_020469b4(var4, var5);
    } else {
        var0 = (Struct_ov017_021d1e50*)func_0200fd0c(arg2);
        func_02070378((char*)var0);
        var1 = 1;
        var0->unknown_7_ = 1;
        if (arg1->unknown_4_) {
            switch (arg1->unknown_4_) {
            case 1:
                var0->unknown_0_ = 0x1198;
                var1 = 0;
                var0->unknown_1c_ = 0;
                var0->unknown_10_.x = -0xd000;
                var0->unknown_10_.y = 0x4333;
                var0->unknown_10_.z = -0xd000;
                break;
            case 2:
                var0->unknown_0_ = 0x4e27;
                var0->unknown_1c_ = 0;
                var0->unknown_10_.x = -0x2b000;
                var0->unknown_10_.y = 0x14cc;
                var0->unknown_10_.z = -0x22000;
                break;
            case 4:
                var0->unknown_0_ = 0x4e42;
                var0->unknown_1c_ = 0;
                var0->unknown_10_.x = 0x4000;
                var0->unknown_10_.y = 0x14cc;
                var0->unknown_10_.z = 0x41000;
                break;
            case 3:
                var0->unknown_0_ = 0x10cd;
                var0->unknown_1c_ = 0x3244;
                var1 = 0;
                var0->unknown_10_.x = 0;
                var0->unknown_10_.y = -0x6ccc;
                var0->unknown_10_.z = 0;
                break;
            case 5:
                var0->unknown_0_ = 0x1130;
                var0->unknown_1c_ = 0x3244;
                var1 = 0;
                var0->unknown_10_.x = 0;
                var0->unknown_10_.y = -0x5ccc;
                var0->unknown_10_.z = 0x1000;
                break;
            }
            func_0200fcfc(arg2, var0);
            unsigned char* var8 = (unsigned char*)arg3->unknown_ptr_array_36fc[4];
            func_ov017_0219e310(var8, 0);
            func_020469b4(var4, (Struct_0201bdac*)var8);
            if (var1) func_ov017_021a65c4(arg3, 1, 0);
        } else if (arg1->unknown_6_) {
            var0->unknown_61_ = 1;
            var0->unknown_0_ = arg1->unknown_6_;
            var0->unknown_1c_ = 0;
            var0->unknown_10_.x = 0x100000;
            var0->unknown_10_.y = 0;
            var0->unknown_10_.z = 0x100000;
            Vector3i var9;
            var9.x = arg1->unknown_c_ << 7;
            var9.y = arg1->unknown_e_ << 7;
            var9.z = arg1->unknown_10_ << 7;
            var6->unknown_27b8_ = var9;
            func_0200fcfc(arg2, var0);
            unsigned char* var10 = (unsigned char*)arg3->unknown_ptr_array_36fc[4];
            func_ov017_0219e310(var10, 0);
            func_020469b4(var4, (Struct_0201bdac*)var10);
            func_ov017_021a65c4(arg3, var1, 0);
        }
    }
}
