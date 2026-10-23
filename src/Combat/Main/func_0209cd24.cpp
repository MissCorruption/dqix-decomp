#include <globaldefs.h>
class AllocatorUnion;
extern "C" void func_02012da4(AllocatorUnion*, void*);

extern int data_02114e20;

struct Struct_0209cbb8 {
    int* unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};
extern "C" void func_0209cbb8(struct Struct_0209cbb8*);

// USA: func_0209cd24
extern "C" ARM void func_0209cd24(struct Struct_0209cbb8* arg0) {
    if (arg0->unknown_0_ != NULL) {
        func_02012da4((AllocatorUnion*)(&data_02114e20), (void*)(arg0->unknown_0_));
    }
    func_0209cbb8(arg0);
}
