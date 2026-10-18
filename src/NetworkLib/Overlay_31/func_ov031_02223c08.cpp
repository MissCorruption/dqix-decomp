#include <globaldefs.h>

struct GXOamAttr02223c08 {
    union {
        unsigned long attr01;
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
enum Effect02223c08 {
    EffectNone02223c08 = 0,
    EffectFlipH02223c08 = 0x10000000,
    EffectFlipV02223c08 = 0x20000000,
    EffectFlipHV02223c08 = 0x30000000,
    EffectAffine02223c08 = 0x100,
    EffectNoDisplay02223c08 = 0x200,
    EffectAffineDouble02223c08 = 0x300
};
static inline void SetEffect02223c08(GXOamAttr02223c08* entry, Effect02223c08 effect, int rsParam) {
    if (effect != EffectAffine02223c08 && effect != EffectAffineDouble02223c08) {
        entry->attr01 = (entry->attr01 & 0xc1fffcff) | effect;
    } else {
        entry->attr01 = (entry->attr01 & 0xc1fffcff) | effect | (rsParam << 25);
    }
}
static inline void SetPriority02223c08(GXOamAttr02223c08* entry, int priority) {
    entry->attr2 = (unsigned short)((entry->attr2 & ~0xc00) | (priority << 10));
}
struct Obj0223bcc8;
struct Window02223c08;
struct WifiSetupTextBox02223c08 { unsigned short x, y, width, height; };
struct WifiSetupKeyboard02223c08 {
    Window02223c08* rows[3][4];
    GXOamAttr02223c08* keys[47];
    GXOamAttr02223c08* extraKeys[4];
    Obj0223bcc8* buttons[2];
    Obj0223bcc8* rowBlocks[4];
    Obj0223bcc8* cursor;
    void* task;
    unsigned char input;
    unsigned char page;
    signed char pressedKey;
    signed char hoveredKey;
    signed char returnKey;
    signed char cursorKey;
    unsigned char repeatTimer;
    bool canDelete;
    bool canType;
    bool deleteErrorPlayed;
};
extern WifiSetupKeyboard02223c08* data_ov031_02250bfc;
extern const unsigned char data_ov031_022489bc[4];
extern const unsigned char data_ov031_022489b4[2];
extern unsigned short* data_ov031_0224b430[3];
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
GXOamAttr02223c08* CallTailCallThenBdb0_0223be44(int, int);
extern "C" Obj0223bcc8* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bab4(Obj0223bcc8*, int, int, int);
void SetEntryHalfword4Bits_0223bcc8(Obj0223bcc8*, int, int);
extern "C" Window02223c08* func_ov031_0223c458(int, int, int, int, int*, int);
extern "C" void func_ov031_0223c980(Window02223c08*, int, int, int, int, int, unsigned long, const unsigned short*);
extern "C" Obj0223bcc8* func_ov031_0223b8c4(int, int, int);
void* CallWithZeroExtra_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02224ca4(int, int, int);
extern "C" void func_ov031_02223ff8(void*);

// USA: func_ov031_02223c08
extern "C" ARM void func_ov031_02223c08() {
    WifiSetupTextBox02223c08 rectangle = {};
    int num;
    int ix;
    int i, j, k;
    unsigned short buf[2];
    rectangle.width = 17;
    rectangle.height = 18;
    data_ov031_02250bfc = (WifiSetupKeyboard02223c08*)func_ov031_0223cf4c(sizeof(WifiSetupKeyboard02223c08), 4);
    data_ov031_02250bfc->input = 0xff;
    data_ov031_02250bfc->cursorKey = 0;
    data_ov031_02250bfc->canDelete = 1;
    data_ov031_02250bfc->canType = 1;
    for (i = 0; i < 47; ++i) {
        data_ov031_02250bfc->keys[i] = CallTailCallThenBdb0_0223be44(0, 0x34);
        SetEffect02223c08(data_ov031_02250bfc->keys[i], EffectNoDisplay02223c08, 0);
        SetPriority02223c08(data_ov031_02250bfc->keys[i], 3);
    }
    for (i = 0; i < 4; ++i) {
        data_ov031_02250bfc->extraKeys[i] = CallTailCallThenBdb0_0223be44(0, data_ov031_022489bc[i]);
        SetEffect02223c08(data_ov031_02250bfc->extraKeys[i], EffectNoDisplay02223c08, 0);
        SetPriority02223c08(data_ov031_02250bfc->extraKeys[i], 3);
    }
    for (i = 0; i < 2; ++i) {
        data_ov031_02250bfc->buttons[i] = func_ov031_0223be70(0, data_ov031_022489b4[i], 1);
        func_ov031_0223bab4(data_ov031_02250bfc->buttons[i], -1, 0x200, 0);
        SetEntryHalfword4Bits_0223bcc8(data_ov031_02250bfc->buttons[i], -1, 3);
    }
    buf[1] = 0;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            data_ov031_02250bfc->rows[i][j] = func_ov031_0223c458(0, 28, 2, 0, &num, 0);
            ix = j * 12;
            rectangle.x = 0;
            for (k = 0; k < 12;) {
                buf[0] = data_ov031_0224b430[i][ix];
                func_ov031_0223c980(data_ov031_02250bfc->rows[i][j], rectangle.x,
                    rectangle.y, rectangle.width, rectangle.height, 2, 0x480, buf);
                ++k;
                rectangle.x += 18;
                ++ix;
            }
            if (i == 0)
                data_ov031_02250bfc->rowBlocks[j] = func_ov031_0223b8c4(0, num, 1);
        }
    }
    data_ov031_02250bfc->cursor = func_ov031_0223be70(0, 0x40, 1);
    func_ov031_0223bab4(data_ov031_02250bfc->cursor, -1, 0x200, 0);
    SetEntryHalfword4Bits_0223bcc8(data_ov031_02250bfc->cursor, -1, 2);
    data_ov031_02250bfc->task = CallWithZeroExtra_0223e218(0, (void*)func_ov031_02223ff8, 0, 0x78);
    func_ov031_02224ca4(data_ov031_02250bfc->page, 0, 0xc0);
}
