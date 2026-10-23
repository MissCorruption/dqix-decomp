#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void func_02052d7c(void* arg0, int arg1, int arg2);
extern "C" void func_02072afc(int arg0, void* arg1, void* arg2);
extern "C" int func_02053c6c(unsigned char* arg0);
extern char data_020f0cf4[];

struct Struct_02072c9c {
    void* unknown_0_;
    char unknown_4_[0x14];
    short unknown_18_;
};

// USA: func_02072c9c
extern "C" ARM void func_02072c9c(int arg0, char* arg1) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (var0 == NULL) {
        return;
    }
    int var1 = func_02053c6c((unsigned char*)var0);
    if (var1 == 0) {
        return;
    }
    char* var2 = (char*)var1;

    char var3[0x2c];
    char var4[0x18];
    func_02072afc(arg0, var3, var4);

    struct Struct_02072c9c* var5 = (struct Struct_02072c9c*)(var2 + 0x294);
    struct Struct_02072c9c* var6 = (struct Struct_02072c9c*)(var2 + 0x194);
    if (var6 == NULL) {
        func_02052d7c(var0, 0, -1);
        func_02072afc(arg0, var3, var4);
        var6 = (struct Struct_02072c9c*)(var2 + 0x194);
    }

    unsigned int* var7 = *(unsigned int**)var6;
    unsigned int var8 = (var7[1] << 12) >> 24;
    unsigned int var9 = 0;
    if (var5->unknown_18_ >= 0) {
        if (var5 != NULL) {
            unsigned int* var10 = *(unsigned int**)var5;
            var9 = (var10[1] << 12) >> 24;
        }
    }
    sprintf(arg1, data_020f0cf4, var8, var9);
}
