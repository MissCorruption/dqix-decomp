#if defined(jpn)
#define func_ov013_0218678c func_ov013_02187ab8
#endif

#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_0205dee8;
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

extern "C" void func_ov013_02186c64(void* arg0, int arg1, int arg2);
extern "C" void func_ov013_02185cc0(void* arg0);

struct Struct_ov013_021846a0_2 {
#if defined(jpn)
    char unknown_0_[0x34];
    unsigned char unknown_38_[0xbc];
    char unknown_f0_[0x5ac - 0xf0];
#else
    char unknown1_0_[0x38];
    unsigned char unknown_38_[0xbc];
    char unknown_f4_[0x620 - 0xf4];
#endif
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
    unsigned char unknown_63d_;
    unsigned char unknown_63e_;
    bool unknown_63f_;
    bool unknown_640_;
    unsigned int unknown_644_;
    int unknown_648_;
#if !defined(jpn)
    int unknown_64c_;
#endif
    int unknown_650_;
    void* unknown_654_;
    char* unknown_658_;
    int unknown_65c_;
    int unknown_660_;
    unsigned char unknown_664_;
    unsigned char unknown_665_;
    char unknown_666_[2];
    int unknown_668_;
    int unknown_66c_;
    int unknown_670_;
    int unknown_674_[5];
    int unknown_688_[5];
    unsigned char unknown_69c_[5];
    char unknown_6a1_[8];
    unsigned char unknown_6a9_[5];
    char unknown_6ae_[0xe];
    unsigned char unknown_6bc_;
};

// USA: func_ov013_0218678c
extern "C" ARM void func_ov013_0218678c(Struct_ov013_021846a0_2* arg0) {
    arg0->unknown_6bc_ &= ~1;
    arg0->unknown_638_[2] = 0;

    if (arg0->unknown_63d_ != arg0->unknown_63c_) return;

    if (!g_keyManager.TestKeysPressed(0x613) && !g_touchInput.IsPressed()) {
        return;
    }

    arg0->unknown_63c_ = 1;
    g_keyManager.CancelCurrentKeyRepeat();
    func_0205dee8((struct Struct_0205dee8*)arg0->unknown_38_, 2);
    func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_38_, 0);
    arg0->unknown_638_[1] = 0;
    arg0->unknown_6bc_ &= ~1;
    func_ov013_02186c64(arg0, 0, 0);
    func_ov013_02185cc0(arg0);
}
