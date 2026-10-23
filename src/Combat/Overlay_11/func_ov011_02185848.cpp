#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" ARM int func_ov023_021f6f10(void* arg0);

struct Struct_ov004_02153e20;
extern "C" int func_ov023_021f9b30(struct Struct_ov004_02153e20* arg0, unsigned short arg1, unsigned int arg2, unsigned int arg3);

// USA: func_ov011_02185848
extern "C" ARM int func_ov011_02185848(struct Struct_ov011_02184c30* arg0, int arg1) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    int var1 = func_ov011_02184c30(&arg0[1]);
    int var2 = func_ov011_02184c30(&arg0[2]);
    int var3 = func_ov011_02184c30(&arg0[3]);
    void* var4 = func_ov011_021849c8(func_ov017_021b2164());
    void* var5 = func_ov023_021f6880(var4, var0);
    void* var6 = func_ov023_021f6880(var4, var1);
    if (var5 == 0 || var6 == 0)
        return 0;
    if (func_ov023_021f6f10(var5) != 7)
        return 0;

    return func_ov023_021f9b30((struct Struct_ov004_02153e20*)var5, var1,(unsigned short)var3, (unsigned short)var2) ? 1 : 0;
}
