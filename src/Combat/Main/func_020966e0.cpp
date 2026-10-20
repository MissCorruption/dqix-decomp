#include <globaldefs.h>
#include "Input/Input.h"
struct Touch020966e0 { char pad[0x220]; unsigned char startX, startY, x, y, active, held, enabled; char pad2[9]; unsigned char suspended; };
extern "C" void func_02096a20(Touch020966e0*);
// USA: func_020966e0
extern "C" ARM void func_020966e0(Touch020966e0* self) {
    if (g_touchInput.paused_) { self->suspended = 1; return; }
    if (self->suspended) { self->suspended = 0; g_touchInput.RefreshState(); }
    if (g_touchInput.isSavedPressPointValid_) return;
    int x, y;
    g_touchInput.GetTouchPoint(&x, &y);
    int pressed = g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld;
    int duration = g_touchInput.timeHeld_;
    if (!pressed) self->enabled = 1;
    if (!self->enabled) return;
    if (self->active) {
        self->x = x; self->y = y; func_02096a20(self);
        if (!pressed) self->active = 0;
    } else if (pressed && !g_touchInput.IsTouchPointAtEdge()) {
        self->x = x; self->startX = self->x;
        self->y = y; self->startY = self->y;
        self->active = 1;
    }
    if (self->held) { if (!pressed) self->held = 0; }
    else if (pressed && duration>= 5) self->held = 1;
}
