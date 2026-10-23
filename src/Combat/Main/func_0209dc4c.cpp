#include <globaldefs.h>
#if defined(jpn)
#define data_02109cc4 data_0210997c
#define data_020f1758 data_020f18c0
#endif
#include "std_library_functions.h"

struct Struct_020f1758 {
    int unknown_0_;
    int unknown_4_;
};

extern int data_02109cc4[49];
extern struct Struct_020f1758 data_020f1758;

extern "C" void func_ov017_021d4cc0(void*, int*, int);

// USA: func_0209dc4c
extern "C" ARM void func_0209dc4c(void* arg0) {
    memset(data_02109cc4, 0, sizeof(data_02109cc4));

    for (struct Struct_020f1758* var0 = &data_020f1758; var0 != NULL; var0++) {
        if (var0->unknown_0_ == 0) {
            break;
        }
        if (var0->unknown_4_ >= 0 && var0->unknown_4_ < 49) {
            if (data_02109cc4[var0->unknown_4_] != 0) {
                for (;;) {}
            } else {
                data_02109cc4[var0->unknown_4_] = var0->unknown_0_;
            }
        }
    }

    func_ov017_021d4cc0(arg0, data_02109cc4, 49);
}
