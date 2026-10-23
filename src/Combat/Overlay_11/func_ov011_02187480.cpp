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

extern "C" void* func_020421a0();
extern "C" unsigned int func_ov011_02184c68(unsigned int, unsigned int);

// USA: func_ov011_02187480
extern "C" ARM int func_ov011_02187480(unsigned int obj) {
    int state = *(int*)((char*)func_020421a0() + R(0x870, 0x9a0));
    int flag = 1;
    if (state == 0 || state == 3) flag = 0;
    func_ov011_02184c68(obj, flag);
    return 1;
}
