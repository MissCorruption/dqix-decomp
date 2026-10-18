#include <globaldefs.h>

struct Sprite0222fe30 {
    unsigned int control;
    unsigned short attributes;
};
struct SpriteSet0222fe30 {
    char padding_0[0x18];
    Sprite0222fe30* entries[5];
    Sprite0222fe30* modeTwo;
    Sprite0222fe30* otherMode;
};
struct SpriteContext0222fe30 {
    int field_0;
    int field_4;
    SpriteSet0222fe30* sprites;
};
extern SpriteContext0222fe30 data_ov031_02290ca0;
extern unsigned char data_ov031_02248f86[];
extern "C" int func_ov031_022305e8(int);
extern "C" void func_ov031_0223bdb0(int, int, void*);

static inline void SetSpritePosition(Sprite0222fe30* sprite, int x, int y) {
    sprite->control = (sprite->control & ~(0xffu | 0x1ff0000u)) |
        (y & 0xff) | ((x & 0x1ff) << 16);
}

// USA: func_ov031_0222fe30
extern "C" ARM void func_ov031_0222fe30(int mode, int index, int entry) {
    unsigned short values[5];
    values[0] = 0xcc;
    values[1] = 0xc0;
    values[2] = 0xc0;
    values[3] = 0x8f;
    values[4] = 0x8f;
    Sprite0222fe30** sprite = &data_ov031_02290ca0.sprites->entries[entry];
    if ((unsigned int)(mode - 1) <= 1) {
        if (func_ov031_022305e8(entry) == 2)
            sprite = &data_ov031_02290ca0.sprites->modeTwo;
        else
            sprite = &data_ov031_02290ca0.sprites->otherMode;
    }
    unsigned char* row = data_ov031_02248f86 + mode * 3;
    int value = row[index];
    if (value) {
        func_ov031_0223bdb0(0, value, *sprite);
        SetSpritePosition(*sprite, values[mode], 0);
        (*sprite)->attributes = ((*sprite)->attributes & ~0xc00) | 0xc00;
        return;
    }
    SetSpritePosition(*sprite, 0x100, 0);
}
