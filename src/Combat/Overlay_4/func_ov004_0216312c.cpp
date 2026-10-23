#include <globaldefs.h>

struct FlagWord020466f4 {
    unsigned int flags;
};
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);

// USA: func_ov004_0216312c
extern "C" ARM int func_ov004_0216312c(void) {
    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 1);
    return 0;
}
