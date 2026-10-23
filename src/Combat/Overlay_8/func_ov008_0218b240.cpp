#if defined(jpn)
#define R(j,u) (j)
#define func_ov013_021846a0 func_ov013_021856dc
#define func_ov013_02184d80 func_ov013_02185db4
#define func_ov013_02186160 func_ov013_02187178
#define func_ov013_021864f0 func_ov013_02187820
#define func_ov013_02186590 func_ov013_021878c0
#define func_ov013_0218678c func_ov013_02187ab8
#define func_ov013_0218683c func_ov013_02187b68
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
extern "C" void* func_020d6c00();
struct Struct_02038598_4;
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);

struct Struct_ov008_0218b240 {
    char unknown_0_[R(0xe95,0xe99)];
    unsigned char unknown_e99_;
    unsigned char unknown_e9a_;
    unsigned char unknown_e9b_;
    unsigned char unknown_e9c_;
    char unknown_e9d_[0xea0 - 0xe9d];
    int unknown_ea0_;
    int unknown_ea4_;
    int unknown_ea8_;
    char unknown_eac_[R(4,0xeb4 - 0xeac)];
    int unknown_eb4_;
    char unknown_eb8_[0xec0 - 0xeb8];
    unsigned char unknown_ec0_0_ : 1;
    unsigned char unknown_ec0_1_ : 1;
    unsigned char unknown_ec0_2_ : 1;
    unsigned char unknown_ec0_3_ : 1;
    unsigned char unknown_ec0_4_ : 4;
};

// USA: func_ov008_0218b240
extern "C" ARM void func_ov008_0218b240(Struct_ov008_0218b240* arg0) {
    if (arg0->unknown_ec0_3_) return;

    GameState::GetInstance();
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();

    arg0->unknown_ec0_0_ = 0;
    func_0205d6a0((Struct_0205d6a0*)((char*)arg0 + 0x18), 1);

    arg0->unknown_e99_ = 2;
    arg0->unknown_e9a_ = 0;
    arg0->unknown_e9b_ = 2;
    arg0->unknown_e9c_ = 0;

    void* var1 = func_020d6c00();
    func_020466f4((Struct_02038598_4*)var1, 0x2f);
    ClearFlags00(GetGameResources(), 0x10);

    var0->RemoveTask(arg0->unknown_ea0_);
    var0->RemoveTask(arg0->unknown_eb4_);
    var0->RemoveTask(arg0->unknown_ea4_);
    var0->RemoveTask(arg0->unknown_ea8_);

    arg0->unknown_ea0_ = -1;
    arg0->unknown_eb4_ = -1;
    arg0->unknown_ea4_ = -1;
    arg0->unknown_ea8_ = -1;

    arg0->unknown_ec0_3_ = 1;
}
