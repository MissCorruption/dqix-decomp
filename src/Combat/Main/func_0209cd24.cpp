#include <globaldefs.h>
class AllocatorUnion;
extern "C" void func_02012da4(AllocatorUnion*, void*);

extern int data_02114e20;

struct WordList0209cbb8 {
    int* buffer;
    unsigned char count;
    unsigned char capacity;
};
extern "C" void func_0209cbb8(struct WordList0209cbb8*);

// USA: func_0209cd24
extern "C" ARM void func_0209cd24(struct WordList0209cbb8* list) {
    if (list->buffer != NULL) {
        func_02012da4((AllocatorUnion*)(&data_02114e20), (void*)(list->buffer));
    }
    func_0209cbb8(list);
}
