// KEEP-NAME
#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov012_02189d68_4977 = 0x1341, Enum_ov012_02189d68_4980 = 0x1344, Enum_ov012_02189d68_2400 = 0x800, Enum_ov012_02189d68_144 = 0x90, Enum_ov012_02189d68_5060 = 0x141c };
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#else
enum { Enum_ov012_02189d68_4977 = 0x1371, Enum_ov012_02189d68_4980 = 0x1374, Enum_ov012_02189d68_2400 = 0x960, Enum_ov012_02189d68_172 = 0xac, Enum_ov012_02189d68_5060 = 0x13c4 };
extern "C" void func_0205d304(void*, void*, int, int, int, int, int, int);
#endif

extern "C" void func_ov012_021893b4(void*, int, int, int);
extern "C" void func_ov012_02189dfc(void*, void*, int);

struct Struct_ov012_021884f4 {
    unsigned short unknown_0_0_ : 5;
    unsigned short unknown_0_5_ : 11;
};

// USA: func_ov012_02189d68
extern "C" ARM void func_ov012_02189d68(char* arg0) {
    func_ov012_021893b4(arg0, *(unsigned char*)(arg0 + Enum_ov012_02189d68_4977), 16, 1);
    memset(*(void**)(arg0 + Enum_ov012_02189d68_4980), 0, Enum_ov012_02189d68_2400);
    func_ov012_02189dfc(arg0, *(void**)(arg0 + Enum_ov012_02189d68_4980), 0);
    int var0 = 0;
    if (((Struct_ov012_021884f4*)(arg0 + Enum_ov012_02189d68_5060))->unknown_0_0_ > 9)
        var0 = 1;
#if defined(jpn)
    func_0205d304(arg0 + Enum_ov012_02189d68_144, *(void**)(arg0 + Enum_ov012_02189d68_4980), 0, 0, var0, 1, 0);
#else
    func_0205d304(arg0 + Enum_ov012_02189d68_172, *(void**)(arg0 + Enum_ov012_02189d68_4980), 0, 0, var0, 1, 0, 0);
#endif
}
