#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
struct Struct_0207cf30_3;
struct Struct_0207cf30_4;
struct Struct_0205faf4_11;
struct Struct_0207cf30;

extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_020a0b3c(struct Struct_0207cf30_3* arg0, int arg1);
extern "C" int func_020a095c(struct Struct_0207cf30_4* arg0, int arg1, int arg2);
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);
extern "C" struct Struct_0207cf30* func_02053c6c(unsigned char* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);

extern "C" void func_0207cc18(void* arg0, struct Struct_0201099c_9* arg1);

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern AllocatorUnion data_02114e20 __attribute__((aligned(4)));

struct Struct_0207cf30 {
    char unknown_0_[0x454];
    short unknown_454_[8];
};

struct Struct_0207cf30_2 {
    char unknown_0_[0x2c];
    struct Struct_0201099c_10* unknown_2c_;
    void* unknown_30_;
    void* unknown_34_;
};

// USA: func_0207cf30
extern "C" ARM int func_0207cf30(struct Struct_0207cf30_2* arg0, short arg1, int arg2, int arg3) {
    int var0 = 0;
    if (arg0->unknown_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)arg0, (int)&arg1, 1);
        var0 = 1;
    }
    int var1 = 0;
    struct Struct_0201099c_9* var2 = func_020dedd0(arg0->unknown_2c_, arg1);
    if (var2 != NULL) {
        GameState* var3 = GameState::GetInstance();
        char* var4 = (char*)func_02010828(var3);
        int var5 = arg2;
        short var6 = 0;
        if (arg3) {
            int var7 = func_020a0b3c((struct Struct_0207cf30_3*)func_02010828(var3), arg1);
            var7 = 99 - var7;
            if (var7 > arg2)
                var7 = arg2;
            var5 = (short)var7;
        }
        var1 = func_020a095c((struct Struct_0207cf30_4*)var4, arg1, (signed char)var5);
        var6 += var5;
        if (var1) {
            func_0207cc18(arg0, var2);
            arg0->unknown_30_ = *(void**)((char*)var2 + 4);
            arg0->unknown_34_ = var3->GetProtagonist()->baseStats_;
        }
        if (var6 < arg2 && arg3) {
            char* var8 = (char*)func_02010828(var3);
            for (int var9 = 0; var9 < *(unsigned char*)(var8 + 0xf7c); var9++) {
                GameObject* var10 = func_0200ff1c(var3, *(unsigned char*)(var8 + var9 + 0xf78));
                if (var10 == NULL)
                    continue;
                if (func_02061bd8((struct Struct_0205faf4_11*)var10) != 0)
                    continue;
                struct Struct_0207cf30* var11 = func_02053c6c((unsigned char*)var10);
                if (var11 == NULL)
                    continue;
                for (int var12 = 0; var12 < 8; var12++) {
                    if (var11->unknown_454_[var12] > 0)
                        continue;
                    var11->unknown_454_[var12] = arg1;
                    func_0207cc18(arg0, var2);
                    var6++;
                    if (var6 == arg2)
                        break;
                }
                if (var6 == arg2)
                    break;
            }
        }
    }
    if (var0) {
        SafeAllocator* var13 = (SafeAllocator*)arg0;
        SignedAllocatorHeader* var14 = var13->GetSignedAllocator();
        var13->Destroy();
        func_02012da4(&data_02114e20, var14);
        arg0->unknown_2c_ = NULL;
    }
    return var1;
}
