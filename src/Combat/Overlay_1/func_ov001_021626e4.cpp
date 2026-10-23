#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"

struct Background021626e4 {
    char unk_0[0x1c];
    unsigned char screen : 4;
    unsigned char layer : 4;
    char unk_1d[3];
};

extern "C" int func_ov017_021d612c(void* args);
extern "C" int func_ov017_021d60f4(void* args);
extern "C" unsigned int func_ov001_0215a750(const char* path, void** outPtr);
struct ActiveEntry02046900;
extern "C" int func_02046900(ActiveEntry02046900*);
struct Rec020467f0;
extern "C" void* func_020467f0(Rec020467f0*, int, void**, int*);
extern "C" void func_ov001_02162678(int a, int b, int c, int d);
extern "C" void func_020c3984(unsigned int mode);
extern "C" void func_ov001_021628d4(int a, int b, int c, int d);
struct List0204af64;
extern "C" void func_0204af64(List0204af64*);
extern "C" void func_0204b5b4(Background021626e4* background, int a);
extern "C" void func_0204b11c(unsigned char*, int);
struct Obj0204b5e8;
extern "C" void func_0204b5e8(Obj0204b5e8*, int, int);
extern "C" void func_020c9820();
extern "C" void func_0204b2e0(void*, char*);
struct SelfTag0204b3a0;
extern "C" void func_0204b3a0(SelfTag0204b3a0*, char*);
struct List0204b0e8;
extern "C" void func_0204b0e8(List0204b0e8*, void*);
struct List0204afb4;
extern "C" void func_0204afb4(List0204afb4*);

extern char data_ov001_02165745[];

// USA: func_ov001_021626e4
extern "C" ARM int func_ov001_021626e4(void* args) {
    char path[0x50];
    void* records[3];
    int recordSizes[3];
    Background021626e4 background;
    void* file;
    unsigned int fileSize;
    void* name;
    BackgroundLoader* loader;
    int fileId;
    int locked;
    int count;
    int subScreen;

    loader = BackgroundLoader::GetInstance();
    fileId = func_ov017_021d612c(args);
    subScreen = func_ov017_021d60f4((char*)args + 8);
    sprintf(path, data_ov001_02165745, fileId);

    locked = 0;
    file = NULL;
    fileSize = 0;
    loader->GetLoadedFileByName(path, &file, &fileSize);
    if (file == NULL) {
        BackgroundLoader::AddLockGlobal();
        locked = 1;
        if (func_ov001_0215a750(path, &file) == 0) {
            BackgroundLoader::RemoveLockGlobal();
            return 0;
        }
    }

    count = func_02046900((ActiveEntry02046900*)file);
    for (int i = 0; i < count; i++) {
        records[i] = func_020467f0((Rec020467f0*)file, i, &name, &recordSizes[i]);
    }

    DISPCNT = (DISPCNT & ~0x1f00) | 0x800;
    if (subScreen == 0) {
        func_ov001_02162678(0, 0, 1, 1);
    } else {
        DisableSubBGVRAMBanks();
        func_020c3984(0);
        MapVRAMBanksToSubBG(VRAM_BANK_H);
        func_ov001_021628d4(0, 0, 0xe, 0);
    }

    func_0204af64((List0204af64*)&background);
    background.screen = subScreen;
    background.layer = 3;
    func_0204b5b4(&background, 0);
    func_0204b11c((unsigned char*)&background, 0);
    func_0204b5e8((Obj0204b5e8*)&background, 0, 0);
    func_020c9820();
    for (int i = 0; i < count; i++) {
        func_0204b2e0(&background, (char*)records[i]);
        func_0204b3a0((SelfTag0204b3a0*)&background, (char*)records[i]);
    }
    func_0204b0e8((List0204b0e8*)&background, NULL);
    func_0204afb4((List0204afb4*)&background);

    if (locked) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return 1;
}
