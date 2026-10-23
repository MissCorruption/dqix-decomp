#include <globaldefs.h>

#include "Combat/Main/BattleList.h"
#include "Combat/ResourceScriptEntry.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
#define data_ov004_0217052d data_ov004_02170deb
#endif

struct Struct_02013fb4;
struct Struct_ov004_02162dd8 { int unknown_0_; SafeAllocator unknown_4_; };

struct Struct_ov004_02162dd8_2 {
    Struct_02082064 unknown_0_[4];
    int unknown_10_[2];
};

struct Struct_ov004_021707e8_8 {
#if defined(jpn)
    char unknown_0_[0xa];
    unsigned char unknown_4_;
    unsigned char unknown1_0_;
    char unknown_c_[8];
#else
    unsigned char unknown1_0_;
    char unknown_1_[3];
    unsigned char unknown_4_;
    char unknown_5_[0xf];
#endif
    Struct_ov004_02162dd8_2* unknown_14_;
};

extern Struct_ov004_021707e8_8 data_ov004_021707e8;
extern int data_ov004_02170854[];
extern char data_ov004_0217052d[];
extern unsigned char data_0211e33c[0x30000];

extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" Struct_ov004_02162dd8* func_ov011_021845f8(void*, int);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_0208274c(void* arg0, Struct_02013fb4* arg1, int arg2, int arg3);

static inline Struct_ov004_02162dd8_2* inline_ov000_0217fa60_2(int arg0, Struct_ov004_02162dd8_2* arg1, int arg2) {
    int var0 = arg2 * 12;
    return &arg1[var0 + (arg0 - 1)];
}

static inline short inline_ov004_02162dd8(Struct_02082064* arg0) {
    return arg0->unknown_0_0_;
}

static inline short inline_ov004_02162dd8_2(Struct_02082064* arg0) {
    return arg0->unknown_1_2_;
}

static inline short inline_ov004_02162dd8_3(Struct_02082064* arg0) {
    return arg0->unknown_2_4_;
}

// USA: func_ov004_02162dd8
extern "C" ARM int func_ov004_02162dd8(void* arg0) {
    if (data_ov004_021707e8.unknown_4_ == 0) {
        return 0;
    }
    data_ov004_021707e8.unknown1_0_ = 1;
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    int var2 = func_020114ec((char*)var0, var1);
    data_ov004_021707e8.unknown_14_ = 0;
    data_ov004_021707e8.unknown_14_ = (Struct_ov004_02162dd8_2*)func_ov011_021845f8(arg0, 4)->unknown_4_.Allocate(0x480);
    if (data_ov004_021707e8.unknown_14_ != 0) {
        memset(data_ov004_021707e8.unknown_14_, 0, 0x480);
        BackgroundLoader::AddLockGlobal();
        for (int var3 = 0; var3 < var2; var3++) {
            for (int var4 = 1; var4 < 13; var4++) {
                {
                    char var5[0x20] = {0};
                    unsigned int var6;
                    Struct_0201099c_2 var7;
                    sprintf(var5, data_ov004_0217052d, data_ov004_02170854[var4]);
                    if (LoadFileIntoMemory(var5, &data_0211e33c, &var6) != 0) {
                        GameObject* var8 = func_0200ff1c(var0, var1[var3]);
                        if (var8 != 0) {
                            unsigned char* var9 = (unsigned char*)func_02053c6c((unsigned char*)var8);
                            if (var9 != 0) {
                                func_0208274c(&var7, (Struct_02013fb4*)&data_0211e33c, var6, *(unsigned short*)(var9 + data_ov004_02170854[var4] * 2 + 0x16c));
                                Struct_ov004_02162dd8_2* var10 = inline_ov000_0217fa60_2(data_ov004_02170854[var4], data_ov004_021707e8.unknown_14_, var1[var3]);
                                var10->unknown_0_[0].unknown_0_0_ = inline_ov004_02162dd8(&var7.unknown_0_.unknown_8_);
                                var10->unknown_0_[0].unknown_1_2_ = inline_ov004_02162dd8_2(&var7.unknown_0_.unknown_8_) & 0x3ff;
                                var10->unknown_0_[0].unknown_2_4_ = inline_ov004_02162dd8_3(&var7.unknown_0_.unknown_8_) & 0x3ff;
                                var10->unknown_0_[1].unknown_0_0_ = inline_ov004_02162dd8(&var7.unknown_0_.unknown_c_);
                                var10->unknown_0_[1].unknown_1_2_ = inline_ov004_02162dd8_2(&var7.unknown_0_.unknown_c_) & 0x3ff;
                                var10->unknown_0_[1].unknown_2_4_ = inline_ov004_02162dd8_3(&var7.unknown_0_.unknown_c_) & 0x3ff;
                                var10->unknown_0_[2].unknown_0_0_ = inline_ov004_02162dd8(&var7.unknown_0_.unknown_10_);
                                var10->unknown_0_[2].unknown_1_2_ = inline_ov004_02162dd8_2(&var7.unknown_0_.unknown_10_) & 0x3ff;
                                var10->unknown_0_[2].unknown_2_4_ = inline_ov004_02162dd8_3(&var7.unknown_0_.unknown_10_) & 0x3ff;
                                var10->unknown_0_[3].unknown_0_0_ = inline_ov004_02162dd8_2(&var7.unknown_0_.unknown_c_);
                            }
                        }
                    }
                }
            }
        }
        BackgroundLoader::RemoveLockGlobal();
    }
    data_ov004_021707e8.unknown_4_ = 0;
    data_ov004_021707e8.unknown1_0_ = 0;
    return 0;
}
