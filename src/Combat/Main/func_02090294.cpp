#include <globaldefs.h>

struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
struct Struct_02028bac;
extern "C" struct Struct_02028bac* func_02028bac(struct Struct_02028bac* arg0, int arg1);

struct Struct_02090294 {
#if defined(jpn)
    char unknown_0_[0x296];
#else
    char unknown1_0_[0x276];
#endif
    signed char unknown_276_;
};

// USA: func_02090294
extern "C" ARM int func_02090294(struct Struct_02090294* arg0) {
    struct Struct_02028bac* var0 = (struct Struct_02028bac*)func_02027ca4();
    int var1 = 0;
    int var2;
retry:
    if (arg0->unknown_276_ > 4) {
        arg0->unknown_276_ = 0;
    }
    for (var2 = var1; var2 < 4; var2++) {
        struct Struct_02028bac* var3 = func_02028bac(var0, var2);
        if (var3 != 0) {
            if (*((signed char*)var3 + 0xd) == arg0->unknown_276_) {
                arg0->unknown_276_++;
                goto retry;
            }
        }
    }
    int var4;
    for (var4 = 0; var4 < 4; var4++) {
        func_02028bac(var0, var4);
    }
    signed char var5 = arg0->unknown_276_;
    arg0->unknown_276_ = var5 + 1;
    return var5;
}
