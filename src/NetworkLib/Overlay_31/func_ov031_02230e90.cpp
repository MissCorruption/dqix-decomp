#include <globaldefs.h>

extern "C" signed char func_ov031_02237e9c(void);
extern "C" void func_ov031_02236878(int arg0);
extern "C" void func_ov031_02237e58(void);
extern "C" void* func_ov031_02235060(int arg0);
extern "C" void func_ov031_022274c0(int arg0);

struct Struct_ov031_02290ca0_25 {
    unsigned char unknown_0_[8];
    unsigned char* unknown_8_;
};
extern struct Struct_ov031_02290ca0_25 data_ov031_02290ca0;

extern "C" void func_ov031_02230ed0(void);

// USA: func_ov031_02230e90
extern "C" ARM void func_ov031_02230e90(void) {
    if (func_ov031_02237e9c() != 0) {
        return;
    }
    func_ov031_02236878(6);
    func_ov031_02237e58();
    int var0 = *(int*)(data_ov031_02290ca0.unknown_8_ + 0xc);
    func_ov031_02235060(var0);
    func_ov031_022274c0((int)func_ov031_02230ed0);
}
