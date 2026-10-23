#include <globaldefs.h>

struct Struct_ov031_022187a4 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    int unknown_c_;
};

typedef char* (*Type_ov031_022187a4)(const char*, int);
extern char data_ov031_02249eec[];

// USA: func_ov031_022187a4
extern "C" ARM int func_ov031_022187a4(char* arg0, void* arg1, int arg2) {
    Type_ov031_022187a4 var0 = *(Type_ov031_022187a4*)(arg0 + 0x1010);
    Struct_ov031_022187a4* var1 = (Struct_ov031_022187a4*)arg1;
    if (arg2 == 0) return 0;
    var1->unknown_0_ = var0(data_ov031_02249eec, arg2);
    if (var1->unknown_0_ == NULL) return 0;
    var1->unknown_4_ = var1->unknown_0_;
    var1->unknown_c_ = arg2;
    var1->unknown_8_ = var1->unknown_0_ + var1->unknown_c_;
    return 1;
}
