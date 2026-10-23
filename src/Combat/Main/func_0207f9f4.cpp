#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_02013fb4;
struct Struct_020727d8;
struct Struct_02020cb8_4;

extern "C" void func_020727d8(Struct_020727d8* arg0);
extern "C" void func_020728ac(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" int func_02046900(Struct_02020cb8_4*);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" char* func_020421a0();
extern "C" void func_0207f524(void* arg0, void* arg1, Struct_02013fb4* arg2, int arg3);
struct Struct_0207ed1c;
extern "C" void func_0207ef74(Struct_0207ed1c*, SafeAllocator*, Struct_02013fb4*, int);

struct Struct_0207f9f4 {
    void* unknown_0_;
    char unknown_4_[8];
    char unknown_c_[8];
    SafeAllocator* unknown_14_;
    int unknown_18_;
    int unknown_1c_;
#ifndef jpn
    int unknown_20_[3];
#endif
};

// USA: func_0207f9f4
extern "C" ARM int func_0207f9f4(Struct_0207f9f4* arg0) {
    if (arg0->unknown_1c_ < 0) {
#ifdef jpn
        return -1;
#else
        int* var0 = arg0->unknown_20_;
        if (var0[0] < 0) {
            if (var0[1] < 0) {
                if (var0[2] < 0) {
                    return -1;
                }
            }
        }

        BackgroundLoader* var1 = BackgroundLoader::GetInstance();
        int var2 = 1;
        for (int var3 = 0; var3 < 3; var3++) {
            if (var1->GetTaskStatus(var0[var3]) == 0) {
                var2 = 0;
            }
        }

        if (var2 != 0) {
            void* var4;
            unsigned int var5;
            var1->GetLoadedFileByID(var0[0], &var4, &var5);
            arg0->unknown_0_ = arg0->unknown_14_->Allocate(8);
            func_020727d8((Struct_020727d8*)arg0->unknown_0_);
            if (var4 != 0) {
                func_020728ac(arg0->unknown_0_, arg0->unknown_14_, var4, var5, 0, 0, 0);
            }
            var1->GetLoadedFileByID(var0[1], &var4, &var5);
            if (var4 != 0) {
                func_0207f524(arg0->unknown_4_, arg0->unknown_14_, (Struct_02013fb4*)var4, var5);
            }
            var1->GetLoadedFileByID(var0[2], &var4, &var5);
            if (var4 != 0) {
                func_0207ef74((Struct_0207ed1c*)arg0->unknown_c_, (SafeAllocator*)arg0->unknown_14_, (Struct_02013fb4*)var4, var5);
            }

            for (int var6 = 0; var6 < 3; var6++) {
                var1->RemoveTask(*var0);
                *var0 = -1;
                var0++;
            }
    #ifdef jpn
        arg0->field18 = *(int*)(func_020421a0() + 0x28);
#else
        arg0->unknown_18_ = *(int*)(func_020421a0() + 0x5c);
#endif
            return 0;
        }
        return 1;
#endif
    }

    BackgroundLoader* var7 = BackgroundLoader::GetInstance();
    if (var7->GetTaskStatus(arg0->unknown_1c_) != 0) {
        void* var8;
        void* var9;
        unsigned int var10;
        var7->GetLoadedFileByID(arg0->unknown_1c_, &var9, &var10);
        int var11 = func_02046900((Struct_02020cb8_4*)var9);
        void* var12[3];
        int var13[3];
        for (int var14 = 0; var14 < var11; var14++) {
            var12[var14] = func_020467f0((Struct_02020aec*)var9, var14, &var8, &var13[var14]);
        }
        arg0->unknown_0_ = arg0->unknown_14_->Allocate(8);
        func_020727d8((Struct_020727d8*)arg0->unknown_0_);
        func_020728ac(arg0->unknown_0_, arg0->unknown_14_, var12[0], var13[0], 0, 0, 0);
        func_0207f524(arg0->unknown_4_, arg0->unknown_14_, (Struct_02013fb4*)var12[1], var13[1]);
        func_0207ef74((Struct_0207ed1c*)arg0->unknown_c_, (SafeAllocator*)arg0->unknown_14_, (Struct_02013fb4*)var12[2], var13[2]);
        var7->RemoveTask(arg0->unknown_1c_);
        arg0->unknown_1c_ = -1;
#ifdef jpn
        arg0->unknown_18_ = *(int*)(func_020421a0() + 0x28);
#else
        arg0->unknown_18_ = *(int*)(func_020421a0() + 0x5c);
#endif
        return 0;
    }
    return 1;
}
