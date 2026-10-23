#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Resource/TextQueue.h"

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern int data_02108760;
extern "C" void func_ov017_0218d644(GameResources* arg0, void* arg1, int arg2);
extern "C" void* func_020d7a50(void);
extern "C" void func_ov017_021b6090(void* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_021b5a30(void* arg0);

struct Struct_ov017_021b5f00 {
    unsigned char unknown_0_[0x1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x1a];
    void* unknown_1c_;
    unsigned char unknown_20_[0x1c];
    short* unknown_3c_;
    unsigned char unknown_40_[0x14];
    unsigned char unknown_54_;
};

// USA: func_ov017_021b5f00
extern "C" ARM int func_ov017_021b5f00(Struct_ov017_021b5f00* arg0) {
    GameResources* var0 = GetGameResources();
    if (arg0->unknown_54_ != 0) {
        func_ov017_0218d644(var0, (char*)arg0 + 0x2c, 0);
        void* var1 = func_020d7a50();
#if defined(jpn)
        func_020d7e10(var1, arg0->unknown_3c_, 0, 0, 1);
#else
        func_020d7e10(var1, arg0->unknown_3c_, 0, 0, 1, 0);
#endif
        return 5;
    }
    func_ov017_021b6090(arg0);
    func_020397c0(arg0->unknown_1c_);
    if (*arg0->unknown_3c_ != 0) {
        void* var2 = func_020d7a50();
#if defined(jpn)
        func_020d7e10(var2, arg0->unknown_3c_, 0, 0, 1);
#else
        func_020d7e10(var2, arg0->unknown_3c_, 0, 0, 1, 0);
#endif
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 0xe, 0);
        return 5;
    }
    func_ov017_021b5a30(arg0);
    arg0->unknown_1_ = 1;
    return 6;
}
