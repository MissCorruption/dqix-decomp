#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"
#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" {
void func_0207dfc8(void *, void *);
void _ZN13SafeAllocator5ResetEv(void *);
void func_0207df50(void *);
void func_0207df90(void *);
void func_0207dfac(void *);
void func_02059f38(void *, void *);
void func_020407b4(void *, int, int, int);
int func_02098210(int, int);
unsigned short *func_02012fe4(void);
}

#if defined(jpn)
#define data_ov003_0217fdfa data_ov003_0217e613
#endif
extern const char data_ov003_0217fdfa[];
extern const char data_ov003_0217fe16[];

struct Struct_ov003_02158754 {
    char unknown_0_[2];
    short unknown_2_;
};

struct Struct_ov003_02158754_2 {
    char unknown_0_[4];
    short unknown_4_;
};

struct Struct_ov003_02158754_3 {
    void *unknown_0_;
    char unknown_4_[0x100 - 4];
#if defined(jpn)
    char unknown_100_[0xf3];
#else
    char unknown1_100_[0xf7];
#endif
    signed char unknown_1f7_;
    char unknown_1f8_[0x208 - 0x1f8];
    unsigned char unknown_208_;
    char unknown_209_[3];
    int unknown_20c_;
    char unknown_210_[0x280 - 0x210];
    char unknown_280_[0x32c - 0x280];
    int unknown_32c_;
};

#if defined(jpn)
enum { Enum_ov003_02158754_716 = 0x27c, Enum_ov003_02158754_2112 = 0x860 };
#else
enum { Enum_ov003_02158754_716 = 0x2cc, Enum_ov003_02158754_2112 = 0x840 };
#endif

// USA: func_ov003_02158754
extern "C" ARM int func_ov003_02158754(struct Struct_ov003_02158754_3 *arg0) {
    BackgroundLoader *var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_208_ == 0) {
        var0->AddFence();
        arg0->unknown_20c_  = var0->QueueLoadFile(data_ov003_0217fdfa, 0);
        arg0->unknown_208_ = arg0->unknown_208_ + 1;
    } else if (arg0->unknown_208_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_20c_) == 0) {
            return 0;
        }
        void *var1        = 0;
        unsigned int var2 = 0;
        var0->GetLoadedFileByID(arg0->unknown_20c_, &var1, &var2);
        char *var3 = (char *) GetGameResources();
        func_0207dfc8(var3 + Enum_ov003_02158754_716, arg0->unknown_210_);
        _ZN13SafeAllocator5ResetEv((char *) arg0->unknown_0_ + 0x8c);
        func_0207df50(arg0->unknown_210_);
        func_0207df90(arg0->unknown_210_);
        Object3D *var4 = (Object3D *) arg0->unknown_280_;
        var4->Initialize();
        ObjectArchiveLoadInfo var5;
        var5.fileData  = var1;
        var5.unk_8     = var2;
        var5.allocator = (SafeAllocator *) ((char *) arg0->unknown_0_ + 0x8c);
        var5.unk_10    = 1;
        var4->LoadFromCHRArchive(&var5);
        GameState *var6         = GameState::GetInstance();
        Object3D *var7          = (Object3D *) var6->GetPartyMemberByIndex(arg0->unknown_1f7_);
        struct Struct_ov003_02158754 *var8 = (struct Struct_ov003_02158754 *) var6->GetGameObjectByIndex(arg0->unknown_1f7_ * 0xc + 0x14);
        unsigned short *var9     = func_02012fe4();
        unsigned int var10       = var9[0];
        if (var7->IsVisible() && var7->GetInheritedAlpha() != 0 && var10 != 10000) {
            if (TestFlags04((GameResources*)var3, 4) == 0 || ((struct Struct_ov003_02158754_2 *) var7)->unknown_4_ == 0) {
                func_02059f38(var4, (char *) var7 + 0x44);
                const Vector3fix &var11 = var7->GetScale();
                var4->SetScale(&var11);
                var4->MaybeSetRegularAnimation(data_ov003_0217fe16, 9);
                var4->EnableFlag(0x40000);
            } else {
                if (var8 != 0 && func_02098210((int) ((char *) var9 + Enum_ov003_02158754_2112), var10) != 0) {
                    if (var8->unknown_2_ == 0x2347 || var8->unknown_2_ == 0x2348 || var8->unknown_2_ == 0x2349) {
                        if (var8->unknown_2_ == 0x2347) {
                            func_020407b4(var4, 0x2347 - 0x2200, 0x266, -13230);
                        } else if (var8->unknown_2_ == 0x2348) {
                            func_020407b4(var4, -7823, 0x266, -13230);
                        } else if (var8->unknown_2_ == 0x2349) {
                            func_020407b4(var4, 0x2d70, 0x266, -13230);
                        }
                        const Vector3fix &var12 = var7->GetScale();
                        var4->SetScale(&var12);
                        var4->MaybeSetRegularAnimation(data_ov003_0217fe16, 9);
                        var4->EnableFlag(0x40000);
                    }
                }
            }
        } else {
            var4->EnableFlag(1);
        }
        func_0207dfac(arg0->unknown_210_);
        arg0->unknown_32c_ = 1;
        var0->RemoveTask(arg0->unknown_20c_);
        arg0->unknown_20c_  = -1;
        arg0->unknown_208_ = 0;
        return 1;
    }
    return 0;
}
