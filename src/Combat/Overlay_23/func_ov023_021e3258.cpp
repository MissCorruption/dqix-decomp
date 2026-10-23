#include <globaldefs.h>

extern "C" int func_0205ac40(void*, void*);

// USA: func_ov023_021e3258
extern "C" ARM int func_ov023_021e3258(void* arg0, int arg1, int arg2, int arg3, short arg4) {
    char* var0 = *(char**)((char*)arg0 + 0xcc);
    *(int*)(var0 + 0x104) = arg1 << 12;
    *(int*)(var0 + 0x108) = arg2 << 12;
    *(unsigned char*)(var0 + 0x112) = 0x76;
    *(unsigned char*)(var0 + 0x116) = 2;
    func_0205ac40(*(void**)((char*)arg0 + 0xc8), var0 + 0xf0);
    var0 = *(char**)((char*)arg0 + 0xcc);
    *(int*)(var0 + 0x12c) = arg3 << 12;
    *(int*)(var0 + 0x130) = arg4 << 12;
    *(unsigned char*)(var0 + 0x13a) = 0x75;
    *(unsigned char*)(var0 + 0x13e) = 2;
    return func_0205ac40(*(void**)((char*)arg0 + 0xc8), var0 + 0x118);
}
