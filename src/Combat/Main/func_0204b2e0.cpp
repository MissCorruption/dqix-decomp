#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

extern "C" void func_0204a8f4(char* arg0, char* arg1);

struct Struct_0204ab4c;
struct Struct_0204ab4c_2;
extern "C" void func_0204ab4c(struct Struct_0204ab4c* arg0, struct Struct_0204ab4c_2* arg1);

struct Struct_02020cb8_7 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
extern "C" void func_0204acb0(struct Struct_02020cb8_7* arg0);
extern "C" void func_0204ad88(void* arg0, void* arg1);

extern char data_020f0238;
extern char data_020f023d;
extern char data_020f0242;

// USA: func_0204b2e0
extern "C" ARM void func_0204b2e0(void* arg0, char* arg1) {
    char var0[5];

    if (arg1 == 0) {
        return;
    }

    __clear(var0, 5);
    memcpy(var0, arg1, 5);

    if (func_02001aec(var0, &data_020f0238, 4) == 0) {
        func_0204a8f4((char*)arg0, arg1);
        return;
    }

    if (func_02001aec(var0, &data_020f023d, 4) == 0) {
        func_0204ab4c((struct Struct_0204ab4c*)((char*)arg0 + 0xc), (struct Struct_0204ab4c_2*)arg1);
        return;
    }

    if (func_02001aec(var0, &data_020f0242, 4) == 0) {
        struct Struct_02020cb8_7 var1;
        func_0204acb0(&var1);
        func_0204ad88(&var1, arg1);
    }
}
