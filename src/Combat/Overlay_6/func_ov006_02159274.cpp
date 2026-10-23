#include <globaldefs.h>

struct AlchemyMenu {
    char unk_0[0x362];
    short categoryCursor_;
    short itemCursor_;
    char unk_366[0x22];
    unsigned char page_;
};

struct LookupByOffset0x362_021591ecStruct;

extern "C" short* func_ov006_0215919c(void* self);
extern "C" unsigned char* func_ov006_021591c4(void* self);
extern "C" unsigned short func_ov006_021591ec(LookupByOffset0x362_021591ecStruct* self);

// USA: func_ov006_02159274
extern "C" ARM void func_ov006_02159274(AlchemyMenu* self, unsigned char* category, short* item, unsigned char* count) {
    *category = 0;
    *item = -1;
    *count = 0;
    if (self->itemCursor_ < 0)
        return;
    short index = self->categoryCursor_ - 0x5b;
    short* items = func_ov006_0215919c(self);
    unsigned char* counts = func_ov006_021591c4(self);
    unsigned short size = func_ov006_021591ec((LookupByOffset0x362_021591ecStruct*)self);
    if (items != 0 && counts != 0 && size != 0) {
        unsigned short position = (unsigned short)(self->page_ * 8);
        position += self->itemCursor_ - 0x64;
        *category = index;
        *item = items[position];
        *count = counts[position];
    }
}
