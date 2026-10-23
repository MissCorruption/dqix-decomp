#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_02042b10(void*, void*);
extern "C" void func_02042b1c(unsigned char* base);

// USA: func_0205ce94
extern "C" ARM void func_0205ce94(unsigned char* p) {
    unsigned char* base = (unsigned char*)func_020421a0();
    func_02042b10(base, p + 0xb4);
#if defined(jpn)
    void* q = *(void**)(base + 0x1c44);
#else
    void* q = *(void**)(base + 0x1e20);
#endif
    if (q != NULL) {
        *(int*)((char*)q + 8) = 0;
    }
    func_02042b1c(base);
}
