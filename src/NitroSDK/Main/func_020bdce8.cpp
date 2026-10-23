#include <globaldefs.h>

struct Struct_020bdce8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    int unknown_4_;
};

struct Struct_020bdce8 {
    unsigned int unknown_0_;
    Struct_020bdce8_2 unknown_4_[1];
};

extern "C" Struct_020bdce8* func_020bd710(int arg0);
extern "C" int func_020bddec(int arg0, int arg1, int arg2, int arg3, int* arg4);
extern "C" int func_020bde70(int arg0, int arg1, int arg2, int arg3, int* arg4);
extern "C" int func_020bded0(int arg0, int arg1, int arg2, int arg3, int* arg4);
extern "C" int func_020be010(int, unsigned int, int, int, int*);

// USA: func_020bdce8
extern "C" ARM int func_020bdce8(int arg0, int arg1) {
    Struct_020bdce8* var0 = func_020bd710(arg0);
    if (var0 == 0) {
        return 1;
    }

    int* var1 = 0;
    int* var2 = 0;
    int* var3 = 0;
    int* var4 = 0;
    unsigned int var5 = 0;
    Struct_020bdce8_2* var6;

    if (var5 < var0->unknown_0_) {
        var6 = var0->unknown_4_;
        do {
            int var7;
            switch (var6->unknown_0_) {
            case 0:
                var7 = func_020bddec(var6->unknown_4_, var6->unknown_1_, arg1, 1, var1);
                if (var7 != 0) return var7;
                break;
            case 3:
                var7 = func_020bde70(var6->unknown_4_, var6->unknown_1_, arg1, 1, var2);
                if (var7 != 0) return var7;
                break;
            case 1:
                var7 = func_020bded0(var6->unknown_4_, var6->unknown_1_, arg1, 1, var3);
                if (var7 != 0) return var7;
                break;
            case 2:
                var7 = func_020be010(var6->unknown_4_, var6->unknown_1_, arg1, 1, var4);
                if (var7 != 0) return var7;
                break;
            }
            var6++;
            var5++;
        } while (var5 < var0->unknown_0_);
    }
    return 0;
}
