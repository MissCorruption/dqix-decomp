#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021def30_30474 = 0x78fa, Enum_ov025_021def30_21976 = 0x57c8, Enum_ov025_021def30_3756 = 0xe28, Enum_ov025_021def30_30476 = 0x78fc };
#else
enum { Enum_ov025_021def30_30474 = 0x770a, Enum_ov025_021def30_21976 = 0x55d8, Enum_ov025_021def30_3756 = 0xeac, Enum_ov025_021def30_30476 = 0x770c };
#endif

// USA: func_ov025_021def30
extern "C" ARM void func_ov025_021def30(unsigned char* arg0) {
    if (*(unsigned short*)(arg0+Enum_ov025_021def30_30474) == 0) {
        *(int*)(arg0+Enum_ov025_021def30_21976) += 1;
    }
    *(int*)(arg0+Enum_ov025_021def30_3756) = 1;
    *(int*)(arg0+Enum_ov025_021def30_30476) = 0;
}
