#include <globaldefs.h>

class AllocatorUnion;
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern AllocatorUnion data_02114e20;

struct Struct_0209cb74 {
    int* unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};

// USA: func_0209ccec
extern "C" ARM void func_0209ccec(struct Struct_0209cb74* arg0, int arg1) {
    if (arg1 <= 0) return;
    arg0->unknown_0_ = (int*)func_02012d88(&data_02114e20, arg1 << 2);
    arg0->unknown_5_ = arg1;
    arg0->unknown_4_ = 0;
}
