#include <globaldefs.h>

extern "C" short func_ov017_021d60f4(void* arg0);
struct Struct_02109bf4_3;
extern "C" void func_0209c20c(struct Struct_02109bf4_3* arg0);
extern "C" void func_0209c6d8(void* arg0, int arg1);
extern struct Struct_02109bf4_3 data_02109bf4;

// USA: func_ov001_021637a8
extern "C" ARM int func_ov001_021637a8(void* arg0) {
    short var0 = func_ov017_021d60f4(arg0);
    func_0209c20c(&data_02109bf4);
    func_0209c6d8(&data_02109bf4, var0);
    return 1;
}
