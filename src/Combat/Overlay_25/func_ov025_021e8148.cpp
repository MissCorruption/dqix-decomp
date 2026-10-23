#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02057924(void);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov025_021e8cf0(char* arg0, int arg1);
extern "C" short func_ov000_0216352c(int arg0, float arg1, float arg2);

struct Struct_ov025_021ef988_33 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    char* unknown_c_;
};
extern Struct_ov025_021ef988_33 data_ov025_021ef988;

struct Struct_ov025_021e8148 {
    char unknown_0_[8];
    int unknown_8_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
};

// USA: func_ov025_021e8148
extern "C" ARM int func_ov025_021e8148(Struct_ov025_021e8148* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924();
    if (var0 == NULL || var1 == NULL) {
        return 0;
    }
    int var2[8];
    if (func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)var2) != 1) {
        return 0;
    }
    void* var3 = func_ov025_021e8cf0(data_ov025_021ef988.unknown_c_, arg0->unknown_c_);
    if (var3 == NULL) {
        return 0;
    }
    GameObject* var4 = var0->GetGameObjectByIndex(*(int*)var3);
    if (var4 == NULL) {
        return 0;
    }
    fix32_t var5 = 0x10a;
    switch (arg0->unknown_e_) {
    case 0:
        break;
    case 1:
        var5 = func_ov000_0216352c(var2[0], 1.0f, 0.5f);
        break;
    }
    var4->obj3D_.SetScale(var5, var5, var5);
    return 1;
}
