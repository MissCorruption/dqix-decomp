#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov000_0216fd38;
struct Struct_ov000_0216fdf8;
struct Struct_ov000_0216fd80;
struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c;
struct Struct_ov000_0215feb4;
struct Struct_ov000_02160094;
struct Struct_ov000_0215feb4;
struct Struct_ov000_021600f8 {
    Struct_ov000_0215feb4* unknown_0_[3];
    short unknown_c_;
    short unknown_e_[3];
    unsigned char unknown_14_[3];
    unsigned char unknown_17_;
    unsigned char unknown_18_[3];
    unsigned char unknown_1b_[5];
    Struct_ov000_021600f8* unknown_20_;
};
struct Struct_ov025_021e9fc4;
extern "C" void* func_ov000_02160130();
extern "C" void* func_ov000_02160f20(void*);
extern "C" int func_ov000_0216fd38(Struct_ov000_0216fd38*);
extern "C" void func_ov000_0216fdf8(Struct_ov000_0216fdf8*, int);
extern "C" void func_ov000_0216fd80(Struct_ov000_0216fd80*, int);
extern "C" Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" Struct_ov000_0215feb4* func_ov000_0215feb4(char*, int, int);
extern "C" void* func_ov000_0215fe2c(void*, int);
extern "C" void* func_ov000_0215fff4(void*, int, int);
extern "C" void func_ov025_021ed324(void*, const char*);
extern "C" char* func_020e046c(char*, void*, void*, int);
extern "C" void func_ov025_021ed634(Struct_ov025_021e9fc4*);

static inline unsigned char* inline_ov025_021e9fc4(Struct_ov000_021600f8* arg0) { return arg0->unknown_14_; }

// USA: func_ov025_021e9fc4
// KEEP-NAME: func_ov025_021e9fc4
extern "C" ARM void func_ov025_021e9fc4(char* arg0) {
    if ((*(unsigned char*)(arg0 + 0x87c)) == 0) {
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        if ((*(int*)(arg0 + 0x880)) >= 0) {
            if (var0->GetTaskStatus((*(int*)(arg0 + 0x880))) != 0) {
                void* var1 = 0;
                unsigned int var2 = 0;
                var0->GetLoadedFileByID((*(int*)(arg0 + 0x880)), &var1, &var2);
                if (var1 != 0) {
                    func_020e046c((arg0 + 0x83c), var1, (void*)var2, (short)(*(int*)(arg0 + 0x884)));
                }
                func_ov025_021ed324((arg0 + 0x5e8), (arg0 + 0x83c));
#if !defined(jpn)
                *(short*)(arg0 + 0x794) = (*(int*)(arg0 + 0x884));
#endif
                var0->RemoveTask((*(int*)(arg0 + 0x880)));
                (*(int*)(arg0 + 0x880)) = -1;
                (*(unsigned char*)(arg0 + 0x87c)) = 1;
            }
        } else (*(unsigned char*)(arg0 + 0x87c)) = 1;
    }
    if (*(unsigned char*)(arg0 + 0x839) != 0) {
        if ((*(unsigned char*)(arg0 + 0x87c)) != 0) func_ov025_021ed634((Struct_ov025_021e9fc4*)(arg0 + 0x5e8));
    } else if (((int*)(arg0 + 0x10))[(unsigned char)arg0[0x30]] != 0 &&
               func_ov000_0216fd38((Struct_ov000_0216fd38*)(arg0 + 0x798)) != 0) {
        unsigned char* var3 = (unsigned char*)func_ov000_02160f20(func_ov000_02160130());
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[0]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[1]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[2]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[3]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[4]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[5]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), ((short*)(var3 + 0x18))[6]);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x7e);
        func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x7f);
        if ((unsigned short)((short*)(var3 + 0x18))[0] == 0xfa) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x1e0);
        for (int var4 = 0; var4 < var3[8]; var4++) {
            Struct_ov000_02160094* var5 = func_ov000_02160094((Struct_ov000_0215440c_2*)var3, var4);
            if (var5 == 0) continue;
            for (int var6 = 0; var6 < 6; var6++) {
                for (int var7 = 0; var7 < *((unsigned char*)var5 + 0x26 + var6); var7++) {
                    Struct_ov000_0215feb4* var8 = func_ov000_0215feb4((char*)var5, var7, (unsigned char)var6);
                    if (var8 == 0) continue;
                    for (int var9 = 0; var9 < *((unsigned char*)var8 + 0x1f); var9++) {
                        short* var10 = (short*)func_ov000_0215fe2c(var8, var9);
                        if (var10 != 0) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), *var10);
                    }
                }
            }
        }
        for (int var11 = 0; var11 < var3[9]; var11++) {
            Struct_ov000_021600f8* var12 = func_ov000_021600f8((Struct_ov000_0215440c*)var3, var11);
            if (var12 == 0) continue;
            unsigned char* var13;
            for (int var14 = 1; var14 < var12->unknown_17_; var14++) {
                var13 = inline_ov025_021e9fc4(var12);
                int var15 = var13[var14];
                if (var15 == 3) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x1b8);
                else if (var15 == 1) {
                    int var16 = 0xaa;
                    int var17 = var12->unknown_e_[var14 - 1];
                    int var18 = 0;
                    if (var17 >= 0) var18 = var17 <= 3;
                    if (var18) var16 = 0xa9;
                    func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), (short)var16);
                } else if (!(var15 != 8 && var15 != 7 && var15 != 6)) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x7e);
                else if (!(var15 != 4 && var15 != 5)) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x142);
                else if (var15 == 10) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), 0x143);
                else if (var15 == 2) {
                    int var19 = 0x29;
                    int var20 = var12->unknown_e_[var14 - 1];
                    int var21 = 0;
                    if (var20 >= 0) var21 = var20 <= 3;
                    if (var21) var19 = 0x28;
                    func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), (short)var19);
                }
            }
            for (int var22 = 0; var22 < 3; var22++) {
                for (int var23 = 0; var23 < var12->unknown_18_[var22]; var23++) {
                    Struct_ov000_0215feb4* var24 = (Struct_ov000_0215feb4*)func_ov000_0215fff4(var12, var23, (unsigned char)var22);
                    if (var24 == 0) continue;
                    for (int var25 = 0; var25 < *((unsigned char*)var24 + 0x1f); var25++) {
                        short* var26 = (short*)func_ov000_0215fe2c(var24, var25);
                        if (var26 != 0) func_ov000_0216fdf8((Struct_ov000_0216fdf8*)(arg0 + 0x798), *var26);
                    }
                }
            }
        }
        func_ov000_0216fd80((Struct_ov000_0216fd80*)(arg0 + 0x798), ((int*)(arg0 + 0x10))[(unsigned char)arg0[0x30]]);
    }
}
