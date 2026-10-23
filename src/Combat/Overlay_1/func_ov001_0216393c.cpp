#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);

struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);

extern int data_02109bf4;

// USA: func_ov001_0216393c
extern "C" ARM int func_ov001_0216393c(void* arg0, int arg1) {
    int var0 = 0x1e;
    if (arg1 > 0) var0 = func_ov017_021d60f4(arg0);
    func_0209c678((struct Struct_02109bf4_4*)&data_02109bf4, var0);
    return 1;
}
