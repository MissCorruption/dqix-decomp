#include <globaldefs.h>

extern "C" void* func_020d6c00(void);

struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);

extern "C" {
    void func_02021578(void* arg0);
    void func_02021b84(void* arg0);
    void func_020e081c(void* arg0);
    void func_02021f88(void* arg0);
    void func_020227dc(void* arg0);
}

struct Struct_020214f0 {
#if defined(jpn)
    char unknown_0_[0x915];
#else
    char unknown1_0_[0x9c1];
#endif
    unsigned char unknown_9c1_;
    unsigned char unknown_9c2_;
    unsigned char unknown_9c3_;
};

// USA: func_020214f0
extern "C" ARM void func_020214f0(struct Struct_020214f0* arg0) {
    if (arg0->unknown_9c3_ == 0) {
        return;
    }
    if (func_02046708((struct Struct_02012de8*)func_020d6c00(), 0x41)) {
        return;
    }

    switch (arg0->unknown_9c1_) {
    case 0:
        func_02021578(arg0);
        break;
    case 1:
        func_02021b84(arg0);
        break;
    case 2:
        func_020e081c(arg0);
        break;
    case 3:
        func_02021f88(arg0);
        break;
    case 4:
        func_020227dc(arg0);
        break;
    }
}
