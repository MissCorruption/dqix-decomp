#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "World/Zone3D.h"
#include "std_library_functions.h"

#if defined(jpn)
#define data_020f1b50 data_020f1cc8
#define data_020f1b52 data_020f1cca
#endif

struct Struct_020a6728 {
    Object3D unknown_0_;
    char unknown_ac_[4];
    unsigned short unknown_b0_;
    unsigned short unknown_b2_;
    unsigned short unknown_b4_;
    unsigned short unknown_b6_;
    char unknown_b8_[0x28];
    unsigned char unknown_e0_;
    char unknown_e1_[0x63];
    Vector3i unknown_144_;
    char unknown_150_[0x20];
};
struct Struct_02095924_2;
struct Struct_020a6728_2;
struct Struct_0200ffc0;
struct Struct_02033834;
struct Struct_02033fdc;
struct Struct_ov017_021d82fc { SafeAllocator* unknown_0_; char* unknown_4_; };
extern "C" Struct_02095924_2* func_02011584(void*);
extern "C" Struct_020a6728_2* func_02099950(Struct_02095924_2*, int);
extern "C" void* func_0200ffc0(Struct_0200ffc0*);
void* LoadFileIntoNewAllocation(const char*, SafeAllocator&, unsigned int*);
extern "C" void func_020a75a0(char*);
extern "C" void func_0207df90(char*);
extern "C" void func_0207dfac(char*);
extern "C" Zone3D* func_02012fe4();
extern "C" void func_02033874(Struct_02033834*, int);
extern "C" void func_02033fdc(Struct_02033fdc*);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" void func_020da1ac(void*);
extern "C" void func_020a72ac(Zone3D*, int);
extern char data_020f1b50[];
extern char data_020f1b52[];
extern Struct_ov017_021d82fc data_ov017_021d82fc;

// USA: func_020a6728
// JPN: func_020a84cc
// KEEP-NAME
extern "C" ARM void func_020a6728(GameResources* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    Struct_020a6728_2* var1 = func_02099950(func_02011584(var0), arg1);
    const char* var2 = 0;
    if (var1 != 0) var2 = (const char*)var1 + 5;
    if (arg1 != 10000 && arg1 != 10100) {
        if (arg1 < 20000 || arg1 > 29999 || var2 == 0 || strstr(var2, data_020f1b50) != 0)
            return;
    }
    BackgroundLoader* var3 = BackgroundLoader::GetInstance();
    SafeAllocator* var4 = &arg0->allocator_array_38[7];
    char* var5 = (char*)&arg0->unknown_2cc_ + 0x310;
    func_0200ffc0((Struct_0200ffc0*)var0);
    if (var3->GetNumQueuedTasks() > 0) return;
    unsigned int var6;
    void* var7 = LoadFileIntoNewAllocation(data_020f1b52, *var4, &var6);
    if (var7 == 0) return;
    Struct_020a6728* var8 = (Struct_020a6728*)var4->Allocate(0x170);
    if (var8 == 0) return;
    func_020a75a0((char*)var8);
    ObjectArchiveLoadInfo var9;
    var9.unk_0 = 0;
    var9.fileData = 0;
    var9.unk_8 = 0;
    var9.allocator = 0;
    var9.unk_10 = 0;
    var9.unk_14 = 0;
    var9.unk_18 = 0;
    var9.packageID = 0;
    func_0207df90(var5);
    var9.fileData = var7;
    var9.unk_8 = var6;
    var9.allocator = var4;
    var8->unknown_0_.LoadFromCHRArchive(&var9);
    func_0207dfac(var5);
    Zone3D* var10 = func_02012fe4();
    var0->GetUnknownGameObject();
    Struct_020236dc_3* var11 = var10->inline_020a6728();
    var8->unknown_0_.position_ = var11->unknown_0_;
    var11 = var10->inline_020a6728();
    var8->unknown_144_ = var11->unknown_0_;
    var8->unknown_0_.SetScale(0xa0, 0xa0, 0xa0);
    func_02033874((Struct_02033834*)var8, var10->unknown_2774_.unknown_c_);
    var8->unknown_b0_ = 0xc9;
    var8->unknown_b4_ = 0x106;
    var8->unknown_b6_ = 10;
    var8->unknown_0_.MakeVisible();
    func_02033fdc((Struct_02033fdc*)var8);
    var8->unknown_e0_ &= ~1;
    var8->unknown_0_.DisableFlag(0x180);
    var8->unknown_0_.EnableFlag(0x400000);
    func_0200fd38(var0, 0xc9, (GameObject*)var8);
    if (arg1 == 10000) {
        SafeAllocator* var12 = (SafeAllocator*)var4->Allocate(0x14);
        var12->ResetAllocatorPointer();
        void* var13 = var4->Allocate(0x3c00);
        var12->CreateTypeA(var13, 0x3c00);
        func_020da1ac(&data_ov017_021d82fc);
        data_ov017_021d82fc.unknown_0_ = var12;
        data_ov017_021d82fc.unknown_4_ = var5;
    }
    func_020a72ac(func_02012fe4(), 0);
}
