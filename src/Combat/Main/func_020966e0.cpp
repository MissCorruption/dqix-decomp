#include <globaldefs.h>
#include "Input/Input.h"
struct Struct_020966e0 { char unknown_0_[0x220]; unsigned char unknown_220_, unknown_221_, unknown_222_, unknown_223_, unknown_224_, unknown_225_, unknown_226_; char unknown_227_[9]; unsigned char unknown_230_; };
extern "C" void func_02096a20(Struct_020966e0*);
// USA: func_020966e0
extern "C" ARM void func_020966e0(Struct_020966e0* arg0) {
    if (g_touchInput.paused_) { arg0->unknown_230_ = 1; return; }
    if (arg0->unknown_230_) { arg0->unknown_230_ = 0; g_touchInput.RefreshState(); }
    if (g_touchInput.isSavedPressPointValid_) return;
    int var0, var1;
    g_touchInput.GetTouchPoint(&var0, &var1);
    int var2 = g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld;
    int var3 = g_touchInput.timeHeld_;
    if (!var2) arg0->unknown_226_ = 1;
    if (!arg0->unknown_226_) return;
    if (arg0->unknown_224_) {
        arg0->unknown_222_ = var0; arg0->unknown_223_ = var1; func_02096a20(arg0);
        if (!var2) arg0->unknown_224_ = 0;
    } else if (var2 && !g_touchInput.IsTouchPointAtEdge()) {
        arg0->unknown_222_ = var0; arg0->unknown_220_ = arg0->unknown_222_;
        arg0->unknown_223_ = var1; arg0->unknown_221_ = arg0->unknown_223_;
        arg0->unknown_224_ = 1;
    }
    if (arg0->unknown_225_) { if (!var2) arg0->unknown_225_ = 0; }
    else if (var2 && var3>= 5) arg0->unknown_225_ = 1;
}
