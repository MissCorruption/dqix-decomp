#include <globaldefs.h>

typedef void (*Type_ov027_021d8c6c)(int, int, int);

struct Struct_ov027_021e33ec_2 { void* unknown_0_; };
extern Struct_ov027_021e33ec_2 data_ov027_021e33ec;

// USA: func_ov027_021d8c6c
extern "C" ARM void func_ov027_021d8c6c(int arg0, int arg1, int arg2) {
    Type_ov027_021d8c6c var0 = *(Type_ov027_021d8c6c*)((char*)data_ov027_021e33ec.unknown_0_ + 0x14e4);
    if (var0) var0(arg0, arg1, arg2);
}
