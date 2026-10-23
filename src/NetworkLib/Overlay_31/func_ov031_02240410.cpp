#include <globaldefs.h>

struct Struct_ov031_02240410 {
    Struct_ov031_02240410* unknown_0_;
};

// USA: func_ov031_02240410
extern "C" ARM void func_ov031_02240410(char* arg0, int arg1, Struct_ov031_02240410** arg2, int* arg3) {
    if (arg1 < 0x400) {
        *arg2 = NULL;
        *arg3 = arg1;
        return;
    }
    int var0 = (arg1 - 0x400) >> 9;
    int var1 = var0 - 1;
    Struct_ov031_02240410* var2 = *(Struct_ov031_02240410**)(arg0 + 0x1c);
    if (var0 != 0) {
        do {
            var2 = var2->unknown_0_;
        } while (var1-- != 0);
    }
    *arg2 = var2;
    *arg3 = (arg1 - 0x400) & 0x1ff;
}
