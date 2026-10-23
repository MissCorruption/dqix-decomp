#include <globaldefs.h>

extern "C" int func_020d1fd0(int arg0, int arg1);

struct Struct_0210f3c0 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern Struct_0210f3c0 data_0210f3c0;

// USA: func_020bbe64
extern "C" ARM void func_020bbe64(int arg0) {
    if (arg0 == 0) return;
    func_020d1fd0(arg0, 0);
    data_0210f3c0.unknown_8_ &= ~arg0;
}
