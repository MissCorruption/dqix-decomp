#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void* arg0);

struct Struct_ov011_02188884 {
    char unknown_0_[0x45];
    unsigned char unknown_45_0_:1;
    unsigned char unknown_45_1_:1;
    unsigned char unknown_45_2_:1;
    unsigned char unknown_45_3_:1;
    unsigned char unknown_45_4_:1;
    unsigned char unknown_45_5_:1;
    unsigned char unknown_45_6_:1;
    unsigned char unknown_45_7_:1;
};

// USA: func_ov011_02188884
extern "C" ARM int func_ov011_02188884(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    struct Struct_ov011_02188884* var2 = (struct Struct_ov011_02188884*)func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (!var2) return 0;
    if (func_ov023_021f6f10(var2) != 8) return 0;
    var2->unknown_45_7_ = var1;
    return 1;
}
