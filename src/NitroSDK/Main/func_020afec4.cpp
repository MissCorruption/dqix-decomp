#include <globaldefs.h>

extern "C" void func_020aff0c(void*);

struct Struct_0205ab78;
struct Struct_020afec4;
extern "C" struct Struct_020afec4* func_020b0288(struct Struct_0205ab78*, unsigned int);

// USA: func_020afec4
extern "C" ARM int func_020afec4(void* arg0, void** arg1) {
    struct Struct_020afec4* var0 = func_020b0288((struct Struct_0205ab78*)arg0, 0x41424e4b);
    if (var0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_020aff0c((char*)var0 + 8);
    *arg1 = (char*)var0 + 8;
    return 1;
}
