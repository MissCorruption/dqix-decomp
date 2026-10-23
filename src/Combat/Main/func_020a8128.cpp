#include <globaldefs.h>

struct Struct_020a7f88;
extern "C" void func_020a810c(struct Struct_020a7f88*);

// USA: func_020a8128
extern "C" ARM void func_020a8128(unsigned char* arg0) {
    arg0[0] = 0;
    arg0[1] = 0xff;
    arg0[2] = 0;
    *(int*)(arg0 + 4) = 0;
    *(short*)(arg0 + 0x18) = 0;
    func_020a810c((struct Struct_020a7f88*)(arg0 + 8));
    *(short*)(arg0 + 0x1a) = 0;
    *(short*)(arg0 + 0x1c) = 0;
    *(int*)(arg0 + 0x20) = 0;
    *(int*)(arg0 + 0x24) = 0;
    *(int*)(arg0 + 0x28) = 0;
}
