#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02175924_4154 = 0xfb6 };
enum { Enum_ov003_02175924_4175 = 0xfcb };
enum { Enum_ov003_02175924_2164 = 0x7f0 };
enum { Enum_ov003_02175924_4156 = 0xfb8 };
#else
enum { Enum_ov003_02175924_4154 = 0x103a };
enum { Enum_ov003_02175924_4175 = 0x104f };
enum { Enum_ov003_02175924_2164 = 0x874 };
enum { Enum_ov003_02175924_4156 = 0x103c };
#endif

#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" unsigned int func_ov003_02175898(char* arg0, void* arg1);
extern "C" void func_ov003_02176798(void* arg0);

// USA: func_ov003_02175924
extern "C" ARM int func_ov003_02175924(char* arg0) {
    void* var0 = func_02010828(GameState::GetInstance());
    short var1 = *(short*)(arg0 + Enum_ov003_02175924_4154);
    struct Struct_0201099c_9* var2 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_02175924_2164), var1);
    if (var2 == 0) {
        return 0;
    }
    unsigned int var3 = func_ov003_02175898(arg0, var2);
    unsigned int var4 = *(unsigned char*)(arg0 + Enum_ov003_02175924_4156) * var3;
    unsigned int var5 = *(unsigned int*)((char*)var0 + 0xf6c);
    if (var5 < var4) {
        return 0;
    }
    var5 = var5 - var4;
    *(unsigned int*)((char*)var0 + 0xf6c) = var5;
    func_ov003_02176798(arg0);
    *(unsigned char*)(arg0 + Enum_ov003_02175924_4175) = 1;
    return 1;
}
