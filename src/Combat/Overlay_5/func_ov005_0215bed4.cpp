#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Input/Input.h"

#if defined(jpn)
enum { kMember = 0x4f8 };
#else
enum { kMember = 0x4fc };
#endif

struct MemberScreen
{
    char unk_0[kMember];
    int member_;
};

struct EquipmentMenu;

extern "C" void func_ov005_021562b8(EquipmentMenu* self);
extern "C" void func_ov005_0215730c(EquipmentMenu* self);
MemberScreen* GetField1c_021a193c(int* obj);
void DispatchByIdxAndCond021551fc(char*, int, int);

// USA: func_ov005_0215bed4
extern "C" ARM void func_ov005_0215bed4(EquipmentMenu* self)
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
    DispatchByIdxAndCond021551fc((char*)self, GetField1c_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3])->member_, 0);
}
