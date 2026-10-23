#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215ddc0_152 = 0xb0 };
enum { Enum_ov003_0215ddc0_56 = 0x50 };
enum { Enum_ov003_0215ddc0_58 = 0x52 };
enum { Enum_ov003_0215ddc0_60 = 0x54 };
enum { Enum_ov003_0215ddc0_62 = 0x56 };
enum { Enum_ov003_0215ddc0_64 = 0x58 };
enum { Enum_ov003_0215ddc0_66 = 0x5a };
enum { Enum_ov003_0215ddc0_68 = 0x5c };
enum { Enum_ov003_0215ddc0_70 = 0x5e };
enum { Enum_ov003_0215ddc0_335 = 0x167 };
enum { Enum_ov003_0215ddc0_329 = 0x161 };
enum { Enum_ov003_0215ddc0_333 = 0x165 };
enum { Enum_ov003_0215ddc0_124 = 0x94 };
enum { Enum_ov003_0215ddc0_2400 = 0x800 };
#else
enum { Enum_ov003_0215ddc0_152 = 0x98 };
enum { Enum_ov003_0215ddc0_56 = 0x38 };
enum { Enum_ov003_0215ddc0_58 = 0x3a };
enum { Enum_ov003_0215ddc0_60 = 0x3c };
enum { Enum_ov003_0215ddc0_62 = 0x3e };
enum { Enum_ov003_0215ddc0_64 = 0x40 };
enum { Enum_ov003_0215ddc0_66 = 0x42 };
enum { Enum_ov003_0215ddc0_68 = 0x44 };
enum { Enum_ov003_0215ddc0_70 = 0x46 };
enum { Enum_ov003_0215ddc0_335 = 0x14f };
enum { Enum_ov003_0215ddc0_329 = 0x149 };
enum { Enum_ov003_0215ddc0_333 = 0x14d };
enum { Enum_ov003_0215ddc0_124 = 0x7c };
enum { Enum_ov003_0215ddc0_2400 = 0x960 };
#endif

#if defined(jpn)
enum { Enum_ov003_0215ddc0_2 = 4 };
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#else
enum { Enum_ov003_0215ddc0_2 = 2 };
#endif
#include "std_library_functions.h"

struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov003_0215de6c(char* arg0, void* arg1);
#if !defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov003_0215ddc0
extern "C" ARM void func_ov003_0215ddc0(char* arg0) {
    func_0205de24((struct Struct_0205de24_2*)(arg0 + Enum_ov003_0215ddc0_152), 0, 2);

    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_56) = 0xb;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_58) = 2;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_60) = 0x14;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_62) = 0;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_64) = 0x10;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_66) = Enum_ov003_0215ddc0_2;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_68) = 8;
    *(unsigned short*)(arg0 + 0x100 + Enum_ov003_0215ddc0_70) = 8;

    *(unsigned char*)(arg0 + Enum_ov003_0215ddc0_335) = 8;
    *(unsigned char*)(arg0 + Enum_ov003_0215ddc0_329) = 0;
    *(unsigned char*)(arg0 + Enum_ov003_0215ddc0_333) = 1;

    memset(*(void**)(arg0 + Enum_ov003_0215ddc0_124), 0, Enum_ov003_0215ddc0_2400);
    func_ov003_0215de6c(arg0, *(void**)(arg0 + Enum_ov003_0215ddc0_124));

#if defined(jpn)
    func_0205d304(arg0 + Enum_ov003_0215ddc0_152, *(void**)(arg0 + Enum_ov003_0215ddc0_124), 0, 0, 0, 1, 0);
#else
    func_0205d304(arg0 + Enum_ov003_0215ddc0_152, *(void**)(arg0 + Enum_ov003_0215ddc0_124), 0, 0, 0, 1, 0, 0);
#endif
}
