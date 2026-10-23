#include <globaldefs.h>

struct Struct_ov031_02248ee0_3 { unsigned char unknown_0_[4]; };
struct Struct_ov031_0222e224 {
    int unknown_0_;
    void* unknown_4_;
    unsigned char unknown_8_[12];
};

extern Struct_ov031_02248ee0_3 data_ov031_02248ee0;
extern Struct_ov031_0222e224* data_ov031_02290c98;

extern "C" void func_ov031_022366d8(unsigned char* arg0, unsigned char* arg1);
extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" int func_ov031_0221b258(unsigned char* arg0);

// USA: func_ov031_0222e224
extern "C" ARM int func_ov031_0222e224(void) {
    Struct_ov031_02248ee0_3 var0 = data_ov031_02248ee0;
    int var1;
    unsigned char var2[4];
    unsigned char* var3;
    int var4;
    int var5;
    unsigned char* var6;
    int var7;
    Struct_ov031_0222e224* var8;

    var8 = data_ov031_02290c98;
    var7 = 0;
    var5 = 0;
    do {
        var3 = var8->unknown_8_ + var5;
        if (*var3 != ' ') {
            var4 = 0;
            var6 = var0.unknown_0_;
            do {
                if (var3[var4] > *var6) return 0;
                if (var3[var4] < *var6) break;
                var4++;
                var6++;
            } while (var4 < 3);
        }
        var7++;
        var5 += 3;
    } while (var7 < 4);

    func_ov031_022366d8(var8->unknown_8_, var2);

    func_ov031_02227520(&var1, NULL);
    if (var1 == 1) {
        int var9 = 0;
        unsigned char* var10 = var2;
        int var11 = 0;
        do {
            int var12 = 0;
            do {
                if (var9) {
                    if (*var10 & (1 << (7 - var12))) return 0;
                } else if (!(*var10 & (1 << (7 - var12)))) {
                    var9 = 1;
                }
                var12++;
            } while (var12 < 8);
            var11++;
            var10++;
        } while (var11 < 4);
        return 1;
    }

    return func_ov031_0221b258(var2) != 0;
}
