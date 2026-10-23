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

extern "C" int func_020421a0();
extern "C" void func_ov011_02184c68(void* arg0, int arg1);

// USA: func_ov011_021874b0
extern "C" ARM int func_ov011_021874b0(void* arg0) {
    int var0 = *(int*)((char*)(int)func_020421a0() + R(0x868, 0x998));
    func_ov011_02184c68(arg0, var0);
    return 1;
}
