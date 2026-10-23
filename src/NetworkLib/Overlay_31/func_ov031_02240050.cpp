#include <globaldefs.h>

struct Struct_ov031_0223ede0_2 {
    int unknown_0_;
    char unknown_4_[0x30];
};

extern "C" {
    int func_ov031_0223fe20(void*, void*, const char*, int);
}

// USA: func_ov031_02240050
extern "C" ARM int func_ov031_02240050(Struct_ov031_0223ede0_2* arg0, int arg1, int arg2) {
    if (arg0->unknown_0_ != 0) {
        return 0;
    }
    return func_ov031_0223fe20((char*)arg0 + 0x34, (void*)arg1, (const char*)arg2, 0x18);
}
