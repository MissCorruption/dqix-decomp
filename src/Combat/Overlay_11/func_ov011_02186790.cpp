#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

struct Struct_ov011_02186790 {
    char unknown_0_[0xd0];
    void (*unknown_d0_)(void*);
};
struct Struct_ov011_02186790_2 {
    struct Struct_ov011_02186790* unknown_0_;
};

extern "C" struct Struct_ov011_02186790_2* func_ov023_021f6880(void*, int);

// USA: func_ov011_02186790
extern "C" ARM int func_ov011_02186790(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    void* var1 = func_ov017_021b2164();
    void* var2 = func_ov011_021849c8(var1);
    struct Struct_ov011_02186790_2* var3 = func_ov023_021f6880(var2, var0);
    if (!var3) return 0;
    var3->unknown_0_->unknown_d0_(var3);
    return 1;
}
