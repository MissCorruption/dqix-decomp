#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_020965c0 func_jpn_02098210
#endif

struct Struct_02069d08 { void* unknown_0_; };

extern "C" void func_020696bc(int arg0, int *arg1, int arg2);
extern "C" int* func_02094d6c(void);
struct Struct_02069d08_2;
extern "C" unsigned char func_020965c0(struct Struct_02069d08_2 *arg0, unsigned int arg1);
extern "C" int func_020421a0(void);

// USA: func_02069d08
extern "C" ARM int func_02069d08(struct Struct_02069d08 *arg0, int arg1) {
    int var0;
    func_020696bc(arg1, &var0, 1);
    unsigned char var1 = func_020965c0((struct Struct_02069d08_2*)func_02094d6c(), var0 & 0xff);
    *(unsigned short*)(func_020421a0() + 0x1948) = var1;
    void* var2 = arg0->unknown_0_;
    unsigned short var3 = 0xff10;
    memcpy(var2, &var3, 2);
    return 2;
}
