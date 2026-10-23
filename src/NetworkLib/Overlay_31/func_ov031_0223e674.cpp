#include <globaldefs.h>

extern "C" int func_ov031_0223fb48(const char* arg0);
extern "C" void func_ov031_0223fb74(void* arg0, const void* arg1, unsigned int arg2);

struct Struct_ov031_02290da0 { unsigned char unknown_0_[0xc]; void* (*unknown_c_)(unsigned int, unsigned int); };
extern Struct_ov031_02290da0 data_ov031_02290da0;

// USA: func_ov031_0223e674
extern "C" ARM void* func_ov031_0223e674(const char* arg0) {
    int var0 = func_ov031_0223fb48(arg0);
    void* var1 = data_ov031_02290da0.unknown_c_(var0 + 1, 4);
    if (var1 != 0) {
        func_ov031_0223fb74(var1, arg0, var0);
        ((char*)var1)[var0] = 0;
    }
    return var1;
}
