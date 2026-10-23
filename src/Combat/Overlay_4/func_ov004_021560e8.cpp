#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" unsigned int func_ov023_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov023_021f6f10
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#define NODE_KIND_CALL func_ov024_021f6f10
#endif
extern "C" int func_ov023_021f9bc8(void*);
extern "C" void func_ov011_021848a0(void*, int);

struct Struct_020a15bc_2 { unsigned int unknown_0_0_ : 9; unsigned int unknown_1_1_ : 23; unsigned int unknown_4_; unsigned int unknown_8_; };
struct Struct_020a15bc { struct Struct_020a15bc_2* unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
extern "C" struct Struct_020a15bc_2* func_020a15bc(struct Struct_020a15bc* arg0, int arg1);

struct Struct_ov004_021707c8 {
#if defined(jpn)
 char unknown_0_[4];
#else
 char unknown1_0_[8];
#endif
 short* unknown_8_; struct Struct_020a15bc* unknown_c_; };
extern struct Struct_ov004_021707c8 data_ov004_021707c8;

// USA: func_ov004_021560e8
extern "C" ARM int func_ov004_021560e8(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 3);
    if (!var0) return 0;
    if (NODE_KIND_CALL(var0) != 7) return 0;

    short var1 = *(short*)((char*)var0 + 0x5c);
    #if defined(jpn)
    short var2 = (short)(var1 * 16);
#else
    short var2 = (short)(var1 * 12);
#endif
    int var3 = func_ov023_021f9bc8(var0) + var2;

    short var4 = data_ov004_021707c8.unknown_8_[var3];
    struct Struct_020a15bc_2* var5 = func_020a15bc(data_ov004_021707c8.unknown_c_, var4);
    if (!var5) return 0;

    unsigned int var6 = *(unsigned int*)var5 >> 30;
    switch (var6) {
        case 0: func_ov011_021848a0(arg0, 0x6e); break;
        case 1: func_ov011_021848a0(arg0, 0x6f); break;
        case 2: func_ov011_021848a0(arg0, 0x70); break;
    }
    return 0;
}
