#include <globaldefs.h>

struct GXOamAttr0223bbd8 {
    unsigned long attr01;
    unsigned short attr2;
    unsigned short attr3;
};
struct PositionList {
    unsigned char padding[8];
    GXOamAttr0223bbd8* entries;
    unsigned char count;
};

static inline void GetObjectPosition0223bbd8(const GXOamAttr0223bbd8* oam, unsigned long* x, unsigned long* y) {
    *x = (oam->attr01 & 0x01ff0000UL) >> 16;
    *y = oam->attr01 & 0xffUL;
}

static inline void SetObjectPosition0223bbd8(GXOamAttr0223bbd8* oam, int x, int y) {
    oam->attr01 = (oam->attr01 & ~0x01ff00ffUL) | (y & 0xffUL) | ((x & 0x1ffUL) << 16);
}

// USA: func_ov031_0223bbd8
extern "C" ARM void func_ov031_0223bbd8(PositionList* list, int index, int x, int y) {
    GXOamAttr0223bbd8* entries = list->entries;
    if (index >= 0) {
        SetObjectPosition0223bbd8(&entries[index], x, y);
        return;
    }
    int i;
    signed long originX, originY;
    GetObjectPosition0223bbd8(entries, (unsigned long*)&originX, (unsigned long*)&originY);
    SetObjectPosition0223bbd8(entries, x, y);
    int deltaX = x - originX;
    int deltaY = y - originY;
    i = 1;
    if (i < list->count) do {
        signed long positionX, positionY;
        GetObjectPosition0223bbd8(&entries[i], (unsigned long*)&positionX, (unsigned long*)&positionY);
        SetObjectPosition0223bbd8(&entries[i], positionX + deltaX, positionY + deltaY);
        i++;
    } while (i < list->count);
}
