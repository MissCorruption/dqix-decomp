#include <globaldefs.h>
#include <GameState/GameState.h>
#include <std_library_functions.h>
struct Struct_02000c9c_8;
extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" int func_020d2ff0(const char*);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern char data_020e7e35[7];
extern char data_020e7e30[5];
// USA: func_020680cc
extern "C" ARM int func_020680cc(const char* arg0) {
    if (func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance()) == 3) {
        char var0[7];
        char var1[5];
        INLINE_MEMCPY(var0, data_020e7e35, 7);
        INLINE_MEMCPY(var1, data_020e7e30, 5);
        int var2 = func_020d2ff0(arg0);
        if (var2) {
            char var3 = arg0[var2 - 1];
            for (char* var4 = var0; *var4; var4++) {
                if (!*var4) break;
                if (*var4 == var3) return 1;
            }
            if (var2 >= 4 && func_02001aec(arg0 + (var2 - 4), var1, 4) == 0) return 1;
        }
    }
    return 0;
}
