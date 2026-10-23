#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/TextQueue.h"
#include "Resource/Brightness.h"

struct Struct_020708c8;
struct Struct_02012de8;

struct Struct_ov017_021b86f8 {
    char unknown_0_[0x24];
    unsigned short unknown_24_;
    char unknown_26_[0x6ac - 0x26];
    void* unknown_6ac_;
    char unknown_6b0_[0x6b4 - 0x6b0];
    unsigned short unknown_6b4_;
    unsigned short unknown_6b6_;
};

extern char data_02109bf4[];
#if defined(jpn)
extern char data_ov017_021d83e7[];
#endif

extern "C" void func_020421a0(void);
extern "C" int func_020100a8(GameState* arg0);
extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);
extern "C" Struct_020708c8* func_020704fc(void);
extern "C" Struct_02012de8* func_020d6c00(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_020d7a50(void);
extern "C" int func_020e51cc(int arg0);
extern "C" void* func_ov000_02160f08(void* arg0);
extern "C" void func_ov000_02172850(void* arg0);
extern "C" float func_020709ac(unsigned char* arg0);
extern "C" void func_020708c8(Struct_020708c8* arg0, unsigned int arg1);
extern "C" int abs(int arg0);
void SetMainBrightness(GameResources* res, int level, int b);
extern "C" int func_02046708(Struct_02012de8* arg0, unsigned int arg1);
struct Struct_02038598_4;
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020dc2d0(int arg0);
extern "C" int func_0209ca68(char* arg0);
extern "C" void func_0209c530(void* arg0);
extern "C" void func_ov017_021c9c64(unsigned short arg0, int arg1);
extern "C" void func_ov017_021c98f4(int arg0, int arg1);

// USA: func_ov017_021b86f8
extern "C" ARM void func_ov017_021b86f8(Struct_ov017_021b86f8* arg0, int arg1, int arg2, int arg3) {
    if (arg0->unknown_6ac_ == NULL) return;
    if (arg1 != arg0->unknown_24_ || arg0->unknown_6b4_ != 2) return;
    GameState* var0 = GameState::GetInstance();
    func_020421a0();
    GameObject* var1 = func_0200ff94(var0, func_020100a8(var0));
    GameResources* var2 = GetGameResources();
    Struct_020708c8* var3 = func_020704fc();
    Struct_02012de8* var4 = func_020d6c00();
    func_02012fe4();
    if (var1 != NULL) {
        if (arg2) {
#if defined(jpn)
            func_020d7e10(func_020d7a50(), data_ov017_021d83e7, 0, 0, 1);
#else
            func_020d7e10(func_020d7a50(), (void*)func_020e51cc(0x23), 0, 0, 1
#if !defined(jpn)
                , 1
#endif
            );
#endif

        }
        func_ov000_02172850(func_ov000_02160f08(arg0->unknown_6ac_));
    }
    if ((int)func_020709ac((unsigned char*)var3) > 0x1e) {
        func_020708c8(var3, 0x1e);
    }
    if (abs(GetBrightness((GameResources*)var2, false)) == 0x10) {
        SetMainBrightness(var2, 0, 0x1e);
    }
    if (func_02046708(var4, 1)) {
        func_020466f4((Struct_02038598_4*)var4, 1);
        func_020dc2d0(0);
    }
    if (func_0209ca68(data_02109bf4) == 2) {
        func_0209c530(data_02109bf4);
    }
    func_020466f4((Struct_02038598_4*)var4, 0x200);
    ClearFlags04(var2, 0x40);
    ClearFlags04(var2, 4);
    ClearFlags04(var2, 0x10);
    ClearFlags04(var2, 2);
    ClearFlags00(var2, 4);
    arg0->unknown_6b6_ |= 0x2000;
    arg0->unknown_6b4_ = 3;
    func_ov017_021c9c64(arg1, arg3);
    func_ov017_021c98f4(arg1, 1);
}
