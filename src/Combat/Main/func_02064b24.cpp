#include <globaldefs.h>

struct Struct_02064b24_2 {
    unsigned short unknown_0_;
    char unknown_2_[0x12];
    struct Struct_02064b24_2* unknown_14_;
};

struct Struct_02064b24 { char unknown_0_[0xc]; void* unknown_c_; };

extern "C" struct Struct_02064b24* func_02064490(void*, int, void*);
extern "C" int func_02061c04(void*, struct Struct_02064b24_2*, void*);

// USA: func_02064b24
extern "C" ARM int func_02064b24(void* arg0, int arg1, unsigned short arg2, void* arg3) {
    struct Struct_02064b24* var0 = func_02064490(arg0, arg1, arg3);
    if (var0 == NULL) return 0;
    *(int*)((char*)arg3 + 0x30) = 0;
    struct Struct_02064b24_2* var1 = (struct Struct_02064b24_2*)var0->unknown_c_;
    for (; var1 != NULL; var1 = var1->unknown_14_) {
        if (var1 != NULL && var1->unknown_0_ == arg2) {
            if (func_02061c04(arg0, var1, arg3) == 0) return 0;
        }
    }
    return 1;
}
