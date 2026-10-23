#include <globaldefs.h>

typedef int (*Type_ov000_021820bc)(void*, int, int);
extern Type_ov000_021820bc data_ov000_0218409c[];

// USA: func_ov000_021820bc
extern "C" ARM int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3) {
    if (arg2 < 0 || (unsigned int)arg2 >= 0x3a) {
        return 0;
    }
    Type_ov000_021820bc var0 = data_ov000_0218409c[arg2];
    if (var0 == 0) {
        return 0;
    }
    return var0(arg0, arg1, arg3);
}
