#include <globaldefs.h>
#include <NitroSDK/Interrupts.h>
#include <NitroSDK/ProcessorContext.h>

struct Struct_ov031_022066b4 {
    unsigned char unknown_0_[0x2c];
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
};

struct Struct_ov031_0224e1d0 {
    unsigned char unknown_0_[0x24];
    int unknown_24_;
};

extern Struct_ov031_0224e1d0 data_ov031_0224e1d0;

// USA: func_ov031_022066b4
extern "C" ARM int func_ov031_022066b4(int arg0) {
    Struct_ov031_022066b4* var0 = reinterpret_cast<Struct_ov031_022066b4*>(data_02111304.activeContext->unknown_A4);
    int var1 = DisableIRQInterrupts();
    int var2;
    if (var0 != 0) {
        int var3 = var0->unknown_2e_;
        if (var3 != 0 && var0->unknown_2c_ != 0) {
            int var4 = var0->unknown_2c_;
            int var5 = data_ov031_0224e1d0.unknown_24_;
            if (var3 > var4) {
                var3 = var4;
            }
            if (var3 > var5) {
                var3 = var5;
            }
            var2 = var3 * 2;
        } else {
            var2 = data_ov031_0224e1d0.unknown_24_ * 2;
        }
    } else {
        var2 = data_ov031_0224e1d0.unknown_24_ * 2;
    }
    SetIRQInterruptState(var1);
    if (var2 > 0) {
        int var6 = arg0 / var2;
        if (var6 > 0) {
            return var2 * var6;
        }
    }
    return arg0;
}
