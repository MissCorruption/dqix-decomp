#include <globaldefs.h>

struct Struct_02064490_3 {
    char unknown_0_[0xc];
    struct Struct_02064490_3* unknown_c_;
};

struct Struct_02064490 {
    char unknown_0_[6];
    unsigned char unknown_6_;
    char unknown_7_;
    struct Struct_02064490_3* unknown_8_;
    char unknown_c_[4];
    struct Struct_02064490* unknown_10_;
    struct Struct_02064490* unknown_14_;
};

struct Struct_02064490_2 {
    char unknown_0_[0x47c];
    struct Struct_02064490* unknown_47c_;
    char unknown_480_[0x492 - 0x480];
    unsigned char unknown_492_;
};

extern "C" int func_0205faf4(void*, struct Struct_02064490_3*, void*);

// USA: func_02064490
extern "C" ARM struct Struct_02064490* func_02064490(struct Struct_02064490_2* arg0, int arg1, void* arg2) {
    struct Struct_02064490* var0;
    for (var0 = arg0->unknown_47c_; var0 != NULL; var0 = var0->unknown_14_) {
        if (var0->unknown_6_ == arg1) break;
    }
    if (var0 == NULL) return NULL;
    arg0->unknown_492_ = 0;
    int var1 = 1;
    struct Struct_02064490_3* var2;
    for (; var0 != NULL; var0 = var0->unknown_10_) {
        for (var2 = var0->unknown_8_; var2 != NULL; var2 = var2->unknown_c_) {
            if (func_0205faf4(arg0, var2, arg2) == 0) {
                var1 = 0;
                break;
            }
            var1 = 1;
        }
        if (var1) return var0;
    }
    return NULL;
}
