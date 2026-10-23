#include <globaldefs.h>
extern "C" void func_0205d904(unsigned char*);

struct Struct_0205bf3c;

extern "C" void func_0205d6e4(void* arg0, int arg1);
extern "C" void func_0205bf3c(struct Struct_0205bf3c* arg0);

struct Struct_0205d6a0 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    char unknown_a0_[0xb3 - 0xa0];
    unsigned char unknown_b3_;
};

// USA: func_0205d6a0
extern "C" ARM void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1) {
    int var0;
    if (arg0->unknown_98_ == 0 || arg0->unknown_9c_ == 0) return;
    var0 = 1;
    if (arg1) var0 = arg0->unknown_b3_;
    func_0205d6e4(arg0, var0);
    func_0205bf3c((struct Struct_0205bf3c*)((char*)arg0 + 0x54));
    func_0205d904((unsigned char*)(arg0));
}
