#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0207fe44;
struct Struct_0205a254;
struct Struct_0205a254_2 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};
struct Struct_020a9ea4;
struct Struct_02018300_3;
struct Struct_02038598_4;

struct Struct_ov003_02165278 {
    unsigned char unknown_0_[RG(0x3c9, 0x139)];
    unsigned char unknown_3c9_0_ : 1;
};

struct Struct_ov003_02165278_2 {
    char unknown_0_[RG(0x324, 0x20c)];
    struct Struct_0207fe44* unknown_324_;
    char unknown_328_[RG(0x38c - 0x328, 0x274 - 0x210)];
    struct Struct_0205a254* unknown_38c_;
    char unknown_390_[RG(0x464 - 0x390, 0x28c - 0x278)];
    unsigned int unknown_464_;
    char unknown_468_[0x484 - 0x468];
    short unknown_484_;
    short unknown_486_;
    short unknown_488_;
    char unknown_48a_[0x4a3 - 0x48a];
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
};

extern "C" void* func_020d6c00(void);
extern "C" Struct_ov003_02165278* func_020936f8(void);
extern "C" void func_ov003_021612c0(struct Struct_ov003_02165278_2* arg0);
extern "C" int func_ov003_02161344(struct Struct_ov003_02165278_2* arg0);
extern "C" void func_0207fe44(struct Struct_0207fe44* arg0);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);
extern "C" int func_020aad1c(void* arg0, void* arg1, int arg2, int arg3);
extern int data_0211e33c;
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020939dc(void* arg0);
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" void func_ov017_021c35ac(void);

// USA: func_ov003_02165278
extern "C" ARM void func_ov003_02165278(struct Struct_ov003_02165278_2* arg0) {
    void* var0 = func_020d6c00();
    Struct_ov003_02165278* var1 = func_020936f8();
    unsigned char var2 = arg0->unknown_4a4_;
    struct Struct_0207fe44* var3 = arg0->unknown_324_;

    if (var2 == 0xb) {
        arg0->unknown_484_ = 0x19;
        arg0->unknown_4a4_++;
    } else if (var2 == 0xc) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_++;
    } else if (var2 == 0xd) {
        int var4 = func_ov003_02161344(arg0);
        if (var4 != -1) {
            if (var4 != 1) {
                return;
            }
            func_0207fe44(var3);
            arg0->unknown_484_ = 0x1a;
            arg0->unknown_4a4_++;
            var1->unknown_3c9_0_ = 0;
        } else {
            arg0->unknown_488_ = -1;
            arg0->unknown_484_ = 0x3b;
            arg0->unknown_486_ = 1;
            func_0207fe44(var3);
            arg0->unknown_4a3_ = 10;
            arg0->unknown_4a4_ = 0;
        }
    } else if (var2 == 0xe) {
        if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() != 0) {
            return;
        }
        func_020466e4((unsigned int*)func_020d6c00(), 0x80);
        func_020a9ea4((struct Struct_020a9ea4*)((char*)arg0 + RG(0x4b4, 0x2dc)));
        arg0->unknown_4a4_++;
    } else if (var2 == 0xf) {
        arg0->unknown_464_ |= 0x2000000;
        BackgroundLoader::AddLockGlobal();
        BackgroundLoader::FreeAllocationsGlobal();
        if (func_020aad1c((char*)arg0 + RG(0x4b4, 0x2dc), &data_0211e33c, 10, 0) == 1) {
            struct Struct_0205a254_2* var5 = func_0205a3d0(arg0->unknown_38c_, 0);
            if (var5 != NULL) {
                var5->unknown_15_ |= 8;
            }
            var5 = func_0205a3d0(arg0->unknown_38c_, 1);
            if (var5 != NULL) {
                var5->unknown_15_ &= ~8;
            }
            arg0->unknown_464_ &= ~0x2000000;
            arg0->unknown_484_ = 0x30;
            arg0->unknown_4a4_++;
            func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x80);
        }
        BackgroundLoader::RemoveLockGlobal();
    } else if (var2 == 0x10) {
        func_ov017_021c35ac();
        func_020939dc(var1);
        func_020466f4((struct Struct_02038598_4*)var0, 0x20);
        arg0->unknown_484_ = 0x1b;
        arg0->unknown_4a4_++;
        GameObject* var6 = GameState::GetInstance()->GetProtagonist();
        if (var6 == NULL) {
            return;
        }
        func_020397cc((struct Struct_02018300_3*)var6, 1);
    } else if (var2 == 0x11) {
        func_ov003_021612c0(arg0);
        arg0->unknown_4a4_++;
    } else if (var2 == 0x12) {
        int var7 = func_ov003_02161344(arg0);
        if (var7 != -1) {
            if (var7 != 1) {
                return;
            }
            arg0->unknown_484_ = 0x1c;
            arg0->unknown_4a3_ = 0x10;
            arg0->unknown_4a4_ = 0;
        } else {
            arg0->unknown_484_ = 0x1d;
            arg0->unknown_4a3_ = 0x10;
            arg0->unknown_4a4_ = 0;
        }
    }
}
