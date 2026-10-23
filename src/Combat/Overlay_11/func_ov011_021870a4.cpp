#if defined(jpn)
#define R(j,u) (j)
#define data_ov024_021ff384 data_ov023_021fe620
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021845f8(void* arg0, unsigned int arg1);
extern "C" void* func_ov011_021849c8(void*);
extern "C" int func_ov023_021fc1f4(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov011_021870a4 {
    void* unknown_0_;
    char unknown_4_[0x2c - 4];
};
extern char data_ov024_021ff384;

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c*, struct Struct_ov004_0215c30c_2*);

// USA: func_ov011_021870a4
extern "C" ARM int func_ov011_021870a4(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));

    void* var2 = func_ov017_021b2164();
    void* var3 = func_ov011_021845f8(var2, var1);
    if (!var3) return 0;

    ((SafeAllocator*)((char*)var3 + 4))->GetSizeWithLargestBlockRemoved();
    void* var4 = ((SafeAllocator*)((char*)var3 + 4))->Allocate(0x2c);
    if (!var4) return 0;

    Struct_ov011_021870a4 var5;
    var5.unknown_0_ = &data_ov024_021ff384;
    memcpy(var4, &var5, 0x2c);

    if (!func_ov023_021fc1f4(var4, var2, var0, var1)) return 0;

    void* var6 = func_ov011_021849c8(var2);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var6, (struct Struct_ov004_0215c30c_2*)var4);
    return 1;
}
