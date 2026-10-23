#include <globaldefs.h>

struct Struct_0203fca0;
extern "C" ARM void func_0203fca0(struct Struct_0203fca0* arg0);

struct Struct_02040258 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0x37];
    int unknown_38_;
};

// USA: func_02040258
extern "C" ARM void func_02040258(struct Struct_02040258* arg0) {
    arg0->unknown_0_ = 0;
    func_0203fca0((struct Struct_0203fca0*)((char*)arg0 + 0x10));
    arg0->unknown_38_ = -1;
}
