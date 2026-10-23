#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov017_021d60f4(void*);

#include "Combat/EntryGetterTypes.h"
#include "World/Object3D.h"
struct Struct_0203dce4_2 { char unknown_0_[0xc]; struct Struct_0203dce4* unknown_c_[0x20]; };
extern "C" void* func_0203cf4c(void);
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);
extern "C" int func_02040528(int* arg0);
extern "C" void* func_0203d004(void*);
extern const char data_ov001_021657d4[];

struct Struct_0204027c_2;
extern "C" int func_02040404(struct Struct_0204027c_2* arg0, const char* arg1);
struct Struct_0204039c;
extern "C" void func_0204039c(struct Struct_0204039c* arg0, int arg1);

struct Struct_0203d028_10;
extern "C" void func_0204128c(struct Struct_0203d028_10* arg0);
extern "C" void func_02040504(int* arg0);

struct Struct_0203dd10;
extern "C" void func_0203dd10(Struct_0203dd10* arg0, unsigned int arg1, int arg2);

struct Struct_ov001_02161754 { int unknown_0_; int unknown_4_; char unknown_8_[8]; };
struct Struct_ov001_02165880_47 { char unknown_0_[4]; struct Struct_ov001_02161754* unknown_4_; };
extern Struct_ov001_02165880_47 data_ov001_02165880;

// USA: func_ov001_02161754
extern "C" ARM int func_ov001_02161754(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 < 0) {
        return 0;
    }
    if (data_ov001_02165880.unknown_4_[var0].unknown_0_ != 6 && data_ov001_02165880.unknown_4_[var0].unknown_0_ != 2) {
        return 0;
    }

    void* var1 = func_0203cf4c();
    struct Struct_0203dce4_2* var2 = (struct Struct_0203dce4_2*)var1;
    struct Struct_0203dce4* var3 = func_0203dce4(var2, data_ov001_02165880.unknown_4_[var0].unknown_4_);
    if (var3 == NULL) {
        return 0;
    }

    if (*(int*)((char*)var3 + 0x14) != 0) {
        int var4 = func_02040528(&var3->unknown_0_);
        struct Struct_0204027c_2* var5 = (struct Struct_0204027c_2*)func_0203d004(var1);
        char var6[0x10];
#if defined(jpn)
        sprintf(var6, data_ov001_021657d4, var4 + 16);
#else
        sprintf(var6, data_ov001_021657d4, var4 + 4);
#endif
        int var7 = func_02040404(var5, var6);
        func_0204039c((struct Struct_0204039c*)var5, var7);
    } else {
        if (var3->unknown_18_ != 0) {
            ((Object3D*)((unsigned char*)var3->unknown_18_))->Destroy();
            func_0204128c((struct Struct_0203d028_10*)var3->unknown_18_);
        }
    }

    func_02040504(&var3->unknown_0_);
    func_0203dd10((Struct_0203dd10*)var2, data_ov001_02165880.unknown_4_[var0].unknown_4_, 0);
    return 1;
}
