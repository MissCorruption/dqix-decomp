#if defined(jpn)
enum { Enum_ov025_021e267c_12 = 0x4 };
#else
enum { Enum_ov025_021e267c_12 = 0xc };
#endif

#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"

extern "C" void* func_ov025_021e8a54(char* arg0);
extern "C" unsigned char func_ov025_021e8ba4(void* arg0);
struct ObjectArchiveLoadInfo;

struct Struct_ov025_021e267c;
struct Struct_0208f410;

struct Struct_0203d028_11 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};
extern "C" void func_0203dafc(struct Struct_0203d028_11* arg0);

struct Struct_ov025_021e267c_2;
struct Struct_ov025_021e267c_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    struct Struct_ov025_021e267c_3* unknown_8_;
};
extern "C" void func_ov025_021e8bac(struct Struct_ov025_021e267c_2* arg0, struct Struct_ov025_021e267c_3* arg1);

extern int data_ov025_021ef988;

// USA: func_ov025_021e267c
extern "C" ARM void func_ov025_021e267c(int arg0, int arg1, int arg2, int arg3) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = *(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e267c_12);
    void* var2 = func_ov025_021e8a54((char*)var1);
    GameObject* var3 = var0->GetGameObjectByIndex(arg0);
    if (!var3) return;
    struct Struct_ov025_021e267c_3* var4 = (struct Struct_ov025_021e267c_3*)((SafeAllocator*)var2)->Allocate(0xc);
    if (!var4) return;
    char* var5 = *(char**)((char*)var3 + 0x14);
    char var6[0x20];
    if (var5) {
        strcpy(var6, var5);
    }
    void* var7 = (void*)((Object3D*)((struct Struct_ov025_021e267c*)var3))->GetCurrentAnimationTime();
    struct Struct_0203d028_11 var8;
    func_0203dafc(&var8);
    void* var9 = *(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e267c_12);
    var8.unknown_c_ = (int)var2;
    var8.unknown_4_ = arg1;
    var8.unknown_8_ = arg2;
    var8.unknown_10_ = 1;
    unsigned char var10 = func_ov025_021e8ba4(var9);
    var8.unknown_1c_ = var10 + 4;
    var3->obj3D_.LoadFromCCHROrCMOTArchive((ObjectArchiveLoadInfo*)&var8, (int (*)(BCFG::AnimationRecord*))arg3);
    if (var5) {
        var3->obj3D_.MaybeSetRegularAnimation((char const*)var6, 0);
        ((Object3D*)((struct Struct_0208f410*)var3))->SetCurrentAnimationTime((unsigned int)var7);
    }
    var4->unknown_0_ = 0;
    var4->unknown_2_ = arg0;
    var4->unknown_4_ = var8.unknown_1c_;
    void* var11 = *(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e267c_12);
    func_ov025_021e8bac((struct Struct_ov025_021e267c_2*)var11, var4);
}
