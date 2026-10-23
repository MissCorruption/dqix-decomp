#include <globaldefs.h>

struct Struct_0202ef14_2 {
    int unknown_0_;
};

extern "C" int func_020a10a8(int*);
extern "C" void func_020a0dec(struct Struct_0202ef14_2*);
extern "C" void func_0202e894(void*, int);
int fix32ReduceAngle0To2Pi(int);

struct Struct_0202ef14 {
    char unknown_0_[0x168];
};

typedef void (Struct_0202ef14::*Type_02013158)(void*);

struct Struct_020e73cc {
    Type_02013158 unknown_0_[3];
};

extern const Struct_020e73cc data_020e73cc;
extern const Struct_020e73cc data_020e73e4;

// USA: func_0202ef14
extern "C" ARM void func_0202ef14(struct Struct_0202ef14* arg0) {
    char* var0 = (char*)arg0;
    unsigned int var1 = *(unsigned int*)(var0 + 0x168);
    struct Struct_0202ef14_2* var2[3];
    var2[0] = (struct Struct_0202ef14_2*)(var0 + 0x16c);
    var2[1] = (struct Struct_0202ef14_2*)(var0 + 0x194);
    var2[2] = (struct Struct_0202ef14_2*)(var0 + 0x1bc);

    int var3;
    if (var1 & 2) {
        struct Struct_020e73cc var4 = data_020e73e4;
        for (var3 = 0; var3 < 3; var3++) {
            if (func_020a10a8((int*)var2[var3])) {
                func_020a0dec(var2[var3]);
                void* var5 = (void*)((char*)var2[var3] + 4);
                (arg0->*var4.unknown_0_[var3])(var5);
            }
        }
    } else {
        struct Struct_020e73cc var6 = data_020e73cc;
        for (var3 = 0; var3 < 3; var3++) {
            if (func_020a10a8((int*)var2[var3])) {
                func_020a0dec(var2[var3]);
                void* var7 = (void*)((char*)var2[var3] + 4);
                (arg0->*var6.unknown_0_[var3])(var7);
            }
        }
    }

    if (*(unsigned short*)(var0 + 0x1ee) != 0) {
        *(unsigned short*)(var0 + 0x1ee) -= 1;
        *(unsigned short*)(var0 + 0x7c) = (unsigned short)(*(short*)(var0 + 0x7c) + *(short*)(var0 + 0x1ec));
    }

    if (*(unsigned short*)(var0 + 0x210) != 0) {
        *(unsigned short*)(var0 + 0x210) -= 1;
        func_0202e894(var0, *(short*)(var0 + 0x20e));
    }

    if (*(unsigned short*)(var0 + 0x216) != 0) {
        *(unsigned short*)(var0 + 0x216) -= 1;
        *(unsigned short*)(var0 + 0x212) = (unsigned short)fix32ReduceAngle0To2Pi(*(short*)(var0 + 0x212) + *(short*)(var0 + 0x214));
    }
}
