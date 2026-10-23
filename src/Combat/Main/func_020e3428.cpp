#include <globaldefs.h>
extern "C" int func_0202c1a4(struct Struct_0202c1a4*);

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_020e33b4(void*, int, int);

// USA: func_020e3428
extern "C" ARM void func_020e3428(void* arg0, int arg1) {
    void* var0 = func_0202ae18();
    if (func_0202b7d8((int*)var0)) {
        int var1 = func_0202c1a4((struct Struct_0202c1a4*)(var0));
        func_020e33b4(arg0, arg1, var1 & 0xff);
    }
}
