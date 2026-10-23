#if defined(jpn)
enum { Enum_ov017_021a4cf0_1808 = 0x500, Enum_ov017_021a4cf0_1828 = 0x4c4, Enum_ov017_021a4cf0_1788 = 0x4ec };
#else
enum { Enum_ov017_021a4cf0_1808 = 0x710, Enum_ov017_021a4cf0_1828 = 0x724, Enum_ov017_021a4cf0_1788 = 0x6fc };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/EntryGetterTypes.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0203cf4c(void);
struct Struct_0203dce4_2;
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);
extern "C" int func_02040528(int* arg0);
extern "C" int* func_02094d6c(void);
extern "C" void func_02095924(int* arg0, int arg1);
extern "C" void* func_0205ec34(void* arg0);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);
struct Struct_02000c9c_59;
extern "C" void func_ov017_021b8d1c(void* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

extern int data_ov017_021d76d8;
extern int data_ov017_021d83a8;

struct Struct_ov017_021a4cf0 {
    int unknown_0_;
    char unknown_4_[0x14 - 0x4];
    int unknown_14_;
    char unknown_18_[0x34 - 0x18];
};

// USA: func_ov017_021a4cf0
extern "C" ARM void func_ov017_021a4cf0(char* arg0) {
    void* var0 = func_0203cf4c();
    short var1 = *(short*)((char*)&data_ov017_021d76d8 + 0x2);
    struct Struct_0203dce4* var2 = func_0203dce4((struct Struct_0203dce4_2*)var0, var1);
    if (var2 == NULL) {
        return;
    }
    int* var3 = (int*)func_02040528(&var2->unknown_0_);
    if (var3 == NULL) {
        return;
    }
    void* var4 = *(void**)(arg0 + 0x3000 + Enum_ov017_021a4cf0_1808);
    if (*((unsigned char*)var4 + 0x130) != 0) {
        return;
    }
    int* var5 = func_02094d6c();
    unsigned short var6 = *(unsigned short*)var3;
    func_02095924(var5, var6 & 0xff);
    GameState* var7 = GameState::GetInstance();
    unsigned short var8 = *(unsigned short*)var3;
    *(int*)((char*)var7 + 0x5000 + Enum_ov017_021a4cf0_1828) = var8;
    void* var9 = func_0205ec34((char*)var7 + 0x5000);
    struct Struct_ov017_021a4cf0 var10;
    var10.unknown_0_ = *(unsigned short*)var3;
    var10.unknown_14_ = *(unsigned short*)&data_ov017_021d83a8;
    if (func_020649b0(var9, 0, &var10)) {
        func_0206f81c(&var10);
        return;
    }
    func_ov017_021b8d1c(*(void**)(arg0 + 0x3000 + Enum_ov017_021a4cf0_1808));
    *(int*)((char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021a4cf0_1808)) + 0x114) = (int)var3;
    *(int*)((char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021a4cf0_1808)) + 0x124) = *(unsigned short*)&data_ov017_021d83a8;
    func_020469b4((struct Struct_0201bdac_2*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021a4cf0_1788)),
                      (struct Struct_0201bdac*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021a4cf0_1808)));
}
