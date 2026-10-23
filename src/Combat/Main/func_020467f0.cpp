#include <globaldefs.h>

struct Struct_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
};

// USA: func_020467f0
extern "C" ARM void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3) {
    int var0;
    if (arg0 == NULL) return NULL;
    var0 = 0;
    while (arg0->unknown_0_ != 0) {
        if (arg1 == var0) {
            int var1 = arg0->unknown_40_;
            if (arg3 != NULL) *arg3 = arg0->unknown_44_;
            *arg2 = arg0;
            return (char*)arg0 + var1;
        }
        arg0 = (struct Struct_02020aec*)((char*)arg0 + arg0->unknown_48_);
        var0++;
    }
    return NULL;
}
