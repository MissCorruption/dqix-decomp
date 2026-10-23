#include <globaldefs.h>

struct Struct_ov031_02249ad4 {
    signed char* unknown_0_;
    int unknown_4_;
    signed char* unknown_8_;
};

struct Struct_ov031_02246083 {
    unsigned char unknown_0_[0x18];
};

extern "C" void func_ov031_02215b64(void* arg0, unsigned char* arg1, int arg2, int arg3);

extern Struct_ov031_02246083 data_ov031_02246083;
extern Struct_ov031_02249ad4 data_ov031_02249ad4;

// USA: func_ov031_022157f8
extern "C" ARM void func_ov031_022157f8(void* arg0, unsigned char* arg1) {
    Struct_ov031_02246083 var0 = data_ov031_02246083;

    func_ov031_02215b64(arg0, arg1, 0x20, 0x18);

    for (int var1 = 0; var1 < 0x18; var1++) {
        arg1[var1] ^= data_ov031_02249ad4.unknown_8_[var1];
    }

    {
        unsigned char var2 = 0;
        unsigned char var3 = 0;
        unsigned char var4 = 0;
        int var5 = 0;
        do {
            var2 = (unsigned char)var5;
            var3 = var2;
            var4 = arg1[var5];
            if (var0.unknown_0_[var2] != 0xff) {
                do {
                    unsigned char var6 = var0.unknown_0_[var3];
                    unsigned char var7 = arg1[var6];
                    arg1[var0.unknown_0_[var2]] = var4;
                    var0.unknown_0_[var3] = 0xff;
                    var2 = var6;
                    var3 = var6;
                    var4 = var7;
                } while (var0.unknown_0_[var3] != 0xff);
            }
            var5++;
        } while (var5 < 0x18);
    }

    for (int var8 = 0; var8 < 0x18; var8++) {
        arg1[var8] ^= data_ov031_02249ad4.unknown_0_[var8];
    }
}
