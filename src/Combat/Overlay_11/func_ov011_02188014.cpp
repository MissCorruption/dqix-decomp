#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov024_021f5c80
#define func_ov023_021e4e8c func_ov023_021e5080
#define data_ov023_021ff5b4 data_ov023_021fe83c
#define func_ov023_021fc518 func_ov023_021fb810
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

extern "C" void* func_020421a0();
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

// USA: func_ov011_02188014
extern "C" ARM int func_ov011_02188014(struct Struct_ov011_02184c30* arg0, int arg1) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    *(int*)((char*)func_020421a0() + R(0x86c, 0x99c)) = var0;
    return 1;
}
