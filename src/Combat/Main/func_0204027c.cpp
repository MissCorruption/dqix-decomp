#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204027c_3 {
    char unknown_0_[0x38];
    int unknown_38_;
};

struct Struct_0204027c {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    struct Struct_0204027c_3* unknown_8_;
};

struct Struct_0204027c_2;
extern "C" int func_02040404(struct Struct_0204027c_2* arg0, const char* arg1);
extern "C" void func_0203fce0(void* arg0, char* arg1, int arg2);
extern "C" void func_0203fd5c(void* arg0, void* arg1, int arg2, void* arg3);

// USA: func_0204027c
extern "C" ARM int func_0204027c(struct Struct_0204027c* arg0, const char* arg1, int arg2, void* arg3) {
    int var0;
    unsigned int var1;
    unsigned char var2;
    if (arg0->unknown_8_ == NULL) {
        return -1;
    }
    var2 = arg0->unknown_5_;
    var0 = -1;
    if (var2 == 0) {
        var0 = func_02040404((struct Struct_0204027c_2*)arg0, arg1);
    }
    if (var0 > -1) {
        arg0->unknown_8_[var0].unknown_38_++;
        return var0;
    }
    for (var1 = 0; var1 < arg0->unknown_0_; var1++) {
        if (arg0->unknown_8_[var1].unknown_38_ < 0) {
            var0 = var1;
            break;
        }
    }
    if (var0 < 0) {
        return -1;
    }
    if (arg3 != NULL) {
        func_0203fd5c((char*)&arg0->unknown_8_[var0] + 0x10, (void*)arg1, arg2, arg3);
    } else {
        func_0203fce0((char*)&arg0->unknown_8_[var0] + 0x10, (char*)arg1, arg2);
    }
    arg0->unknown_8_[var0].unknown_38_ = 0;
    strcpy((char*)&arg0->unknown_8_[var0], arg1);
    arg0->unknown_4_++;
    return var0;
}
