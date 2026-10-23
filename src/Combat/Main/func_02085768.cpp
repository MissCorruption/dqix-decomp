#include <globaldefs.h>

struct Struct_02085768 { unsigned int unknown_0_0_ : 1; };

// USA: func_02085768
extern "C" ARM int func_02085768(unsigned char* arg0) {
    if (*(short*)(arg0 + 0x2ac) <= 0) return 0;
    return ((struct Struct_02085768*)(arg0 + 0x2f8))->unknown_0_0_ != 0;
}
