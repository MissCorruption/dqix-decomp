#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov017_021a316c_4544 = 0xfb0, Enum_ov017_021a316c_4412 = 0xf2c, Enum_ov017_021a316c_4676 = 0x1034, Enum_ov017_021a316c_1500 = 0x58c, Enum_ov017_021a316c_9828 = 0x26a4 };
#else
enum { Enum_ov017_021a316c_4544 = 0x11c0, Enum_ov017_021a316c_4412 = 0x113c, Enum_ov017_021a316c_4676 = 0x1244, Enum_ov017_021a316c_1500 = 0x5dc, Enum_ov017_021a316c_9828 = 0x2664 };
#endif

extern "C" void func_020da244(void* arg0);
extern "C" void* func_02012fe4(void);
extern int data_ov017_021d82fc;

extern "C" void func_ov017_021a27e8(void* arg0);

extern "C" void* func_0203cf4c(void);
struct Struct_0203cfb4;
extern "C" void func_0203cfb4(struct Struct_0203cfb4* arg0);

struct Struct_0201c014;
extern "C" void func_0208f7ec(struct Struct_0201c014* arg0);

struct Struct_0200ffc0;
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
struct Struct_0200ffd0;
extern "C" void* func_0200ffd0(struct Struct_0200ffd0* arg0);

extern "C" void func_0200fd48(GameState* arg0, int arg1);

struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);

// USA: func_ov017_021a316c
extern "C" ARM void func_ov017_021a316c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02012fe4();
    int var2;
    int var3;
    int var4;

    if (((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4544))->GetSignedAllocator()) {
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4544))->Destroy();
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4544))->ResetAllocatorPointer();
    }

    if (((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4412))->GetSignedAllocator()) {
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4412))->Destroy();
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4412))->ResetAllocatorPointer();
    }

    if (((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4412))->GetSignedAllocator()) {
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4412))->Destroy();
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4412))->ResetAllocatorPointer();
    }

    if (((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4676))->GetSignedAllocator()) {
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4676))->Destroy();
        ((SafeAllocator*)(arg0 + Enum_ov017_021a316c_4676))->ResetAllocatorPointer();
    }

    func_020da244(&data_ov017_021d82fc);
    func_ov017_021a27e8(arg0);

    for (var2 = 0; var2 < 0x30; var2++) {
        GameObject* var5 = var0->GetMaybeFieldMonsterByIndex(var2 + 0x70);
        if (var5) {
            ((Object3D*)((unsigned char*)var5))->Destroy();
        }
    }

    ((SafeAllocator*)(arg0 + 0xc4))->Reset();
    func_0207df50((struct Struct_0203d028*)(arg0 + Enum_ov017_021a316c_1500));

    for (var3 = 0; var3 < 0x30; var3++) {
        GameObject* var6 = var0->GetMaybeFieldMonsterByIndex(var3 + 0x70);
        if (var6) {
            ((Object3D*)((unsigned char*)var6))->Destroy();
        }
    }

    func_0203cfb4((struct Struct_0203cfb4*)func_0203cf4c());
    func_0208f7ec((struct Struct_0201c014*)(var1 + Enum_ov017_021a316c_9828));

    if (func_0200ffc0((struct Struct_0200ffc0*)var0)) {
        func_0200fd48(var0, 0xc9);
    }
    if (func_0200ffd0((struct Struct_0200ffd0*)var0)) {
        func_0200fd48(var0, 0xca);
    }

    for (var4 = 1; var4 < 4; var4++) {
        if (var0->GetGameObjectByIndex(var4 + 0xca)) {
            func_0200fd48(var0, var4 + 0xca);
        }
    }
    func_0200fd48(var0, 0xce);
}
