#include <globaldefs.h>
class AllocatorUnion;
extern "C" int func_02012da4(AllocatorUnion*, void*);

extern int data_02114e20;

// USA: func_020998ac
extern "C" ARM int func_020998ac(int* arg0) {
    return func_02012da4((AllocatorUnion*)(&data_02114e20), (void*)(*arg0));
}
