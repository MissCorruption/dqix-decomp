#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0209dccc();

struct Struct_0209d744 {
    unsigned char unknown_0_[0x6c];
    int unknown_6c_; // 0x6c
};

// USA: func_0209d744
extern "C" ARM int func_0209d744(void* arg0) {
    struct Struct_0209d744* var0 = (struct Struct_0209d744*)func_0209dccc();
    if (var0 == NULL) return 0;
    var0->unknown_6c_ = func_ov017_021d60f4(arg0);
    return 1;
}
