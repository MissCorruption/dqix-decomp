#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

struct Struct_ov011_02187604 {
    char unknown_0_[0xa4];
    void (*unknown_a4_)(void*, int);
};
struct Struct_ov011_02187604_2 {
    struct Struct_ov011_02187604* unknown_0_;
};
extern "C" struct Struct_ov011_02187604_2* func_ov023_021f6880(void*, int);

// USA: func_ov011_02187604
extern "C" ARM int func_ov011_02187604(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    struct Struct_ov011_02187604_2* var2 = func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (var2) {
        var2->unknown_0_->unknown_a4_(var2, var1);
    }
    return 1;
}
