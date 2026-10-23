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

struct Struct_ov001_0215f740 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
extern "C" void func_ov001_0215acb4(Struct_ov001_0215f740* arg0);

struct Struct_ov001_02165880_38 { char unknown_0_[4]; Struct_ov001_0215f740* unknown_4_; };
extern Struct_ov001_02165880_38 data_ov001_02165880;

// USA: func_ov001_0215f740
extern "C" ARM int func_ov001_0215f740(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 >= 0x20) {
        return 0;
    }
    struct Struct_0203dce4_2* var1 = (struct Struct_0203dce4_2*)func_0203cf4c();
    struct Struct_0203dce4* var2 = func_0203dce4(var1, var0);
    if (var2 == NULL) {
        return 0;
    }
    if (*(int*)((char*)var2 + 0x14) != 0) {
        int var3 = func_02040528(&var2->unknown_0_);
        struct Struct_0204027c_2* var4 = (struct Struct_0204027c_2*)func_0203d004(var1);
        char var5[0x10];
#if defined(jpn)
        sprintf(var5, data_ov001_021657d4, var3 + 16);
#else
        sprintf(var5, data_ov001_021657d4, var3 + 4);
#endif
        int var6 = func_02040404(var4, var5);
        func_0204039c((struct Struct_0204039c*)var4, var6);
    } else {
        if (var2->unknown_18_ != 0) {
            ((Object3D*)((unsigned char*)var2->unknown_18_))->Destroy();
            func_0204128c((struct Struct_0203d028_10*)var2->unknown_18_);
        }
    }
    func_02040504(&var2->unknown_0_);
    func_0203dd10((Struct_0203dd10*)var1, var0, 0);

    if (data_ov001_02165880.unknown_4_ != NULL) {
        for (int var7 = 0; var7 < 0x20; var7++) {
            if (data_ov001_02165880.unknown_4_[var7].unknown_0_ == 2 || data_ov001_02165880.unknown_4_[var7].unknown_0_ == 6) {
                if (data_ov001_02165880.unknown_4_[var7].unknown_4_ == var0) {
                    func_ov001_0215acb4(&data_ov001_02165880.unknown_4_[var7]);
                }
            }
        }
    }
    return 1;
}
