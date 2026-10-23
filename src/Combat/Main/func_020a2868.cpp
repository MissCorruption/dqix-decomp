#include <globaldefs.h>
extern "C" void func_0202e9a4(struct Struct_0202df68*, int);

extern "C" void func_0202e694(void*, int*);

struct Struct_020a2868 {
    unsigned char unknown_0_[0x220];
    int unknown_220_[3];
};

// USA: func_020a2868
extern "C" ARM void func_020a2868(struct Struct_020a2868* arg0) {
    arg0->unknown_220_[1] = 0xc666;
    arg0->unknown_220_[2] = 0xe666;
    func_0202e694(arg0, arg0->unknown_220_);
    func_0202e9a4((struct Struct_0202df68*)(arg0), (int)(0x19000));
}
