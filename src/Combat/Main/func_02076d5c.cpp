#include <globaldefs.h>
extern "C" void func_02076ccc(void*, int);

struct Struct_02033b58;
extern "C" void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1);
extern "C" int func_0201b5d8(int arg0);

extern "C" unsigned short* func_02012fe4(void);

struct Struct_02076d5c { char unknown_0_[0x14c]; unsigned int unknown_14c_; };

// USA: func_02076d5c
extern "C" ARM void func_02076d5c(struct Struct_02076d5c* arg0) {
    if (func_0201b5d8(*func_02012fe4()) != 0 || arg0->unknown_14c_ > 0x3e8) {
        func_02033b58((struct Struct_02033b58*)arg0, 0);
        func_02076ccc((void*)(arg0), (int)(1));
    }
}
