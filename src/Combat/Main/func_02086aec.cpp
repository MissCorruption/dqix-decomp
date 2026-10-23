#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053f7c {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_02083994;
extern "C" int func_02083994(struct Struct_02083994* arg0, int arg1);

struct Struct_0206f81c;
struct Struct_0206f81c_8;
extern "C" struct Struct_0206f81c_8* func_02083554(struct Struct_0206f81c* arg0, int arg1);

extern "C" short func_02086bf4(char* arg0, int arg1);

// USA: func_02086aec
extern "C" ARM short func_02086aec(struct Struct_02053f7c* arg0, int arg1) {
    short var0;
    GameState* var1;
    unsigned char var2;
    GameObject* var3;
    void* var4;
    if (arg1 < 0) {
        return 0;
    }
    var0 = 0;
    var1 = GameState::GetInstance();
    for (var2 = 0; var2 < arg0->unknown_f7c_; var2++) {
        var3 = func_0200ff1c(var1, arg0->unknown_f78_[var2]);
        if (var3 != NULL) {
            var4 = (void*)func_02053c6c((unsigned char*)var3);
            if (var4 != NULL) {
                var0 = var0 + func_02083994((struct Struct_02083994*)var4, arg1);
                if (func_02083554((struct Struct_0206f81c*)var4, arg1) != NULL) {
                    var0 = var0 + 1;
                }
            }
        }
    }
    return var0 + func_02086bf4((char*)arg0, arg1);
}
