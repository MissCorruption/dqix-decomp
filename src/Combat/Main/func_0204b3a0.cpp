#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

typedef void (*Type_0204a984)(void*, int, int);
extern "C" void func_0204a984(int* arg0, Type_0204a984 arg1, char* arg2);

typedef void (*Type_0204abcc)(void*, int, int);
struct Struct_0204abcc;
struct Struct_0204abcc_2;
extern "C" void func_0204abcc(struct Struct_0204abcc* arg0, Type_0204abcc arg1, struct Struct_0204abcc_2* arg2);

typedef void (*Type_02020cb8)(void*, int, int);
extern "C" void func_0204adb4(unsigned char* arg0, Type_02020cb8 arg1, unsigned char* arg2);

struct Struct_02020cb8_7 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };
extern "C" void func_0204acb0(struct Struct_02020cb8_7* arg0);

extern char data_020f0238;
extern char data_020f023d;
extern char data_020f0242;
extern int data_020f01f8[][4];
extern Type_0204abcc data_020f01b0[];
extern int data_020f0218[][4];

struct Struct_02020cb8_6 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

// USA: func_0204b3a0
extern "C" ARM void func_0204b3a0(struct Struct_02020cb8_6* arg0, char* arg1) {
    char var0[5];

    if (arg1 == 0) {
        return;
    }

    __clear(var0, 5);
    memcpy(var0, arg1, 5);

    if (func_02001aec(var0, &data_020f0238, 4) == 0) {
        Type_0204a984 var1 = (Type_0204a984)data_020f01f8[arg0->unknown_1c_0_][arg0->unknown_1c_4_];
        func_0204a984((int*)arg0, var1, arg1);
        return;
    }

    if (func_02001aec(var0, &data_020f023d, 4) == 0) {
        Type_0204abcc var2 = data_020f01b0[arg0->unknown_1c_0_];
        func_0204abcc((struct Struct_0204abcc*)((char*)arg0 + 0xc), var2, (struct Struct_0204abcc_2*)arg1);
        return;
    }

    if (func_02001aec(var0, &data_020f0242, 4) == 0) {
        struct Struct_02020cb8_7 var3;
        func_0204acb0(&var3);
        Type_02020cb8 var4 = (Type_02020cb8)data_020f0218[arg0->unknown_1c_0_][arg0->unknown_1c_4_];
        func_0204adb4((unsigned char*)&var3, var4, (unsigned char*)arg1);
    }
}
