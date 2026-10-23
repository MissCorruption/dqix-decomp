#include <globaldefs.h>

extern "C" void func_ov003_0215caa4(void* arg0);

// USA: func_ov003_0216d7ec
extern "C" ARM void func_ov003_0216d7ec(char* arg0) {
#if defined(jpn)
    enum { Enum_ov003_0216d7ec_5100 = 0x127c };
#else
    enum { Enum_ov003_0216d7ec_5100 = 0x13ec };
#endif
    *(unsigned char*)(arg0 + Enum_ov003_0216d7ec_5100) |= 2;
    short var0 = *(short*)(arg0 + 0x4);
    if (var0 == 3) {
        func_ov003_0215caa4(arg0 + 0x14);
    }
}
