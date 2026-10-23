#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_0218466c(void* arg0, unsigned short arg1);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
struct ObjectArchiveLoadInfo;
struct Struct_0203d028_18;

struct Struct_ov023_021fd120 { char unknown_0_[8]; unsigned short unknown_8_; unsigned short unknown_a_; };

// USA: func_ov023_021fd120
extern "C" ARM void func_ov023_021fd120(struct Struct_ov023_021fd120* arg0, void* arg1, int arg2, int arg3) {
    if (arg2 == 0 || arg3 == 0) return;
    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    void* var1 = func_ov011_0218466c(arg1, arg0->unknown_a_);
    if (var0 == NULL || var1 == NULL) return;
    SafeAllocator* var2 = (SafeAllocator*)((char*)var0 + 4);
    var2->GetSizeWithLargestBlockRemoved();
    func_0207df90((char*)var1 + 4);
    ((Object3D*)((char*)arg0 + 0x20))->Initialize();
    struct Struct_ov023_021fd120_2 { int unknown_0_; int unknown_4_; int unknown_8_; void* unknown_c_; int unknown_10_; int unknown_14_; int unknown_18_; int unknown_1c_; } var3;
    var3.unknown_4_ = arg2;
    var3.unknown_8_ = arg3;
    var3.unknown_c_ = var2;
    ((Object3D*)((int)((char*)arg0 + 0x20)))->LoadFromCHRArchive((ObjectArchiveLoadInfo*)((int)&var3));
    ((Object3D*)((char*)arg0 + 0x20))->MaybeSetBCFGAnimation(0, 0);
    ((Object3D*)((struct Struct_0203d028_18*)((char*)arg0 + 0x20)))->SetScale(0x10a, 0x10a, 0x10a);
    func_0207dfac((char*)var1 + 4);
    var2->GetSizeWithLargestBlockRemoved();
}
