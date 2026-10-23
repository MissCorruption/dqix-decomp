#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);

extern "C" void* func_0203cf4c(void);

struct Struct_0203dce4_2;
struct Struct_0203dce4;
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);

struct Struct_ov001_02165880_16 { int unknown_0_; unsigned char* unknown_4_; };
extern struct Struct_ov001_02165880_16 data_ov001_02165880;

// USA: func_ov001_0215d08c
extern "C" ARM int func_ov001_0215d08c(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    void* var2 = func_0203cf4c();
    int var3 = *(int*)(data_ov001_02165880.unknown_4_ + var0 * 0x10 + 0x4);
    struct Struct_0203dce4* var4 = func_0203dce4((struct Struct_0203dce4_2*)var2, var3);
    if (var4 == NULL) return 0;
    int var5 = *(int*)(data_ov001_02165880.unknown_4_ + var1 * 0x10 + 0xc);
    if (var5 == 0) return 0;
    *(int*)((char*)var4 + 0x10) = var5;
    return 1;
}
