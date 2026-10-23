#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Input/Input.h"

struct Struct_ov017_021d83f0_7 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d83f0_7 data_ov017_021d83f0;
extern "C" int func_ov011_02184694(int arg0);
extern "C" int func_0202ae18(void);
extern "C" int func_0202c540(void);
extern "C" int func_ov017_0219bddc(unsigned char* arg0);
extern "C" int* func_020936f8(void);
extern "C" void func_02094030(int*, int, int, int);

struct Struct_ov017_021b2698 {
    unsigned char unknown_0_[0x8];
    int unknown_8_;
    unsigned char unknown_c_[0x2c];
    int unknown_38_;
    unsigned char unknown_3c_[0xc];
    unsigned char unknown_48_;
};

// USA: func_ov017_021b2698
extern "C" ARM int func_ov017_021b2698(Struct_ov017_021b2698* arg0) {
    if (g_keyManager.TestKeysPressed(0x2000) != 0) {
        return 3;
    }
    if (func_ov011_02184694(data_ov017_021d83f0.unknown_4_) != 0) {
        return arg0->unknown_8_;
    }
    GameResources* var0 = GetGameResources();
    #if defined(jpn)
    void* var1 = *(void**)((char*)var0 + 0x3000 + 0x91c);
#else
    void* var1 = *(void**)((char*)var0 + 0x3000 + 0xb3c);
#endif
    if (((unsigned char*)var1)[2] != 0) {
        goto fail;
    }
    func_0202ae18();
    if (func_0202c540() == 0) {
        goto fail;
    }
    unsigned char var2 = 0;
    if (func_ov017_0219bddc(&var2) == 0) {
        goto fail;
    }
    arg0->unknown_38_ = (arg0->unknown_38_ & ~1) | 1;
    arg0->unknown_48_ = 1;
    int* var3 = func_020936f8();
    func_02094030(var3, 0x4e23, -1, 0);
fail:
    return 3;
}
