#include <globaldefs.h>

extern "C" void func_ov003_0215b3bc(void* arg0);
extern "C" int func_ov003_0215b328(void* arg0);

extern "C" void func_0205cef8(void* arg0);
extern "C" void func_0205cf04(void* arg0);
extern "C" void func_0205cf10(void* arg0);

struct Struct_0205cf1c;
extern "C" void func_0205cf1c(struct Struct_0205cf1c* arg0);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern "C" int func_ov003_0215b370(void* arg0, int arg1);

extern int data_02108760;

// USA: func_ov003_0215bd34
extern "C" ARM int func_ov003_0215bd34(void* arg0) {
    char* var0 = (char*)arg0;
    unsigned char var1 = *(unsigned char*)(var0 + 0x581);
    if (var1 == 0) {
        func_ov003_0215b3bc(var0);
        func_0205cef8(var0 + 0xf4);
        func_0205cf04(var0 + 0xf4);
        *(unsigned char*)(var0 + 0x581) = *(unsigned char*)(var0 + 0x581) + 1;
    }
    if (var1 == 1) {
        *(unsigned char*)(var0 + 0x59f) |= 1;
        int var2 = func_0205d794((struct Struct_0205c570*)(var0 + 0xf4));
        *(unsigned char*)(var0 + 0x585) = (unsigned char)var2;
        if (func_ov003_0215b328(var0) != 0) {
            unsigned char var3 = *(unsigned char*)(var0 + 0x59f);
            int var4 = var3 & ~1;
            *(unsigned char*)(var0 + 0x59f) = var4;
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
            func_0205cf10(var0 + 0xf4);
            func_0205cf1c((struct Struct_0205cf1c*)(var0 + 0xf4));
            *(unsigned char*)(var0 + 0x581) = 0;
            return *(signed char*)(var0 + 0x585);
        } else {
            if (func_ov003_0215b370(var0, 1) != 0) {
                *(unsigned char*)(var0 + 0x59f) &= ~1;
                func_0205cf10(var0 + 0xf4);
                func_0205cf1c((struct Struct_0205cf1c*)(var0 + 0xf4));
                *(unsigned char*)(var0 + 0x581) = 0;
                return -2;
            }
        }
    }
    return -1;
}
