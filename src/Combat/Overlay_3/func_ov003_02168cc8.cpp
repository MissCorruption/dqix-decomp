#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02168cc8_2464 = 0x870 };
enum { Enum_ov003_02168cc8_2478 = 0x7de };
enum { Enum_ov003_02168cc8_1260 = 0x4e8 };
#else
enum { Enum_ov003_02168cc8_2464 = 0x9a0 };
enum { Enum_ov003_02168cc8_2478 = 0x9ae };
enum { Enum_ov003_02168cc8_1260 = 0x4ec };
#endif


extern "C" int func_020421a0();
extern "C" int func_ov003_02169b30(void* arg0);

// USA: func_ov003_02168cc8
extern "C" ARM void func_ov003_02168cc8(void* arg0) {
    int var0 = func_020421a0();
    if (*(int*)(var0 + Enum_ov003_02168cc8_2464) == 3) {
        *(unsigned char*)(var0 + 0x1000 + Enum_ov003_02168cc8_2478) = 0;
    }
    int var1 = func_ov003_02169b30(arg0);
    switch (var1) {
        case -1:
            return;
        case 0:
            *((unsigned char*)arg0 + Enum_ov003_02168cc8_1260) = 3;
            break;
        case 1:
            *((unsigned char*)arg0 + Enum_ov003_02168cc8_1260) = 4;
            break;
        case -2:
        case 2:
            *((unsigned char*)arg0 + Enum_ov003_02168cc8_1260) = 5;
            break;
    }
}
