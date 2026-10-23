#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"

#pragma define_section initcode ".init" RX

extern "C" void func_0200ee94(void* arg0, int arg1, int arg2, void* arg3, void* arg4);
extern "C" char* func_020a1ffc(char* arg0);

extern char data_01ffd364[8][6];

struct Struct_020f1940 {
    unsigned char unknown_0_[0x22];
    unsigned char unknown_22_;
    unsigned char unknown_23_;
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    unsigned char unknown_26_;
    unsigned char unknown_27_;
    unsigned char unknown_28_;
    unsigned char unknown_29_[0x0e];
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
};

extern struct Struct_020f1940 data_020f1940;

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020e6420
extern "C" __declspec(initcode) ARM void __sinit_020e6420(void) {
    func_0200ee94(data_01ffd364, 8, 6, (void*)func_020a1ffc, 0);
    data_020f1940.unknown_22_ = OVERLAY_ID(0);
    data_020f1940.unknown_23_ = OVERLAY_ID(1);
    data_020f1940.unknown_24_ = OVERLAY_ID(2);
    data_020f1940.unknown_25_ = OVERLAY_ID(3);
    data_020f1940.unknown_26_ = OVERLAY_ID(4);
    data_020f1940.unknown_27_ = OVERLAY_ID(5);
    data_020f1940.unknown_28_ = OVERLAY_ID(6);
    data_020f1940.unknown_37_ = OVERLAY_ID(22);
    data_020f1940.unknown_38_ = OVERLAY_ID(23);
    data_020f1940.unknown_39_ = OVERLAY_ID(24);
    data_020f1940.unknown_3a_ = OVERLAY_ID(26);
    data_020f1940.unknown_3b_ = OVERLAY_ID(25);
    data_020f1940.unknown_3c_ = OVERLAY_ID(28);
    data_020f1940.unknown_3d_ = OVERLAY_ID(27);
}
