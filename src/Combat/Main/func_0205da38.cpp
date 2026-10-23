#include <globaldefs.h>

struct Struct_0205bd20;
struct Struct_0205d81c;
struct Struct_0205d0e0;

extern "C" int func_0205bd20(struct Struct_0205bd20* arg0, int arg1);
extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" int func_0204c7cc(unsigned char* arg0);

struct Struct_0205da38 {
    char unknown_0_[0xb0];
    unsigned char unknown_b0_;
};

// USA: func_0205da38
extern "C" ARM int func_0205da38(struct Struct_0205da38* arg0, int arg1) {
    unsigned char* var0;
    if (func_0205bd20((struct Struct_0205bd20*)((char*)arg0 + 0x4), arg1) == 0) goto ret0;
    var0 = (unsigned char*)func_0205d81c((struct Struct_0205d81c*)arg0, arg0->unknown_b0_);
    if (var0 == NULL) goto ret0;
    if (func_0204c7cc(var0) == 0) goto ret0;
    if (var0[0xc5] & 2) return 1;
ret0:
    return 0;
}
