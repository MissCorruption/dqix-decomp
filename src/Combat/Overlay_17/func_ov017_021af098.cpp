#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/Brightness.h"

struct Struct_0202b2f0;

struct Struct_0202c1a4;
struct Struct_02038598_4;
struct Struct_0205e854;
struct Struct_0205e870;

extern "C" Struct_0202b2f0* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" void func_0202b0f4(void* arg0);
extern "C" void func_ov017_02195748(unsigned char* arg0);
extern "C" void func_ov017_02192594(unsigned char* arg0);
extern "C" void* func_0205e854(Struct_0205e854* arg0);
extern "C" int func_0202c578(Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202d6a8(void);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" int* func_020936f8(void);
extern "C" void func_020939dc(void* arg0);
extern "C" void func_02094030(int* arg0, short arg1, short arg2, signed char arg3);
extern "C" void func_0202c1e8(Struct_0202b2f0* arg0, int arg1);
extern "C" void* func_0205e870(Struct_0205e870* arg0);
extern "C" void func_0205e7dc(unsigned char* arg0, int arg1);
extern "C" void func_ov017_021cc0cc(void);

struct Struct_ov017_021af098 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_[6];
    signed char unknown_f_;
    signed char unknown_10_;
    unsigned char unknown_11_;
    unsigned short unknown_12_;
};

// USA: func_ov017_021af098
extern "C" ARM unsigned char func_ov017_021af098(Struct_ov017_021af098* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int* var1 = (unsigned int*)GetGameResources();
    Struct_0202b2f0* var2 = func_0202ae18();
    Struct_0205e854* var3 = (Struct_0205e854*)func_0202ae24();

    if (func_0202c1a4((Struct_0202c1a4*)var2) == 0) {
        func_0202c178(var2, 0);
        if (g_keyManager.TestKeysPressed(2)) {
            arg0->unknown_f_ = -1;
            SetFlags00((GameResources*)var1, 2);
            func_0202b0f4(var2);
            func_ov017_02195748((unsigned char*)var1);
            func_ov017_02192594((unsigned char*)var1);
            func_0205e854(var3);
            ClearFlags00((GameResources*)var1, 0x40);
            arg0->unknown_1_ = 1;
        } else if (func_0202c578(var2, 0) != 0 || func_0202d6a8() == 8) {
            func_020466f4((Struct_02038598_4*)func_020d6c00(), 0x8020);
            int* var4 = func_020936f8();
            func_020939dc(var4);
            func_02094030(var4, 4, -1, 0);
            return 3;
        } else {
            arg0->unknown_12_ = arg0->unknown_12_ + var0->GetEffectiveDeltaTime();
            if (arg0->unknown_12_ > 5000) {
                arg0->unknown_f_ = 0;
                SetFlags00((GameResources*)var1, 2);
                func_0202b0f4(var2);
                func_ov017_02195748((unsigned char*)var1);
                func_ov017_02192594((unsigned char*)var1);
                func_0205e854(var3);
                ClearFlags00((GameResources*)var1, 0x40);
                arg0->unknown_1_ = 1;
                return arg0->unknown_8_;
            }
        }
        return arg0->unknown_8_;
    }

    if (func_0202c1a4((Struct_0202c1a4*)var2) >= 4) {
        arg0->unknown_f_ = 0;
        SetFlags00((GameResources*)var1, 2);
        func_0202b0f4(var2);
        func_ov017_02195748((unsigned char*)var1);
        func_ov017_02192594((unsigned char*)var1);
        func_0205e854(var3);
        ClearFlags00((GameResources*)var1, 0x40);
        arg0->unknown_1_ = 1;
        return arg0->unknown_8_;
    }

    arg0->unknown_10_ = func_0202c1a4((Struct_0202c1a4*)var2);
    func_0202c1e8(var2, func_0202c1a4((Struct_0202c1a4*)var2));
    ClearFlags00((GameResources*)var1, 2);
    func_0205e870((Struct_0205e870*)var3);
    func_0205e7dc((unsigned char*)var3, 0x2c);
    func_0205e7dc((unsigned char*)var3, 0x2a);
    func_0205e7dc((unsigned char*)var3, 0x2e);
    func_0205e7dc((unsigned char*)var3, 0x3d);
    func_0205e7dc((unsigned char*)var3, 0x33);
    func_ov017_021cc0cc();
    arg0->unknown_12_ = 0;
    return 2;
}
