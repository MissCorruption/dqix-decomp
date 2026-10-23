#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/MapDisplay.h"
#if defined(jpn)
#include "Resource/MessageSystem.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"
extern "C" int func_020421a0(void);
extern "C" void func_02023218(MapDisplay* self, void* buffer, int offset, unsigned int capacity);
extern char data_020ef4b1[], data_020ef4c9[], data_020ef4d0[];
#endif
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern "C" void* func_02012fe4(void);
extern "C" void* func_0203bd08(void);
extern "C" void* func_0203b628(void);
extern "C" void func_02021428(void* obj, int amount);

extern "C" void func_020209d0(void* context);
extern "C" void func_0203b66c(char* obj);
extern "C" void func_0203bd78(char* obj);
extern "C" void func_0203bd24(char* obj);
extern "C" void func_0203b718(void* objPtr, int mode, int idx, int fillByte);
extern "C" void func_0203ba74(void* obj);
extern "C" void func_020c9820(void);
#if defined(jpn)
extern "C" void func_02020cb8(void* self, int handle);
extern "C" void func_02020e58(void* self, int handle);
#else
extern "C" void func_02020cb8(void* self, int* handle);
extern "C" void func_02020e58(void* self, int* handle);
#endif
extern "C" void func_02026428(void* obj, const char* name);
extern "C" void func_02026470(void* obj, int flag);
struct Struct0205a198;
extern "C" void func_0205a198(struct Struct0205a198* p);
extern "C" void func_0205a444(char* obj);
struct Rec020467f0;
extern "C" int func_0205a498(void* a, struct Rec020467f0* b, int flag, void* d);
extern "C" void func_0205af38(int a, char* obj, int c, int d);
extern "C" void* func_0203bd14();
extern "C" int func_020233b8(void* arg0, int flag1);
extern "C" void* func_0203be4c(void);
extern "C" void func_02020aa0(void* obj);
#if defined(jpn)
extern "C" void func_02026898(void* obj);
#else
extern "C" void func_02026f34(void* obj);
#endif
extern "C" void func_ov017_02191234(void* obj);
extern "C" void func_0202343c(void* obj);
extern "C" void func_02026b7c(unsigned char* obj);
extern "C" void func_02026bdc(void* obj, int flag);
extern "C" int func_02020b98(void* obj);

extern char data_020ef5c0[];
extern char data_020ef5d8[];
extern int data_020ef460;
extern char data_020ef5df[];

static inline SafeAllocator* GetAlloc02021b84(GameResources* axis, int i) {
    return &axis->allocator_array_38[i];
}

// USA: func_02021b84
extern "C" ARM void func_02021b84(MapDisplay* self) {
    char path[0x18];
    void* fileData;
    unsigned int fileLength;

    GameState* game;
    BackgroundLoader* loader;
    GameResources* axis;
    char* battleCtx;
    char* table;
    SafeAllocator* alloc;
    GrottoStruct* grotto;
    int state;

    game = GameState::GetInstance();
    loader = BackgroundLoader::GetInstance();
    func_02012fe4();
    axis = GetGameResources();
    battleCtx = (char*)func_0203bd08();
    table = (char*)func_0203b628();
    alloc = GetAlloc02021b84(axis, 12);
    grotto = game->GetGrottoStruct();
    state = self->loadStage;

    if (state == 0) {
        func_02021428(self, 0x19);
        loader->AddFence();
        self->task9fc = loader->QueueLoadFile(
#if defined(jpn)
            data_020ef4b1,
#else
            data_020ef5c0,
#endif
            (SafeAllocator*)0);
        sprintf(path,
#if defined(jpn)
            data_020ef4c9,
#else
            data_020ef5d8,
#endif
            grotto->activeMapImageName);
        self->taska00 = loader->QueueLoadFileInGP2(

#if defined(jpn)
            *(const char**)&data_020ef460,
#else
            *(const char**)((char*)&data_020ef460 + 0xc),
#endif
            path, (SafeAllocator*)0);
        strcpy((char*)self->bytesa45, grotto->activeMapImageName);
        self->namesTask = func_02020b98(self);
        self->taska04 = loader->QueueLoadFile(
#if defined(jpn)
            data_020ef4d0,
#else
            data_020ef5df,
#endif
            (SafeAllocator*)0);
        self->loadStage = self->loadStage + 1;
    } else if (state == 1) {
        func_02021428(self, 0x19);
        if (IsBrightnessWithinValidRange((GameResources*)axis, true) != 0) return;
        if (loader->GetTaskStatus(self->task9fc) == 0) return;
        if (loader->GetTaskStatus(self->taska00) == 0) return;
        func_02020720(self);
        func_020209d0(self);
        alloc->Reset();
        func_0203b66c(table);
        func_0203bd78(battleCtx);
        func_0203bd24(battleCtx);
        func_0203b718(table, 1, 0, 0);
        func_0203b718(table, 1, 1, 0);
        func_0203ba74(table);
        func_020c9820();
#if defined(jpn)
        func_02020cb8(self, self->task9fc);
#else
        func_02020cb8(self, &self->task9fc);
#endif
#if defined(jpn)
        func_02020e58(self, self->taska00);
#else
        func_02020e58(self, &self->taska00);
#endif
        self->loadStage = self->loadStage + 1;
    } else if (state == 2) {
        int status = loader->GetTaskStatus(self->namesTask);
        if (status == 0) return;
        if (status > 0) {
            func_02020c18(self,
#if defined(jpn)
                self->namesTask,
#else
                &self->namesTask,
#endif
                alloc);
        } else {
            BackgroundLoader::GetInstance()->RemoveTask(self->namesTask);
            self->namesTask = -1;
        }
        self->displayMode = 1;
        self->loadStage = self->loadStage + 1;
    } else if (state == 3) {
        if (loader->GetTaskStatus(self->taska04) == 0) return;
 #if !defined(jpn)
        self->scriptNameWidth = 0;
        self->fieldb3c = 0;
        self->fieldb40 = 0;
        self->fieldb42 = 0;
#endif
        func_02026428(self, grotto->activeMapNameNoLevel);
        func_02026470(self, grotto->activeMapLevel);
        strcpy((char*)self->bytesa55, grotto->activeMapNameNoLevel);
        self->fielda95 = grotto->activeMapLevel;
        fileData = 0;
        fileLength = 0;
        loader->GetLoadedFileByID(self->taska04, &fileData, &fileLength);
        for (int i = 0; i < 0x1c; i++) {
            func_0205a198(&self->records[i]);
        }
        func_0205a444((char*)&self->entryList);
        self->entryList.active = 1;
        self->entryList.records = self->records;
        self->entryList.count = 0x18;
        func_0205a498((char*)&self->entryList, (struct Rec020467f0*)fileData, fileLength, alloc);
        func_0205af38((int)((char*)&self->entryList), (char*)&self->records[9], 1, 1);
        func_0205af38((int)((char*)&self->entryList), (char*)&self->records[11], 1, 1);
        *(int*)((char*)func_0203bd14() +
#if defined(jpn)
                0x608
#else
                0x508
#endif
        ) = 0x2000;
#if defined(jpn)
        MessageSystem* messages = (MessageSystem*)func_020421a0();
        char* buffer = messages->formatBuffer;
        char* vram = (char*)0x06600000;
        VectorizedInvertedMemcpy(vram + 0x2bc0, buffer, 0x540);
        func_02023218(self, buffer, 0, 0x540);
        func_020c9820();
        CleanInvalidateCacheRange(buffer, 0x540);
        LoadToSubObjVRAM(buffer, 0x2bc0, 0x540);
#else
        char* vram = (char*)0x06600000;
        memcpy(self->savedTiles, vram + 0x2c00, 0x40);
        func_020233b8(self, 1);
#endif
        func_0203bd08();
        char* p = (char*)func_0203be4c() + 0x2e8;
        *(char**)func_0203bd14() = p;
        BackgroundLoader::GetInstance()->RemoveTask(self->taska04);
        self->taska04 = -1;
        func_02020aa0(self);
#if defined(jpn)
        func_02026898(self);
#else
        func_02026f34(self);
#endif
        func_ov017_02191234(axis);
        self->field9c4 = 1;
        self->field9c8 = 0;
        self->field9c3 = 0;
        self->loadStage = self->loadStage + 1;
        func_020c9820();
        func_0202343c(self);
        func_02026b7c((unsigned char*)self);
        func_02026bdc(self, 0);
    }
}
