// KEEP-NAME
// USA: func_ov006_0215a33c
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
extern "C" void func_ov006_02156e54(void*);
extern const char* data_020f2a38;
#else
extern "C" void func_ov006_02156e54(void*);
extern const char* data_020f2a38;
extern const char* data_020f2a30;
#endif

struct Struct_ov006_0215a33c {
#if defined(jpn)
    unsigned char unknown_0_[8];
    void* unknown_8_;
    unsigned char unknown_c_[0x354 - 0xc];
#else
    unsigned char unknown1_0_[0x10];
    void* unknown_10_;
    unsigned char unknown_14_[0x354 - 0x14];
#endif
    int unknown_354_;
};

extern "C" ARM void func_ov006_0215a33c(Struct_ov006_0215a33c* arg0, int) {
#if defined(jpn)
    func_ov006_02156e54(arg0->unknown_8_);
#else
    func_ov006_02156e54(arg0->unknown_10_);
#endif
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    var0->AddFence();
#if defined(jpn)
    arg0->unknown_354_ = var0->QueueLoadGP1(data_020f2a38, 0);
#else
    arg0->unknown_354_ = var0->QueueLoadFileInGP2(data_020f2a38, data_020f2a30, 0);
#endif
}
