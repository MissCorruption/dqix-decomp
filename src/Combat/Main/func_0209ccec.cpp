#include <globaldefs.h>

class AllocatorUnion;
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern AllocatorUnion data_02114e20;

struct WordList0209ccec {
    int* buffer;
    unsigned char index;
    unsigned char count;
};

// USA: func_0209ccec
extern "C" ARM void func_0209ccec(struct WordList0209ccec* list, int count) {
    if (count <= 0) return;
    list->buffer = (int*)func_02012d88(&data_02114e20, count << 2);
    list->count = count;
    list->index = 0;
}
