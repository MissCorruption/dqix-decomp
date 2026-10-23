#include <globaldefs.h>

extern "C" void* func_020bd4b8(int arg0);
extern "C" int func_020bd8ac(unsigned int arg0);

struct Struct_020be7a8 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_020be7a8_2 { char unknown_0_[0x1c]; unsigned int unknown_1c_; struct Struct_020be7a8 unknown_20_[1]; };
extern "C" struct Struct_020be7a8 *func_020c01ac(struct Struct_020be7a8_2 *arg0, int arg1);

extern "C" int func_020be924(void *arg0, unsigned char arg1, unsigned short arg2, unsigned char arg3,
    struct Struct_020be7a8 *arg4, int arg5, int arg6, int arg7);

// USA: func_020be7a8
extern "C" ARM int func_020be7a8(void *arg0, int arg1, int arg2) {
    void *var0 = func_020bd4b8(arg1);
    if (var0 == NULL) {
        return 0;
    }
    int var1 = *(int*)var0;
    int var2 = func_020bd8ac((unsigned int)var1);
    if (var2 == 0) {
        return 0;
    }
    struct Struct_020be7a8 *var3 = func_020c01ac((struct Struct_020be7a8_2*)var2, arg2);
    if (var3 == NULL) {
        return 0;
    }
    return func_020be924(arg0, *(unsigned char*)((char*)var3 + 0x9), *(unsigned short*)((char*)var3 + 0x4),
        *(unsigned char*)((char*)var3 + 0x8), var3, var2, arg1, arg2);
}
