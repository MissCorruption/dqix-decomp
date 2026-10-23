#include <globaldefs.h>

struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);
struct Struct_02074b64;
extern "C" void func_02074b64(struct Struct_02074b64* arg0);

// USA: func_ov003_0215376c
extern "C" ARM void func_ov003_0215376c(char* arg0) {
    *(int*)(arg0 + 0x0) = 0;
    *(int*)(arg0 + 0x4) = 0;
    *(int*)(arg0 + 0x8) = 0;
    *(int*)(arg0 + 0xc) = 0;
    *(int*)(arg0 + 0x14) = 0;
    *(int*)(arg0 + 0x10) = 0;
    func_0204af64((struct Struct_02020cb8*)(arg0 + 0x18));
    int var0;
    *(unsigned char*)(arg0 + 0x48) = 0;
    *(unsigned char*)(arg0 + 0x49) = 0;
    var0 = *(unsigned char*)(arg0 + 0x49) - 1;
    *(int*)(arg0 + 0x4c) = var0;
    *(int*)(arg0 + 0x50) = var0;
    *(int*)(arg0 + 0x54) = var0;
    *(unsigned char*)(arg0 + 0x59) = var0;
    *(unsigned char*)(arg0 + 0x5a) = 0;
    *(unsigned char*)(arg0 + 0x5b) = 0;
    *(unsigned char*)(arg0 + 0x5d) = 0;
    *(unsigned char*)(arg0 + 0x58) = 0;
    func_02074b64((struct Struct_02074b64*)(arg0 + 0x38));
}
