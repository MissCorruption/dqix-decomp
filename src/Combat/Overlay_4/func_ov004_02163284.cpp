#include <globaldefs.h>

extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);
extern unsigned char data_ov004_021707e8;

// USA: func_ov004_02163284
extern "C" ARM int func_ov004_02163284(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_02163284_32 = 0x10, Enum_ov004_02163284_36 = 0x20 };
#else
    enum { Enum_ov004_02163284_32 = 0x20, Enum_ov004_02163284_36 = 0x24 };
#endif
    *(int*)((char*)&data_ov004_021707e8 + Enum_ov004_02163284_32) = -1;
    *(int*)((char*)&data_ov004_021707e8 + Enum_ov004_02163284_36) = 0;
    unsigned char* var0 = (unsigned char*)func_ov004_0215e47c(arg0, 9);
    var0[0xc] |= 1;
    return 0;
}
