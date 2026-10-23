#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);

struct Entry020e30a4 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};

// USA: func_020e30a4
extern "C" ARM struct Entry020e30a4* func_020e30a4(struct Entry020e30a4* list) {
    int i;
    if (!func_0202b7d8((int*)func_0202ae18())) return NULL;
    for (i = 0; i < 8; i++) {
        if (list->f2 == 0) return list;
        list++;
    }
    return NULL;
}
