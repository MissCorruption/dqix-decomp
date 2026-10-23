#include <globaldefs.h>

struct Struct_ov023_021fb680 {
    char unknown_0_[0x1c];
    int unknown_1c_;
};
typedef int (Struct_ov023_021fb680::*Type_ov023_021fb680)(void*);
extern Type_ov023_021fb680 data_020e6d5c;
struct Struct_ov023_021fd964 { Type_ov023_021fb680 unknown_0_[4]; };
extern Struct_ov023_021fd964 data_ov023_021fd964;

// USA: func_ov023_021fb680
extern "C" ARM int func_ov023_021fb680(Struct_ov023_021fb680* arg0, void* arg1) {
    Struct_ov023_021fd964 var0 = data_ov023_021fd964;
    var0.unknown_0_[3] = data_020e6d5c;
    int var1 = (arg0->*var0.unknown_0_[arg0->unknown_1c_])(arg1);
    arg0->unknown_1c_ = var1;
    return var1;
}
