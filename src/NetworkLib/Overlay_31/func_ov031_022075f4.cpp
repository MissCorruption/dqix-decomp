#include <globaldefs.h>

struct Struct_ov031_0224e234 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* (*unknown_c_)(void*, unsigned int);
};

extern Struct_ov031_0224e234 data_ov031_0224e234;

// USA: func_ov031_022075f4
extern "C" ARM void* func_ov031_022075f4(unsigned int arg0) {
    unsigned int var0 = arg0 + 4;
    void* var1 = data_ov031_0224e234.unknown_c_(0, var0);
    if (var1 != NULL) {
        *(unsigned int*)var1 = var0;
        var1 = (char*)var1 + 4;
    }
    return var1;
}
