#include <globaldefs.h>

struct Struct_0200e984_2 {
    unsigned int unknown_0_;
    unsigned char* unknown_4_;
};

// USA: func_0200eff0
extern "C" ARM int func_0200eff0(const unsigned char* arg0, const unsigned char* arg1, Struct_0200e984_2* arg2) {
    const unsigned char* var0 = arg1;
    arg2->unknown_0_ = 0;
    if (!arg1) return 1;
    if (*var0 == 'P') {
        ++var0;
        if (*var0 == 'V') ++var0;
        if (*var0 == 'K') ++var0;
        if (*var0 == 'v' && (*arg0 == 'P' || *arg0 == '*')) return 1;
        var0 = arg1;
    }
    if (*arg0 == '!' || *arg0 == '*') {
        if (*arg0++ != *var0++) return 0;
        for (;;) {
            for (;;) {
                unsigned int var1 = *arg0;
                if (var1 != *var0++) break;
                ++arg0;
                if (var1 == '!') {
                    unsigned int var2 = 0;
                    if (*arg0 != '!') {
                        do {
                            var2 = var2 * 10 + *arg0++ - '0';
                        } while (*arg0 != '!');
                    }
                    arg2->unknown_0_ = var2;
                    return 1;
                }
            }
            while (*arg0++ != '!') {}
            while (*arg0++ != '!') {}
            if (!*arg0) return 0;
            var0 = arg1 + 1;
        }
    }
    while ((*arg0 == 'P' || *arg0 == 'R') && *arg0 == *var0) {
        ++var0;
        ++arg0;
        if (*var0 == 'K') {
            if (*arg0 == 'K') ++arg0;
            ++var0;
        }
        if (*arg0 == 'K') return 0;
        const unsigned char* var3 = arg0;
        if (*var0 == 'V') {
            if (*var3 == 'V') ++var3;
            ++var0;
        }
        if (*var3 == 'V') return 0;
        arg0 = var3;
    }
    if (*arg0 == *var0) do {
        if (!*arg0) return 1;
    } while (*++arg0 == *++var0);
    return 0;
}
