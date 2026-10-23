#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov017_021d612c(void*);
extern SafeAllocator* data_ov001_021658b8[8];
extern "C" void* func_02010768(void* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);

struct Struct_0204a120;
extern "C" void func_0204a120(struct Struct_0204a120* arg0);

struct Struct_0204a3f0_2;
struct Struct_0204a3f0;
extern "C" void func_0204a3f0(struct Struct_0204a3f0_2* arg0, struct Struct_0204a3f0* arg1);

extern "C" void func_0204a440(char* arg0, const char* arg1);
extern "C" void func_0204a464(char* arg0, const char* arg1);

struct Struct_ov001_02161650 { int unknown_0_; int unknown_4_; int unknown_8_; void* unknown_c_; };
struct Struct_ov001_02165880_46 { char unknown_0_[4]; Struct_ov001_02161650* unknown_4_; };
extern struct Struct_ov001_02165880_46 data_ov001_02165880;

// USA: func_ov001_02161650
extern "C" ARM int func_ov001_02161650(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    SafeAllocator* var1 = data_ov001_021658b8[0];
    void* var2 = func_02010768(var0);

    int var3 = func_ov017_021d60f4(arg0);
    void* var4 = func_ov017_021d612c(arg0 + 0x8);
    void* var5 = func_ov017_021d612c(arg0 + 0x10);

    void* var6 = data_ov001_02165880.unknown_4_[var3].unknown_c_;
    if (var6 == 0 || data_ov001_02165880.unknown_4_[var3].unknown_0_ != 1) {
        return 0;
    }

    void* var7 = var1->Allocate(0x268);
    if (var7 == 0) return 0;

    *(void**)((char*)var2 + 0x4) = func_020100bc(var0);

    func_0204a120((struct Struct_0204a120*)var7);
    func_0204a3f0((struct Struct_0204a3f0_2*)var7, (struct Struct_0204a3f0*)var6);
    ((Object3D*)var6)->UntrackAllBones();
    func_0204a440((char*)var7, (const char*)var4);
    func_0204a464((char*)var7, (const char*)var5);
    ((Object3D*)((unsigned char*)var6))->StopCurrentAnimation();
    ((Object3D*)((unsigned char*)var6))->EnableFlag(1);
    ((Object3D*)((unsigned char*)var6))->EnableFlag(0x20);

    func_020100c4(var0, (int)var7);
    return 1;
}
