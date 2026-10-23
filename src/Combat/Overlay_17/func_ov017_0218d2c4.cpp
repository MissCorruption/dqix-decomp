#include <globaldefs.h>

extern signed char data_ov017_021d616c[];

// USA: func_ov017_0218d2c4
extern "C" ARM int func_ov017_0218d2c4(int arg0) {
    if (arg0 < 1 || arg0 > 0x13) return 0;
    return data_ov017_021d616c[arg0 - 1];
}
