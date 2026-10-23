#include <globaldefs.h>

struct Struct_020da1ac;
extern "C" void func_020da22c(struct Struct_020da1ac* arg0);

extern "C" void* func_02057924(void*);
extern "C" void func_02057f00(void*, int);

// USA: func_020da1ac
extern "C" ARM void func_020da1ac(void* arg0) {
    void* var0 = func_02057924(arg0);
    if (var0) {
        func_02057f00(var0, 0x14);
        func_02057f00(var0, 0x15);
        func_02057f00(var0, 0x16);
    }
    char* var1 = (char*)arg0 + 0x14;
    unsigned char var2 = 0;
    while (var2 < 4) {
        func_020da22c((struct Struct_020da1ac*)var1);
        var2++;
        var1 += 0xc;
    }
    *(int*)((char*)arg0 + 0x0) = 0;
    *(int*)((char*)arg0 + 0x4) = 0;
    *(unsigned char*)((char*)arg0 + 0xc) = 0;
    *(unsigned char*)((char*)arg0 + 0xd) = 0;
    *(unsigned char*)((char*)arg0 + 0xe) = 0;
    *(unsigned char*)((char*)arg0 + 0xf) = 0;
    *(unsigned char*)((char*)arg0 + 0x11) = 0;
}
