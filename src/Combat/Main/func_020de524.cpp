#include <globaldefs.h>

struct Struct_020de3ac;
extern "C" int func_020de3ac(struct Struct_020de3ac* arg0, int arg1, int arg2, int arg3);

struct Struct_020de38c;
extern "C" int func_020de38c(struct Struct_020de38c* arg0, int arg1, int arg2);

struct Struct_020de3cc;
extern "C" int func_020de3cc(struct Struct_020de3cc* arg0, int arg1, int arg2, int arg3);

// USA: func_020de524
extern "C" ARM void func_020de524(int arg0, int arg1, void** arg2) {
    if (arg0 == 999) {
        if (arg1 == 999) {
            *arg2 = 0;
        } else {
            *arg2 = (void*)func_020de3ac;
        }
    } else {
        if (arg1 == 999) {
            *arg2 = (void*)func_020de38c;
        } else {
            *arg2 = (void*)func_020de3cc;
        }
    }
}
