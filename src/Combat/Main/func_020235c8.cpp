#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020235c8_2497 = 0x915, Enum_020235c8_2711 = 0x9cb, Enum_020235c8_3276 = 0xa6c };
#else
enum { Enum_020235c8_2497 = 0x9c1, Enum_020235c8_2711 = 0xa97, Enum_020235c8_3276 = 0xccc };
#endif

#include "GameState/GameState.h"

extern "C" void* func_020d6c00(void);

struct Struct_02012de8;
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);

extern "C" void func_02026ebc(void* arg0);
extern "C" void func_02027100(unsigned char* arg0);

extern "C" {
    void func_0202720c(void* arg0);
    void func_02025f28(void* arg0);
    void func_02024000(void* arg0);
    void func_0202427c(void* arg0);
    void func_02024518(void* arg0);
    void func_02024e78(void* arg0);
    void func_020251bc(void* arg0);
    void func_0202555c(void* arg0);
    void func_02025b0c(void* arg0);
    void func_020276dc(void* arg0);
    void func_020dc7e8(int arg0, int arg1);
}

struct Struct_020235c8 {
    char unknown_0_[Enum_020235c8_3276];
    unsigned int unknown_ccc_0_ : 1;
    signed int unknown_ccc_1_ : 1;
    unsigned int unknown_ccc_2_ : 30;
};

struct Struct_0202343c_3 {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[Enum_020235c8_2497 - 0x18];
    unsigned char unknown_9c1_;
    char unknown_9c2_[Enum_020235c8_2711 - (Enum_020235c8_2497 + 1)];
    unsigned char unknown_a97_;
};

// USA: func_020235c8
extern "C" ARM void func_020235c8(struct Struct_0202343c_3* arg0) {
    GameState* var0 = GameState::GetInstance();

    if (func_02046708((struct Struct_02012de8*)func_020d6c00(), 0x41)) {
        return;
    }

    unsigned char var1 = arg0->unknown_9c1_;
    switch (var1) {
    case 1:
        func_0202720c(arg0);
        break;
    case 4:
        func_02025f28(arg0);
        break;
    default:
        func_02024000(arg0);
        func_0202427c(arg0);
        func_02026ebc(arg0);
        switch (arg0->unknown_14_) {
        case 0:
            func_02024518(arg0);
            break;
        case 1:
            func_02024e78(arg0);
            break;
        case 2:
            func_020251bc(arg0);
            break;
        case 3:
            func_0202555c(arg0);
            break;
        case 4:
            func_02025b0c(arg0);
            break;
        }
        break;
    }

    func_020276dc(arg0);
    if (!(arg0->unknown_a97_ & 1)) {
        func_02027100((unsigned char*)arg0);
    }

    if (((struct Struct_020235c8*)((char*)var0 + 0x5000))->unknown_ccc_1_) {
        func_020dc7e8(6, 6 - 7);
        func_020dc7e8(7, 7 - 8);
    }
}
