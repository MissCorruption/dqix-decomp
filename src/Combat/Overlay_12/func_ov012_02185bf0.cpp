#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_02185bf0 func_ov012_02186248
enum { Enum_ov012_02185bf0_172 = 0x90, Enum_ov012_02185bf0_884 = 0x344, Enum_ov012_02185bf0_2400 = 0x800 };
#else
enum { Enum_ov012_02185bf0_172 = 0xac, Enum_ov012_02185bf0_884 = 0x374, Enum_ov012_02185bf0_2400 = 0x960 };
#endif
#include "std_library_functions.h"

struct Struct_0205d81c;
struct Struct_0205d0e0;
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);

struct Struct_0205d5d0;
struct Struct_ov012_02185bf0;
typedef void (Struct_ov012_02185bf0::*Type_ov012_02185bf0)(void* dest, int alt);
extern Type_ov012_02185bf0 data_020e6d5c;

struct Struct_ov012_0218b088 { Type_ov012_02185bf0 unknown_0_[16]; };
extern struct Struct_ov012_0218b088 data_ov012_0218b088;

// USA: func_ov012_02185bf0
extern "C" ARM void func_ov012_02185bf0(char* arg0, int arg1, int arg2) {
    struct Struct_0205d0e0* var0 = func_0205d81c((struct Struct_0205d81c*)(arg0 + Enum_ov012_02185bf0_172), arg1);
    if (var0 == 0) return;

    unsigned char* var1 = (unsigned char*)var0 + 0xc5;
    if (arg2) *var1 |= 0x40;
    else *var1 &= ~0x40;
    arg2 = 0;

    if (*var1 & 2) arg2 = 1;
    void* var2 = *(void**)(arg0 + 0x1000 + Enum_ov012_02185bf0_884);
    memset(var2, 0, Enum_ov012_02185bf0_2400);

    struct Struct_ov012_0218b088 var3 = data_ov012_0218b088;
    Type_ov012_02185bf0 var4 = data_020e6d5c;
    var3.unknown_0_[0] = var4;
    var3.unknown_0_[15] = var4;

    if (var3.unknown_0_[arg1] != 0)
        (((Struct_ov012_02185bf0*)arg0)->*var3.unknown_0_[arg1])(*(void**)(arg0 + 0x1000 + Enum_ov012_02185bf0_884), arg2);

#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)(arg0 + Enum_ov012_02185bf0_172), arg1, *(int*)(arg0 + 0x1000 + Enum_ov012_02185bf0_884), 0);
#else
    func_0205d5d0((struct Struct_0205d5d0*)(arg0 + Enum_ov012_02185bf0_172), arg1, *(int*)(arg0 + 0x1000 + Enum_ov012_02185bf0_884), 0, 0);
#endif
}
