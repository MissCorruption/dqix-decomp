#include <globaldefs.h>

extern "C" void* func_ov001_02158dcc(void*);

struct Struct_ov001_02159250 { int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov001_02159250
extern "C" ARM void func_ov001_02159250(void* arg0, int arg1, Struct_ov001_02159250 arg2) {
    int* var0 = (int*)func_ov001_02158dcc(arg0);
    if (var0 != NULL) {
        var0[0] = 0x12;
        var0[1] = arg2.unknown_0_;
        var0[2] = arg2.unknown_4_;
        var0[3] = arg2.unknown_8_;
        *(int*)((char*)arg0 + 0xa20) = arg1;
    }
}
