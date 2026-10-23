#include "Combat/TryApplyElemFields.h"
#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>
#include <std_library_functions.h>
#include "Input/Input.h"

struct StructA0205d5d0;

struct MenuList {
    char unk_0[0x30];
    int cursor_;
    int GetCursor() { return cursor_; }
};

struct MenuWindow {
    int unk_0;
    MenuList list_;
    char unk_38[0xb0 - 0x38];
    unsigned char style_;
    MenuList* GetList() { return &list_; }
};

struct EquipmentMenu {
    char unk_0[0xe10];
    unsigned short* text_;
    char unk_e14[LOW_REGION(0xee0, 0xee4) - 0xe14];
    MenuWindow window_;
    char unk_f98[LOW_REGION(0x3d55, 0x3ddd) - LOW_REGION(0xf94, 0xf98)];
    unsigned char textMode_;
    MenuWindow* GetWindow() { return &window_; }
};

extern "C" void func_ov005_02159a30(EquipmentMenu* self, unsigned short* text, int touched);
// USA: func_ov005_02158ed0
extern "C" ARM void func_ov005_02158ed0(EquipmentMenu* self) {
    unsigned char mode = self->textMode_;
    if (mode == 0)
        return;
    int touched = 0;
    if (mode == 2 && g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld) {
        if (self->GetWindow()->GetList()->GetCursor() < 0)
            return;
        touched = 1;
    }
    memset(self->text_, 0, LOW_REGION(0x800, 0x960));
    unsigned char style = self->window_.style_;
    if (style == 1)
        func_ov005_02159a30(self, self->text_, touched);
#if defined(jpn)
    func_0205d5d0((StructA0205d5d0*)&self->window_, style, (int)self->text_, 1);
#else
    func_0205d5d0((StructA0205d5d0*)&self->window_, style, (int)self->text_, 1, 0);
#endif
}
