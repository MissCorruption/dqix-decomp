#if defined(jpn)
enum {Enum_ov017_021cc97c_2388=0x8bc};
#else
enum {Enum_ov017_021cc97c_2388=0x954};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_ov017_021cc97c {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021cc97c
extern "C" ARM void func_ov017_021cc97c(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (var1 == NULL) return;
    int var2 = func_02053c6c((unsigned char*)var1);
    if (var2 == 0) return;

    void* var3 = func_0202ae24();
    Struct_ov017_021cc97c var4;
    var4.unknown_0_ = 0xb;
    var4.unknown_4_ = (unsigned short)arg0;
    var4.unknown_6_ = *(unsigned short*)((char*)var2 + Enum_ov017_021cc97c_2388);
    int var5;
    for (var5 = 0; var5 < 12; var5++) {
        var4.unknown_8_[var5] = *(unsigned char*)((char*)var2 + (var5 + 1) + 0x186);
    }
    func_0205e330(var3, &var4, 0);
}
