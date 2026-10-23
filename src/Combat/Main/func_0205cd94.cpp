#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0205cd94_6624 = 0x1804, Enum_0205cd94_7712 = 0x1c44 };
#else
enum { Enum_0205cd94_6624 = 0x19e0, Enum_0205cd94_7712 = 0x1e20 };
#endif
extern "C" void func_02042b10(void*, void*);

extern "C" int func_020421a0();
extern "C" int func_0205cd6c(unsigned char* arg0);
extern "C" void func_02042b1c(unsigned char* arg0);

// USA: func_0205cd94
extern "C" ARM void func_0205cd94(unsigned char* arg0) {
    unsigned char* var0 = (unsigned char*)func_020421a0();
    func_02042b10((void*)(var0), (void*)(arg0 + 0xb4));
    if (func_0205cd6c(var0 + Enum_0205cd94_6624) == 0) {
        *(int*)((char*)*(int**)(var0 + Enum_0205cd94_7712) + 0x8) = 2;
        *(int*)((char*)*(int**)(var0 + Enum_0205cd94_7712) + 0x14) = 0x1000;
    }
    func_02042b1c(var0);
}
