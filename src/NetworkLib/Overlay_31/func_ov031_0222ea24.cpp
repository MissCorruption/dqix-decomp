#include <globaldefs.h>

struct Block0222ea24 {
    unsigned char pad_0[0xe7];
    unsigned char kind;
    unsigned char pad_0xe8[0xc];
    unsigned char field_0xf4;
    unsigned char field_0xf5;
    unsigned char field_0xf6;
};
struct Sprite0222ea24 {
    unsigned int field_0;
    unsigned short flags;
};
struct Manager0222ea24 {
    void* field_0;
    unsigned char pad_4[0x10];
    void* display;
    Sprite0222ea24* sprites[7];
    Sprite0222ea24* selected;
    void* field_0x38;
    void* field_0x3c;
    unsigned char pad_0x40[2];
    unsigned char field_0x42;
    unsigned char field_0x43;
    unsigned char field_0x44;
    unsigned char pad_0x45[3];
};
struct Context0222ea24 {
    unsigned char field_0;
    unsigned char field_1;
    unsigned short field_2;
    unsigned short field_4;
    unsigned short field_6;
    Manager0222ea24* manager;
};
extern Context0222ea24 data_ov031_02290ca0;
extern signed char data_ov031_02249034[];
Block0222ea24* GetOffset400_02235c70();
extern "C" Manager0222ea24* func_ov031_0223cf4c(int, int);
extern "C" void func_ov031_0222ee34();
extern "C" void func_ov031_0222ec20();
int GetField0_02227548();
extern "C" void func_ov031_0222336c(int, int, int);
extern "C" void func_ov031_02223518(int);
extern "C" void func_ov031_02223a0c();
extern "C" void func_ov031_022350bc(int, int, int, int, int);
extern "C" void* func_ov031_0223c560(int, int);
Sprite0222ea24* CallTailCallThenBdb0_0223be44(int, int);
void* CallWithZeroExtra_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02230778();
extern "C" void func_ov031_02230cd8();
extern "C" void func_ov031_0222f9ec();
extern "C" void func_ov031_022307fc();
extern "C" void func_ov031_0222ee70();
void SetField_022274c0_022274c0(int);

// USA: func_ov031_0222ea24
extern "C" ARM void func_ov031_0222ea24() {
    Block0222ea24* block = GetOffset400_02235c70();
    data_ov031_02290ca0.manager = func_ov031_0223cf4c(0x48, 4);
    data_ov031_02290ca0.manager->field_0x43 = block->field_0xf6;
    data_ov031_02290ca0.manager->field_0x42 = 12;
    func_ov031_0222ee34();
    func_ov031_0222ec20();
    if (data_ov031_02290ca0.field_1 == 0) {
        func_ov031_0222336c(0x30, data_ov031_02249034[GetField0_02227548()], block->field_0xf4 + 1);
    } else {
        func_ov031_0222336c(0x45, -1, 0);
    }
    func_ov031_02223518(1);
    func_ov031_02223a0c();
    int scaled = data_ov031_02290ca0.field_4 * 55;
    int quotient = scaled / 145;
    func_ov031_022350bc(2, 0x55, 0xf1, 0x41, quotient);
    data_ov031_02290ca0.manager->display = func_ov031_0223c560(0, 1);
    int i = 0;
    do {
        data_ov031_02290ca0.manager->sprites[i] = CallTailCallThenBdb0_0223be44(0, 0x29);
    } while (++i < 7);
    switch (block->kind) {
    case 1:
        data_ov031_02290ca0.manager->selected = CallTailCallThenBdb0_0223be44(0, 0x50);
        data_ov031_02290ca0.manager->selected->flags = (data_ov031_02290ca0.manager->selected->flags & ~0xc00) | 0xc00;
        break;
    case 2:
        data_ov031_02290ca0.manager->selected = CallTailCallThenBdb0_0223be44(0, 0x51);
        data_ov031_02290ca0.manager->selected->flags = (data_ov031_02290ca0.manager->selected->flags & ~0xc00) | 0xc00;
        break;
    }
    data_ov031_02290ca0.manager->field_0x3c = CallWithZeroExtra_0223e218((void*)1, (void*)func_ov031_02230778, 0, 0x6e);
    data_ov031_02290ca0.manager->field_0 = CallWithZeroExtra_0223e218(0, (void*)func_ov031_02230cd8, 0, 0x78);
    func_ov031_0222f9ec();
    func_ov031_022307fc();
    SetField_022274c0_022274c0((int)func_ov031_0222ee70);
}
