#include <globaldefs.h>
#include "World/Object3D.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov017_0218fcf8(int arg0, int arg1, int arg2);
extern "C" int func_ov017_0218f92c(int arg0, int arg1, int arg2);

struct Struct_ov001_02165880_15 { int unknown_0_; unsigned char* unknown_4_; };
extern Struct_ov001_02165880_15 data_ov001_02165880;

struct Struct_ov001_0215cf98 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_0215cf98
extern "C" ARM int func_ov001_0215cf98(void* arg0, int arg1) {
    int var0 = (int)GetGameResources();
    int var1 = func_ov017_021d60f4(arg0);
    struct Struct_ov001_0215cf98* var2 = (struct Struct_ov001_0215cf98*)(data_ov001_02165880.unknown_4_ + var1 * 0x10);

    if (var2->unknown_0_ == 0 || var2->unknown_0_ == 1 || var2->unknown_0_ == 4 || var2->unknown_0_ == 5 || var2->unknown_0_ == 6) {
        void* var3 = var2->unknown_c_;
        if (var3) {
            short var4 = *(short*)((char*)var3 + 4);
            int var5 = func_ov017_021d60f4((char*)arg0 + 8);
            int var6 = func_ov017_021d60f4((char*)arg0 + 0x10);
            int var7 = func_ov017_021d60f4((char*)arg0 + 0x18);
            unsigned short var8 = (unsigned short)(var5 | (var6 << 5) | (var7 << 10));
            int var9 = 0;
            if (arg1 - 4 > 0) {
                var9 = func_ov017_021d60f4((char*)arg0 + 0x20);
            }
            ((Object3D*)((unsigned char*)var3))->SetField9e((unsigned char)(var9 & 0xff));

            int var10 = (var4 >= 0 && var4 <= 3);
            if (var10) {
                func_ov017_0218fcf8(var0, var4, var8);
            } else {
                func_ov017_0218f92c(var0, var4, var8);
            }
        }
    }
    return 1;
}
