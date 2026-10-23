#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_0216e0c0_84 = 0x50, Enum_ov004_0216e0c0_32625 = 0x7c9d };
#else
enum { Enum_ov004_0216e0c0_84 = 0x54, Enum_ov004_0216e0c0_32625 = 0x7f71 };
#endif

#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void*);
#if defined(jpn)
extern "C" void func_ov023_021f745c(void* arg0, void* arg1, int arg2, int arg3, void* arg4, int arg5, int arg6, int arg7);
#else
extern "C" void func_ov023_021f745c(void* arg0, void* arg1, int arg2, int arg3, void* arg4, void* arg5, int arg6, int arg7, int arg8);
#endif

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov004_02170752;
extern char data_ov004_02170761;
extern char data_ov004_02170770;
extern char data_ov004_02170780;
extern char data_ov004_02170790;
extern char data_ov004_021707a0;
extern char data_ov023_021fe4f0;

struct Struct_ov004_0216e0c0 { void* unknown_0_; char unknown_4_[Enum_ov004_0216e0c0_84 - 4]; };

// USA: func_ov004_0216e0c0
extern "C" ARM int func_ov004_0216e0c0(void* arg0) {
    void* var0 = 0;
#if !defined(jpn)
    void* var1 = 0;
#endif
    unsigned char var2 = *((unsigned char*)GameState::GetInstance() + Enum_ov004_0216e0c0_32625);
    switch (var2) {
#if defined(jpn)
        case 0: var0 = &data_ov004_02170761; break;
#else
        case 0: var1 = &data_ov004_02170752; var0 = &data_ov004_02170761; break;
#endif
#if defined(jpn)
        case 1: var0 = &data_ov004_02170780; break;
#else
        case 1: var1 = &data_ov004_02170770; var0 = &data_ov004_02170780; break;
#endif
#if defined(jpn)
        case 2: var0 = &data_ov004_021707a0; break;
#else
        case 2: var1 = &data_ov004_02170790; var0 = &data_ov004_021707a0; break;
#endif
    }

    void* var3 = func_ov011_021845f8(arg0, 3);
    if (!var3) {
        return 0;
    }
    ((SafeAllocator*)((char*)var3 + 4))->GetSizeWithLargestBlockRemoved();
    void* var4 = ((SafeAllocator*)((char*)var3 + 4))->Allocate(Enum_ov004_0216e0c0_84);
    if (!var4) {
        return 0;
    }

    struct Struct_ov004_0216e0c0 var5;
    var5.unknown_0_ = &data_ov023_021fe4f0;
    memcpy(var4, &var5, sizeof(Struct_ov004_0216e0c0));

#if defined(jpn)
    func_ov023_021f745c(var4, arg0, 0x69, 3, var0, 1, 2, 0);
#else
    func_ov023_021f745c(var4, arg0, 0x69, 3, var1, var0, 1, 2, 0);
#endif

    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)func_ov011_021849c8(arg0), (struct Struct_ov004_0215c30c_2*)var4);
    return 0;
}
