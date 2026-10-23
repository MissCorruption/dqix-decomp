#include "Combat/MenuNodeChain.h"
#include "Combat/MapDisplay.h"
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/ColorEffects.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_02046c78 func_02047a98
#endif

struct AllocatorUnion;
struct Obj02086b98;
struct CountHead;
struct Actor0209c678;
struct Actor0209c20c;
struct Obj02081ee4;
struct Sub02081ee4;
struct List0204af64;
struct AllocTarget0204b12c;
struct Obj0204b5e8;
struct Obj0204c7a8;
struct ActiveEntry02046900;
struct Rec020467f0;
struct Obj0207f914;
struct Manager0207f7f0;
struct Node0207f7f0;
struct Obj0207fcb8;
struct Cont0207fd44;
struct Cont0207fd88;
struct Obj0208203c;
struct Obj021ab060;
struct Obj2081;
struct Obj0207fc6c;
struct Ctx021ab0c0;
struct Ctx021ab1a4;
struct Obj0205eaa0;
struct Cont0207fe44;
struct FlagWord020466f4;
struct ListHead02046b60;

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" void* func_020d6c00(void);
extern "C" int func_020421a0(void);
extern "C" int func_ov017_021959b4(void);
extern "C" void func_ov017_021aaf08(void* p);
extern "C" void* func_02010828(GameState* gs);
extern "C" int func_02086b98(struct Obj02086b98* o);
extern "C" void func_ov017_021ab010(void* p, int flag);
extern "C" int func_02046c78(struct CountHead* head);
extern "C" void func_0209c678(struct Actor0209c678* actor, int arg);
extern "C" void func_020a0cc4(unsigned int size);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern "C" void func_020a0c0c(void);
extern "C" void func_02081ee4(struct Obj02081ee4* obj, struct Sub02081ee4* sub);
extern "C" void func_0204af64(struct List0204af64* obj);
extern "C" void func_0204b11c(unsigned char* obj, int value);
extern "C" void func_0204b5b4(void* obj, int value);
extern "C" void func_0204b12c(struct AllocTarget0204b12c* obj, SafeAllocator* alloc);
extern "C" int func_0204b5e8(struct Obj0204b5e8* obj, int a, int b);
extern "C" void func_0204c684(void* obj);
extern "C" void func_0204c7a8(struct Obj0204c7a8* obj, SafeAllocator* alloc, int buffer, unsigned int len);
extern "C" int func_02046900(struct ActiveEntry02046900* entry);
extern "C" void* func_020467f0(struct Rec020467f0* rec, int index, void** out, int* outSize);
extern "C" void func_0204b174(void* graphics, void* file, SafeAllocator* allocator, unsigned int size);
#if defined(jpn)
extern "C" void func_02080654(struct Obj0207f914* obj, int alloc, int filename);
#else
extern "C" void func_0207f914(struct Obj0207f914* obj, int alloc, int a, int b);
#endif
extern "C" int func_0207f9f4(void* obj);
extern "C" void func_0207f7f0(struct Manager0207f7f0* mgr, struct Node0207f7f0* node, int count);
extern "C" void func_0207fcb8(struct Obj0207fcb8* obj);
extern "C" void func_0207fd44(struct Cont0207fd44* obj);
extern "C" void func_0207fd88(struct Cont0207fd88* obj);
extern "C" void func_0208203c(struct Obj0208203c* obj);
extern "C" void func_020813ec(void* obj, int key);
extern "C" void func_ov017_021ab060(struct Obj021ab060* obj);
extern "C" void* func_02081da8(struct Obj2081* obj, int key);
extern "C" void func_0207fc6c(struct Obj0207fc6c* obj, int arg);
extern "C" void func_02081f20(void* repeat, int ticks);
extern "C" int func_020800fc(void* menu, short* cursor, short prevCursor, unsigned short buttons, unsigned char columns, bool wrap);
extern "C" void func_020804fc(void* obj, int key);
extern "C" int func_ov017_021ab0c0(struct Ctx021ab0c0* ctx);
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern "C" void func_0207fe44(struct Cont0207fe44* obj);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" int func_ov017_021ab1a4(struct Ctx021ab1a4* ctx);
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" unsigned char func_02010750(char* gs);
extern "C" void func_ov017_021d1a18(int a, int b, int c, int d);
extern "C" int func_02046b60(struct ListHead02046b60* list, int id);
extern "C" void func_02046a8c(struct ListHead02046b60* list, void* node);
extern "C" void func_02010604(GameState* gs, int a, int b, int c);
extern "C" void func_0201075c(char* gs, unsigned char value);
extern "C" void func_0209c20c(struct Actor0209c20c* actor);

extern AllocatorUnion data_02114e20;
extern struct Obj0205eaa0 data_02108760;
#if defined(jpn)
extern char data_ov017_021d7ddc[];
extern char data_ov017_021d7def[];
#else
extern char data_ov017_021d7870[];
extern char data_ov017_021d7883[];
extern char data_ov017_021d789c[];
#endif

struct ActorData02109bf4 {
    char unknown[0xd0];
};
extern ActorData02109bf4 data_02109bf4;

struct Input021aa59c {
    unsigned short buttons;
    unsigned char columns;
};

struct Scene021aa59c {
    unsigned short id;
#if defined(jpn)
    char unknown_2[0x27c2];
#else
    char unknown_2[0x2782];
#endif
    short y;
    short x;
    unsigned char layer;
};

struct Self021aa59c {
    unsigned char type;
    unsigned char done;
    char unknown_2[6];
    void* tileBuffer;
    int savedBgMode;
    char unknown_10[4];
    int state;
    Manager0207f7f0* menu;
    List0204af64* layers;
    Node0207f7f0* panels;
    SafeAllocator alloc;
    int result;
    void* repeat;
    Input021aa59c* input;
    short* cursorPtr;
    short key;
    short unknown_4a;
    short cursor;
    short prevCursor;
    int loadTask;
    char unknown_54[0x10];
    int finished;
};

// USA: func_ov017_021aa59c
extern "C" ARM void func_ov017_021aa59c(Self021aa59c* self, ListHead02046b60* list) {
    GameResources* res;
    Scene021aa59c* scene;
    GameState* gs = GameState::GetInstance();
    func_0202ae18();
    res = GetGameResources();
    func_020421a0();
    CountHead* nodes = (CountHead*)res->unknown_ptr_array_36fc[0];
    scene = (Scene021aa59c*)func_02012fe4();
    unsigned int* flags = (unsigned int*)func_020d6c00();

    if (self->state < 6 && (func_ov017_021959b4() != 0 || res->unknown_flag_42e2 != 0)) {
        func_ov017_021aaf08(self);
        self->done = 1;
        return;
    }
    if (!func_02086b98((Obj02086b98*)func_02010828(gs))) {
        func_ov017_021ab010(self, 1);
        return;
    }
    if (func_02046c78(nodes) > 1) {
        func_ov017_021aaf08(self);
        self->done = 1;
        return;
    }

    func_0209c678((Actor0209c678*)&data_02109bf4, 0);
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    int state = self->state;
    if (state == 0) {
        func_020a0cc4(0x7800);
        void* buffer = func_02012d88(&data_02114e20, 0x7800);
        if (buffer == NULL) {
            func_020a0c0c();
            func_ov017_021aaf08(self);
            self->done = 1;
            return;
        }
        self->alloc.CreateTypeA(buffer, 0x7800);
        self->alloc.Reset();
        self->tileBuffer = self->alloc.Allocate(0x1400);
        self->panels = (Node0207f7f0*)self->alloc.Allocate(0x1c0);
        self->layers = (List0204af64*)self->alloc.Allocate(0x40);
#if defined(jpn)
        self->menu = (Manager0207f7f0*)self->alloc.Allocate(0x34);
#else
        self->menu = (Manager0207f7f0*)self->alloc.Allocate(0x40);
#endif
        self->repeat = self->alloc.Allocate(0xc);
        self->input = (Input021aa59c*)self->alloc.Allocate(4);
        func_02081ee4((Obj02081ee4*)self->repeat, (Sub02081ee4*)self->input);

        List0204af64* layer = self->layers;
        for (int i = 0; i < 2; i++) {
            func_0204af64((List0204af64*)layer);
            func_0204b11c((unsigned char*)layer, 0);
            layer->b1c_lo = 0;
            layer->b1c_hi = i + 1;
            func_0204b5b4(layer, i);
            func_0204b12c((AllocTarget0204b12c*)layer, &self->alloc);
            func_0204b5e8((Obj0204b5e8*)layer, 0, 0);
            layer++;
        }

        Node0207f7f0* panel = self->panels;
        for (unsigned char j = 0; j < 2; j++) {
            func_0204c684(panel);
            func_0204c7a8((Obj0204c7a8*)panel, &self->alloc, (int)self->tileBuffer, 0x800);
            panel->lists = self->layers;
            panel++;
        }

        BG1CNT = (BG1CNT & 0x43) | 0x1e00;
        BG2CNT = (BG2CNT & 0x43) | 0x1f00;
        ColorEffect_ConfigureAlphaBlend(0x04000050, 4, 1, 10, 6);
#if defined(jpn)
        self->loadTask = loader->QueueLoadFile(data_ov017_021d7ddc, NULL);
#else
        self->loadTask = loader->QueueLoadFile(data_ov017_021d7870, NULL);
#endif
        self->state = 1;
    } else if (state == 1) {
        if (loader->GetTaskStatus(self->loadTask) != 0) {
            void* record;
            void* file;
            unsigned int fileSize;
            loader->GetLoadedFileByID(self->loadTask, &file, &fileSize);
            int count = func_02046900((ActiveEntry02046900*)file);
            List0204af64* layers = self->layers;
            for (int i = 0; i < count; i++) {
                int recordSize;
                void* data = func_020467f0((Rec020467f0*)file, i, &record, &recordSize);
                func_0204b174(layers, data, NULL, recordSize);
            }
            loader->RemoveTask(self->loadTask);
            self->loadTask = -1;
            func_0207f84c(self->menu);
#if defined(jpn)
            func_02080654((Obj0207f914*)self->menu, (int)&self->alloc, (int)data_ov017_021d7def);
#else
            func_0207f914((Obj0207f914*)self->menu, (int)&self->alloc, (int)data_ov017_021d7883, (int)data_ov017_021d789c);
#endif
            self->state = 2;
        }
    } else if (state == 2) {
        int status = func_0207f9f4(self->menu);
        if (status == 0) {
            self->state = 3;
        }
        if (status < 0) {
            self->state = 8;
        }
    } else if (state == 3) {
        Manager0207f7f0* menu = self->menu;
        menu->lists = self->layers;
        menu->mode = 2;
        func_0207f7f0(menu, self->panels, 2);
        menu->active = 1;
        func_0207fcb8((Obj0207fcb8*)menu);
        func_0207fd44((Cont0207fd44*)menu);
        func_0207fd88((Cont0207fd88*)menu);
        BG0CNT = (BG0CNT & ~3) | 2;
        BG1CNT = BG1CNT & ~3;
        BG2CNT = (BG2CNT & ~3) | 1;
        BG3CNT = (BG3CNT & ~3) | 3;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        self->state = 4;
    } else if (state == 4) {
        self->key = 0;
        self->cursor = 0;
        self->prevCursor = 0;
        func_0208203c((Obj0208203c*)self->repeat);
        self->cursorPtr = NULL;
        func_020813ec(self->menu, self->key);
        func_ov017_021ab060((Obj021ab060*)self);
        self->state = 5;
    } else if (state == 5) {
        bool cancelled = false;
        bool redraw = false;
        void* element;
        Manager0207f7f0* menu = self->menu;
        element = func_02081da8((Obj2081*)menu, self->key);
        if (menu != NULL) {
            if (element != NULL) {
                int ticks = gs->GetTickCount();
                func_0207fc6c((Obj0207fc6c*)menu, ticks);
                self->cursorPtr = &self->cursor;
                if (self->cursorPtr != NULL) {
                    func_02081f20(self->repeat, ticks);
                    self->prevCursor = *self->cursorPtr;
                    self->result = func_020800fc(menu, self->cursorPtr, self->prevCursor, self->input->buttons, self->input->columns, false);
                    menu->field36 = *self->cursorPtr;
                    if (self->result != 0) {
                        func_020804fc(menu, self->key);
                    }
                    if (self->prevCursor != *self->cursorPtr || g_touchInput.pressed_ != 0) {
                        func_020813ec(menu, self->key);
                        func_ov017_021ab060((Obj021ab060*)self);
                    }
                }
                if (func_ov017_021ab0c0((Ctx021ab0c0*)self) != 0) {
                    if (self->prevCursor != *self->cursorPtr) {
                        return;
                    }
                    func_0205eaa0(&data_02108760, 1, 0);
                    func_0208203c((Obj0208203c*)self->repeat);
                    self->cursorPtr = NULL;
                    if (self->cursor == 0) {
                        func_0207fe44((Cont0207fe44*)self->menu);
                        func_020466e4(flags, 0x200);
                    } else if (self->cursor == 1) {
                        cancelled = true;
                    }
                } else if (func_ov017_021ab1a4((Ctx021ab1a4*)self) != 0) {
                    redraw = true;
                }
            } else if (g_keyManager.TestKeysPressed(0x401) != 0 || g_touchInput.pressed_ != 0) {
                func_020813ec(menu, self->key);
                func_ov017_021ab060((Obj021ab060*)self);
                func_020466f4((FlagWord020466f4*)flags, 0x200);
            }
        }
        if (func_02010750((char*)gs) != 0 || cancelled) {
            self->state = 6;
            redraw = true;
            self->finished = true;
        }
        if (redraw && menu != NULL && element != NULL) {
            func_0207fe44((Cont0207fe44*)self->menu);
            func_020466e4(flags, 0x200);
        }
    } else if (state == 6) {
        if (scene->id == 10000) {
            func_ov017_021d1a18(scene->x, scene->y, scene->layer, 1);
        }
        func_020466e4((unsigned int*)func_020d6c00(), 0x200000);
        SetBrightness(res, -16, 120);
        self->state = 7;
    } else if (state == 7) {
        if (IsBrightnessTransitionActive(res) != 0) {
            self->state = 8;
        }
    } else if (state == 8) {
        if (IsBrightnessTransitionActive(res) == 0) {
            if (func_02046b60(list, 0x40) != 0) {
                func_02046a8c(list, res->unknown_ptr_array_3afc[39]);
            }
            func_02010604(gs, 0, func_02010750((char*)gs), 0);
            func_0201075c((char*)gs, 0);
            DISPCNT = (DISPCNT & ~0x1f00) | (self->savedBgMode << 8);
            func_020a0c0c();
            func_0209c20c((Actor0209c20c*)&data_02109bf4);
            func_ov017_021aaf08(self);
            self->done = 1;
        }
    }
}
