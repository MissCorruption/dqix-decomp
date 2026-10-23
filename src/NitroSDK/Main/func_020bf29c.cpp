#include <globaldefs.h>

struct Struct_020bc948;
extern "C" int func_020bc948(struct Struct_020bc948*, int, unsigned char*);

// USA: func_020bf29c
extern "C" ARM int func_020bf29c(void *arg0, int arg1, int arg2) {
    if (*(int *)((char *)arg0 + 0x120) == 0) {
        if (func_020bc948((struct Struct_020bc948*)arg0, arg1, (unsigned char*)arg2) == 0) return 0;
    }
    *(int *)((char *)arg0 + 0x120) += 1;
    return 1;
}
