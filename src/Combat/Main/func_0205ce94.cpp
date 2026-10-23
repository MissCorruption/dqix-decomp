#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_02042b10(void*, void*);
extern "C" void func_02042b1c(unsigned char* arg0);

// USA: func_0205ce94
extern "C" ARM void func_0205ce94(unsigned char* arg0) {
    unsigned char* var0 = (unsigned char*)func_020421a0();
    func_02042b10(var0, arg0 + 0xb4);
#if defined(jpn)
    void* var1 = *(void**)(var0 + 0x1c44);
#else
    void* var1 = *(void**)(var0 + 0x1e20);
#endif
    if (var1 != NULL) {
        *(int*)((char*)var1 + 8) = 0;
    }
    func_02042b1c(var0);
}
