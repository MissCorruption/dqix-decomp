#include <globaldefs.h>

// USA: func_ov024_021eb4b0
extern "C" ARM int func_ov024_021eb4b0(int arg0, int arg1, int arg2) {
    if (arg1 & 0x8) return 0;
    if (arg1 & 0x10) return 0;
    if (arg1 & 0x80000) return 0;
    return (arg1 & arg2) == 0;
}
