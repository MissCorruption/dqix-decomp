#include <globaldefs.h>

extern "C" int rand(void);
extern "C" void func_0203ef7c(void*);

// USA: func_0203c794
extern "C" ARM void func_0203c794(void* arg0) {
    func_0203ef7c(arg0);
    *(int*)((char*)arg0 + 0x60) = 0;
    *(int*)((char*)arg0 + 0x64) = 0;
    *(int*)((char*)arg0 + 0x68) = 0x324;
    *(int*)((char*)arg0 + 0x84) = (int)(((float)(rand() % 200) / 100.0f) * 4096.0f);
    *(int*)((char*)arg0 + 0x5c) = 0;
    *(int*)((char*)arg0 + 0x88) = 0;
    *(int*)((char*)arg0 + 0x8c) = 0x7a;
    *(int*)((char*)arg0 + 0x90) = 0;
    *(unsigned char*)((char*)arg0 + 0x94) = 0xf;
    *(unsigned char*)((char*)arg0 + 0x95) = 0;
    *(int*)((char*)arg0 + 0x98) = 0;
}
