#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ccea4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_0_ : 3;
    unsigned char unknown_4_3_ : 4;
    unsigned char unknown_4_7_ : 1;
    unsigned char unknown_5_[15];
};

// USA: func_ov017_021ccea4
extern "C" ARM void func_ov017_021ccea4(int arg0, unsigned char* arg1, int arg2) {
    void* var0 = func_0202ae24();
    Struct_ov017_021ccea4 var1;
    var1.unknown_0_ = 0xf;
    var1.unknown_4_0_ = arg0;
    int var2 = 0;
    int var3 = 0;
    while (var2 < arg2) {
        int var4;
        for (var4 = 0; var4 < 15; var4++) {
            if (arg2 <= var2 + var4) break;
            var1.unknown_5_[var4] = arg1[var3 * 15 + var4];
        }
        var1.unknown_4_3_ = var4;
        func_0205e330(var0, &var1, 0);
        var2 += var1.unknown_4_3_;
        var3++;
    }
}
