#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov004_0215f0c0(void* arg0);
extern "C" void func_ov004_0215e5fc(void* arg0, void* arg1);
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
struct Struct_0205faf4_11;
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);
extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);

struct Struct_ov004_021707e8_7 { char unknown_0_[0x1c]; void* unknown_1c_; };
extern Struct_ov004_021707e8_7 data_ov004_021707e8;

// USA: func_ov004_02162b84
extern "C" ARM int func_ov004_02162b84(void* arg0) {
#if defined(jpn)
    func_ov004_0215e5fc(arg0, data_ov004_021707e8.unknown_1c_);
    func_ov004_0215f0c0(arg0);
#else
    func_ov004_0215f0c0(arg0);
    func_ov004_0215e5fc(arg0, data_ov004_021707e8.unknown_1c_);
#endif

    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    unsigned char var2 = func_020114ec((char*)var0, var1);

    int var3 = 0;
    for (int var4 = 0; var4 < 4; var4++) {
        GameObject* var5 = func_0200ff1c(var0, var4);
        if (var5) {
            if (func_02061bd8((struct Struct_0205faf4_11*)var5)) var3 = 1;
        }
    }

    if (var3 == 1 || var2 <= 1) {
        unsigned char* var6 = (unsigned char*)func_ov004_0215e47c(arg0, 0x85);
        if (!var6) return 0;
        var6[0xc] |= 0x78;
    }
    return 0;
}
