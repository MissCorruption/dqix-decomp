#include <globaldefs.h>

struct Container02080f8c;
struct Container02080fa8;

struct AlchemyMenu {
#if !defined(jpn)
    int textPosition_;
    char** texts_;
#endif
    char padding_0x08[0xc];
    void* menu_;
    char padding_0x18[0x30];
    short** items_;
    unsigned char** counts_;
    unsigned short* sizes_;
#if defined(jpn)
    char padding_0x54[0x118];
#else
    char padding_0x54[0x11c];
#endif
    char itemNames_[0xc];
#if defined(jpn)
    char padding_0x17c[0x1f2];
#else
    char padding_0x17c[0x1e6];
#endif
    short categoryCursor_;
    char padding_0x364[0xc];
    short item_;
    char padding_0x372[0x16];
    unsigned char page_;
    unsigned char pages_;
    unsigned char category_;
    unsigned char count_;
    char padding_0x38c[8];
    unsigned short flags_;
};

extern "C" void func_02080b54(void*, int);
extern "C" void func_02080608(void*, int);
extern "C" void func_020806c4(void*, int);
extern "C" void func_02080b40(void*, int);
extern "C" void* func_020e5294(void*, int);
#if defined(jpn)
struct Container020e0310;
extern "C" const char* func_020e0434(Container020e0310*, int);
#endif
extern "C" void func_02080f8c(Container02080f8c*, int, int);
extern "C" void func_02080fa8(Container02080fa8*, int, int);
extern "C" void func_020805f4(void*, int);
extern "C" void func_02081130(void*, int, int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" void func_020e4864(const char*, char*, int, int, int, int);
extern "C" void func_020813ec(void*, int);

// USA: func_ov006_0215f4dc
extern "C" ARM void func_ov006_0215f4dc(AlchemyMenu* self) {
    short category;
    unsigned char* counts;
    unsigned short count;
    short iconEntry;
    void* menu;
    short* items;
    int nameEntry;
    int countEntry;
    unsigned short position;
    unsigned char row;
    category = self->categoryCursor_ - 0x5b;
    position = self->page_ * 8;
    counts = self->counts_[category];
    items = self->items_[category];
    menu = self->menu_;
    count = self->sizes_[category];
    nameEntry = 0x64;
    iconEntry = 0x6c;
    countEntry = 0x74;
    func_02080b54(menu, 0x11);
    func_02080608(menu, 0x11);
    self->flags_ &= ~4;
    if (count > 8) self->flags_ |= 4;
    for (row = 0; row < 8; row++) {
        if (count > position && items[position] > 0) {
            func_020806c4(menu, nameEntry);
            func_02080b40(menu, nameEntry);
            func_02080b40(menu, iconEntry);
            func_02080b40(menu, countEntry);
#if defined(jpn)
            func_02080f8c((Container02080f8c*)menu, nameEntry, (int)func_020e0434((Container020e0310*)self->itemNames_, items[position]));
#else
            const char** name = (const char**)func_020e5294(self->itemNames_, items[position]);
            if (name != NULL) {
                memset(self->texts_[row], 0, 4);
                func_020e4864(*name, self->texts_[row], 1, 0, 0, 0);
                func_02080f8c((Container02080f8c*)self->menu_, nameEntry, (int)self->texts_[row]);
            }
            func_020805f4(menu, nameEntry);
#endif
            unsigned char amount = counts[position];
            if (self->item_ == items[position]) amount -= self->count_;
            func_02080fa8((Container02080fa8*)menu, countEntry, amount);
        }
        nameEntry = (short)(nameEntry + 1);
        iconEntry++;
        countEntry = (short)(countEntry + 1);
        position++;
    }
    func_02080b40(menu, 0x7c);
    func_02080b40(menu, 0x7d);
    func_02080b40(menu, 0x7e);
    func_02080fa8((Container02080fa8*)menu, 0x7c, self->page_ + 1);
    func_02080fa8((Container02080fa8*)menu, 0x7d, self->pages_);
    func_02081130(menu, 0x11, (self->flags_ & 4) ? 1 : 0);
    func_020813ec(menu, 0x11);
}
