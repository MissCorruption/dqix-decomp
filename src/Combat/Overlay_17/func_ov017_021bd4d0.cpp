#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_020dc548(int arg0, signed char* arg1, signed char* arg2);

struct Struct_ov017_0218e674;
extern "C" int func_ov017_021bd3a4(struct Struct_ov017_0218e674* arg0);
struct Struct_02039df4;

struct Struct_ov017_021bd4d0 {
    unsigned char unknown_0_[0x16];
    unsigned short unknown_16_;
#if defined(jpn)
    unsigned char unknown_18_[0xfd - 0x18];
#else
    unsigned char unknown1_18_[0x101 - 0x18];
#endif

    unsigned char unknown_101_;
};

// USA: func_ov017_021bd4d0
extern "C" ARM void func_ov017_021bd4d0(struct Struct_ov017_021bd4d0* arg0, int arg1, int arg2, int arg3) {
    GameState* var0;
    GameObject* var1;
    GameObject* var2;
    signed char var3[7];
    signed char var4;
    int var5;
    int var6;
    unsigned short var7;
    unsigned short var8;

    var0 = GameState::GetInstance();
    var1 = var0->GetPartyMemberByIndex(arg1);
    if (var1 != 0) {
        var6 = 1;
        var7 = *(unsigned short*)func_02012fe4();
        var8 = ((Object3D*)((struct Struct_02039df4*)var1))->GetField06();
        if (var8 != var7) {
            if (arg2 == 0) {
                var6 = 0;
            }
        }
        if (func_ov017_021bd3a4((struct Struct_ov017_0218e674*)arg0)) {
            if (arg0->unknown_16_ == 0x2972 || arg0->unknown_101_ == 0) {
                arg3 = 0;
            }
        }
        if (var6 != 0) {
            if (arg3 == 0 || !func_ov017_021bd3a4((struct Struct_ov017_0218e674*)arg0)) {
                func_020dc548((signed char)arg1, var3, &var4);
                for (var5 = 0; var5 < var4; var5++) {
                    var2 = var0->GetPartyMemberByIndex(var3[var5]);
                    if (var2 != 0) {
                        if (arg2) {
                            ((Object3D*)((unsigned char*)var2))->MakeVisible();
                        } else {
                            ((Object3D*)((unsigned char*)var2))->MakeHidden();
                        }
                    }
                }
            }
        }
    }
}
