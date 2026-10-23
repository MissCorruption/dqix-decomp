#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void);
extern int data_ov001_02165958;
extern int data_02108760;
extern "C" void func_0205eb48(void* arg0, void* arg1, int arg2);

// USA: func_ov001_02163a18
extern "C" ARM int func_ov001_02163a18(void) {
    int var0 = func_ov017_021d60f4();
    if (var0 < 0 || var0 >= 0x10) return 0;
    func_0205eb48(&data_02108760, (&data_ov001_02165958) + var0, 0);
    return 1;
}
