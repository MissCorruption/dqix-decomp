#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02086380_2400 = 0x8c8, Enum_02086380_2402 = 0x8ca };
#else
enum { Enum_02086380_2400 = 0x960, Enum_02086380_2402 = 0x962 };
#endif

extern "C" void func_020863a0(unsigned char* arg0);

// USA: func_02086380
extern "C" ARM void func_02086380(unsigned char* arg0) {
    func_020863a0(arg0);
    *(unsigned short*)(arg0 + Enum_02086380_2400) = 0;
    *(unsigned short*)(arg0 + Enum_02086380_2402) = 0;
}
