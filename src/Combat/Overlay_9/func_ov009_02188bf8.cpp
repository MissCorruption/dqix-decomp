// KEEP-NAME
// USA: func_ov009_02188bf8
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

#if !defined(jpn)
struct Struct_ov009_0218aa70 {
    short unknown_0_, unknown_2_;
};
extern Struct_ov009_0218aa70 data_ov009_0218aa70[][5];
#endif

extern "C" ARM void func_ov009_02188bf8(unsigned char* arg0, int arg1, short* arg2, short* arg3) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
#if defined(jpn)
    if (var0->unknown_da3_ == 0) {
        switch (arg1) {
        case 0: *arg2 = 0xeb8; *arg3 = 0x109f; break;
        case 1: *arg2 = 0xe35; *arg3 = 0x1028; break;
        case 2: *arg2 = 0xf0a; *arg3 = 0xfae; break;
        case 3: *arg2 = 0x1024; *arg3 = 0xf33; break;
        case 4: *arg2 = 0xf1e; *arg3 = 0xeb4; break;
        }
    } else {
        switch (arg1) {
        case 0: *arg2 = 0xeb8; *arg3 = 0x1051; break;
        case 1: *arg2 = 0xe39; *arg3 = 0xffb; break;
        case 2: *arg2 = 0xee1; *arg3 = 0xf85; break;
        case 3: *arg2 = 0x1024; *arg3 = 0xf33; break;
        case 4: *arg2 = 0xeb8; *arg3 = 0xeb4; break;
        }
    }
#else
    Struct_ov009_0218aa70* var1 = &data_ov009_0218aa70[var0->unknown_da3_][arg1];
    *arg2 = var1->unknown_0_;
    *arg3 = var1->unknown_2_;
#endif
}
