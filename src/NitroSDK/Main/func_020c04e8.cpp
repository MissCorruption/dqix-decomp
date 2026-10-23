#include <globaldefs.h>

#define ROTATE_LEFT(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

#define F(x, y, z) (((x) & (y)) | (~(x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & ~(z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | ~(z)))

#define STEP(f, a, b, c, d, w, s) { unsigned long xv = (w); unsigned long sum = a + f(b, c, d) + xv + *var6++; a = b + ROTATE_LEFT(sum, s); }

struct Struct_020c04e8 {
    unsigned long unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned long long unknown_10_;
    union {
        unsigned long unknown_18_[16];
        unsigned char unknown1_18_[64];
    };
};

extern unsigned long data_020f2050[64];
extern int data_020f1f90[48];

// USA: func_020c04e8
extern "C" ARM void func_020c04e8(Struct_020c04e8* arg0) {
    const int* var0;
    unsigned long var1;
    unsigned long var2;
    unsigned long var3;
    unsigned long var4;
    unsigned long* var5;
    const unsigned long* var6;
    const unsigned long* var7;
    int var8;
    int var9;
    int var10;
    int var11;

    var1 = arg0->unknown_0_;
    var2 = arg0->unknown_4_;
    var3 = arg0->unknown_8_;
    var4 = arg0->unknown_c_;
    var5 = arg0->unknown_18_;
    var6 = data_020f2050;

    var7 = var5;
    var8 = 0;
    do {
        STEP(F, var1, var2, var3, var4, *var7++, 7);
        STEP(F, var4, var1, var2, var3, *var7++, 12);
        STEP(F, var3, var4, var1, var2, *var7++, 17);
        STEP(F, var2, var3, var4, var1, *var7++, 22);
        var8++;
    } while (var8 < 4);

    var0 = data_020f1f90;
    var9 = 0;
    do {
        STEP(G, var1, var2, var3, var4, var5[*var0++], 5);
        STEP(G, var4, var1, var2, var3, var5[*var0++], 9);
        STEP(G, var3, var4, var1, var2, var5[*var0++], 14);
        STEP(G, var2, var3, var4, var1, var5[*var0++], 20);
        var9++;
    } while (var9 < 4);

    var10 = 0;
    do {
        STEP(H, var1, var2, var3, var4, var5[*var0++], 4);
        STEP(H, var4, var1, var2, var3, var5[*var0++], 11);
        STEP(H, var3, var4, var1, var2, var5[*var0++], 16);
        STEP(H, var2, var3, var4, var1, var5[*var0++], 23);
        var10++;
    } while (var10 < 4);

    var11 = 0;
    do {
        STEP(I, var1, var2, var3, var4, var5[*var0++], 6);
        STEP(I, var4, var1, var2, var3, var5[*var0++], 10);
        STEP(I, var3, var4, var1, var2, var5[*var0++], 15);
        STEP(I, var2, var3, var4, var1, var5[*var0++], 21);
        var11++;
    } while (var11 < 4);
    arg0->unknown_0_ += var1;
    arg0->unknown_4_ += var2;
    arg0->unknown_8_ += var3;
    arg0->unknown_c_ += var4;
}
