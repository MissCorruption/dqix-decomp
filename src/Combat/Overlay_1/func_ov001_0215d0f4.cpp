#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);

extern "C" void* func_0203cf4c(void);

struct Struct_0203dce4_2;
struct Struct_0203dce4;
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);

struct Struct_ov001_02165880_17 { int unknown_0_; unsigned char* unknown_4_; };
extern struct Struct_ov001_02165880_17 data_ov001_02165880;

// USA: func_ov001_0215d0f4
extern "C" ARM int func_ov001_0215d0f4(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    unsigned char* var1 = data_ov001_02165880.unknown_4_ + var0 * 0x10;
    int var2 = *(int*)(var1 + 0x4);
    struct Struct_0203dce4* var3 = func_0203dce4(
        (struct Struct_0203dce4_2*)func_0203cf4c(), var2);
    if (var3 == NULL) return 0;
    *(int*)((char*)var3 + 0x10) = 0;
    return 1;
}
