#include <globaldefs.h>

union Struct_020026b4 {
    struct {
        char unknown1_0_;
        char unknown_1_;
        short unknown_2_;
        unsigned char unknown_4_;
        unsigned char unknown_5_[32];
    };
    unsigned short unknown_0_[19];
};

extern "C" double func_02008da4(double arg0, double arg1);
extern "C" double func_020091d8(double arg0, int arg1);
extern "C" double func_020095a4(double arg0, double arg1);
extern "C" void func_020098fc(Struct_020026b4* arg0, const char* arg1, short arg2);
extern "C" int func_02009d1c(const Struct_020026b4* arg0, const Struct_020026b4* arg1);
extern "C" int func_02009dfc(const Struct_020026b4* arg0, const Struct_020026b4* arg1);
extern "C" void func_02009edc(Struct_020026b4* arg0, const Struct_020026b4* arg1, const Struct_020026b4* arg2);
extern "C" void func_0200a180(Struct_020026b4* arg0, double arg1);
extern "C" int func_0200aa74(double arg0);

extern float data_020eecc4;
extern double data_020eef34[];
extern const char data_020ef048[];

// USA: func_0200a3a8
extern "C" ARM double func_0200a3a8(const Struct_020026b4* arg0) {
    if (arg0->unknown_4_ <= 0) {
        return func_02008da4(0.0, arg0->unknown1_0_ == 0 ? 1.0 : -1.0);
    }

    switch (arg0->unknown_5_[0]) {
        case '0':
            return func_02008da4(0.0, arg0->unknown1_0_ == 0 ? 1.0 : -1.0);
        case 'I':
            return func_02008da4(data_020eecc4, arg0->unknown1_0_ == 0 ? 1.0 : -1.0);
        case 'N': {
            double var0;
            unsigned long long* var1 = (unsigned long long*)&var0;

            *var1 = 0x7FF0000000000000ULL;
            if (arg0->unknown1_0_) {
                *var1 |= 0x8000000000000000ULL;
            }
            *var1 |= 0x0008000000000000ULL;
            return var0;
        }
    }

    {
        Struct_020026b4 var2 = *arg0;
        unsigned char* var3 = var2.unknown_5_;
        unsigned char* var4 = var3 + var2.unknown_4_;
        double var5;
        int var6;

        for (; var3 < var4; ++var3) {
            *var3 -= '0';
        }

        var2.unknown_2_ += var2.unknown_4_ - 1;
        var6 = var2.unknown_2_;

        {
            Struct_020026b4 var7;
            func_020098fc(&var7, data_020ef048, 308);
            if (func_02009dfc(&var7, &var2)) {
                return func_02008da4(data_020eecc4, arg0->unknown1_0_ == 0 ? 1.0 : -1.0);
            }
        }

        var3 = var2.unknown_5_;
        var5 = *var3++;

        while (var3 < var4) {
            unsigned long var8 = 0;
            int var9;
            double var10, var11;
            int var12 = (var4 - var3) % 8;

            if (var12 == 0) {
                var12 = 8;
            }

            for (var9 = 0; var9 < var12; ++var9, ++var3) {
                var8 = var8 * 10 + *var3;
            }

            var10 = var5 * data_020eef34[var12 - 1];
            var11 = var10 + var8;
            if (var8 != 0 && var10 == var11) {
                break;
            }
            var5 = var11;
            var6 -= var12;
        }

        if (var6 < 0) {
            var5 /= func_020095a4(5.0, -var6);
        } else {
            var5 *= func_020095a4(5.0, var6);
        }

        var5 = func_020091d8(var5, var6);

        if (func_0200aa74(var5) == 2) {
            var5 = 1.7976931348623157e+308;
        }

        {
            Struct_020026b4 var13, var14, var15, var16;
            double var17;
            unsigned long long* var18 = (unsigned long long*)&var17;
            int var19 = 0;

            func_0200a180(&var13, var5);

            if (func_02009d1c(&var13, &var2)) {
                goto done;
            }

            if (func_02009dfc(&var13, &var2)) {
                var19 = 1;
            }

            var17 = var5;

            while (1) {
                if (var19) {
                    ++*var18;
                    if (func_0200aa74(var17) == 2) {
                        goto done;
                    }
                } else {
                    --*var18;
                }

                func_0200a180(&var14, var17);

                if (var19 && !func_02009dfc(&var14, &var2)) {
                    break;
                } else if (!var19 && !func_02009dfc(&var2, &var14)) {
                    var15 = var13;
                    var13 = var14;
                    var14 = var15;
                    {
                        double var20 = var5;
                        var5 = var17;
                        var17 = var20;
                    }
                    break;
                }

                var13 = var14;
                var5 = var17;
            }

            func_02009edc(&var15, &var2, &var13);
            func_02009edc(&var16, &var14, &var2);

            if (func_02009d1c(&var15, &var16)) {
                if (*(unsigned long long*)&var5 & 1) {
                    var5 = var17;
                }
            } else if (!func_02009dfc(&var15, &var16)) {
                var5 = var17;
            }
        }

    done:
        if (var2.unknown1_0_) {
            var5 = -var5;
        }

        return var5;
    }
}
