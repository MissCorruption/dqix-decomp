#include <globaldefs.h>
#include "Input/Input.h"

struct Callback_0202a91c {
    char padding0[0x4c];
    int pageSize;
    char padding50[0xc];
    short minimum, maximum, selected;
    char padding62[6];
    short repeatDelay, repeatTicks;
    unsigned char state, flags, activated, repeating, paging;
};
struct IndexList_0202a9ac;
struct IndexNode_0202a9ac { int kind; char padding4[0x34]; int busy; };
extern "C" int func_0202a9f4(Callback_0202a91c*);
extern "C" int func_0202aa94(Callback_0202a91c*);
extern "C" IndexNode_0202a9ac* func_0202a9ac(IndexList_0202a9ac*, int);
extern "C" void func_0202a91c(Callback_0202a91c*);
extern "C" void func_0202a8cc(char*, int);

// USA: func_02029634
extern "C" ARM void func_02029634(Callback_0202a91c* menu, int ticks) {
    if (menu->state != 0) return;
    if (!(menu->flags & 1) && menu->minimum >= 0 && menu->minimum <= menu->maximum) {
        if (g_keyManager.TestKeysReleased(0x40)) {
            menu->repeating = 0;
            menu->repeatDelay = 0;
            menu->repeatTicks = 0;
        }
        if (g_keyManager.TestKeysReleased(0x80)) {
            menu->repeating = 0;
            menu->repeatDelay = 0;
            menu->repeatTicks = 0;
        }
        if (menu->repeating) menu->repeatTicks += ticks;
        if (func_0202a9f4(menu)) {
            if (menu->repeatTicks >= menu->repeatDelay) {
                menu->repeatTicks = 0;
                menu->repeatDelay -= 5;
                if (menu->repeatDelay < 0) menu->repeatDelay = 0;
                if (menu->selected != menu->minimum || !menu->repeating) {
                    --menu->selected;
                    if (menu->selected < menu->minimum) menu->selected = menu->maximum;
                }
            }
            if (!menu->repeating) {
                menu->repeatDelay = 15;
                menu->repeatTicks = 0;
            }
            menu->repeating = 1;
        } else if (func_0202aa94(menu)) {
            if (menu->repeatTicks >= menu->repeatDelay) {
                menu->repeatTicks = 0;
                menu->repeatDelay -= 5;
                if (menu->repeatDelay < 0) menu->repeatDelay = 0;
                if (menu->selected != menu->maximum || !menu->repeating) {
                    ++menu->selected;
                    if (menu->maximum < menu->selected) menu->selected = menu->minimum;
                }
            }
            if (!menu->repeating) {
                menu->repeatDelay = 15;
                menu->repeatTicks = 0;
            }
            menu->repeating = 1;
        }
        if (menu->paging) {
            if (g_keyManager.TestKeyRepeat(0x20)) {
                menu->selected -= menu->pageSize;
                if (menu->selected < menu->minimum) menu->selected = menu->minimum;
            } else if (g_keyManager.TestKeyRepeat(0x10)) {
                menu->selected += menu->pageSize;
                if (menu->maximum < menu->selected) menu->selected = menu->maximum;
            }
        }
    }
    IndexNode_0202a9ac* node = func_0202a9ac(reinterpret_cast<IndexList_0202a9ac*>(menu), menu->selected);
    if (menu->flags & 1) return;
    if (g_keyManager.TestKeysPressed(1)) {
        int disabled = menu->flags & 2;
        if (!disabled && !node) {
            func_0202a91c(menu);
            menu->activated = 1;
            return;
        }
        if (!node) return;
        if (menu->selected < 0 || node->kind != 1) {
            if (disabled) return;
            func_0202a91c(menu);
            menu->activated = 1;
            return;
        }
        if (node->kind != 1 || node->busy != 0) return;
        func_0202a8cc(reinterpret_cast<char*>(node), 1);
        menu->state = 4;
        return;
    }
    if (!(menu->flags & 4) && g_keyManager.TestKeysPressed(2)) {
        menu->activated = 0;
        func_0202a91c(menu);
        return;
    }
    if (g_keyManager.TestKeysPressed(4)) {
        menu->activated = 0;
        func_0202a91c(menu);
    }
}
