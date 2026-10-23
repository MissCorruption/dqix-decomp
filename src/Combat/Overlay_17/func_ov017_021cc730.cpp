#if defined(jpn)
enum { Enum_ov017_021cc730_2384 = 0x8b8 };
#else
enum { Enum_ov017_021cc730_2384 = 0x950 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021cc730 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_0_:3;
    unsigned short unknown_4_3_:8;
    unsigned short unknown_5_3_:4;
    unsigned short unknown_5_7_:1;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_[4];
};

// USA: func_ov017_021cc730
extern "C" ARM void func_ov017_021cc730(int arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (var1 == 0) return;
    int var2 = func_02053c6c((unsigned char*)var1);
    if (var2 == 0) return;

    void* var3 = func_0202ae24();
    Struct_ov017_021cc730 var4;
    int var5 = *(int*)((char*)var2 + Enum_ov017_021cc730_2384);

    var4.unknown_0_ = 0xa;
    var4.unknown_4_0_ = (unsigned short)arg0;
    var4.unknown_4_3_ = *(unsigned short*)((char*)var2 + var5 * 2 + 0x16c);
    var4.unknown_5_3_ = (unsigned short)*(int*)((char*)var2 + Enum_ov017_021cc730_2384);
    var4.unknown_8_ = *(unsigned int*)((char*)var2 + var5 * 4 + 0x138);
    var4.unknown_6_ = *(unsigned short*)((char*)var2 + 0x564);
    var4.unknown_c_ = *(unsigned char*)((char*)var2 + var5 + 0x186);
    var4.unknown_5_7_ = (unsigned short)arg1;
    var4.unknown_d_ = arg2;
    var4.unknown_e_ = arg3;

    func_0205e330(var3, &var4, 0);
}
