#include <globaldefs.h>

struct Struct_0205ba68;
struct Struct_0205bacc;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);

// USA: func_0205cf28
extern "C" ARM void func_0205cf28(unsigned char* arg0, int arg1, int arg2, int arg3) {
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 4), arg1, arg2, arg3);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x54), arg1, arg2, arg3);
    int var0 = arg1 * arg2;
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 4), var0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x54), var0);
}
