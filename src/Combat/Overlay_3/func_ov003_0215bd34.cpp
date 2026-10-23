#include <globaldefs.h>

extern "C" void func_ov003_0215b3bc(void* obj);
extern "C" int func_ov003_0215b328(void* obj);

extern "C" void func_0205cef8(void* obj);
extern "C" void func_0205cf04(void* obj);
extern "C" void func_0205cf10(void* obj);

struct Struct0205cf1c;
extern "C" void func_0205cf1c(struct Struct0205cf1c* s);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* s);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

extern "C" int func_ov003_0215b370(void* obj, int flag);

extern int data_02108760;

// USA: func_ov003_0215bd34
extern "C" ARM int func_ov003_0215bd34(void* p) {
    char* obj = (char*)p;
    unsigned char state = *(unsigned char*)(obj + 0x581);
    if (state == 0) {
        func_ov003_0215b3bc(obj);
        func_0205cef8(obj + 0xf4);
        func_0205cf04(obj + 0xf4);
        *(unsigned char*)(obj + 0x581) = *(unsigned char*)(obj + 0x581) + 1;
    }
    if (state == 1) {
        *(unsigned char*)(obj + 0x59f) |= 1;
        int e = func_0205d794((struct Struct_0205c570*)(obj + 0xf4));
        *(unsigned char*)(obj + 0x585) = (unsigned char)e;
        if (func_ov003_0215b328(obj) != 0) {
            unsigned char v = *(unsigned char*)(obj + 0x59f);
            int masked = v & ~1;
            *(unsigned char*)(obj + 0x59f) = masked;
            func_0205eaa0((struct Obj0205eaa0*)&data_02108760, 1, 0);
            func_0205cf10(obj + 0xf4);
            func_0205cf1c((struct Struct0205cf1c*)(obj + 0xf4));
            *(unsigned char*)(obj + 0x581) = 0;
            return *(signed char*)(obj + 0x585);
        } else {
            if (func_ov003_0215b370(obj, 1) != 0) {
                *(unsigned char*)(obj + 0x59f) &= ~1;
                func_0205cf10(obj + 0xf4);
                func_0205cf1c((struct Struct0205cf1c*)(obj + 0xf4));
                *(unsigned char*)(obj + 0x581) = 0;
                return -2;
            }
        }
    }
    return -1;
}
