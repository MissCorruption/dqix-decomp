#include <globaldefs.h>

extern "C" int func_020d424c(int, int);
extern "C" int func_020d40bc(int, int);
extern "C" void func_020d404c(int arg0, int arg1);

// USA: func_020d503c
extern "C" ARM int func_020d503c(int arg0) {
    int var0 = func_020d424c(1, 2);
    if (var0 != 0) return var0;
    func_020d404c(2, arg0);
    var0 = func_020d40bc(2, 0);
    if (var0 == 0) var0 = 2;
    return var0;
}
