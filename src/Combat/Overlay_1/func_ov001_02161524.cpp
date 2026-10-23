#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d60f4(void* arg0);

struct Struct_ov001_02161524 { int unknown_0_; unsigned char unknown_4_[0x18 - 4]; void* unknown_18_; };
struct Struct_ov001_02161524_2 { int unknown_0_; unsigned char unknown_4_[0xc - 4]; struct Struct_ov001_02161524* unknown_c_; };
struct Struct_ov001_02165880_45 { char unknown_0_[4]; struct Struct_ov001_02161524_2* unknown_4_; };
extern struct Struct_ov001_02165880_45 data_ov001_02165880;

// USA: func_ov001_02161524
extern "C" ARM int func_ov001_02161524(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    switch (data_ov001_02165880.unknown_4_[var0].unknown_0_) {
        case 0:
        case 1:
        case 4:
        case 5: {
            struct Struct_ov001_02161524* var2 = data_ov001_02165880.unknown_4_[var0].unknown_c_;
            if (var2 == 0) return 0;
            if (var1 != 0) {
                ((Object3D*)((unsigned char*)var2))->DisableFlag(0x10);
            } else {
                ((Object3D*)((unsigned char*)var2))->EnableFlag(0x10);
            }
            break;
        }
        case 6: {
            struct Struct_ov001_02161524* var3 = data_ov001_02165880.unknown_4_[var0].unknown_c_;
            if (var3 == 0 || var3->unknown_18_ == 0) return 0;
            void* var4 = var3->unknown_18_;
            if (var1 != 0) {
                ((Object3D*)((unsigned char*)var4))->DisableFlag(0x10);
                data_ov001_02165880.unknown_4_[var0].unknown_c_->unknown_0_ &= ~0x40;
            } else {
                ((Object3D*)((unsigned char*)var4))->EnableFlag(0x10);
                data_ov001_02165880.unknown_4_[var0].unknown_c_->unknown_0_ |= 0x40;
            }
            break;
        }
        case 2: {
            struct Struct_ov001_02161524* var5 = data_ov001_02165880.unknown_4_[var0].unknown_c_;
            if (var5 == 0) return 0;
            if (var1 != 0) {
                var5->unknown_0_ &= ~0x40;
            } else {
                var5->unknown_0_ |= 0x40;
            }
            break;
        }
        default:
            break;
    }
    return 1;
}
