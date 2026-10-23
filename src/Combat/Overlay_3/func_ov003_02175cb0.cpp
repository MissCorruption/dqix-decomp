#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02175cb0_4154 = 0xfb6 };
enum { Enum_ov003_02175cb0_4175 = 0xfcb };
enum { Enum_ov003_02175cb0_2164 = 0x7f0 };
enum { Enum_ov003_02175cb0_4156 = 0xfb8 };
#else
enum { Enum_ov003_02175cb0_4154 = 0x103a };
enum { Enum_ov003_02175cb0_4175 = 0x104f };
enum { Enum_ov003_02175cb0_2164 = 0x874 };
enum { Enum_ov003_02175cb0_4156 = 0x103c };
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    char unknown_9_[0x18 - 0xc];
    short unknown_16_;
};

extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_020de824(void* arg0);
extern "C" void func_0207cbe8(char* arg0);
extern "C" void func_0207cc0c(char* arg0);
extern "C" void func_0207d134(void* arg0, int arg1, int arg2);
extern "C" void func_0207cf30(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov003_02175cb0
extern "C" ARM int func_ov003_02175cb0(char* arg0, int arg1) {
    *(unsigned char*)(arg0 + Enum_ov003_02175cb0_4175) = 0;
    struct Struct_0201099c_9* var0 =
        func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_02175cb0_2164), *(short*)(arg0 + Enum_ov003_02175cb0_4154));
    if (var0 == NULL) {
        return 0;
    }

    func_02010828(GameState::GetInstance());

    char var1[0x38];
    ((SafeAllocator*)var1)->ResetAllocatorPointer();
    func_020de824(var1 + 0x14);
    func_0207cbe8(var1);
    func_0207cbe8(var1);
    *(void**)(var1 + 0x2c) = arg0 + Enum_ov003_02175cb0_2164;
    int var2 = var0->unknown_8_0_ <= 7;
    if (var2) {
        func_0207d134(var1, var0->unknown_16_, *(signed char*)(arg0 + Enum_ov003_02175cb0_4156));
    } else {
        func_0207cf30(var1, var0->unknown_16_, *(unsigned char*)(arg0 + Enum_ov003_02175cb0_4156), arg1);
    }
    func_0207cc0c(var1);
    return 0;
}
