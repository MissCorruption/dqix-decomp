#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_0216265c_3752 = 0xe24 };
#else
enum { Enum_ov000_0216265c_3752 = 0xea8 };
#endif

// USA: func_ov000_0216265c
extern "C" ARM int func_ov000_0216265c(void* arg0) {
    int var0 = *(int*)((char*)arg0 + Enum_ov000_0216265c_3752);
    switch (var0) {
        case 4:
        case 6:
        case 9:
        case 0xa:
        case 0xb:
            return 1;
        default:
            return 0;
    }
}
