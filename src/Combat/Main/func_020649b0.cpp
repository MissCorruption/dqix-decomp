#include <globaldefs.h>

struct Struct_02064530;
struct Struct_020649b0 { char unknown_0_[0xc]; void* unknown_c_; };

extern "C" struct Struct_020649b0* func_02064490(void*, int, void*);
extern "C" int func_02064530(void* arg0, struct Struct_02064530* arg1, void* arg2);

// USA: func_020649b0
extern "C" ARM int func_020649b0(void* arg0, int arg1, void* arg2) {
    struct Struct_020649b0* var0 = func_02064490(arg0, arg1, arg2);
    if (var0 == NULL) return 0;
    *(int*)((char*)arg2 + 0x30) = 0;
    return func_02064530(arg0, (struct Struct_02064530*)var0->unknown_c_, arg2) != 0;
}
