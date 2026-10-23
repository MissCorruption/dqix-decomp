#if defined(jpn)
enum { Enum_ov017_021b6f9c_17408 = 0x4100, Enum_ov017_021b6f9c_174 = 0xfe, Enum_ov017_021b6f9c_1788 = 0x4ec, Enum_ov017_021b6f9c_2908 = 0x93c };
#else
enum { Enum_ov017_021b6f9c_17408 = 0x4400, Enum_ov017_021b6f9c_174 = 0xae, Enum_ov017_021b6f9c_1788 = 0x6fc, Enum_ov017_021b6f9c_2908 = 0xb5c };
#endif

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov000_021604f0(void);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020a1e54(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_020397c0(void* arg0);
struct Struct_02053f7c_3;
extern "C" void func_02053f7c(Struct_02053f7c_3* arg0, unsigned short arg1, int arg2);
extern "C" ARM void func_ov017_021c3f70(unsigned short arg0);
extern "C" void func_020a0c0c(void);
struct Struct_02038598_5;
extern "C" int func_02046b60(Struct_02038598_5* arg0, int arg1);
extern "C" void* func_02012fe4(void);
extern "C" void func_02017d68(void* arg0);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
struct Struct_020a3578;
extern "C" void func_020a3578(Struct_020a3578* arg0);

extern AllocatorUnion data_02114e20;

// USA: func_ov017_021b6f9c
extern "C" ARM void func_ov017_021b6f9c(char* arg0) {
    char* var0 = (char*)GetGameResources();
    unsigned short var1 = *(unsigned short*)(arg0 + 0x600 + 0xb6);
    int var2 = *(int*)(arg0 + 0x28);
    unsigned int var3 = var1 & 0x2000;

    unsigned short var4 = *(unsigned short*)(var0 + Enum_ov017_021b6f9c_17408 + Enum_ov017_021b6f9c_174);
    unsigned short* var5 = (unsigned short*)(var0 + Enum_ov017_021b6f9c_174 + Enum_ov017_021b6f9c_17408);
    if (var4 == *(unsigned short*)(arg0 + 0x24)) {
        var5[0] = 0;
        var5[1] = 0;
    }

    if (*(int*)(arg0 + 0x6ac) != 0) {
        func_ov000_021604f0();
    }

    SafeAllocator* var6 = (SafeAllocator*)(arg0 + 0x8);
    void* var7 = var6->GetSignedAllocator();
    if (var7) {
        var6->Destroy();
        func_02012da4(&data_02114e20, var7);
    }

    if (*(unsigned short*)(arg0 + 0x600 + 0xb6) & 0x800) {
        func_020a1e54(1);
        func_020a1f4c(1);
    }

    GameObject* var8 = GameState::GetInstance()->GetUnknownGameObject();
    func_020397c0(var8);
    func_02053f7c((Struct_02053f7c_3*)var8, 0, 0);
    func_ov017_021c3f70(0);

    var6->ResetAllocatorPointer();
    func_020a3578((Struct_020a3578*)(arg0 + 0x1c));

    *(int*)(arg0 + 0x6ac) = 0;
    *(int*)(arg0 + 0x6b0) = 0;
    *(unsigned short*)(arg0 + 0x600 + 0xb4) = 1;
    *(unsigned short*)(arg0 + 0x600 + 0xb6) = 0;
    *(int*)(arg0 + 0x6b8) = 0;

    ClearFlags00((GameResources*)var0, 0x800);
    func_020a0c0c();

    int* var9 = *(int**)(var0 + 0x3000 + Enum_ov017_021b6f9c_1788);
    char* var10 = *(char**)(var0 + 0x3000 + Enum_ov017_021b6f9c_2908);
    int var11;
    if (var2 < 0 || func_02046b60((Struct_02038598_5*)var9, 4) == 0) {
        var11 = 1;
    } else {
        var11 = 0;
    }

    void* var12 = func_02012fe4();
    if (var11 != 0 && var3 == 0 && *(unsigned char*)(var10 + 8) != 0) {
        func_02017d68(var12);
    }

    func_020466f4((Struct_02038598_4*)func_020d6c00(), 0x40000);
}
