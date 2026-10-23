#include <globaldefs.h>

struct Struct_0207fdcc_2;

extern "C" unsigned char* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" int func_0204c7e0(unsigned char* arg0);

// USA: func_020811e8
extern "C" ARM int func_020811e8(struct Struct_0207fdcc_2* arg0, int arg1) {
    unsigned char* var0 = func_02081da8(arg0, arg1);
    if (var0 != NULL) {
        return func_0204c7e0(var0) != 0;
    }
    return 0;
}
