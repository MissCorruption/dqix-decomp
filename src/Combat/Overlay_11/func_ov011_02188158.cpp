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

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(Struct_ov011_02184c30*);
extern "C" int func_020421a0();

// USA: func_ov011_02188158
extern "C" ARM int func_ov011_02188158(Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    unsigned char* var1 = (unsigned char*)func_020421a0();
    *(unsigned char*)(var1 + 0x1000 + R(0x7fb, 0x9ca)) = (var0 != 0) ? 1 : 0;
    return 1;
}
