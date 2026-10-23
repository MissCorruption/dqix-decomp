#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

#define REG_SUB_BG_0208cb08 (*(volatile SubRegisters_0208cb08*)0x04001000)
struct SubRegisters_0208cb08 {
    unsigned int display;
    unsigned int field_0x4;
    unsigned short backgrounds[4];
};
struct HeadNode02046b24;
struct SubBgControlBackup02074b64 { unsigned char registers[0x14]; };
struct AllocTarget0204b12c;
struct Foo0204af38;
struct Obj0204b5e8;
struct ActiveEntry02046900;
struct Rec020467f0;
struct Input_0208cb08 {
    unsigned char padding[0x1c];
    unsigned char flags;
    unsigned char padding_0x1d[3];
};
struct Arena_0208cb08 {
    SafeAllocator fileAllocator;
    SafeAllocator inputAllocator;
    unsigned char padding[0x14];
    SafeAllocator resourceAllocator;
};
struct Object_0208cb08 {
    Arena_0208cb08* arena;
    unsigned char container[0x28];
    SubBgControlBackup02074b64 backup;
    Input_0208cb08 input;
    unsigned char resource[0x40];
    void* source;
    unsigned char padding_0xa4[8];
    unsigned short format;
    unsigned char padding_0xae[2];
    unsigned char pending;
    unsigned char padding_0xb1[3];
    char* filename;
    unsigned int field_0xb8;
    int taskId;
    unsigned char padding_0xc0[0x12];
    short target;
    unsigned char complete, state, mode;
    unsigned char padding_0xd7[3];
    unsigned short flags;
};
extern "C" int func_0200fb8c(int*);
extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" void func_02074b64(SubBgControlBackup02074b64*);
extern "C" void func_020dc2bc();
void SetSubBrightness(GameResources*, int, int);
int IsSubBrightnessTransitionActive(GameResources*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b12c(AllocTarget0204b12c*, SafeAllocator*);
extern "C" void func_0204af38(Foo0204af38*, int, SafeAllocator*);
extern "C" void func_0204b5e8(Obj0204b5e8*, int, int);
extern "C" void func_0208c9cc(int, int, int, int, int);
extern "C" int func_02046900(ActiveEntry02046900*);
extern "C" void* func_020467f0(Rec020467f0*, int, void**, int*);
extern "C" void func_0205aed0(void*, char*, unsigned int, int);
extern "C" void func_0204b5b4(void*, int);
extern "C" int func_0205a528(void*, void*, int, int);
extern "C" void func_020dfec0(void*, SafeAllocator*, void*, unsigned int);
extern "C" void func_0208bf78(Object_0208cb08*);
extern char data_020f11a2[], data_020f11b3[], data_020f11c0[], data_020f11da[];

#if defined(jpn)
extern char data_020f129e[], data_020f12b2[];
#endif

// USA: func_0208cb08
extern "C" ARM void func_0208cb08(Object_0208cb08* object) {
    if (object->target < 0) return;
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    GameResources* resources = (GameResources*)func_0200fb8c((int*)GameState::GetInstance());
    if (object->state == 0) {
        SetFlags00(resources, 0x6000);
        func_020466e4(func_020d6c00(), 1);
        FontBankLoader* global = func_02094a00();
        int notification = 0x67;
        if (func_02046b24((HeadNode02046b24**)resources->unknown_ptr_array_36fc[0]) != 0x2d) {
            if (object->target < 0) notification = 0x32;
            else {
                int level = object->target / 20;
                if (level > 9) level = 9;
                notification = level + 0x32;
            }
        }
        func_02094b30(global, notification, 0);
        ++object->state;
    } else if (object->state == 1) {
        if (func_02094b4c(func_02094a00())) ++object->state;
    } else if (object->state == 2) {
        func_02074b64(&object->backup);
        func_020dc2bc();
        if (!(object->flags & 0x10)) SetSubBrightness(resources, -16, 8);
        ++object->state;
    } else if (object->state == 3) {
        if (IsSubBrightnessTransitionActive(resources)) return;
        Arena_0208cb08* arena = object->arena;
        arena->inputAllocator.Reset();
        func_0204b11c((unsigned char*)&object->input, 0);
        object->input.flags = (object->input.flags & ~0xf) | 1;
        object->input.flags &= ~0xf0;
        func_0204b5b4(&object->input, 0);
        func_0204b12c((AllocTarget0204b12c*)&object->input, &arena->inputAllocator);
        func_0204af38((Foo0204af38*)&object->input, 1, &arena->inputAllocator);
        func_0204b5e8((Obj0204b5e8*)&object->input, 0, 0);
        func_0208c9cc(0, 0, 15, 0, 0);
        object->pending = 1;
        object->source = object->filename;
        object->format = 3;
#if defined(jpn)
        object->taskId = loader->QueueLoadFile(data_020f129e, 0);
#else
        object->taskId = loader->QueueLoadFileInGP2(data_020f11a2, data_020f11b3, 0);
#endif
        ++object->state;
    } else if (object->state == 4) {
        if (!loader->GetTaskStatus(object->taskId)) return;
        Arena_0208cb08* arena = object->arena;
        arena->resourceAllocator.Reset();
        void* record;
        void* file;
        unsigned int length;
        loader->GetLoadedFileByID(object->taskId, &file, &length);
        int count = func_02046900((ActiveEntry02046900*)file);
        int index = 0;
        int size;
        for (; index < count; ++index) {
            void* data = func_020467f0((Rec020467f0*)file, index, &record, &size);
            func_0205a528(object->resource, data, size, (int)&arena->resourceAllocator);
        }
        func_0205aed0(object->resource, object->filename, 3, 0x40);
        loader->RemoveTask(object->taskId);
        object->taskId = -1;
        ++object->state;
    } else if (object->state == 5) {
#if defined(jpn)
        object->taskId = loader->QueueLoadFile(data_020f12b2, 0);
#else
        object->taskId = loader->QueueLoadFileInGP2(data_020f11c0, data_020f11da, 0);
#endif
        ++object->state;
    } else if (object->state == 6) {
        if (!loader->GetTaskStatus(object->taskId)) return;
        Arena_0208cb08* arena = object->arena;
        void* file;
        unsigned int length;
        loader->GetLoadedFileByID(object->taskId, &file, &length);
        if (arena) {
            arena->fileAllocator.Reset();
            func_020dfec0(object->container, &arena->fileAllocator, file, length);
        }
        loader->RemoveTask(object->taskId);
        object->taskId = -1;
        ++object->state;
    } else if (object->state == 7) {
        func_0208bf78(object);
        ++object->state;
    } else if (object->state == 8) {
        if (!object->mode) {
            REG_SUB_BG_0208cb08.backgrounds[0] &= ~3;
            REG_SUB_BG_0208cb08.backgrounds[1] = (REG_SUB_BG_0208cb08.backgrounds[1] & ~3) | 2;
            REG_SUB_BG_0208cb08.backgrounds[2] = (REG_SUB_BG_0208cb08.backgrounds[2] & ~3) | 3;
            REG_SUB_BG_0208cb08.backgrounds[3] = (REG_SUB_BG_0208cb08.backgrounds[3] & ~3) | 1;
            REG_SUB_BG_0208cb08.display = (REG_SUB_BG_0208cb08.display & ~0x1f00) | 0x1900;
            if (func_02046b24((HeadNode02046b24**)resources->unknown_ptr_array_36fc[0]) == 0x2d) {
                if (!IsSubBrightnessTransitionActive(resources)) SetSubBrightness(resources, 0, 25);
            } else if (!(object->flags & 0x10)) SetSubBrightness(resources, 0, 8);
            ++object->state;
        } else func_0208bf78(object);
    } else if (object->state == 9) {
        if (!IsSubBrightnessTransitionActive(resources)) {
            object->complete = 1;
            object->state = 0;
        }
    }
}
