#include <globaldefs.h>

extern "C" int func_020d40bc(int, int, int, int, int, int);
extern "C" int func_020d4204(void);
extern "C" void func_020d404c(int arg0, int arg1);

// USA: func_020d6ad4
extern "C" ARM int func_020d6ad4(int arg0, int arg1, int arg2, int arg3, unsigned short arg4) {
    int var0 = func_020d4204();
    if (var0 != 0) return var0;
    func_020d404c(0x1d, arg0);
    var0 = func_020d40bc(0x1d, 4, arg1, arg2, arg3, arg4);
    if (var0 == 0) var0 = 2;
    return var0;
}
