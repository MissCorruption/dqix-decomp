#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_021764f4_4098 = 0xf7e };
enum { Enum_ov003_021764f4_4094 = 0xf7a };
enum { Enum_ov003_021764f4_2204 = 0x818 };
enum { Enum_ov003_021764f4_2188 = 0x808 };
enum { Enum_ov003_021764f4_4088 = 0xf74 };
#else
enum { Enum_ov003_021764f4_4098 = 0x1002 };
enum { Enum_ov003_021764f4_4094 = 0xffe };
enum { Enum_ov003_021764f4_2204 = 0x89c };
enum { Enum_ov003_021764f4_2188 = 0x88c };
enum { Enum_ov003_021764f4_4088 = 0xff8 };
#endif

extern "C" int func_ov003_021765b4(void* arg0);
extern "C" int func_ov003_021766e8(void* arg0);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

struct Struct_0207fdcc_2;
extern "C" void func_0207fdcc(struct Struct_0207fdcc_2* arg0, int arg1);

struct Struct_02081f20_2;
extern "C" void func_0208203c(struct Struct_02081f20_2* arg0);

struct Struct_020e25e8;
extern "C" void func_020e25e8(struct Struct_020e25e8* arg0);

extern struct Struct_02108760 data_02108760;

// USA: func_ov003_021764f4
extern "C" ARM int func_ov003_021764f4(unsigned char* arg0) {
#if defined(jpn)
    *(void**)(arg0 + 0xf74) = arg0 + 0xf7e;
#else
    *(void**)(arg0 + 0xff8) = arg0 + 0x2 + 0x1000;
#endif
    int var0 = 0;
    if (func_ov003_021765b4(arg0) != 0) {
        goto dispatch;
    }
    if (g_keyManager.TestKeysPressed(0x200) == 0) {
        goto alt;
    }
dispatch:
    func_0205eaa0(&data_02108760, 1, 0);
    var0 = -1;
    if (*(short*)(arg0 + Enum_ov003_021764f4_4098) == 2) {
        var0 = 1;
    }
    goto merge;
alt:
    if (func_ov003_021766e8(arg0) != 0) {
        var0 = -1;
    }
merge:
    if (var0 != 0) {
        short var1 = *(short*)(arg0 + Enum_ov003_021764f4_4094);
        func_0207fdcc(*(struct Struct_0207fdcc_2**)(arg0 + Enum_ov003_021764f4_2204), var1);
        func_0208203c((struct Struct_02081f20_2*)(arg0 + Enum_ov003_021764f4_2188));
        *(void**)(arg0 + Enum_ov003_021764f4_4088) = 0;
    }
    if (*(void**)arg0 != 0 && var0 != 0) {
        func_020e25e8(*(struct Struct_020e25e8**)arg0);
    }
    return var0;
}
