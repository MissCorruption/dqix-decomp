// USA: func_ov003_0216720c
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216720c_1124 = 0x28c };
enum { Enum_ov003_0216720c_808 = 0x210 };
#else
enum { Enum_ov003_0216720c_1124 = 0x464 };
enum { Enum_ov003_0216720c_808 = 0x328 };
#endif

extern "C" void func_0204b088(void*, int);

extern "C" ARM void func_ov003_0216720c(char* arg0) {
    if (*(int*)(arg0 + Enum_ov003_0216720c_1124) & 0x40000) {
        func_0204b088(*(char**)(arg0 + Enum_ov003_0216720c_808) + 0x40, 0);
        *(int*)(arg0 + Enum_ov003_0216720c_1124) &= ~0x40000;
    }
}
