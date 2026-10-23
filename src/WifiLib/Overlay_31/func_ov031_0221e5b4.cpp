#include <globaldefs.h>


extern "C" ARM int func_ov031_022071d8(int arg0, int arg1);

// USA: func_ov031_0221e5b4
extern "C" THUMB int func_ov031_0221e5b4(int arg0, int arg1) {
    return func_ov031_022071d8(arg0, arg1);
}
