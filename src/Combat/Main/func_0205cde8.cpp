#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0205cde8_6624 = 0x1804 };
#else
enum { Enum_0205cde8_6624 = 0x19e0 };
#endif
extern "C" void func_02042b10(void*, void*);

extern "C" int func_020421a0();
extern "C" int func_0205cd6c(unsigned char* arg0);
extern "C" void func_02042b1c(unsigned char* arg0);

// USA: func_0205cde8
extern "C" ARM int func_0205cde8(unsigned char* arg0) {
    unsigned char* var0 = (unsigned char*)func_020421a0();
    func_02042b10((void*)(var0), (void*)(arg0 + 0xb4));
    int var1 = func_0205cd6c(var0 + Enum_0205cde8_6624) != 0;
    func_02042b1c(var0);
    return var1;
}
