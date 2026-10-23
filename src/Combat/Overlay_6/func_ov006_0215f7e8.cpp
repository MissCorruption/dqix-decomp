#include <globaldefs.h>

struct AlchemyPot;
struct Obj02158d50;
struct Container02080fa8;
struct Container020e0310;
struct Container02080f8c;
struct Container02080cc0;
struct Obj2081;

struct Recipe {
    short id_;
    short item_;
    char unk_4[0x18];
    Recipe* next_;
};

struct RecipeRecord {
    short id_;
    unsigned short known_ : 1;
    unsigned short made_ : 1;
    unsigned short unk_2_2 : 14;
};

struct AlchemyMenu {
#if !defined(jpn)
    int textPosition_;
    char** texts_;
#endif
    void* canvasBuffer_;
    void* allocators_;
    AlchemyPot* pot_;
    void* menu_;
    void* choice_;
    void* backgrounds_;
    void* canvases_;
    void* sprites_;
    void* animations_;
    Recipe* recipes_;
    Recipe* pageStart_;
    Recipe* recipe_;
    void* records_;
    char save_[8];
    short* cursor_;
    short** items_;
    unsigned char** counts_;
    unsigned short* sizes_;
    int subBackground_[0x20 / 4];
    int ingredients_[0x28 / 4];
    int repeat_[0xc / 4];
    unsigned short buttons_;
    unsigned char unk_aa;
    int renderer_[0x54 / 4];
#if defined(jpn)
    int layout_[0x48 / 4];
#else
    int layout_[0x4c / 4];
#endif
    int table_[0xc / 4];
    int menuTexts_[0x18 / 4];
    char itemNames_[0xc];
#if defined(jpn)
    char reservedBeforeResults_[0xc];
#endif
    int results_[4][0x74 / 4];
    int ticks_;
    int menuResult_;
    int task_;
    int unk_358;
    short unk_35c;
    short previousCursor_;
    short mainCursor_;
    short categoryCursor_;
    short itemCursor_;
    short bookCursor_;
    short filterCursor_;
    short recipeCursor_;
    short choiceCursor_;
    short group_;
    short item_;
    unsigned short categories_[3];
    short chosenItems_[3];
    short message_;
    unsigned short messageLength_;
    short successRate_;
    signed char filterCategory_;
    signed char filterKind_;
    unsigned char sort_;
    unsigned char times_;
    unsigned char page_;
    unsigned char pages_;
    unsigned char category_;
    unsigned char count_;
    unsigned char chosenCounts_[3];
    unsigned char state_;
    unsigned char step_;
    unsigned char unk_391;
    unsigned char messageStep_;
    unsigned char repeatDelay_;
    unsigned short flags_;
    unsigned char female_;
    unsigned char background_;
    unsigned char amounts_[3];
    int textSound_;
    int unk_3a0;
    int textSoundOn_;
    unsigned int textSoundTimer_;
    int textSoundPlaying_;
    int textSoundState_;
    int showResult_;
    int resultSprite_[0x70 / 4];
    int resultTask_;
    signed char arrowTimer_;
    unsigned char fadeTimer_;
    unsigned char nextStep_;
    unsigned char saved_;
    unsigned char arrowUp_;
    unsigned char arrowDown_;
    unsigned char resetBlend_;
    unsigned char closing_;
    unsigned char closeRequested_;
};

extern "C" Recipe* func_ov006_02158d50(Obj02158d50* self, short page);
extern "C" void func_02080bac(void* menu, int id);
extern "C" void func_0208065c(void* menu, int id);
extern "C" void func_02080fa8(Container02080fa8* menu, int id, int value);
extern "C" const char* func_020e0434(Container020e0310* texts, int id);
extern "C" void func_02080f8c(Container02080f8c* menu, int id, int text);
extern "C" void func_02080cc0(Container02080cc0* menu, int id, int value);
extern "C" RecipeRecord* func_ov006_02153c6c(void* ingredients, short id);
extern "C" const char** func_020e5294(void* names, int item);
extern "C" void* memset(void* buffer, int value, unsigned int size);
extern "C" void func_020e4864(const char* source, char* output, int, int, int, int);
extern "C" void func_020805f4(void* menu, int id);
extern "C" void func_020806b0(void* menu, int id);
extern "C" void func_02080b2c(void* menu, int id);
extern "C" void func_02080c68(void* menu, int id, int value);
extern "C" void func_02081ea4(Obj2081* menu, int id, int value);
extern "C" void func_02081130(void* menu, int id, int value);
extern "C" void func_020813ec(void* menu, int id);

// USA: func_ov006_0215f7e8
extern "C" ARM void func_ov006_0215f7e8(AlchemyMenu* self) {
    Recipe* recipe = func_ov006_02158d50((Obj02158d50*)self, self->page_);
    self->pageStart_ = recipe;
    if (recipe == 0)
        return;
    self->flags_ &= ~4;
    if (self->pages_ > 1)
        self->flags_ |= 4;
    void* menu = self->menu_;
    func_02080bac(menu, 9);
    func_0208065c(menu, 9);
    func_02080fa8((Container02080fa8*)menu, 0x3a, self->page_ + 1);
    func_02080fa8((Container02080fa8*)menu, 0x3b, self->pages_);
    Recipe* entry = self->pageStart_;
    const char* unknown = func_020e0434((Container020e0310*)self->menuTexts_, 0x25);
    short item = 0x29;
    for (unsigned char i = 0; i < 0x10; i++)
    {
        if (entry != 0)
        {
            func_02080f8c((Container02080f8c*)menu, item, (int)unknown);
            func_02080cc0((Container02080cc0*)menu, item, 3);
            RecipeRecord* record = func_ov006_02153c6c(self->ingredients_, entry->id_);
            if (record != 0)
            {
                const char* text = unknown;
#if defined(jpn)
                if (record->made_)
                    text = func_020e0434((Container020e0310*)self->itemNames_, entry->item_);
                func_02080f8c((Container02080f8c*)menu, item, (int)text);
#else
                if (record->made_)
                {
                    const char** name = func_020e5294(self->itemNames_, entry->item_);
                    if (name != 0)
                    {
                        memset(self->texts_[i], 0, 4);
                        func_020e4864(*name, self->texts_[i], 1, 0, 0, 0);
                        text = self->texts_[i];
                    }
                }
                func_02080f8c((Container02080f8c*)menu, item, (int)text);
                func_020805f4(menu, item);
#endif
                func_02080cc0((Container02080cc0*)menu, item, 0xf);
            }
            entry = entry->next_;
        }
        else
        {
            func_020806b0(menu, item);
            func_02080b2c(menu, item);
        }
        item++;
    }
    func_02080c68(menu, 9, 0);
    func_02081ea4((Obj2081*)menu, 9, 0);
    func_02081130(menu, 9, (self->flags_ & 4) ? 1 : 0);
    func_020813ec(menu, 9);
}
