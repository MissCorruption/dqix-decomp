#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov017_0218f5a4_1844 = 0x524, Enum_ov017_0218f5a4_336 = 0x144, Enum_ov017_0218f5a4_396 = 0x180, Enum_ov017_0218f5a4_1792 = 0x4f0 };
#else
enum { Enum_ov017_0218f5a4_1844 = 0x734, Enum_ov017_0218f5a4_336 = 0x150, Enum_ov017_0218f5a4_396 = 0x18c, Enum_ov017_0218f5a4_1792 = 0x700 };
#endif

extern "C" void func_0202ae18(void);
extern "C" int func_ov017_021925e0(void* arg0);
extern "C" void func_ov017_021bd440(void* arg0, int arg1);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_0205faf4_11;
extern "C" int func_02061bd8(struct Struct_0205faf4_11* arg0);
extern "C" void func_02072afc(int arg0, int* arg1, short* arg2);
extern "C" void* func_ov017_021a4658(void* arg0, int arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

// USA: func_ov017_0218f5a4
extern "C" ARM int func_ov017_0218f5a4(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    void* var1 = *(void**)(arg0 + 0x3000 + Enum_ov017_0218f5a4_1844);

    if (func_ov017_021925e0(arg0 + 0x3000) != 0) {
        GameObject* var2 = var0->GetPartyMemberByIndex(arg1);
        if (var2 != 0) {
            unsigned short var3 = var2->obj3D_.unknown_0_;
            if (var3 & 0x1000) {
                func_ov017_021bd440(var1, arg1 & 0xff);
                return 0;
            }
        }
    }

    GameObject* var4 = func_0200ff1c(var0, arg1);
    if (var4 == 0) return 0;
    if (func_02053c6c((unsigned char*)var4) == 0) return 0;

    if (arg4 == 0) {
        unsigned char* var5 = *(unsigned char**)((char*)var4 + Enum_ov017_0218f5a4_336);
        int var6 = var5 ? var5[0x56e] : 0;
        if (var6 == 0 && arg2 == 0) {
            if (func_02061bd8((struct Struct_0205faf4_11*)var4) == 0) {
                int var7[0xb];
                short var8[0xb];
                func_02072afc(arg1, var7, var8);
                int var9 = 0;
                int var10;
                for (var10 = 0; var10 < 0xb; var10++) {
                    if (var10 == 0xa) continue;
                    GameObject* var11 = var0->GetGameObjectByIndex(var7[var10]);
                    if (var11 != 0) {
                        short var12 = var8[var10];
                        short var13 = var11->obj3D_.unknown_2_;
                        if (var12 != var13) var9 = 1;
                    }
                }
                if (var9 == 0) return 0;
            }
        }
    }

    void* var14 = func_ov017_021a4658(arg0, arg1);
    if (var14 != 0) {
        *(short*)((char*)var14 + 8) = (short)arg1;
        if (arg2 != 0) {
            ((unsigned char*)var14)[0xb] |= 0x2;
        }
        if (arg3 != 0 || (*(int*)((char*)var4 + Enum_ov017_0218f5a4_396) & 0x40)) {
            ((unsigned char*)var14)[0xb] |= 0x4;
        }
        if (arg4 != 0) {
            ((unsigned char*)var14)[0xb] |= 0x1;
        }
        if (((unsigned char*)var14)[2] == 0) {
            func_020469b4((struct Struct_0201bdac_2*)*(void**)(arg0 + 0x3000 + Enum_ov017_0218f5a4_1792), (struct Struct_0201bdac*)var14);
        }
    }
    return 1;
}
