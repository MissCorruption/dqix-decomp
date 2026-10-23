#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0217fb98 { char unknown_0_[0xf78]; unsigned char unknown_f78_; };

extern "C" void* func_02010828(GameState* arg0);
extern "C" void* func_ov000_02161318(void*, unsigned char);
extern "C" int func_ov000_0217f464(void* arg0);

// USA: func_ov000_0217fb98
extern "C" ARM int func_ov000_0217fb98(void* arg0) {
    int var0 = 0;
    unsigned char* var1 = (unsigned char*)func_02010828(GameState::GetInstance());
    unsigned char var2 = var1[0xf7c];
    unsigned char var3;
    for (var3 = 0; var3 < var2; var3++) {
        struct Struct_ov000_0217fb98* var4 = (struct Struct_ov000_0217fb98*)(var1 + var3);
        void* var5 = func_ov000_02161318(arg0, var4->unknown_f78_);
        if (var5 != NULL) {
            var0 |= func_ov000_0217f464(var5);
        }
    }
    return var0;
}
