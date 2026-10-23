#include <globaldefs.h>

struct Struct_0204c87c;
extern "C" void func_0204e998(struct Struct_0204c87c* arg0);
extern "C" void func_02050100(void* arg0, int arg1);

// USA: func_0204c87c
extern "C" ARM void func_0204c87c(unsigned char* arg0) {
    if (!(arg0[0xc5] & 1)) return;
    int var0 = *(int*)(arg0 + 0x9c);
    switch (var0) {
        case 0:
        case 3:
        default:
            break;
        case 1:
            *(short*)(arg0 + 0xc0) = *(short*)(arg0 + 0xaa);
            *(int*)(arg0 + 0x9c) = *(int*)(arg0 + 0x9c) + 1;
            func_0204e998((struct Struct_0204c87c*)arg0);
            break;
        case 2:
            func_0204e998((struct Struct_0204c87c*)arg0);
            break;
        case 4:
            *(int*)(arg0 + 0x9c) = 3;
            break;
    }
    func_02050100(arg0, 1);
}
