#include <globaldefs.h>


struct Struct_020c08ec {
    unsigned int unknown_0_[5];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    int unknown_1c_;
    unsigned char unknown_20_[0x40];
};

typedef void (*Type_0200fd14)(Struct_020c08ec*, const void*, unsigned int);
extern Type_0200fd14 data_020f2154;

extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);

// USA: func_020c0a40
extern "C" ARM void func_020c0a40(Struct_020c08ec* arg0, unsigned char* arg1) {
    unsigned int* var0 = (unsigned int*)arg0->unknown_20_;
    int var1 = arg0->unknown_1c_ >> 2;
    int var2 = arg0->unknown_1c_;
    if ((var2 & 3) == 0) {
        var0[var1] = 0;
    }

    unsigned char* var3 = arg0->unknown_20_;
    var3[var2] = 0x80;
    var2 += 1;
    if (var2 & 3) {
        do {
            var3[var2] = 0;
            var2 += 1;
        } while (var2 & 3);
    }
    var1 += 1;

    if (arg0->unknown_1c_ >= 0x38) {
        if (var1 < 0x10) {
            do {
                var0[var1] = 0;
                var1 += 1;
            } while (var1 < 0x10);
        }
        data_020f2154(arg0, var0, 0x40);
        var1 = 0;
    }
    if (var1 < 0xe) {
        do {
            var0[var1] = 0;
            var1 += 1;
        } while (var1 < 0xe);
    }

    unsigned int var4 = arg0->unknown_14_;
    var3[0x3f] = (unsigned char)var4;
    var3[0x3e] = (unsigned char)(var4 >> 8);
    var3[0x3d] = (unsigned char)(var4 >> 16);
    var3[0x3c] = (unsigned char)(var4 >> 24);

    unsigned int var5 = arg0->unknown_18_;
    var3[0x3b] = (unsigned char)var5;
    var3[0x3a] = (unsigned char)(var5 >> 8);
    var3[0x39] = (unsigned char)(var5 >> 16);
    var3[0x38] = (unsigned char)(var5 >> 24);

    data_020f2154(arg0, var0, 0x40);

    unsigned int var6;
    var6 = arg0->unknown_0_[0];
    arg1[0] = (unsigned char)(var6 >> 24);
    arg1[1] = (unsigned char)(var6 >> 16);
    arg1[2] = (unsigned char)(var6 >> 8);
    arg1[3] = (unsigned char)var6;

    var6 = arg0->unknown_0_[1];
    arg1[4] = (unsigned char)(var6 >> 24);
    arg1[5] = (unsigned char)(var6 >> 16);
    arg1[6] = (unsigned char)(var6 >> 8);
    arg1[7] = (unsigned char)var6;

    var6 = arg0->unknown_0_[2];
    arg1[8] = (unsigned char)(var6 >> 24);
    arg1[9] = (unsigned char)(var6 >> 16);
    arg1[10] = (unsigned char)(var6 >> 8);
    arg1[11] = (unsigned char)var6;

    var6 = arg0->unknown_0_[3];
    arg1[12] = (unsigned char)(var6 >> 24);
    arg1[13] = (unsigned char)(var6 >> 16);
    arg1[14] = (unsigned char)(var6 >> 8);
    arg1[15] = (unsigned char)var6;

    var6 = arg0->unknown_0_[4];
    arg1[16] = (unsigned char)(var6 >> 24);
    arg1[17] = (unsigned char)(var6 >> 16);
    arg1[18] = (unsigned char)(var6 >> 8);
    arg1[19] = (unsigned char)var6;

    arg0->unknown_1c_ = 0;
    func_020ca3ec(0, &arg0, sizeof(arg0));
}
