#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov003_021733d0_238 = 0xea };
enum { Enum_ov003_021733d0_204 = 0xca };
enum { Enum_ov003_021733d0_2112 = 0x860 };
enum { Enum_ov003_021733d0_213 = 0xd1 };
enum { Enum_ov003_021733d0_208 = 0xcc };
enum { Enum_ov003_021733d0_1120 = 0x35c };
enum { Enum_ov003_021733d0_236 = 0xe8 };
#else
enum { Enum_ov003_021733d0_238 = 0xee };
enum { Enum_ov003_021733d0_204 = 0xcc };
enum { Enum_ov003_021733d0_2112 = 0x840 };
enum { Enum_ov003_021733d0_213 = 0xd5 };
enum { Enum_ov003_021733d0_208 = 0xd0 };
enum { Enum_ov003_021733d0_1120 = 0x460 };
enum { Enum_ov003_021733d0_236 = 0xec };
#endif

struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" int func_02012fe4(void);
extern "C" void func_02098630(void* arg0, void* arg1, int arg2, int arg3);

int IsMainBrightnessTransitionActive(GameResources*);
extern "C" void func_ov003_0216fb6c(char* arg0);

// USA: func_ov003_021733d0
extern "C" ARM void func_ov003_021733d0(unsigned char* arg0) {
    GameResources* var0 = GetGameResources();
    if (arg0[Enum_ov003_021733d0_238] == 0) {
        SetMainBrightness(var0, -16, 24);
        arg0[Enum_ov003_021733d0_238] = 1;
        return;
    }
    if (arg0[Enum_ov003_021733d0_238] != 1) {
        return;
    }
    if (IsMainBrightnessTransitionActive(var0) != 0) {
        return;
    }
    int var1 = func_02012fe4();
    if (arg0[Enum_ov003_021733d0_204] == 0) {
        func_ov003_0216fb6c((char*)var1 + Enum_ov003_021733d0_2112);
        for (int var2 = 0; var2 < arg0[Enum_ov003_021733d0_213]; var2++) {
            void* var3 = (char*)*(int*)(arg0 + Enum_ov003_021733d0_208) + Enum_ov003_021733d0_1120 + (unsigned char)var2 * 0xe8;
            func_02098630((char*)var1 + Enum_ov003_021733d0_2112, var3, 1, 0);
        }
        func_ov003_0216fb6c((char*)var1 + Enum_ov003_021733d0_2112);
    }
    arg0[Enum_ov003_021733d0_236] = 6;
    arg0[Enum_ov003_021733d0_238] = 0;
}
