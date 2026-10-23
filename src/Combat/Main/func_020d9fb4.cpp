#include <globaldefs.h>

struct Struct_02061c04_16 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned short unknown_8_; };

// USA: func_020d9fb4
extern "C" ARM void func_020d9fb4(struct Struct_02061c04_16* arg0, int arg1) {
    arg0->unknown_8_ |= 1 << arg1;
}
