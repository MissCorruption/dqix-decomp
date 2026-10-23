#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

struct Struct_0202b2f0 {
    char unknown_0_[0xfc0];
    int unknown_fc0_;
};

struct Struct_0202c1a4;
struct Struct_02038598_4;
struct Struct_0205e854;

extern "C" Struct_0202b2f0* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" int func_0202c578(Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202d6a8(void);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" int* func_020936f8(void);
extern "C" void func_020939dc(void* arg0);
extern "C" void func_02094030(int*, short, short, signed char);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" int func_0202bd34(Struct_0202b2f0* arg0, int arg1);
extern "C" void func_0202b0f4(void* arg0);
extern "C" void func_ov017_02195748(unsigned char* arg0);
extern "C" void func_ov017_02192594(unsigned char* arg0);
extern "C" void* func_0205e854(Struct_0205e854* arg0);

struct Struct_ov017_021af2f8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_[6];
    signed char unknown_f_;
    signed char unknown_10_;
};

// USA: func_ov017_021af2f8
extern "C" ARM unsigned char func_ov017_021af2f8(Struct_ov017_021af2f8* arg0) {
    GameState::GetInstance();
    unsigned int* var0 = (unsigned int*)GetGameResources();
    Struct_0202b2f0* var1 = func_0202ae18();
    func_0202c178(var1, 0);
    Struct_0205e854* var2 = (Struct_0205e854*)func_0202ae24();

    if (func_0202c578(var1, 0) != 0 || func_0202d6a8() == 8) {
        func_020466f4((Struct_02038598_4*)func_020d6c00(), 0x8020);
        int* var3 = func_020936f8();
        func_020939dc(var3);
        func_02094030(var3, 4, -1, 0);
        return 3;
    }

    int var4 = 0;
    if (func_0202c1a4((Struct_0202c1a4*)var1) == 0) {
        var4 = 1;
    } else {
        for (int var5 = 0; var5 < 4; var5++) {
            if (var5 == func_0202c1a4((Struct_0202c1a4*)var1)) {
                continue;
            }
            if (func_0202bd34(var1, var5) == 0) {
                continue;
            }
            Struct_0202b2f0_2* var6 = func_0202c178(var1, var5);
            if (var6 == 0) {
                continue;
            }
            if (var6->unknown_2_0_ == 0) {
                var4 = 1;
                break;
            }
        }
        if (arg0->unknown_10_ != func_0202c1a4((Struct_0202c1a4*)var1)) {
            arg0->unknown_f_ = 0;
        }
    }

    if (arg0->unknown_f_ == -1 || var4) {
        if (g_keyManager.TestKeysPressed(2)) {
            arg0->unknown_f_ = -1;
            SetFlags00((GameResources*)var0, 2);
            func_0202b0f4(var1);
            func_ov017_02195748((unsigned char*)var0);
            func_ov017_02192594((unsigned char*)var0);
            func_0205e854(var2);
            ClearFlags00((GameResources*)var0, 0x40);
            arg0->unknown_1_ = 1;
        }
    } else if (arg0->unknown_f_ == 1) {
        if (var1->unknown_fc0_ == 0) {
            arg0->unknown_1_ = 1;
        }
    } else {
        SetFlags00((GameResources*)var0, 2);
        func_0202b0f4(var1);
        func_ov017_02195748((unsigned char*)var0);
        func_ov017_02192594((unsigned char*)var0);
        func_0205e854(var2);
        ClearFlags00((GameResources*)var0, 0x40);
        arg0->unknown_1_ = 1;
    }
    return arg0->unknown_8_;
}
