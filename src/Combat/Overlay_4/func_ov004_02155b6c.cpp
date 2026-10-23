#if defined(jpn)
#define R(j,u) (j)
#define data_ov004_0216fae0 data_ov004_0217026c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov004_02155a3c(void* arg0);
extern "C" int func_ov023_021f6680(void* arg0, int arg1);
struct Struct_ov004_0216fae0 { int unknown_0_[3]; };
extern struct Struct_ov004_0216fae0 data_ov004_0216fae0;

// USA: func_ov004_02155b6c
extern "C" ARM int func_ov004_02155b6c(void* arg0) {
    func_ov004_02155a3c(arg0);
    struct Struct_ov004_0216fae0 var0 = data_ov004_0216fae0;
    for (int var1 = 0; var0.unknown_0_[var1] >= 0; var1++) {
        func_ov023_021f6680(arg0, var0.unknown_0_[var1]);
    }
    return 0;
}
