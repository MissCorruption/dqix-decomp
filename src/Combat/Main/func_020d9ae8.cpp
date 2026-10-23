#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020d9ae8_48 = 0xb, Enum_020d9ae8_28 = 0x1c, Enum_020d9ae8_88 = 0x24 };
#else
enum { Enum_020d9ae8_48 = 0x30, Enum_020d9ae8_64 = 0x40, Enum_020d9ae8_88 = 0x58 };
#endif
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_020727d8;
extern "C" void func_020727d8(Struct_020727d8* arg0);

struct Struct_0201099c_14;
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);

struct Struct_02061c04_7 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_[2];
    int unknown_c_;
};

// USA: func_020d9ae8
extern "C" ARM void func_020d9ae8(Struct_02061c04_7* arg0, int arg1) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x4a;
    arg0->unknown_8_ = arg1;
    arg0->unknown_9_ = 0;
    arg0->unknown_c_ = -1;
    memset((char*)arg0 + 0x10, 0, Enum_020d9ae8_48);
#if defined(jpn)
    func_020727d8((Struct_020727d8*)((char*)arg0 + Enum_020d9ae8_28));
#else
    func_020dfc40((Struct_0201099c_14*)((char*)arg0 + Enum_020d9ae8_64));
#endif
    ((SafeAllocator*)((char*)arg0 + Enum_020d9ae8_88))->ResetAllocatorPointer();
}
