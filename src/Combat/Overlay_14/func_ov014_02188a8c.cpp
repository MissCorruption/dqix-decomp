#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02097418;
extern "C" ARM void* func_02097418(struct Struct_02097418* arg0);

struct Struct_02097420;
extern "C" ARM int func_02097420(struct Struct_02097420* arg0);

struct Struct_ov014_02188a8c {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[5];
    unsigned char unknown_13_0_:1;
    unsigned char unknown_13_1_:1;
    unsigned char unknown_13_2_:6;
    char unknown_14_[6];
    short unknown_1a_;
    char unknown_1c_[4];
};

// USA: func_ov014_02188a8c
extern "C" ARM void func_ov014_02188a8c(void* arg0, short arg1) {
    Struct_ov014_02188a8c* var0 = (Struct_ov014_02188a8c*)func_02097418((struct Struct_02097418*)((char*)arg0 + 0xa4));
    if (!var0) {
        return;
    }
    int var1 = func_02097420((struct Struct_02097420*)((char*)arg0 + 0xa4));
    if (!var1) {
        return;
    }
    memset((char*)arg0 + 0x182, 0, 0x10);
    int var2 = 0;
    while (var2 < var1) {
        if (var0) {
            if (var0->unknown_13_1_) {
                if (var0->unknown_1a_ == arg1) {
                    *(short*)((char*)arg0 + 0x182) = var0->unknown_c_;
                    return;
                }
            }
        }
        var2++;
        var0 = (Struct_ov014_02188a8c*)((char*)var0 + 0x20);
    }
}
