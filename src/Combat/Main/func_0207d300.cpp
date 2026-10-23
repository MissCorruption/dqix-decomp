#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
struct Struct_0205faf4_11;
struct Struct_0207d300;

struct Struct_0207ccf0_4 {
    char unknown_0_[0x2c];
    struct Struct_0201099c_10* unknown_2c_;
};

struct Struct_0201099c_9 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 21;
    unsigned int unknown_b_1_ : 1;
};

extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" int func_02083960(struct Struct_0207d300* arg0);
extern "C" int func_0207ccf0(struct Struct_0207ccf0_4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" int func_0207cf30(struct Struct_0207ccf0_4* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0207d134(struct Struct_0207ccf0_4* arg0, int arg1, int arg2);
extern "C" int func_0207d200(struct Struct_0207ccf0_4* arg0, short arg1, int arg2);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

static inline int inline_0207d300(struct Struct_0201099c_9* arg0) {
    return arg0->unknown_8_0_ <= 7;
}

// USA: func_0207d300
extern "C" ARM int func_0207d300(struct Struct_0207ccf0_4* arg0, short arg1, short arg2, int arg3) {
    int var0 = 0;
    if (arg0->unknown_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)arg0, (int)&arg1, 1);
        var0 = 1;
    }
    int var1 = -1;
    struct Struct_0201099c_9* var2 = func_020dedd0(arg0->unknown_2c_, arg1);
    if (var2 == NULL) {
        var1 = -2;
    } else if (inline_0207d300(var2) != 0) {
        func_0207d134(arg0, arg1, arg2);
        var1 = 3;
    } else if (var2->unknown_8_0_ == 9) {
        func_0207d200(arg0, arg1, arg2);
        var1 = 5;
    } else if (var2->unknown_b_1_) {
        if (func_0207cf30(arg0, arg1, arg2, 0) != 0) {
            var1 = 2;
        }
    } else {
        GameState* var3 = GameState::GetInstance();
        char* var4 = (char*)func_02010828(var3);
        unsigned char var5;
        for (var5 = 0; var5 < *(unsigned char*)(var4 + 0xf7c); var5++) {
            int var6 = *(signed char*)(var4 + var5 + 0xf78);
            GameObject* var7 = func_0200ff1c(var3, var6);
            if (var7 == NULL) {
                continue;
            }
            if (func_02061bd8((struct Struct_0205faf4_11*)var7) != 0) {
                continue;
            }
            if (arg3 != 0) {
                if ((int)*(unsigned short*)(*(char**)((char*)var7 + 0x130) + 4) <= 0) {
                    continue;
                }
                char* var8 = *(char**)((char*)var7 + 0x138);
                if (var8 != NULL && *(unsigned short*)var8 == 0) {
                    continue;
                }
            }
            unsigned char* var9 = func_02053c6c((unsigned char*)var7);
            if (var9 == NULL) {
                continue;
            }
            while (arg2 != 0) {
                if (func_02083960((struct Struct_0207d300*)var9) == 8) {
                    break;
                }
                var1 = func_0207ccf0(arg0, arg1, 1, var6, 0, 0, 0);
                if (var1 != 0) {
                    break;
                }
                arg2 = (short)(arg2 - 1);
            }
        }
        if (arg2 > 0) {
            if (func_0207cf30(arg0, arg1, arg2, 0) != 0) {
                var1 = 2;
            }
        }
    }
    if (var0) {
        SafeAllocator* var10 = (SafeAllocator*)arg0;
        SignedAllocatorHeader* var11 = var10->GetSignedAllocator();
        var10->Destroy();
        func_02012da4(&data_02114e20, var11);
        arg0->unknown_2c_ = NULL;
    }
    return var1;
}
