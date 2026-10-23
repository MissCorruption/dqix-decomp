#include <globaldefs.h>

extern "C" int func_020d5fd0(int, int, int);
extern "C" void func_0202c848(int arg0);
extern int data_02102be0;
extern int data_02101980;

// USA: func_0202dcd4
extern "C" ARM int func_0202dcd4(int arg0) {
    int var0 = func_020d5fd0((int)&data_02102be0, arg0, (int)&data_02101980);
    if (var0 == 7) return 1;
    if (var0 == 5) {
        func_0202c848(var0);
        return 0;
    }
    if (var0 == 0) return 1;
    func_0202c848(var0);
    return 0;
}
