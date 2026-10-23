#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02176ed4_4154 = 0xfb6 };
enum { Enum_ov003_02176ed4_2164 = 0x7f0 };
enum { Enum_ov003_02176ed4_2204 = 0x818 };
#else
enum { Enum_ov003_02176ed4_4154 = 0x103a };
enum { Enum_ov003_02176ed4_2164 = 0x874 };
enum { Enum_ov003_02176ed4_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState*);

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c04(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);

struct Struct_0201099c_10;
struct Struct_0201099c_9 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
};
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);

struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);

extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov003_02176ed4
extern "C" ARM void func_ov003_02176ed4(char* arg0) {
    struct Struct_0207fdcc_2* var0 = *(struct Struct_0207fdcc_2**)(arg0 + Enum_ov003_02176ed4_2204);
    struct Struct_02053f7c* var1 = (struct Struct_02053f7c*)func_02010828(GameState::GetInstance());
    func_02080c20(var0, 8);
    func_02080c68(var0, 8, 0);
    int var2 = 0;
    struct Struct_0201099c_9* var3 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_02176ed4_2164), *(short*)(arg0 + Enum_ov003_02176ed4_4154));
    if (var3 != NULL) {
        int var4 = (var3->unknown_8_0_ <= 7) ? 1 : var2;
        var2 = (var4 != 0);
    }
    if (var2 != 0) {
        short var5 = *(short*)(arg0 + Enum_ov003_02176ed4_4154);
        int var6 = func_02086aec(var1, var5);
        func_02080fa8((struct Struct_02080fa8*)var0, 0x54, var6);
    } else {
        func_02080c04(var0, 8);
    }
    func_020813ec(var0, 8);
}
