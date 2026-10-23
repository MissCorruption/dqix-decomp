#include <globaldefs.h>
extern "C" void func_0202e9a4(struct Struct_0202df68*, int);

// USA: func_0202f0c4
extern "C" ARM void func_0202f0c4(void* arg0, int arg1, int arg2) {
    *(int*)((char*)arg0 + 0x1f0) = arg1;
    *(int*)((char*)arg0 + 0x1f4) = arg2;
    if (arg2 == 0) {
        func_0202e9a4((struct Struct_0202df68*)(arg0), (int)(arg1));
    }
}
