#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

struct Struct_02011544;
struct Struct_02038598_4;

extern int data_0211e33c;
extern int data_02108e00;

extern "C" int func_02075910(int arg0, void* arg1, int arg2, int arg3);
extern "C" void func_02075acc(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_020a9eb8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_020d6c00();
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
void SetBrightness(struct GameResources* res, int a, int b);
extern "C" void func_02011544(struct Struct_02011544* arg0);
extern "C" int func_02075ca0();
extern "C" void func_02075cb8();

struct Struct_020aad1c {
    unsigned char unknown_0_;
    int unknown_4_;
};

// USA: func_020aad1c
extern "C" ARM int func_020aad1c(struct Struct_020aad1c* arg0, int arg1, int arg2, int arg3) {
    if (arg0->unknown_0_ == 0) {
        GameState* var0 = GameState::GetInstance();
#if defined(jpn)
        var0->unknown_5cc8_ = 1;
#else
        var0->unknown_5cc8_ = 1;
        GameResources* var1 = GetGameResources();
#endif
        unsigned int var2;
        if (func_02075910(0, &var2, 1, 0) == 0) {
#if defined(jpn)
            SetBrightness(GetGameResources(), -16, 10);
#else
            SetBrightness(var1, -16, 10);
#endif
            func_02011544((struct Struct_02011544*)var0);
            arg0->unknown_0_ = 4;
            return 1;
        } else {
            BackgroundLoader::FreeAllocationsGlobal();
#if !defined(jpn)
            unsigned int* var3 = (unsigned int*)func_020d6c00();
            func_020466e4(var3, 0x2000000);
            SetFlags00(var1, 0x10);
#endif
            int var4 = (int)&data_0211e33c + 0x1c + 0x29000;
            if (func_02075910(0x8000, (void*)(arg0->unknown_4_ = var4), 0x6fe4, 1) == 0) {
#if !defined(jpn)
                var3 = (unsigned int*)func_020d6c00();
                func_020466f4((struct Struct_02038598_4*)var3, 0x2000000);
                ClearFlags00(var1, 0x10);
#endif
                arg0->unknown_0_ = 4;
                return 1;
            } else {
                arg0->unknown_0_ = 1;
            }
        }
    } else if (arg0->unknown_0_ == 1) {
        if (func_02075ca0() == 0) {
            return 0;
        }
        func_02075cb8();
        data_02108e00 = arg0->unknown_4_;
        if (func_020a9eb8(arg0, arg1, arg2, arg3) == 0) {
#if !defined(jpn)
            func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x2000000);
            ClearFlags00(GetGameResources(), 0x10);
#endif
            arg0->unknown_0_ = 4;
            return 1;
        } else {
            data_02108e00 = 0;
            func_02075acc(arg3 ? 0x8010 : 0x10, (void*)(arg0->unknown_4_ + 0x10), 0x6fe4, 1);
            arg0->unknown_0_ = 2;
        }
    } else if (arg0->unknown_0_ == 2) {
        if (func_02075ca0() == 0) {
            return 0;
        }
        func_02075cb8();
        if (arg3 != 0) {
#if !defined(jpn)
            func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x2000000);
            ClearFlags00(GetGameResources(), 0x10);
#endif
            arg0->unknown_0_ = 4;
            return 1;
        } else {
            func_02075acc(0x8010, (void*)(arg0->unknown_4_ + 0x10), 0x6fe4, 1);
            arg0->unknown_0_ = 3;
        }
    } else if (arg0->unknown_0_ == 3) {
        if (func_02075ca0() == 0) {
            return 0;
        }
        func_02075cb8();
#if !defined(jpn)
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x2000000);
        ClearFlags00(GetGameResources(), 0x10);
#endif
        arg0->unknown_0_ = 4;
        return 1;
    }
    return 0;
}
