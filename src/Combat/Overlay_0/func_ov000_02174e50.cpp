#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" void func_0204bc08(void* arg0, int arg1, int arg2, void* arg3, int arg4);
extern "C" double func_02009424(double arg0);

struct Struct_ov000_02174e50 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x40 - 0x25];
    float unknown_40_;
#if defined(jpn)
    char unknown_44_[0xc0 - 0x44];
#else
    char unknown1_44_[0x80 - 0x44];
#endif
    unsigned short unknown_80_;
};

// USA: func_ov000_02174e50
extern "C" ARM void func_ov000_02174e50(char* arg0, int arg1) {
    GameState::GetInstance();
    struct Struct_ov000_02174e50* var0 = (struct Struct_ov000_02174e50*)func_ov000_02161318(arg0, arg1);
    if (var0 != NULL) {
        float var1 = var0->unknown_40_;
        if (3.14f <= var1) {
            unsigned short var2 = 0x7fff;
            memcpy(*(void**)(arg0 + 0x178), &var2, 2);
            func_0204bc08(arg0 + 0x8c4, arg1 + 2, 0xf, *(void**)(arg0 + 0x178), 2);
            var0->unknown_24_ &= ~8;
            var0->unknown_40_ = 0.0f;
            var0->unknown_80_ = 0x7fff;
        } else {
            float var3 = func_02009424((double)(var1 * 2.0f));
            if (var3 < 0.0f) {
                var3 = 0.0f - var3;
            }
            var3 = 1.0f - var3;
            int var4 = (int)(16.0f * var3) + 15;
            int var5 = (int)(31.0f * var3);
            if (var4 > 31) var4 = 31;
            if (var5 > 31) var5 = 31;
            unsigned short var6 = 0x1f | (var4 << 5) | (var5 << 10);
            memcpy(*(void**)(arg0 + 0x178), &var6, 2);
            func_0204bc08(arg0 + 0x8c4, arg1 + 2, 0xf, *(void**)(arg0 + 0x178), 2);
            var0->unknown_80_ = var6;
        }
    }
}
