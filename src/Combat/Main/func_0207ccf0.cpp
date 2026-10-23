#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
struct Struct_0205faf4_11;
struct Struct_0207ccf0_4;

extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" int func_0207cf30(void* arg0, short arg1, int arg2, unsigned char arg3);
extern "C" void func_0207cc18(void* arg0, struct Struct_0201099c_9* arg1);
extern "C" int func_0207d134(void* arg0, short arg1, int arg2);
extern "C" int func_0207d200(struct Struct_0207ccf0_4* arg0, short arg1, int arg2);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

struct Struct_0207ccf0 {
    char unknown_0_[0x2c];
    struct Struct_0201099c_10* unknown_2c_;
    void* unknown_30_;
    int unknown_34_;
};

struct Struct_0207ccf0_2 {
    char unknown_0_[4];
    void* unknown_4_;
    unsigned int unknown_8_0_ : 4, unknown_8_4_ : 21, unknown_b_1_ : 1, unknown_b_2_ : 6;
};

struct Struct_0207ccf0_3 {
    char unknown_0_[0x134];
    int unknown_134_;
};

static inline int inline_0207ccf0(unsigned int arg0) { return arg0 <= 7; }

// USA: func_0207ccf0
extern "C" ARM int func_0207ccf0(struct Struct_0207ccf0* arg0, short arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6) {
    int var0 = 0;
    if (arg0->unknown_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)arg0, (int)&arg1, 1);
        var0 = 1;
    }
    int var1 = -1;
    struct Struct_0207ccf0_2* var2 = (struct Struct_0207ccf0_2*)func_020dedd0(arg0->unknown_2c_, arg1);
    if (var2 != NULL) {
        struct Struct_0207ccf0_3* var3 = (struct Struct_0207ccf0_3*)func_0200ff1c(GameState::GetInstance(), arg3);
        if (var3 == NULL) return -1;
        if (func_02061bd8((struct Struct_0205faf4_11*)var3)) return -1;
        short* var4 = (short*)(func_02053c6c((unsigned char*)var3) + 0x454);
        int var5 = 0;
        if (arg4 && arg6 && var2->unknown_b_1_) {
            if (func_0207cf30(arg0, arg1, arg2, arg5)) {
                var5 = arg2;
                var1 = 1;
            }
        } else if (var2->unknown_8_0_ == 8) {
            for (int var6 = 0; var6 < 8; var6++) {
                if (var4[var6] <= 0) {
                    var4[var6] = arg1;
                    var5 = (short)(var5 + 1);
                    var1 = 0;
                    func_0207cc18(arg0, (struct Struct_0201099c_9*)var2);
                    arg0->unknown_30_ = var2->unknown_4_;
                    arg0->unknown_34_ = var3->unknown_134_;
                    if (var5 == arg2) break;
                }
            }
        }
        if ((var1 == 0 && var5 < arg2) || arg4) {
            short var7 = (short)(arg2 - var5);
            if (inline_0207ccf0(var2->unknown_8_0_)) {
                if (func_0207d134(arg0, arg1, (signed char)var7)) var1 = 1;
            } else if (var2->unknown_8_0_ == 9) {
                if (func_0207d200((struct Struct_0207ccf0_4*)arg0, arg1, (signed char)var7)) var1 = 1;
            } else {
                if (func_0207cf30(arg0, arg1, var7, arg5)) var1 = 1;
            }
        }
    } else {
        var1 = -2;
    }
    if (var0) {
        SafeAllocator* var8 = (SafeAllocator*)arg0;
        SignedAllocatorHeader* var9 = var8->GetSignedAllocator();
        var8->Destroy();
        func_02012da4(&data_02114e20, var9);
        arg0->unknown_2c_ = NULL;
    }
    return var1;
}
