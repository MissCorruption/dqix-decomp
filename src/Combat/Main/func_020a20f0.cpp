#include <globaldefs.h>
extern "C" int func_020a3570(struct Struct_0204a170*);

extern "C" void func_020a212c(void* arg0, int arg1);

// USA: func_020a20f0
extern "C" ARM void func_020a20f0(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (func_020a3570((struct Struct_0204a170*)(arg0))) {
        var0[0x244] |= 8;
        return;
    }
    if (*(int*)(var0 + 0x238) == 0) {
        return;
    }
    func_020a212c(arg0, 1);
}
