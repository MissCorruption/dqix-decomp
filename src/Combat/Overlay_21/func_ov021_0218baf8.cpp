#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_ov009_02184a18(int arg0);
extern "C" void func_0203aa08(void* arg0);
extern "C" void func_020bbd9c(void);
extern int data_02108760;

struct Struct_ov021_0218b5fc_2 {
    unsigned char unknown_0_[0x40];
    int unknown_40_;
    unsigned char unknown_44_[0xb8 - 0x44];
    int unknown_b8_;
};

// USA: func_ov021_0218baf8
extern "C" ARM void func_ov021_0218baf8(struct Struct_ov021_0218b5fc_2* arg0) {
    BackgroundLoader::GetInstance()->RemoveAllLocks();
    if (func_ov009_02184a18(arg0->unknown_40_) != 0) {
        arg0->unknown_b8_ = 1;
    }
    func_0203aa08(&data_02108760);
    func_020bbd9c();
}
