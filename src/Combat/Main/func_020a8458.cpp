#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

struct Struct_020a8304_3 { unsigned char unknown_0_; unsigned char unknown_1_; char unknown_2_[0x2c - 2]; };
struct Struct_020a8304 {
    struct Struct_020a8304_3* unknown_0_;
    char unknown_4_[2];
    unsigned short unknown_6_;
};

// USA: func_020a8458
extern "C" ARM struct Struct_020a8304_3* func_020a8458(struct Struct_020a8304* arg0) {
    void* var0 = func_0205ec34();
    unsigned char var1 = 0xff;
    int var2 = 0;
    for (int var3 = 0; var3 < arg0->unknown_6_; var3++) {
        struct Struct_020a8304_3* var4 = (struct Struct_020a8304_3*)((char*)arg0->unknown_0_ + var3 * 0x2c);
        if (var4->unknown_1_ == 0xff) {
            if (var4->unknown_0_ < var1) {
                if (func_0206dfb0((int)var0, (unsigned char*)var0 + 0x8c, var4->unknown_0_ + 0x200)) {
                    var1 = var4->unknown_0_;
                    var2 = var3 & 0xff;
                }
            }
        }
    }
    return (var1 != 0xff) ? (struct Struct_020a8304_3*)((char*)arg0->unknown_0_ + var2 * 0x2c) : 0;
}
