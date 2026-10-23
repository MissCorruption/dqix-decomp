#include <globaldefs.h>
extern "C" int func_020d5aec(int);

extern char data_021015a0;
extern "C" void func_0202ccdc(void);
extern "C" void func_0202c848(int);

// USA: func_0202cca4
extern "C" ARM int func_0202cca4(void) {
    int var0;
    *(int*)(&data_021015a0 + 0x10) = 3;
    var0 = func_020d5aec((int)((void*)func_0202ccdc));
    if (var0 == 2) return 1;
    func_0202c848(var0);
    return 0;
}
