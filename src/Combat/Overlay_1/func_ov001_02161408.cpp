#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d60f4(void* arg0);
struct Struct_02040668;
extern "C" void func_02040668(struct Struct_02040668* arg0);
struct Struct_020406b0;
extern "C" void func_020406b0(struct Struct_020406b0* arg0);

struct Struct_ov001_02161408 { int unknown_0_; int unknown_4_; int unknown_8_; void* unknown_c_; };
struct Struct_ov001_02165880_44 { char unknown_0_[4]; Struct_ov001_02161408* unknown_4_; };
extern struct Struct_ov001_02165880_44 data_ov001_02165880;

// USA: func_ov001_02161408
extern "C" ARM int func_ov001_02161408(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    switch (data_ov001_02165880.unknown_4_[var0].unknown_0_) {
        case 0:
        case 1:
        case 4:
        case 5: {
            void* var2 = data_ov001_02165880.unknown_4_[var0].unknown_c_;
            if (var2 == 0) return 0;
            if (var1 != 0) {
                ((Object3D*)((unsigned char*)var2))->DisableFlag(1);
            } else {
                ((Object3D*)((unsigned char*)var2))->EnableFlag(1);
            }
            break;
        }
        case 6: {
            void* var3 = data_ov001_02165880.unknown_4_[var0].unknown_c_;
            if (var3 == 0 || *(void**)((char*)var3 + 0x18) == 0) return 0;
            void* var4 = *(void**)((char*)var3 + 0x18);
            if (var1 != 0) {
                ((Object3D*)((unsigned char*)var4))->DisableFlag(1);
                func_02040668((struct Struct_02040668*)data_ov001_02165880.unknown_4_[var0].unknown_c_);
            } else {
                ((Object3D*)((unsigned char*)var4))->EnableFlag(1);
                func_020406b0((struct Struct_020406b0*)data_ov001_02165880.unknown_4_[var0].unknown_c_);
            }
            break;
        }
        case 2: {
            void* var5 = data_ov001_02165880.unknown_4_[var0].unknown_c_;
            if (var5 == 0) return 0;
            if (var1 != 0) {
                func_02040668((struct Struct_02040668*)var5);
            } else {
                func_020406b0((struct Struct_020406b0*)var5);
            }
            break;
        }
        default:
            break;
    }
    return 1;
}
