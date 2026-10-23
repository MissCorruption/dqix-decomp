#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0206b804_6592 = 0x17f0, Enum_0206b804_6605 = 0x17fe, Enum_0206b804_64 = 0xc, Enum_0206b804_6493 = 0x178b };
#else
enum { Enum_0206b804_6592 = 0x19c0, Enum_0206b804_6605 = 0x19cd, Enum_0206b804_64 = 0x40, Enum_0206b804_6493 = 0x195d };
#endif

extern const signed char data_020e7e10[];
extern const signed char data_020e7e1c[];

// USA: func_0206b804
extern "C" ARM void func_0206b804(char* arg0, int* arg1, int* arg2) {
    *arg2 = 0;
    *arg1 = 0;
    if (*(unsigned char*)(arg0 + Enum_0206b804_6592) != 0) {
        int var0;
        *(unsigned char*)(arg0 + Enum_0206b804_6605) = 1;
        *(int*)(arg0 + Enum_0206b804_64) = 0;
        var0 = *(unsigned char*)(arg0 + Enum_0206b804_6493) & 3;
        *arg1 = data_020e7e10[var0];
        *arg2 = data_020e7e1c[var0];
    }
}
