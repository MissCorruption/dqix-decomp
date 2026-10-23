#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Combat/MapDisplay.h"

extern "C" void func_0204af64(struct Struct_02020cb8* arg0);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);

extern "C" void func_0204b5b4(void*, int);

struct Struct_02020cb8_5 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 4; unsigned char unknown_1c_4_ : 4; };
extern "C" int func_0204b5e8(struct Struct_02020cb8_5* arg0, int arg1, int arg2);

extern "C" void func_0204c684(void*);

struct Struct_0204fbf8_2 {
    char unknown_0_[0x4];
    struct Struct_02020cb8* unknown_4_;
    void* unknown_8_;
    char unknown_c_[0xa0 - 0xc];
    int unknown_a0_;
    int unknown_a4_;
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[0xb4 - 0xac];
    short unknown_b4_;
    short unknown_b6_;
    char unknown_b8_[0xc4 - 0xb8];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_;
    char unknown_c6_[0xe0 - 0xc6];
};
extern "C" void func_0204fbf8(struct Struct_0204fbf8_2* arg0);

extern int data_0211e33c;

extern "C" int func_ov017_021d60f4(void*);

struct Struct_ov001_02153884 { int unknown_0_; int unknown_4_; };
struct Struct_ov001_021658d8 { struct Struct_ov001_02153884* unknown_0_; int unknown_4_; };
extern "C" void* func_ov001_02153884(struct Struct_ov001_021658d8* arg0, int arg1);
extern struct Struct_ov001_021658d8 data_ov001_021658d8;

extern "C" void func_0204f160(unsigned char* arg0, int arg1, int arg2);

#if defined(jpn)
extern "C" void func_02050678(void* arg0, short arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7);
#else
extern "C" void func_0204f41c(void* arg0, short arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);
#endif

// USA: func_ov001_0215e7c0
extern "C" ARM int func_ov001_0215e7c0(void* arg0) {
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();

    struct Struct_02020cb8 var0;
    func_0204af64(&var0);
    var0.unknown_1c_0_ = 1;
    var0.unknown_1c_4_ = 0;
    func_0204b11c((unsigned char*)&var0, 0);
    func_0204b5b4(&var0, 0);
    func_0204b5e8((struct Struct_02020cb8_5*)&var0, 0, 0);

    struct Struct_0204fbf8_2 var1;
    func_0204c684(&var1);
    var1.unknown_4_ = &var0;
    var1.unknown_8_ = &data_0211e33c;
    var1.unknown_a8_ = 0x20;
    var1.unknown_aa_ = 0x18;
    var1.unknown_a4_ = 0x6000;
    var1.unknown_b4_ = 0xc;
    var1.unknown_b6_ = 0x10;
    unsigned char var2 = var1.unknown_c5_;
    var1.unknown_a0_ = 0x60;
    var1.unknown_c5_ = var2 | 0x10;

    int var3 = func_ov017_021d60f4(arg0);
    struct Struct_ov001_02153884* var4 = (struct Struct_ov001_02153884*)func_ov001_02153884(&data_ov001_021658d8, var3);
    if (var4 == 0) {
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }

    func_0204f160((unsigned char*)&var1, 0x60, 0);

    short var5;
    short var6;
#if defined(jpn)
    func_02050678(&var1, 0, 0, (void*)var4->unknown_4_, 0xc, 0xf, &var5, &var6);
#else
    func_0204f41c(&var1, 0, 0, (void*)var4->unknown_4_, 0xc, 0xf, &var5, &var6, 0);
#endif

    func_0204fbf8(&var1);
    BackgroundLoader::RemoveLockGlobal();
    return 1;
}
