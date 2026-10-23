#if defined(jpn)
#define R(j,u) (j)
#define data_ov008_0218b594 data_ov008_0218c1aa
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct Struct_0206f81c_2;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct SafeAllocator;

extern "C" void func_ov008_02184a3c(char* arg0, unsigned char arg1);
extern "C" void func_ov008_02184754(void* arg0);
extern "C" void func_ov008_021845ac(void* arg0);
extern "C" void func_020dc2d0(int arg0);
extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_ov004_0216aa70(SafeAllocator* arg0, void* arg1);
extern char data_ov008_0218b594;

struct Struct_ov008_0218b084 {
    char unknown_0_[0x2a8];
    char unknown_2a8_[0xdb8 - 0x2a8];
    unsigned char unknown_db8_;
    char unknown_db9_[R(0xe98,0xe9c) - 0xdb9];
    signed char unknown_e9c_;
    char unknown_e9d_[R(0xea8,0xeac) - R(0xe99,0xe9d)];
    int unknown_eac_;
#if !defined(jpn)
    int unknown_eb0_;
#endif
    char unknown_eb4_[R(0xeb0,0xeb8) - R(0xeac,0xeb4)];
    unsigned char unknown_eb8_;
    char unknown_eb9_;
    unsigned char unknown_eba_;
    char unknown_ebb_[R(0xeb8,0xec0) - R(0xeb3,0xebb)];
    unsigned char unknown_ec0_0_ : 1;
    unsigned char unknown_ec0_1_ : 1;
    unsigned char unknown_ec0_2_ : 6;
};

// USA: func_ov008_0218b084
extern "C" ARM void func_ov008_0218b084(Struct_ov008_0218b084* arg0) {
    if (arg0->unknown_e9c_ == 0) {
        if (!arg0->unknown_ec0_1_) {
            arg0->unknown_e9c_ = 2;
            return;
        }
        func_ov008_02184a3c(arg0->unknown_2a8_, 0xd);
        arg0->unknown_e9c_ = arg0->unknown_e9c_ + 1;
        return;
    }
    if (arg0->unknown_e9c_ == 1) {
        func_ov008_02184754(arg0->unknown_2a8_);
        if (arg0->unknown_db8_ != 0xe) {
            return;
        }
        func_ov008_021845ac(arg0->unknown_2a8_);
        arg0->unknown_e9c_ = arg0->unknown_e9c_ + 1;
        return;
    }
    if (arg0->unknown_e9c_ != 2) {
        return;
    }
    void* var0 = GetGameResources();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    var1->RemoveTask(arg0->unknown_eac_);
#if !defined(jpn)
    var1->RemoveTask(arg0->unknown_eb0_);
    arg0->unknown_eac_ = -1;
    arg0->unknown_eb0_ = -1;
#endif
    unsigned short* var2 = (unsigned short*)0x4001008;
    var2[0] = (var2[0] & ~3) | 1;
    var2[1] = (var2[1] & ~3) | 2;
    var2[2] = (var2[2] & ~3);
    func_020dc2d0(0);
    if (arg0->unknown_eba_ != 0) {
        Struct_0201bdac_2* var3;
        unsigned char* var4 = *(unsigned char**)((char*)var0 + R(0x392c,0x3b4c));
        var3 = *(Struct_0201bdac_2**)((char*)var0 + R(0x34ec,0x36fc));
        func_ov017_021b2174(var4);
        func_ov017_021b2ba0((Struct_0206f81c_2*)var4, &data_ov008_0218b594);
        func_ov017_021b2bd0(var4, (int)func_ov004_0216aa70, OVERLAY_ID(4));
        func_020469b4(var3, (Struct_0201bdac*)var4);
    }
    arg0->unknown_eb8_ = 1;
}
