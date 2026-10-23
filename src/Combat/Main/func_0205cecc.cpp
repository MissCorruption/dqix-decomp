#include <globaldefs.h>

struct Struct_0205bd20;
extern "C" int func_0205bd20(struct Struct_0205bd20* arg0, int arg1);
struct Struct_0205c570;
extern "C" int func_0205c570(struct Struct_0205c570*);

// USA: func_0205cecc
extern "C" ARM int func_0205cecc(void* arg0) {
    if (func_0205bd20(
            (struct Struct_0205bd20*)((char*)arg0 + 0x20), 1) == 0) {
        return -1;
    }
    return func_0205c570((struct Struct_0205c570*)((char*)arg0 + 0x1c));
}
