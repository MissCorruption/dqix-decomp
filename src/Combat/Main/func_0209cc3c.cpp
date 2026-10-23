#include <globaldefs.h>
#include "Graphics/LightingManager.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" ARM void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

struct Struct_0209cc3c {
    unsigned int unknown_0_0_ : 16;
    unsigned int unknown_2_0_ : 6;
    unsigned int unknown_2_6_ : 9;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_0209cc3c_2 { struct Struct_0209cc3c* unknown_0_; unsigned char unknown_4_; };
struct Struct_0209cc3c_3 { char unknown_0_[0x98]; int unknown_98_; };

// USA: func_0209cc3c
extern "C" ARM int func_0209cc3c(struct Struct_0209cc3c_2* arg0, unsigned short arg1) {
    void* var0 = func_0205ec34();
    struct Struct_0209cc3c_3* var1 = (struct Struct_0209cc3c_3*)LightingManager::GetInstance();
    int var2;
    for (var2 = 0; var2 < arg0->unknown_4_; var2++) {
        struct Struct_0209cc3c* var3 = &arg0->unknown_0_[var2];
        if (var3->unknown_0_0_ != arg1) continue;
        if (!func_0206dfb0((int)var0, (unsigned char*)var0 + 0x8c, var3->unknown_2_6_)) continue;
        if (!var3->unknown_3_7_ || var1->unknown_98_ == 0) return var3->unknown_2_0_;
    }
    return -1;
}
