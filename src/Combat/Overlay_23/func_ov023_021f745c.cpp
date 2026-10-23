#include <globaldefs.h>
#if defined(jpn)
#define REGIONAL_PARAMETER
#else
#define REGIONAL_PARAMETER int p5,
#endif
#include "Memory/SafeAllocator.h"
#include "Combat/MapDisplay.h"

struct Struct_ov023_021f6ed8;
extern "C" ARM void func_ov023_021f6ed8(struct Struct_ov023_021f6ed8* arg0);

extern "C" void func_0204af64(struct Struct_02020cb8* arg0);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
extern "C" void func_0204b5b4(void*, int);

struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5*, int, int);

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);

struct Struct_0204b12c;
extern "C" void func_0204b12c(struct Struct_0204b12c* arg0, SafeAllocator* arg1);

struct Struct_ov023_021f745c;
extern "C" ARM void func_ov023_021f7a08(struct Struct_ov023_021f745c* arg0, void* arg1);

// USA: func_ov023_021f745c
extern "C" ARM int func_ov023_021f745c(char* arg0, void* arg1, int arg2, int arg3, REGIONAL_PARAMETER int arg5, int arg6, int arg7, int arg8) {
#if defined(jpn)
 enum {Enum_ov023_021f745c_40=0x24, Enum_ov023_021f745c_72=0x44, Enum_ov023_021f745c_80=0x4c, Enum_ov023_021f745c_82=0x4e};
#else
 enum {Enum_ov023_021f745c_40=0x28, Enum_ov023_021f745c_72=0x48, Enum_ov023_021f745c_80=0x50, Enum_ov023_021f745c_82=0x52};
#endif
    func_ov023_021f6ed8((struct Struct_ov023_021f6ed8*)arg0);
    *(short*)(arg0 + 0x4) = 2;
    *(void**)(arg0 + 0x20) = arg1;
    *(short*)(arg0 + 0x6) = (short)arg2;
    *(short*)(arg0 + 0x8) = (short)arg3;
    *(short*)(arg0 + 0xa) = 0;
#if defined(jpn)

#else
    *(int*)(arg0 + 0x24) = p5;
#endif

    *(int*)(arg0 + 0x10) = arg5;
    *(int*)(arg0 + Enum_ov023_021f745c_72) = 0;
    func_0204af64((struct Struct_02020cb8*)(arg0 + Enum_ov023_021f745c_40));
    func_0204b11c((unsigned char*)(arg0 + Enum_ov023_021f745c_40), 0);

    struct Struct_02020cb8* var0 = (struct Struct_02020cb8*)(arg0 + Enum_ov023_021f745c_40);
    var0->unknown_1c_0_ = (unsigned char)arg6;
    var0->unknown_1c_4_ = (unsigned char)arg7;

    func_0204b5b4(arg0 + Enum_ov023_021f745c_40, arg8);
    func_0204b5e8((struct Struct_02020cb8_5*)(arg0 + Enum_ov023_021f745c_40), 0, 0);

    void* var1 = func_ov011_021845f8(arg1, *(unsigned short*)(arg0 + 0x8));
    if (var1 == 0) return 0;

    func_0204b12c((struct Struct_0204b12c*)(arg0 + Enum_ov023_021f745c_40), (SafeAllocator*)((char*)var1 + 4));
    func_ov023_021f7a08((struct Struct_ov023_021f745c*)arg0, arg1);
    *(short*)(arg0 + Enum_ov023_021f745c_80) = 0;
    *(short*)(arg0 + Enum_ov023_021f745c_82) = 0;
    return 1;
}
