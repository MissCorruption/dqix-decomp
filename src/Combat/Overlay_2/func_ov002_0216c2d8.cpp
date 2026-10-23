#include "std_library_functions.h"
#include <globaldefs.h>
#if defined(jpn)
#define ARRAY_A_OFFSET 0x1b94
#define ARRAY_B_OFFSET 0x1bac
#define COUNT_IN_HIGH 0xb8f
#define KEYS_OFFSET 0x1b90
#define FLAGS_OFFSET 0x2352
#else
#define ARRAY_A_OFFSET 0x1cd0
#define ARRAY_B_OFFSET 0x1ce8
#define COUNT_IN_HIGH 0xccb
#define KEYS_OFFSET 0x1ccc
#define FLAGS_OFFSET 0x2522
#endif

extern "C" void func_ov002_0216c28c(void *arg0, int arg1);

struct Struct_ov002_0216c2d8 {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_;
};

struct Struct_ov002_0216c2d8_2 {
    char unknown_0_[COUNT_IN_HIGH];
    unsigned char unknown_ccb_;
};

// USA: func_ov002_0216c2d8
extern "C" ARM void func_ov002_0216c2d8(char *arg0, signed char *arg1, struct Struct_ov002_0216c2d8 *arg2, struct Struct_ov002_0216c2d8 *arg3,
                                        int arg4) {
    struct Struct_ov002_0216c2d8 *var0 = (struct Struct_ov002_0216c2d8 *) (arg0 + ARRAY_A_OFFSET);
    struct Struct_ov002_0216c2d8 *var1 = (struct Struct_ov002_0216c2d8 *) (arg0 + ARRAY_B_OFFSET);
    int var2;
    for (var2 = 0; var2 < arg4; var2++) {
        for (int var3 = 0; var3 < ((struct Struct_ov002_0216c2d8_2 *) (arg0 + 0x1000))->unknown_ccb_; var3++) {
            if (*(signed char *) (arg0 + var3 + KEYS_OFFSET) == arg1[var2]) {
                var0[var3].unknown_2_ = arg2[var2].unknown_2_;
                var0[var3].unknown_0_ = arg2[var2].unknown_0_;
                var0[var3].unknown_4_ = 0;
                var1[var3].unknown_2_ = arg3[var2].unknown_2_;
                var1[var3].unknown_0_ = arg3[var2].unknown_0_;
                var1[var3].unknown_4_ = 0;
            }
        }
    }

    int var4 = 0;
    for (var2 = 0; var2 < ((struct Struct_ov002_0216c2d8_2 *) (arg0 + 0x1000))->unknown_ccb_; var2++) {
        var4 += var0[var2].unknown_4_;
    }
    if (var4 == 0) {
        func_ov002_0216c28c(arg0, 0x15);
    }
    if (var0[0].unknown_0_ != 3) {
        *(unsigned char *) (arg0 + FLAGS_OFFSET) = 0;
        *(unsigned char *) (arg0 + FLAGS_OFFSET + 1) = 0;
        memset(arg0 + FLAGS_OFFSET + 2, 0, 0xc);
        *(int *) (arg0 + FLAGS_OFFSET + 14) = 0;
    }
}
