#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Input/Input.h"

#if defined(jpn)
enum { kMember = 0x4f8 };
enum { kInfoFlags = 0x1930, kSlots = 0x2d08, kSelectedSlot = 0x3d33 };
#else
enum { kMember = 0x4fc };
enum { kInfoFlags = 0x19b8, kSlots = 0x2d90, kSelectedSlot = 0x3dbb };
#endif

struct MemberScreen
{
    char unk_0[kMember];
    int member_;
};

struct Container020dedd0;
struct Element020de650;

struct EquipmentSlot
{
    short item_;
    char unk_2[0x1c - 2];
};

struct EquipmentMenu
{
    char unk_0[0xdf4];
    Container020dedd0* items_;
    char unk_df8[kInfoFlags - 0xdf8];
    unsigned short infoFlags_;
    char unk_19ba[kSlots - kInfoFlags - 2];
    EquipmentSlot slots_[24];
    char unk_3030[kSelectedSlot - kSlots - 24 * sizeof(EquipmentSlot)];
    signed char slot_;
};

extern "C" void func_ov005_021562b8(EquipmentMenu* self);
extern "C" void func_ov005_0215730c(EquipmentMenu* self);
extern "C" MemberScreen* func_ov017_021a193c(int* obj);
extern "C" Element020de650* func_020dedd0(Container020dedd0* c, int key);
extern "C" int func_020dd4c4(signed char member, Element020de650* entry);
extern "C" void func_ov005_021551fc(char*, int, int);

// USA: func_ov005_0215bf58
extern "C" ARM void func_ov005_0215bf58(EquipmentMenu* self)
{
    int touchHandled = 0;
    if (g_touchInput.pressed_ || (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) ||
        g_touchInput.released_ != 0)
    {
        func_ov005_021562b8(self);
        touchHandled = 1;
    }
    if (!touchHandled)
        func_ov005_0215730c(self);
    int member = func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3])->member_;
    Element020de650* entry = func_020dedd0(self->items_, self->slots_[self->slot_].item_);
    if (entry != NULL)
    {
        if (func_020dd4c4(member, entry))
            self->infoFlags_ |= 0x100;
        else
            self->infoFlags_ &= ~0x100;
    }
    func_ov005_021551fc((char*)self, member, 0);
}
