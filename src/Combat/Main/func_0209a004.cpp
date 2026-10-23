#include <globaldefs.h>

struct Struct_02099fe8 {
    char unknown_0_[0x28];
    short unknown_28_;
    char unknown_2a_[2];
};

struct Struct_0209a004 {
    unsigned int unknown_0_0_ : 12;
    unsigned int : 19;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_0209a004_2 {
    struct Struct_0209a004 unknown_0_;
    struct Struct_02099fe8* unknown_4_;
};

extern "C" int func_02099fe8(struct Struct_02099fe8*);

// USA: func_0209a004
extern "C" ARM struct Struct_02099fe8* func_0209a004(void* arg0, int arg1) {
    struct Struct_0209a004_2* var0 = (struct Struct_0209a004_2*)arg0;
    struct Struct_02099fe8* var1;
    int var2, var3, var4, var5;
    struct Struct_02099fe8* var6 = var0->unknown_4_;
    if (var6 == NULL || (void*)func_02099fe8 == NULL) {
        var1 = NULL;
    } else {
        var5 = var0->unknown_0_.unknown_0_0_;
        if (var5 == 0) {
            var1 = NULL;
        } else {
            var3 = 0;
            var2 = var5 - 1;
            while (var3 <= var2) {
                var4 = var3 + ((var2 - var3 + 1) >> 1);
                var1 = &var6[var4];
                int var7 = func_02099fe8(var1);
                if (var7 == arg1) goto done;
                if (var7 > arg1) var2 = var4 - 1;
                else var3 = var4 + 1;
            }
            var1 = NULL;
        }
    }
done:
    return var1;
}
