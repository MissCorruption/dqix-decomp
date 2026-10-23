#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov003_02158334_2;

struct Struct_ov003_02158334_3 {
    char unknown_0_[0x18];
    Struct_ov003_02158334_2* unknown_18_;
    char unknown_1c_[0x20 - 0x1c];
    int* unknown_20_;
#if defined(jpn)
    char unknown_24_[0x1ee - 0x24];
#else
    char unknown1_24_[0x1f2 - 0x24];
#endif
    unsigned char unknown_1f2_[4];
    unsigned char unknown_1f6_;
    signed char unknown_1f7_;
};

extern "C" void func_02080b54(void*, int);
extern "C" void func_02080608(void*, int);
extern "C" void func_02080b40(void*, int);
extern "C" void func_0208108c(void*, int);
struct Struct_ov003_0215570c;
extern "C" int func_ov003_0215570c(Struct_ov003_0215570c*);
extern "C" unsigned char* func_02053c6c(unsigned char*);
extern "C" void func_020806c4(void*, int);
extern "C" void func_0208103c(void*, int, int);
struct Struct_02080fa8;
extern "C" void func_02080fa8(Struct_02080fa8*, int, int);
extern "C" void func_02080828(void*, int, short*, short*);
extern "C" void func_020808c8(void*, int, short*, short*);
extern "C" void func_02080854(void*, int, int, int);
extern "C" void func_02080fe0(void*, int, int);
struct Struct_02080cc0;
extern "C" void func_02080cc0(Struct_02080cc0*, int, int);
extern "C" void func_020807c4(void*, int, short*, short*);
extern "C" void func_02080878(void*, int, short*, short*);
extern "C" void func_020807fc(void*, int, int, int);
extern "C" void func_020808a4(void*, int, int, int);
extern "C" void func_020813ec(void*, int);

// USA: func_ov003_02158480
extern "C" ARM void func_ov003_02158480(Struct_ov003_02158334_3* arg0) {
    Struct_ov003_02158334_2* var0 = arg0->unknown_18_;
    short var1 = 0x13;
    short var2 = 0x1f;
    short var3 = 0x2b;
    short var4 = 0x37;

    func_02080b54(var0, 6);
    func_02080608(var0, 6);
    func_02080b40(var0, 0x43);
#if !defined(jpn)
    func_0208108c(var0, 0x43);
#endif

    int var5 = func_ov003_0215570c((Struct_ov003_0215570c*)arg0);
    int var6 = -1;
    if (var5 <= 6) {
        var6 = 7;
    } else if (var5 >= 7 && var5 <= 8) {
        var6 = 8;
    } else if (var5 >= 9 && var5 <= 10) {
        var6 = 9;
    }

    GameState* var7 = GameState::GetInstance();
    unsigned char* var8 = (unsigned char*)var7->GetPartyMemberByIndex(arg0->unknown_1f7_);
    if (var8 != NULL) {
        unsigned char* var9 = func_02053c6c(var8);
        for (unsigned char var10 = 0; var10 < 12; var10++) {
            int var11 = arg0->unknown_20_[var10];
            if (var11 != 0) {
                func_020806c4(var0, var1);
                func_02080b40(var0, var1);
                func_02080b40(var0, var2);
                func_02080b40(var0, var3);
                func_0208103c(var0, var1, (short)(var11 - 1));
                func_02080fa8((Struct_02080fa8*)var0, var3, *(unsigned short*)(var9 + 0x16c + var11 * 2));

                unsigned char* var12 = var9 + var11;
                unsigned char var13 = var12[0x186];
                if (var13 != 0) {
                    short var14 = (short)(var13 + 0x12);
                    int var15 = 5;
                    if (var13 == 10) {
                        var15 = 0xd;
                    }

                    short var16, var17, var18, var19;
                    func_02080828(var0, var1, &var16, &var17);
                    func_020808c8(var0, var1, &var18, &var19);
#if defined(jpn)
                    func_02080854(var0, var4, (short)(var16 + var18 + 1), (short)(var17 + 2));
#else
                    func_02080854(var0, var4, (short)(var16 + var18 + 1), var17);
#endif
                    func_02080b40(var0, var4);
                    func_02080fe0(var0, var4, var14);
                    func_02080cc0((Struct_02080cc0*)var0, var4, var15);
                }
            }
            var1 = (short)(var1 + 1);
            var2 = (short)(var2 + 1);
            var3 = (short)(var3 + 1);
            var4 = (short)(var4 + 1);
        }
    }

    if (var6 > 0) {
        short var20, var21, var22, var23;
        func_020807c4(var0, var6, &var20, &var21);
        func_02080878(var0, var6, &var22, &var23);
        func_020807fc(var0, 6, var20, var21);
        func_020808a4(var0, 6, var22, var23);
        func_020807c4(var0, 6, &var20, &var21);
        func_02080878(var0, 6, &var22, &var23);
    }
    func_020813ec(var0, 6);
}
