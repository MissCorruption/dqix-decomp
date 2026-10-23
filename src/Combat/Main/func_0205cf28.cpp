#include <globaldefs.h>

struct Struct_0205ba68;
struct Node0205bacc;
extern "C" void func_0205ba68(struct Struct_0205ba68* s, int a, int b, int mode);
extern "C" void func_0205bacc(struct Node0205bacc* s, int val);

// USA: func_0205cf28
extern "C" ARM void func_0205cf28(unsigned char* p, int a, int b, int c) {
    func_0205ba68((struct Struct_0205ba68*)(p + 4), a, b, c);
    func_0205ba68((struct Struct_0205ba68*)(p + 0x54), a, b, c);
    int prod = a * b;
    func_0205bacc((struct Node0205bacc*)(p + 4), prod);
    func_0205bacc((struct Node0205bacc*)(p + 0x54), prod);
}
