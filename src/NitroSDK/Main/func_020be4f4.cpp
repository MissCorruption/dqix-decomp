#include <globaldefs.h>

struct Struct_020be4f4;
extern "C" void func_020d2eb8(struct Struct_020be4f4*, int, int);
extern "C" void* func_020d2eec(void*, int);
extern "C" void func_020d20c4(int, int);

// USA: func_020be4f4
extern "C" ARM void func_020be4f4(int arg0, int arg1, void* arg2, int arg3) {
    if (arg0 == (int)func_020d2eec(arg2, arg3)) {
        func_020d2eb8((struct Struct_020be4f4*)arg2, arg3, 0);
    }
    func_020d20c4(arg0, arg0 + arg1);
}
