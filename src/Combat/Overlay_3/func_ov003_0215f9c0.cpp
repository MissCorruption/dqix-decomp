#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"

#if defined(jpn)
enum { Enum_ov003_0215f9c0_550 = 0x10e };
#else
enum { Enum_ov003_0215f9c0_550 = 0x226 };
#endif

struct Struct_0201099c_14 {
    char unknown_0_[0x18];
};
struct Struct_02074af4 {
    unsigned short unknown_0_[8];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    char unknown_12_[2];
};
struct Struct_02081ee4 {
    char unknown_0_[0xc];
};
struct Struct_02081ee4_2 {
    char unknown_0_[4];
};
struct Struct_020a9ea4 {
    char unknown_0_[8];
};

extern "C" void func_02074af4(struct Struct_02074af4* arg0);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_02081ee4(struct Struct_02081ee4* arg0, struct Struct_02081ee4_2* arg1);
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);

struct Struct_ov003_0215f9c0 {
    char unknown_0_[Enum_ov003_0215f9c0_550];
    unsigned short unknown_226_;
    SafeAllocator unknown_228_;
    SafeAllocator unknown_23c_;
    SafeAllocator unknown_250_;
    SafeAllocator unknown_264_;
    SafeAllocator unknown_278_;
    SafeAllocator unknown_28c_;
    SafeAllocator unknown_2a0_;
    SafeAllocator unknown_2b4_;
    char unknown_2c8_[0x2dc - 0x2c8];
    struct Struct_0201099c_14 unknown_2dc_;
    struct Struct_02074af4 unknown_2f4_;
    struct Struct_02081ee4 unknown_308_;
    struct Struct_02081ee4_2 unknown_314_;
    int unknown_318_;
    int unknown_31c_;
    int unknown_320_;
    int unknown_324_;
    int unknown_328_;
    int unknown_32c_;
    int unknown_330_;
    char unknown_334_[0x388 - 0x334];
    int unknown_388_;
    char unknown_38c_[4];
    int unknown_390_;
    int unknown_394_;
    int unknown_398_;
#if !defined(jpn)
    char unknown_39c_[0x45c - 0x39c];
#endif
    int unknown_45c_;
    int unknown_460_;
    int unknown_464_;
    unsigned char unknown_468_[4];
    int unknown_46c_;
    int unknown_470_;
    short unknown_474_;
    short unknown_476_;
    short unknown_478_;
    short unknown_47a_;
    short unknown_47c_;
    short unknown_47e_;
    short unknown_480_;
    short unknown_482_;
    short unknown_484_;
    short unknown_486_;
    short unknown_488_;
    short unknown_48a_;
    char unknown_48c_[2];
    short unknown_48e_;
    short unknown_490_;
    short unknown_492_;
    short unknown_494_;
    short unknown_496_;
    short unknown_498_;
    short unknown_49a_;
    short unknown_49c_;
    char unknown_49e_;
    unsigned char unknown_49f_;
    unsigned char unknown_4a0_;
    unsigned char unknown_4a1_;
    signed char unknown_4a2_;
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
    unsigned char unknown_4a5_;
    unsigned char unknown_4a6_;
    unsigned char unknown_4a7_;
    unsigned char unknown_4a8_;
    char unknown_4a9_[0x4b0 - 0x4a9];
    int unknown_4b0_;
    struct Struct_020a9ea4 unknown_4b4_;
    unsigned char unknown_4bc_;
    unsigned char unknown_4bd_;
    unsigned char unknown_4be_;
    unsigned char unknown_4bf_;
    unsigned char unknown_4c0_;
};

// USA: func_ov003_0215f9c0
extern "C" ARM void func_ov003_0215f9c0(struct Struct_ov003_0215f9c0* arg0, int arg1) {
    memset(arg0->unknown_0_, 0, sizeof(arg0->unknown_0_));
    arg0->unknown_226_ = 0;
    arg0->unknown_228_.ResetAllocatorPointer();
    arg0->unknown_23c_.ResetAllocatorPointer();
    arg0->unknown_264_.ResetAllocatorPointer();
    arg0->unknown_278_.ResetAllocatorPointer();
    arg0->unknown_28c_.ResetAllocatorPointer();
    arg0->unknown_2a0_.ResetAllocatorPointer();
    arg0->unknown_2b4_.ResetAllocatorPointer();
    arg0->unknown_2f4_.unknown_10_ = 0;
    arg0->unknown_2f4_.unknown_11_ = 0;
    func_02074af4(&arg0->unknown_2f4_);
    arg0->unknown_330_ = (DISPCNT & 0x1f00) >> 8;
    DISPCNT = (DISPCNT & ~0x1f00) | 0x100;
    func_0205a444(arg0->unknown_334_);
    arg0->unknown_388_ = 0;
    func_02081ee4(&arg0->unknown_308_, &arg0->unknown_314_);
    func_020dfc40(&arg0->unknown_2dc_);
    arg0->unknown_318_ = 0;
    arg0->unknown_31c_ = 0;
    arg0->unknown_320_ = 0;
    arg0->unknown_324_ = 0;
    arg0->unknown_328_ = 0;
    arg0->unknown_32c_ = 0;
    arg0->unknown_390_ = 0;
    arg0->unknown_394_ = 0;
    arg0->unknown_398_ = 0;
    arg0->unknown_45c_ = 0;
    arg0->unknown_460_ = 0;
    arg0->unknown_464_ = 0;
    memset(arg0->unknown_468_, 0, sizeof(arg0->unknown_468_));
    arg0->unknown_46c_ = -1;
    arg0->unknown_470_ = 0;
    arg0->unknown_474_ = -1;
    arg0->unknown_476_ = 0;
    arg0->unknown_478_ = 0;
    arg0->unknown_47a_ = 0;
    arg0->unknown_47c_ = -1;
    arg0->unknown_47e_ = -1;
    arg0->unknown_480_ = -1;
    arg0->unknown_482_ = -1;
    arg0->unknown_484_ = arg0->unknown_486_ = -1;
    arg0->unknown_48a_ = -1;
    arg0->unknown_48e_ = -1;
    arg0->unknown_490_ = -1;
    arg0->unknown_492_ = -1;
    arg0->unknown_494_ = -1;
    arg0->unknown_496_ = -1;
    arg0->unknown_498_ = -1;
    arg0->unknown_49a_ = -1;
    arg0->unknown_49c_ = -1;
    arg0->unknown_488_ = -1;
    arg0->unknown_49f_ = 0;
    arg0->unknown_4a0_ = 0;
    arg0->unknown_4a1_ = 0;
    arg0->unknown_4a2_ = -1;
    arg0->unknown_4a3_ = 0;
    arg0->unknown_4a4_ = 0;
    arg0->unknown_4a5_ = 0;
    arg0->unknown_4a6_ = 0;
    arg0->unknown_4a7_ = 0;
    arg0->unknown_4a8_ = 0;
    arg0->unknown_4b0_ = 0;
    func_020a9ea4(&arg0->unknown_4b4_);
    arg0->unknown_4bc_ = 0;
    if (arg1) {
        arg0->unknown_464_ |= 0x30000;
    }
    arg0->unknown_4bd_ = 0xff;
    arg0->unknown_4be_ = 0;
    arg0->unknown_4bf_ = 0;
    arg0->unknown_4c0_ = 0;
}
