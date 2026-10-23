#if defined(jpn)
#define CONTROLLER_OFFSET_LO 4
#define CONTROLLER_OFFSET_HI 0x1800
#else
#define CONTROLLER_OFFSET_LO 0x9e0
#define CONTROLLER_OFFSET_HI 0x1000
#endif
#include <globaldefs.h>

struct Struct_0202f6a4;

extern "C" void func_02042b10(void*, void*);
extern "C" void func_02042b1c(unsigned char*);
extern "C" void func_0202f6a4(Struct_0202f6a4*);
extern "C" int func_0205cd6c(unsigned char*);
extern "C" unsigned char* func_020421a0();

// USA: func_0205cd28
extern "C" ARM void func_0205cd28(unsigned char* arg0) {
    unsigned char* var0 = func_020421a0();
    func_02042b10(var0, arg0 + 0xb4);
    if (func_0205cd6c(var0 + CONTROLLER_OFFSET_LO + CONTROLLER_OFFSET_HI) == 0) {
        func_0202f6a4((Struct_0202f6a4*)(var0 + CONTROLLER_OFFSET_LO + CONTROLLER_OFFSET_HI));
    }
    func_02042b1c(var0);
}
