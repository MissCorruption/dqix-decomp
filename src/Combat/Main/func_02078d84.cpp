#include <globaldefs.h>

extern "C" int func_0202b7d8(int*);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4*);

extern "C" int func_02076ccc(void*, int);

extern "C" void* func_0202ae18(void* arg0);
extern "C" unsigned short func_02078e60(void* arg0, char* arg1);

struct Struct_02078d84 {
    char unknown_0_[0x138];
    unsigned char unknown_138_;
    char unknown_139_[0x13];
    unsigned int unknown_14c_;
    char unknown_150_[0x14];
    unsigned short unknown_164_;
};

// USA: func_02078d84
extern "C" ARM void func_02078d84(struct Struct_02078d84* arg0) {
    void* var0 = func_0202ae18(arg0);
    if (func_0202b7d8((int*)var0) != 0) {
        if (func_0202c1a4((struct Struct_0202c1a4*)var0) != 0) {
            return;
        }
    }
    if (arg0->unknown_14c_ <= 0xbb8) {
        return;
    }
    char var1 = 0;
    switch (arg0->unknown_138_) {
    case 0:
        func_02076ccc(arg0, 1);
        return;
    case 1:
    case 3:
    case 4:
    case 5:
#if !defined(jpn)
        if (func_02076ccc(arg0, 2) != 0) {
            return;
        }
        arg0->unknown_164_ = func_02078e60(arg0, &var1);
#endif
        func_02076ccc(arg0, 2);
        return;
    case 2:
        arg0->unknown_164_ = func_02078e60(arg0, &var1);
        func_02076ccc(arg0, 3);
        return;
    }
}
