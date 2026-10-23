#include <globaldefs.h>
extern "C" int func_020d5490(int);

extern "C" int func_0202d108(void);
extern "C" void func_0202c848(int arg0);

// USA: func_0202d0e0
extern "C" ARM int func_0202d0e0(void) {
    int var0 = func_020d5490((int)(func_0202d108));
    if (var0 == 2) {
        return 1;
    }
    func_0202c848(var0);
    return 0;
}
