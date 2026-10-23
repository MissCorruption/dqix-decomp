#include <globaldefs.h>

struct Struct_0208becc;
extern "C" void* func_ov004_02165e70(void* arg0, int arg1);
extern "C" void func_0208becc(struct Struct_0208becc* arg0, int arg1, unsigned char arg2);

// USA: func_ov004_02167648
extern "C" ARM int func_ov004_02167648(void* arg0) {
    void* var0 = func_ov004_02165e70(arg0, 7);
    if (var0) {
        func_0208becc((struct Struct_0208becc*)((char*)var0 + 0x34), 0x270f, 0);
    }
    return 0;
}
