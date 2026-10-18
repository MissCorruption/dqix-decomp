#include <globaldefs.h>

struct Sprite02230120 {
    union {
        unsigned long attributes;
        struct { unsigned short attr0; unsigned short attr1; };
        struct {
            unsigned long y : 8;
            unsigned long rsMode : 2;
            unsigned long objMode : 2;
            unsigned long mosaic : 1;
            unsigned long colorMode : 1;
            unsigned long shape : 2;
            unsigned long x : 9;
            unsigned long rsParam : 5;
            unsigned long size : 2;
        };
        struct {
            unsigned long unused0 : 28;
            unsigned long flipH : 1;
            unsigned long flipV : 1;
            unsigned long unused1 : 2;
        };
    };
    union {
        struct { unsigned short attr2; unsigned short unused3; };
        unsigned long attr23;
        struct {
            unsigned long charNo : 10;
            unsigned long priority : 2;
            unsigned long cParam : 4;
            unsigned long unused2 : 16;
        };
    };
};
struct Manager02230120 {
    unsigned char pad_0[0x18];
    Sprite02230120* sprites[7];
    Sprite02230120* selected;
    unsigned char pad_0x38[0xc];
    unsigned char field_0x44;
};
struct Context02230120 {
    unsigned char pad_0[4];
    unsigned short position;
    unsigned short pad_6;
    Manager02230120* manager;
};
extern Context02230120 data_ov031_02290ca0;
extern "C" int FastIntDivide(int, int);
extern "C" int FastIntModulus(int, int);

static inline void GetPosition02230120(const Sprite02230120* sprite, unsigned long* x, unsigned long* y) {
    *x = (sprite->attributes & 0x1ff0000) >> 16;
    *y = sprite->attributes & 0xff;
}

static inline void SetPosition02230120(Sprite02230120* sprite, int x, int y) {
    sprite->attributes = (sprite->attributes & ~0x01ff00ff) | (y & 0xff) | ((x & 0x1ff) << 16);
}

// USA: func_ov031_02230120
extern "C" ARM void func_ov031_02230120() {
    int spriteX;
    int spriteY;
    int row = FastIntDivide(data_ov031_02290ca0.position, 29);
    int y = 52 - FastIntModulus(data_ov031_02290ca0.position, 29);
    if (data_ov031_02290ca0.manager->selected) {
        if (row == 0) spriteX = 38;
        else spriteX = 256;
        SetPosition02230120(data_ov031_02290ca0.manager->selected, spriteX, y);
    }
    int cur = y;
    int i = 0;
    do {
        Sprite02230120* sprite = data_ov031_02290ca0.manager->sprites[i];
        GetPosition02230120(sprite, (unsigned long*)&spriteX, (unsigned long*)&spriteY);
        SetPosition02230120(sprite, spriteX, cur);
        cur += 29;
    } while (++i < 5);
    if (row <= 2) {
        Sprite02230120* sprite = data_ov031_02290ca0.manager->sprites[5];
        GetPosition02230120(sprite, (unsigned long*)&spriteX, (unsigned long*)&spriteY);
        SetPosition02230120(sprite, spriteX, y + (2 - row) * 29);
    } else {
        SetPosition02230120(data_ov031_02290ca0.manager->sprites[5], 256, 0);
    }
    if (row >= 2 && row <= 6) {
        Sprite02230120* sprite = data_ov031_02290ca0.manager->sprites[6];
        GetPosition02230120(sprite, (unsigned long*)&spriteX, (unsigned long*)&spriteY);
        SetPosition02230120(sprite, spriteX, y + (6 - row) * 29);
    } else {
        SetPosition02230120(data_ov031_02290ca0.manager->sprites[6], 256, 0);
    }
    data_ov031_02290ca0.manager->field_0x44 = 1;
}

