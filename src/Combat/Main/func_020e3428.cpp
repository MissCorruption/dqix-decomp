#include <globaldefs.h>
extern "C" int func_0202c1a4(struct SearchStruct0202c1a4*);

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);
extern "C" void func_020e33b4(void*, int, int);

// USA: func_020e3428
extern "C" ARM void func_020e3428(void* a, int b) {
    void* ctx = func_0202ae18();
    if (func_0202b7d8((int*)ctx)) {
        int v = func_0202c1a4((struct SearchStruct0202c1a4*)(ctx));
        func_020e33b4(a, b, v & 0xff);
    }
}
