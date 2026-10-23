#include <globaldefs.h>

struct Struct_ov001_02153884 { int unknown_0_; int unknown_4_; };
struct Struct_ov001_021658d8 { struct Struct_ov001_02153884* unknown_0_; int unknown_4_; };

// USA: func_ov001_02153884
extern "C" ARM void* func_ov001_02153884(struct Struct_ov001_021658d8* arg0, int arg1) {
    for (int var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg0->unknown_0_[var0].unknown_0_ == arg1) {
            struct Struct_ov001_02153884* var1 = &arg0->unknown_0_[var0];
            if (var1->unknown_4_ == 0) return NULL;
            return var1;
        }
    }
    return NULL;
}
