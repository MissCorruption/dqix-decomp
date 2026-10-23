#include <globaldefs.h>

struct Struct_020e12a8;
extern "C" void func_020e12a8(struct Struct_020e12a8* arg0, short arg1, short arg2, short arg3, short arg4);

struct Struct_020e2bd8;
extern "C" void func_020e2bd8(struct Struct_020e2bd8* arg0, int arg1, int arg2);

// USA: func_020e15f8
extern "C" ARM void func_020e15f8(char* arg0, int arg1, int arg2) {
    *(int*)(arg0 + 0) = 0;
    *(int*)(arg0 + 4) = 0;
    *(unsigned char*)(arg0 + 8) = 0;
    int var0;
    for (var0 = 0; var0 < 3; var0++) {
        func_020e12a8((struct Struct_020e12a8*)(arg0 + 0xa + var0 * 8), 0, 0, 0, 0);
    }
    *(short*)(arg0 + 0x22) = 0x7fff;
    *(short*)(arg0 + 0x24) = 0xf0a;
    func_020e2bd8((struct Struct_020e2bd8*)(arg0 + 0x28), arg1, arg2);
}
