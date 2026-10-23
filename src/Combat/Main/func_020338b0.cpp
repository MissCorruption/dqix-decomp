#include <globaldefs.h>
extern "C" int func_02032424(struct Struct_ov009_0218aa28*, struct Struct_ov009_0218aa28*);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2*, int);

// USA: func_020338b0
extern "C" ARM void func_020338b0(unsigned char* arg0, int arg1) {
    int var0 = func_02032424((struct Struct_ov009_0218aa28*)(arg1), (struct Struct_ov009_0218aa28*)(arg0 + 0x44));
    func_02033834((struct Struct_02033834_2*)arg0, var0);
}
