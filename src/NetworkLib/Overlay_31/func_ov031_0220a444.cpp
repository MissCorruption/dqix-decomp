#include <globaldefs.h>

extern "C" int func_ov031_02209b58(int);

// USA: func_ov031_0220a444
extern "C" ARM int func_ov031_0220a444(int arg0) {
    if (func_ov031_02209b58(arg0) != 7) return 1;
    if (func_ov031_02209b58(arg0) != 6) return 1;
    return 0;
}
