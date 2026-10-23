#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0209dccc();

struct Struct_0209d770 {
    unsigned char unknown_0_[0x70];
    int unknown_70_[1];
};

// USA: func_0209d770
extern "C" ARM int func_0209d770(void* arg0) {
    struct Struct_0209d770* var0 = (struct Struct_0209d770*)func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 8);
    var0->unknown_70_[var1] = var2;
    return 1;
}
