#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02160678_804 = 0x20c };
enum { Enum_ov003_02160678_1128 = 0x290 };
enum { Enum_ov003_02160678_808 = 0x210 };
#else
enum { Enum_ov003_02160678_804 = 0x324 };
enum { Enum_ov003_02160678_1128 = 0x468 };
enum { Enum_ov003_02160678_808 = 0x328 };
#endif

struct Struct_0207fdcc_2;
extern "C" int func_020811d0(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_020809c4(void* arg0, int arg1, int arg2, short* arg3, short* arg4);
extern "C" void func_ov003_021604f4(char* arg0, int arg1, int arg2, short arg3, unsigned char arg4);

extern const short data_ov003_0217f400[];
extern const short data_ov003_0217f41a[];

struct Struct_ov003_02160678 {
    char unknown_0_[Enum_ov003_02160678_804];
    struct Struct_0207fdcc_2* unknown_324_;
    char unknown_328_[Enum_ov003_02160678_1128 - Enum_ov003_02160678_808];
    unsigned char unknown_468_[4];
};

// USA: func_ov003_02160678
extern "C" ARM void func_ov003_02160678(struct Struct_ov003_02160678* arg0) {
    struct Struct_0207fdcc_2* var0 = arg0->unknown_324_;
    if (var0 == NULL) {
        return;
    }
    long var1 = 0;
    int var2 = 0;
    while (data_ov003_0217f41a[var1] >= 0) {
        if (func_020811d0(var0, data_ov003_0217f41a[var1])) {
            var2 = 1;
            break;
        }
        var1 = (short)(var1 + 1);
    }
    if (!var2) {
        return;
    }
    short var3 = data_ov003_0217f400[var1];
    unsigned char var4 = 3;
    for (unsigned char var5 = 0; var5 < 4; var5++) {
        if (arg0->unknown_468_[var5] != 0) {
            short var6;
            short var7;
            func_020809c4(var0, data_ov003_0217f41a[var1], var3, &var6, &var7);
            func_ov003_021604f4((char*)arg0, (short)(var6 + 0x38), (short)(var7 - 2), arg0->unknown_468_[var5] + 8, var4++);
        }
        var3++;
    }
}
