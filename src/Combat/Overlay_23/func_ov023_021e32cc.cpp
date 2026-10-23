#include <globaldefs.h>

extern "C" int func_0205ac40(void*, void*);

// USA: func_ov023_021e32cc
extern "C" ARM int func_ov023_021e32cc(void* arg0, int arg1, int arg2) {
    char* var0 = *(char**)((char*)arg0 + 0xcc);
    *(int*)(var0 + 0x154) = arg1 << 12;
    *(int*)(var0 + 0x158) = arg2 << 12;
    *(unsigned char*)(var0 + 0x162) = 0x72;
    *(unsigned char*)(var0 + 0x166) = 2;
    return func_0205ac40(*(void**)((char*)arg0 + 0xc8), var0 + 0x140);
}
