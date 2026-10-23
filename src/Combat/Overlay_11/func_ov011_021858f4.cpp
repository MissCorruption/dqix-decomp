#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void** arg0, int arg1);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif

struct Struct_ov004_02158dcc { char unknown_0_[0x1b0]; unsigned short unknown_1b0_; char unknown_1b2_[0x1c8-0x1b2]; int unknown_1c8_; };
extern "C" void func_ov011_021849e0(struct Struct_ov004_02158dcc* arg0, unsigned short arg1);

// USA: func_ov011_021858f4
extern "C" ARM int func_ov011_021858f4(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    void* var1 = func_ov017_021b2164();
    void** var2 = (void**)func_ov011_021849c8(var1);
    void* var3 = func_ov023_021f6880(var2, var0);
    if (var3 == 0) return 0;
    if (func_ov024_021f6f10(var3) != 7) return 0;
    func_ov011_021849e0((struct Struct_ov004_02158dcc*)var1, (unsigned short)var0);
    return 1;
}
