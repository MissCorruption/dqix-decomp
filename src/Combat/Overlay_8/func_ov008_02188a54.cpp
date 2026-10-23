#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include <Resource/Brightness.h>
#include <Resource/CharacterCreationUI.h>
#include <Combat/MapDisplay.h>
#include "Resource/GameResources.h"

struct Entry_0205d6a0;
struct Obj0204b5e8;
struct AllocTarget0204b12c;
struct Foo0204af38;
struct ActiveEntry02046900;
struct Rec020467f0;
struct Obj0204b8d0;
struct List0204b0e8;
struct Obj0204c7a8;
struct Struct_0205cf78;
struct Elem_0205cf78;
struct TextWindow {
    char pad0[0x98];
    List0204af64* backgrounds;
    char pad1[0xb2 - 0x9c];
    unsigned char enabled;
    char pad2[0xbc - 0xb3];
};
struct Canvas {
    Canvas* previous;
    List0204af64* backgrounds;
    char pad0[0xe0 - 8];
};
struct BattleRecords {
    char pad0[0x14];
    SafeAllocator backgroundAllocator;
    char pad1[0xa0 - 0x28];
    Container020e0310 texts;
    char pad2[0xf0 - 0xa8];
    List0204af64 background;
    List0204af64 textBackground;
    TextWindow window;
    Canvas canvases[6];
    int pixels;
    char pad3[0xb12 - 0x730];
    unsigned char loadStep;
    char pad4[0xb20 - 0xb13];
    int task;
};

extern "C" const char* func_020e0434(Container020e0310*, int);
extern "C" void func_0205d6a0(Entry_0205d6a0*, int);
extern "C" void func_0204af64(List0204af64*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b5b4(List0204af64*, int);
extern "C" void func_0204b5e8(Obj0204b5e8*, int, int);
extern "C" void func_0204b12c(AllocTarget0204b12c*, SafeAllocator*);
extern "C" void func_0204af38(Foo0204af38*, int, SafeAllocator*);
extern "C" int func_02046900(ActiveEntry02046900*);
extern "C" void* func_020467f0(Rec020467f0*, int, void**, int*);
extern "C" void func_0204b174(List0204af64*, void*, SafeAllocator*, int);
extern "C" void func_0204b8d0(Obj0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
extern "C" void func_0204b0e8(List0204b0e8*, void*);
extern "C" void func_0204bc74(List0204af64*, int, int, int, int, int, int);
extern "C" void func_0204c7a8(Obj0204c7a8*, SafeAllocator*, int, unsigned int);
extern "C" void func_0205cf78(Struct_0205cf78*, Elem_0205cf78*, unsigned char);

// USA: func_ov008_02188a54
extern "C" ARM int func_ov008_02188a54(BattleRecords* self, int lastClear) {
    GameResources* resources = GetGameResources();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    int step = self->loadStep;
    if (step == 0) {
#if defined(jpn)
        int fileKey = 1;
        if (lastClear) fileKey = 2;
        const char* file = func_020e0434(&self->texts, fileKey);
        self->task = loader->QueueLoadFile(file, 0);
#else
        int archiveKey = 1;
        int fileKey = 2;
        if (lastClear) {
            archiveKey = 3;
            fileKey = 4;
        }
        const char* file = func_020e0434(&self->texts, fileKey);
        const char* archive = func_020e0434(&self->texts, archiveKey);
        self->task = loader->QueueLoadFileInGP2(archive, file, 0);
#endif
        ++self->loadStep;
    }
    if (step == 1) {
        if (IsBrightnessTransitionActive(resources)) return 0;
        func_0205d6a0((Entry_0205d6a0*)&self->window, 1);
        ++self->loadStep;
    }
    if (step == 2) {
        if (loader->GetTaskStatus(self->task)) {
            self->backgroundAllocator.Reset();
            func_0204af64(&self->background);
            func_0204b11c((unsigned char*)&self->background, 0);
            self->background.b1c_lo = 1;
            self->background.b1c_hi = 0;
            func_0204b5b4(&self->background, 1);
            func_0204b5e8((Obj0204b5e8*)&self->background, 0, 0);
            func_0204b12c((AllocTarget0204b12c*)&self->background, &self->backgroundAllocator);
            func_0204af38((Foo0204af38*)&self->background, 1, &self->backgroundAllocator);
            func_0204af64(&self->textBackground);
            func_0204b11c((unsigned char*)&self->textBackground, 0);
            self->textBackground.b1c_lo = 1;
            self->textBackground.b1c_hi = 1;
            func_0204b5b4(&self->textBackground, 0);
            func_0204b5e8((Obj0204b5e8*)&self->textBackground, 0, 0);
            func_0204b12c((AllocTarget0204b12c*)&self->textBackground, &self->backgroundAllocator);
            void* recordData;
            void* data;
            unsigned int size;
            loader->GetLoadedFileByID(self->task, &data, &size);
            int count = func_02046900((ActiveEntry02046900*)data);
            int recordSize;
            for (int index = 0; index < count; ++index) {
                void* record = func_020467f0((Rec020467f0*)data, index, &recordData, &recordSize);
                if (record) {
                    if (index == count - 1) func_0204b174(&self->textBackground, record, &self->backgroundAllocator, recordSize);
                    else func_0204b174(&self->background, record, &self->backgroundAllocator, recordSize);
                }
            }
            loader->RemoveTask(self->task);
            self->task = -1;
            func_0204b8d0((Obj0204b8d0*)&self->background, 0, 0, 0, 0, 0, 32, 24, 0xffff);
            func_0204b0e8((List0204b0e8*)&self->background, 0);
            func_0204bc74(&self->textBackground, 0, 0, 0, 32, 25, 0);
            func_0204b0e8((List0204b0e8*)&self->textBackground, 0);
            Canvas* canvas;
            for (int index = 0; index < 6; ++index) {
                canvas = &self->canvases[index];
                func_0204c7a8((Obj0204c7a8*)canvas, &self->backgroundAllocator, self->pixels, 512);
                canvas->backgrounds = &self->textBackground;
            }
            self->window.backgrounds = &self->textBackground;
            self->window.enabled = 1;
            func_0205cf78((Struct_0205cf78*)&self->window, (Elem_0205cf78*)self->canvases, 6);
            self->loadStep = 0;
            return 1;
        }
    }
    return 0;
}
