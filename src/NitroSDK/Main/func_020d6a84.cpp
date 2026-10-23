#include <globaldefs.h>

extern "C" int func_020d40bc(int, int, int);
extern "C" int func_020d4204(void);
extern "C" void func_020d404c(int arg0, int arg1);

// USA: func_020d6a84
extern "C" ARM int func_020d6a84(int arg0, int arg1) {
    int var0 = func_020d4204();
    if (var0 != 0) return var0;
    if (arg1 != 0 && arg1 != 1) return 6;
    func_020d404c(0x19, arg0);
    var0 = func_020d40bc(0x19, 1, arg1);
    if (var0 == 0) var0 = 2;
    return var0;
}
