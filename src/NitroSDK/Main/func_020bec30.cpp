#include <globaldefs.h>

struct Struct_020bec10;
extern "C" void func_020bec10(struct Struct_020bec10* arg0);
extern "C" int func_020bebb4(void* arg0, int arg1, int arg2);

// USA: func_020bec30
extern "C" ARM int func_020bec30(void* arg0, int arg1, int arg2) {
    if (func_020bebb4(arg0, arg1, arg2) == 0) return 0;
    func_020bec10((struct Struct_020bec10*)arg0);
    return 1;
}
