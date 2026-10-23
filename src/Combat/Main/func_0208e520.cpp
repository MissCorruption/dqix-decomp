#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"

#if defined(jpn)
#define data_020f12bf data_020f138f
#define data_020f12d3 data_020f13a3
#define data_020f12e1 data_020f13b1
#define data_020f12fb data_020f13cb
#define data_020f1278 data_020f1348
#define data_020f1290 data_020f1360
#endif

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_02001aec(const void* arg0, const void* arg1, unsigned int arg2);

extern char data_020f12b8[];
extern char data_020f12bf[];
extern char data_020f12d3[];
extern char data_020f12e1[];
extern char data_020f12fb[];
extern Script::OpcodeLookupEntry data_020f1278[];
extern Script::OpcodeLookupEntry data_020f1290[];

struct Struct_0208e4f8 {
    char unknown_0_[4];
    int unknown_4_;
    short unknown_8_;
    unsigned char unknown_a_;
};

extern "C" void func_0208e4f8(struct Struct_0208e4f8*);

// USA: func_0208e520
extern "C" ARM void func_0208e520(struct Struct_0208e4f8* arg0, char* arg1) {
    char var0[0x40];
    unsigned int var1;
    char var2[4];
    unsigned int var3;
    const void* var4;

    if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) {
        return;
    }
    BackgroundLoader::AddLockGlobal();
    var1 = 0;
    if (func_02001aec(arg1, data_020f12b8, 6) == 0 && func_02001aec(arg1, arg0->unknown_0_, 3) != 0 &&
        LoadFileIntoMemory(data_020f12bf, data_0211e33c, &var1)) {
        func_0208e4f8(arg0);
        Script var5;
        var5.Initialize();
        var5.SetOpcodeLookup(data_020f1278);
        var5.Load(data_0211e33c, var1);
        var5.Execute();
        strncpy(arg0->unknown_0_, arg1, 3);
    }
    if (arg1[0] != 'F') {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    if (func_02001aec(arg1, arg0->unknown_0_, 3) == 0) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    __clear(var2, 4);
    strncpy(var2, arg1, 3);
    __clear(var0, 0x40);
    sprintf(var0, data_020f12d3, var2);
    if (LoadFileIntoMemory(data_020f12e1, data_0211e33c, &var1)) {
        if (arg0->unknown_a_ == 0 && GetFileInNarc(data_0211e33c, data_020f12fb, &var4, &var3, 0)) {
            Script var6;
            var6.Initialize();
            var6.SetOpcodeLookup(data_020f1290);
            var6.Load(var4, var3);
            var6.Execute();
            arg0->unknown_a_ = 1;
        }
        func_0208e4f8(arg0);
        if (GetFileInNarc(data_0211e33c, var0, &var4, &var3, 0)) {
            Script var7;
            var7.Initialize();
            var7.SetOpcodeLookup(data_020f1290);
            var7.Load(var4, var3);
            var7.Execute();
        }
        strcpy(arg0->unknown_0_, var2);
    }
    BackgroundLoader::RemoveLockGlobal();
}
