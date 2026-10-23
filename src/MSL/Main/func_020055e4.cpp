#include <globaldefs.h>

extern const unsigned short data_020e69ac[128];
extern const unsigned char data_020e692c[128];

static inline int inline_020055e4(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x001);
}

static inline int inline_020055e4_2(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x008);
}

static inline int inline_020055e4_3(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? 0 : (int)(data_020e69ac[arg0] & 0x100);
}

static inline int inline_020055e4_4(int arg0) {
    return ((arg0 < 0) || (arg0 >= 128)) ? arg0 : (int)(data_020e692c[arg0]);
}

enum Enum_020055e4 {
    Enum_020055e4_1 = 0x01,
    Enum_020055e4_2 = 0x02,
    Enum_020055e4_4 = 0x04,
    Enum_020055e4_8 = 0x08,
    Enum_020055e4_16 = 0x10,
    Enum_020055e4_32 = 0x20,
    Enum_020055e4_64 = 0x40
};

typedef int (*Type_020055e4)(void* arg, int c, int action);

// USA: func_020055e4
extern "C" ARM unsigned long func_020055e4(int arg0, int arg1, Type_020055e4 arg2, void* arg3,
                                           int* arg4, int* arg5, int* arg6) {
    int var0 = Enum_020055e4_1;
    int var1 = 0;
    int var2 = 0;
    unsigned long var3 = 0;
    unsigned long var4 = 0;
    int var5;

    *arg5 = *arg6 = 0;

    if (arg0 < 0 || arg0 == 1 || arg0 > 36 || arg1 < 1)
        var0 = Enum_020055e4_64;
    else
        var5 = (var1++, arg2(arg3, 0, 0));

    if (arg0)
        var4 = 0xffffffff / arg0;

    while (var1 <= arg1 && var5 != -1 && !(var0 & (Enum_020055e4_32 | Enum_020055e4_64))) {
        switch (var0) {
            case Enum_020055e4_1:
                if (inline_020055e4_3(var5)) {
                    var5 = (var1++, arg2(arg3, 0, 0));
                    var1--;
                    var2++;
                    break;
                }

                if (var5 == '+')
                    var5 = (var1++, arg2(arg3, 0, 0));
                else if (var5 == '-') {
                    var5 = (var1++, arg2(arg3, 0, 0));
                    *arg5 = 1;
                }

                var0 = Enum_020055e4_2;
                break;

            case Enum_020055e4_2:
                if (arg0 == 0 || arg0 == 16) {
                    if (var5 == '0') {
                        var0 = Enum_020055e4_4;
                        var5 = (var1++, arg2(arg3, 0, 0));
                        break;
                    }
                }

                var0 = Enum_020055e4_8;
                break;

            case Enum_020055e4_4:
                if (var5 == 'X' || var5 == 'x') {
                    arg0 = 16;
                    var0 = Enum_020055e4_8;
                    var5 = (var1++, arg2(arg3, 0, 0));
                    break;
                }

                if (arg0 == 0)
                    arg0 = 8;

                var0 = Enum_020055e4_16;
                break;

            case Enum_020055e4_8:
            case Enum_020055e4_16:
                if (arg0 == 0)
                    arg0 = 10;

                if (!var4)
                    var4 = 0xffffffff / arg0;

                if (inline_020055e4_2(var5)) {
                    if ((var5 -= '0') >= arg0) {
                        if (var0 == Enum_020055e4_16)
                            var0 = Enum_020055e4_32;
                        else
                            var0 = Enum_020055e4_64;

                        var5 += '0';
                        break;
                    }
                } else if (!inline_020055e4(var5) || (inline_020055e4_4(var5) - 'A' + 10) >= arg0) {
                    if (var0 == Enum_020055e4_16)
                        var0 = Enum_020055e4_32;
                    else
                        var0 = Enum_020055e4_64;

                    break;
                } else
                    var5 = inline_020055e4_4(var5) - 'A' + 10;

                if (var3 > var4)
                    *arg6 = 1;

                var3 *= arg0;

                if (var5 > (0xffffffff - var3))
                    *arg6 = 1;

                var3 += var5;

                var0 = Enum_020055e4_16;

                var5 = (var1++, arg2(arg3, 0, 0));
                break;
        }
    }

    if (!(var0 & (Enum_020055e4_4 | Enum_020055e4_16 | Enum_020055e4_32))) {
        var1 = 0;
        var3 = 0;
        *arg4 = 0;
    } else {
        var1--;
        *arg4 = var1 + var2;
    }

    arg2(arg3, var5, 1);

    return var3;
}
