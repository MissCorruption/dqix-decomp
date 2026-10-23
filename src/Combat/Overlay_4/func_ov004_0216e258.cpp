#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" int func_020ab7a8(void* arg0, int arg1);
extern "C" void func_0200fb94(char* arg0, unsigned char arg1);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(char* arg0);
extern "C" void* func_ov004_0216ae9c(void* arg0, int arg1);
extern "C" void func_ov023_021f8960(char* arg0, short arg1, unsigned short arg2);

struct Struct_ov004_02171034_3 {
#if defined(jpn)
#else
    unsigned char unknown_0_[2];
#endif
    unsigned char unknown_2_;
#if defined(jpn)
    unsigned char unknown_1_[4];
#else
#endif
    unsigned char unknown_3_;
#if defined(jpn)
    unsigned char unknown_6_[6];
#else
    unsigned char unknown_4_[0xc];
#endif
    unsigned char* unknown_10_;
};
extern struct Struct_ov004_02171034_3 data_ov004_02171034;

// USA: func_ov004_0216e258
extern "C" ARM int func_ov004_0216e258(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    int var1 = func_020ab7a8((void*)data_ov004_02171034.unknown_10_, 0);
    int var2 = 1;
    if (var1 == 5) {
        func_0200fb94((char*)var0, 5);
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x80);
        data_ov004_02171034.unknown_2_ = 0;
        data_ov004_02171034.unknown_10_[1] = 0;
        func_ov011_021848a0(arg0, 0x3e7);
        var2 = 0;
    } else if (var1 == 1) {
        char* var3 = (char*)func_020421a0();
        func_02043204(var3);
        func_02043124(var3);
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x80);
        void* var4 = func_ov004_0216ae9c(arg0, 0xd4);
        func_ov023_021f8960((char*)var4, 0, 7);
        data_ov004_02171034.unknown_10_[1] = 0;
        func_ov011_021848a0(arg0, 0x1f4);
        var2 = 0;
    } else if (var1 == 2) {
        char* var5 = (char*)func_020421a0();
        func_02043204(var5);
        func_02043124(var5);
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x80);
        void* var6 = func_ov004_0216ae9c(arg0, 0xd4);
        func_ov023_021f8960((char*)var6, 0, 7);
        data_ov004_02171034.unknown_10_[1] = 0;
        func_ov011_021848a0(arg0, 0x1f5);
        var2 = 0;
    } else if (var1 == 3) {
        char* var7 = (char*)func_020421a0();
        func_02043204(var7);
        func_02043124(var7);
        data_ov004_02171034.unknown_3_ = 4;
        data_ov004_02171034.unknown_10_[1] = 0;
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x80);
        func_ov011_021848a0(arg0, 0x190);
        var2 = 0;
    }
    BackgroundLoader::RemoveLockGlobal();
    return var2;
}
