#include <globaldefs.h>

struct Struct_ov023_021f7550 {
    char unknown_0_[0x1c];
    int unknown_1c_;
};
typedef int (Struct_ov023_021f7550::*Type_ov023_021f7550)(void*);
extern Type_ov023_021f7550 data_020e6d5c;
struct Struct_ov023_021fd8fc { Type_ov023_021f7550 unknown_0_[4]; };
extern Struct_ov023_021fd8fc data_ov023_021fd8fc;

// USA: func_ov023_021f7550
extern "C" ARM int func_ov023_021f7550(Struct_ov023_021f7550* arg0, void* arg1) {
    Struct_ov023_021fd8fc var0 = data_ov023_021fd8fc;
    var0.unknown_0_[3] = data_020e6d5c;
    int var1 = (arg0->*var0.unknown_0_[arg0->unknown_1c_])(arg1);
    arg0->unknown_1c_ = var1;
    return var1;
}
