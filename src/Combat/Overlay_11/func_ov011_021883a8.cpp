#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

struct Struct_ov011_021883a8 {
    char unknown_0_[0x24];
    void (*unknown_24_)(void*, int);
};
struct Struct_ov011_021883a8_2 {
    struct Struct_ov011_021883a8* unknown_0_;
};

extern "C" struct Struct_ov011_021883a8_2* func_ov023_021f6880(void*, int);

// USA: func_ov011_021883a8
extern "C" ARM int func_ov011_021883a8(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    void* var1 = func_ov017_021b2164();
    void* var2 = func_ov011_021849c8(var1);
    struct Struct_ov011_021883a8_2* var3 = func_ov023_021f6880(var2, var0);
    if (!var3) return 0;
    var3->unknown_0_->unknown_24_(var3, 1);
    return 1;
}
