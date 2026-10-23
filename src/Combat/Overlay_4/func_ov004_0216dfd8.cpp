#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_0216dfd8_84 = 0x50, Enum_ov004_0216dfd8_32625 = 0x7c9d };
#define data_ov004_02170708 data_ov004_02170fb4
#else
enum { Enum_ov004_0216dfd8_84 = 0x54, Enum_ov004_0216dfd8_32625 = 0x7f71 };
#endif

#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void*);
#if defined(jpn)
extern "C" void func_ov023_021f745c(void* arg0, void* arg1, int arg2, int arg3, void* arg4, int arg5, int arg6, int arg7);
#else
extern "C" void func_ov023_021f745c(void* arg0, void* arg1, int arg2, int arg3, int arg4, void* arg5, int arg6, int arg7, int arg8);
#endif

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov004_02170708;
extern char data_ov004_02170720;
extern char data_ov004_02170739;
extern char data_ov023_021fe4f0;

struct Struct_ov004_0216dfd8 { void* unknown_0_; char unknown_4_[Enum_ov004_0216dfd8_84 - 4]; };

// USA: func_ov004_0216dfd8
extern "C" ARM int func_ov004_0216dfd8(void* arg0) {
    void* var0 = 0;
    unsigned char var1 = *((unsigned char*)GameState::GetInstance() + Enum_ov004_0216dfd8_32625);
    switch (var1) {
        case 0: var0 = &data_ov004_02170708; break;
        case 1: var0 = &data_ov004_02170720; break;
        case 2: var0 = &data_ov004_02170739; break;
    }

    void* var2 = func_ov011_021845f8(arg0, 3);
    if (!var2) {
        return 0;
    }
    ((SafeAllocator*)((char*)var2 + 4))->GetSizeWithLargestBlockRemoved();
    void* var3 = ((SafeAllocator*)((char*)var2 + 4))->Allocate(Enum_ov004_0216dfd8_84);
    if (!var3) {
        return 0;
    }

    struct Struct_ov004_0216dfd8 var4;
    var4.unknown_0_ = &data_ov023_021fe4f0;
    memcpy(var3, &var4, sizeof(Struct_ov004_0216dfd8));

#if defined(jpn)
    func_ov023_021f745c(var3, arg0, 0x67, 3, var0, 0, 3, 2);
#else
    func_ov023_021f745c(var3, arg0, 0x67, 3, 0, var0, 0, 3, 2);
#endif

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(arg0), (struct Struct_ov004_0215c30c_2*)var3);
    return 0;
}
