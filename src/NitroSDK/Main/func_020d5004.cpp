#include <globaldefs.h>

extern "C" int func_020d40bc(int, int);
extern "C" int func_020d4204(void);
extern "C" void func_020d404c(int arg0, int arg1);

// USA: func_020d5004
extern "C" ARM int func_020d5004(int arg0) {
    int var0 = func_020d4204();
    if (var0 != 0) return var0;
    func_020d404c(1, arg0);
    var0 = func_020d40bc(1, 0);
    if (var0 == 0) var0 = 2;
    return var0;
}
