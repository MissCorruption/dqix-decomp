#include <globaldefs.h>

struct Struct_0209a9dc_3 { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0209a9dc {
    struct Struct_0209a9dc_3 unknown_0_[0x42];
    int unknown_108_;
};
struct Struct_0209a9dc_2 {
    struct Struct_0209a9dc* unknown_0_;
};

// USA: func_0209a9dc
extern "C" ARM struct Struct_0209a9dc_3* func_0209a9dc(struct Struct_0209a9dc_2* arg0, int arg1) {
    int var0;
    struct Struct_0209a9dc* var1;
    var1 = arg0->unknown_0_;
    if (var1 == NULL) return NULL;
    if (arg1 >= 0x42) return NULL;
    if (var1->unknown_0_[arg1].unknown_0_ == arg1) return &var1->unknown_0_[arg1];
    for (var0 = 0; var0 < var1->unknown_108_; var0++) {
        if (var1->unknown_0_[var0].unknown_0_ == arg1) return &var1->unknown_0_[var0];
    }
    return NULL;
}
