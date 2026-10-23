#include <globaldefs.h>

struct Struct_0205ba68;
struct Struct_0205bacc;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);

// USA: func_ov020_0218c7f0
extern "C" ARM void func_ov020_0218c7f0(unsigned char* arg0, int arg1, int arg2) {
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x20), arg1, arg2, 0);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x70), arg1, arg2, 0);
    int var0 = arg1 * arg2;
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x20), var0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x70), var0);
}
