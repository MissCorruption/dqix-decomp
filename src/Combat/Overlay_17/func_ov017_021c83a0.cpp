#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c83a0 {
    unsigned char unknown_0_[5];
    unsigned char unknown_5_;
    unsigned char unknown_6_[2];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c83a0_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned int unknown_4_;
};

struct Struct_ov017_021c83a0_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c83a0_2 unknown_4_;
    unsigned char unknown_c_[8];
};

// USA: func_ov017_021c83a0
extern "C" ARM void func_ov017_021c83a0(void) {
#if defined(jpn)
 enum {Enum_ov017_021c83a0_1816=0x508};
#else
 enum {Enum_ov017_021c83a0_1816=0x718};
#endif
    GameResources* var0 = GetGameResources();
    void* var1 = *(void**)((char*)var0 + 0x3000 + Enum_ov017_021c83a0_1816);
    Struct_ov017_021c83a0* var2 = (Struct_ov017_021c83a0*)func_ov017_021b8478(var1);
    void* var3 = func_ov017_021b8470(var1);
    void* var4 = func_0202ae24();

    Struct_ov017_021c83a0_3 var5;
    var5.unknown_0_ = 0x75;
    Struct_ov017_021c83a0_2* var6 = &var5.unknown_4_;
    var6->unknown_0_ = var2->unknown_8_;
    var6->unknown_4_ = *(unsigned int*)((char*)var3 + 0x8000 + 0xe20);
    var6->unknown_2_ = var2->unknown_5_;
    func_0205e330(var4, &var5, 0);
}
