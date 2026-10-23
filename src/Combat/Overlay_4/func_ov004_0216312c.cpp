#include <globaldefs.h>

struct Struct_02038598_4 {
    unsigned int unknown_0_;
};
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);

// USA: func_ov004_0216312c
extern "C" ARM int func_ov004_0216312c(void) {
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 1);
    return 0;
}
