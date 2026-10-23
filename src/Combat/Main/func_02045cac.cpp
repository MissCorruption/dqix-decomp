#include <globaldefs.h>

struct Struct_0204166c;
#if defined(jpn)
extern "C" void func_02041bbc(struct Struct_0204166c* arg0);
#define func_020416c0 func_02041bbc
#else
extern "C" void func_020416c0(struct Struct_0204166c* arg0);
#endif

struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);

struct Struct_02045cac {
#if defined(jpn)
    char unknown_0_[0x884];
#else
    char unknown1_0_[0x9b4];
#endif
    int unknown_9b4_;
    unsigned char unknown_9b8_[0xe00];
    unsigned char unknown_17b8_[0x80];
#if defined(jpn)
    char unknown_1708_[0x17e0 - 0x1708];
#else
    char unknown_1838_[0x19b0 - 0x1838];
#endif
    unsigned char unknown_19b0_;
#if defined(jpn)
    char unknown_17e1_[0x1c4c - 0x17e1];
#else
    char unknown_19b1_[0x1e28 - 0x19b1];
#endif
    void* unknown_1e28_;
};

// USA: func_02045cac
extern "C" ARM void func_02045cac(struct Struct_02045cac* arg0) {
    arg0->unknown_19b0_ = 1;
#if defined(jpn)
    arg0->unknown_9b4_ = 14;
#else
    arg0->unknown_9b4_ = 0;
#endif
#if defined(jpn)
    for (int var0 = 14; var0 < 0x80; var0++) {
#else
    for (int var0 = 0; var0 < 0x80; var0++) {
#endif
        func_020416c0((struct Struct_0204166c*)(arg0->unknown_9b8_ + var0 * 0x1c));
        arg0->unknown_17b8_[var0] = 0;
    }
    if (arg0->unknown_1e28_ != NULL) {
        func_0207df50((struct Struct_0203d028*)arg0->unknown_1e28_);
    }
}
