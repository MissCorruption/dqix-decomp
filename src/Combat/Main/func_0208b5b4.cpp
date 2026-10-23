#include <globaldefs.h>
#if defined(jpn)
#define func_0208b610 func_0208bf04
#endif

struct Struct_0208b5b4_2 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };
struct Struct_0208b5b4 { int unknown_0_, unknown_4_, unknown_8_; };

extern "C" void func_0208b610(struct Struct_0208b5b4 arg0, unsigned short arg1, int arg2, int arg3, int arg4, short arg5);

// USA: func_0208b5b4
extern "C" ARM void func_0208b5b4(struct Struct_0208b5b4_2 arg0, int arg1, int arg2, short arg3, unsigned short arg4) {
    arg0.unknown_4_ += ((int)(arg1 + ((unsigned int)arg1 >> 31))) >> 1;   // v.y += height / 2 (toward zero)
    func_0208b610(*(struct Struct_0208b5b4*)&arg0, arg4, arg0.unknown_c_, arg1, arg2, arg3);
}
