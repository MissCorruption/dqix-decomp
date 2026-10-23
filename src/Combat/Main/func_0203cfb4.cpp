#include <globaldefs.h>
extern "C" void func_0206da74(int*);
extern "C" void func_02064e20(int*);
#include "std_library_functions.h"

struct Struct_020401e4;
extern "C" void func_020401e4(struct Struct_020401e4* arg0);

struct Struct_0203cfb4 {
    unsigned char unknown_0_[0x8c];
    int unknown_8c_;
    unsigned char unknown_90_[0x8];
    int unknown_98_;
    unsigned char unknown_9c_;
};

// USA: func_0203cfb4
extern "C" ARM void func_0203cfb4(struct Struct_0203cfb4* arg0) {
    func_020401e4((struct Struct_020401e4*)arg0);
    func_02064e20((int*)((char*)arg0 + 0x90));
    func_0206da74((int*)((char*)arg0 + 0x94));
    memset((char*)arg0 + 0xc, 0, 0x80);
    arg0->unknown_98_ = 0;
    arg0->unknown_8c_ = 0;
    arg0->unknown_9c_ = 0;
}
