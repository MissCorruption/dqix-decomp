#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_02161d2c
extern "C" ARM int func_ov001_02161d2c(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02161d2c_1868 = 0x78c };
#else
    enum { Enum_ov001_02161d2c_1868 = 0x74c };
#endif
    char* var0 = (char*)func_02012fe4();
    int var1 = func_ov017_021d60f4(arg0);
    *(int*)(var0 + 0x2000 + Enum_ov001_02161d2c_1868) = var1;
    return 1;
}
