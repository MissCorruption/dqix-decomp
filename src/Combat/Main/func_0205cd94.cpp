#include <globaldefs.h>

#if defined(jpn)
enum { stateOffset = 0x1804, selfPointerOffset = 0x1c44 };
#else
enum { stateOffset = 0x19e0, selfPointerOffset = 0x1e20 };
#endif
extern "C" void func_02042b10(void*, void*);

extern "C" int func_020421a0();
extern "C" int func_0205cd6c(unsigned char* obj);
extern "C" void func_02042b1c(unsigned char* base);

// USA: func_0205cd94
extern "C" ARM void func_0205cd94(unsigned char* p) {
    unsigned char* base = (unsigned char*)func_020421a0();
    func_02042b10((void*)(base), (void*)(p + 0xb4));
    if (func_0205cd6c(base + stateOffset) == 0) {
        *(int*)((char*)*(int**)(base + selfPointerOffset) + 0x8) = 2;
        *(int*)((char*)*(int**)(base + selfPointerOffset) + 0x14) = 0x1000;
    }
    func_02042b1c(base);
}
