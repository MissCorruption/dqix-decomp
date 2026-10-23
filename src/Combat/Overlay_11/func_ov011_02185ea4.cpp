#if defined(jpn)
#define R(j,u) (j)
#define data_ov023_021fee68 data_ov023_021fe118
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "World/ZoneLootableRecord.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_02185ea4_3 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    int unknown_10_;
    int unknown_14_;
    Struct_ov011_02184c30 unknown_18_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM int func_ov023_021fb534(void* arg0, void* arg1, int arg2, int arg3, unsigned int arg4, int arg5);

struct Struct_ov004_0215c30c;
struct Struct_ov004_0215c30c_2;
extern "C" void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1);

extern char data_ov023_021fee68;

struct Struct_ov011_02185ea4 {
    char unknown_0_[0x54];
    Struct_0204719c unknown_54_;
};

struct Struct_ov011_02185ea4_2 {
    void* unknown_0_;
    char unknown_4_[0x20 - 4];
    Struct_ov011_02185ea4 unknown_20_;
    char unknown_7c_[0xb4 - 0x20 - 0x5c];
};

// USA: func_ov011_02185ea4
extern "C" ARM int func_ov011_02185ea4(struct Struct_ov011_02185ea4_3* arg0) {
    int var0 = func_ov011_02184c30(&arg0->unknown_0_);
    int var1 = func_ov011_02184c30(&arg0->unknown_8_);
    int var2;
    if (arg0->unknown_10_ == 2) var2 = arg0->unknown_14_;
    else var2 = 0;
    if (var2 == 0) return 0;

    int var3 = func_ov011_02184c30(&arg0->unknown_18_);

    void* var4 = func_ov017_021b2164();
    void* var5 = func_ov011_021845f8(var4, var1);
    if (var5 == 0) return 0;

    ((SafeAllocator*)((char*)var5 + 4))->GetSizeWithLargestBlockRemoved();
    void* var6 = ((SafeAllocator*)((char*)var5 + 4))->Allocate(0xb4);
    if (var6 == 0) return 0;

    struct Struct_ov011_02185ea4_2 var7;
    struct Struct_ov011_02185ea4* var8 = &var7.unknown_20_;
    var7.unknown_0_ = &data_ov023_021fee68;
    func_02048080((struct Struct_0204719c*)((char*)var8 + 0x54));
    memcpy(var6, &var7, sizeof(Struct_ov011_02185ea4_2));

    if (func_ov023_021fb534(var6, var4, var0, var1, var2, var3) == 0) {
        func_02048080(&var7.unknown_20_.unknown_54_);
        return 0;
    }

    void* var9 = func_ov011_021849c8(var4);
    func_ov023_021f67ac((struct Struct_ov004_0215c30c*)var9, (struct Struct_ov004_0215c30c_2*)var6);
    func_02048080(&var7.unknown_20_.unknown_54_);
    return 1;
}
