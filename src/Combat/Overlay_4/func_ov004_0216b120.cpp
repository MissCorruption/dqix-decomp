#if defined(jpn)
#define R(j,u) (j)
#define data_ov023_021ff4b0 data_ov023_021fe73c
#define func_ov023_021fc408 func_ov023_021fb700
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void*);
struct Struct_ov004_0216b120;
extern "C" int func_ov023_021fc408(struct Struct_ov004_0216b120* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov023_021ff4b0;

struct Struct_ov004_0216b120_2 { void* unknown_0_; char unknown_4_[0x30 - 4]; };

// USA: func_ov004_0216b120
extern "C" ARM void func_ov004_0216b120(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
    void* var0 = func_ov011_021845f8(arg0, arg2);
    void* var1 = ((SafeAllocator*)((char*)var0 + 4))->Allocate(0x30);
    if (!var1) {
        return;
    }

    struct Struct_ov004_0216b120_2 var2;
    var2.unknown_0_ = &data_ov023_021ff4b0;
    memcpy(var1, &var2, sizeof(Struct_ov004_0216b120_2));

    func_ov023_021fc408((struct Struct_ov004_0216b120*)var1, (int)arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, 0xf);

    void* var3 = func_ov011_021849c8(arg0);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var3, (struct Struct_ov004_0215c30c_2*)var1);
}
