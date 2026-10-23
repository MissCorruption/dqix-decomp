#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_02046968;
extern "C" void func_02046968(struct Struct_02046968* arg0);
extern "C" void func_ov017_021a3544(void* arg0, void* arg1);

struct Struct_ov017_021d6a34 {
    int unknown_0_[18];
};
extern struct Struct_ov017_021d6a34 data_ov017_021d6a34;

struct Struct_0203d028_4 {
    void* unknown_0_;
};

// USA: func_ov017_021a3498
extern "C" ARM void func_ov017_021a3498(struct Struct_0203d028_4* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021a3498_852=0x134};
#else
 enum {Enum_ov017_021a3498_852=0x354};
#endif
    void* var0 = arg0->unknown_0_;
    if (var0 != NULL && *((unsigned char*)var0 + 1) != 0) {
        int var1 = (int)GetGameResources();
        if (var1 != 0) {
            struct Struct_ov017_021d6a34 var2 = data_ov017_021d6a34;
            int* var3 = var2.unknown_0_;
            while (*var3 != 0xffff) {
                signed char var4 = *(signed char*)arg0->unknown_0_;
                if (var4 == *var3) {
                    *((unsigned char*)(long)var1 + 0x4000 + Enum_ov017_021a3498_852) = 0xc;
                    break;
                }
                var3++;
            }
        }
    }
    func_02046968((struct Struct_02046968*)arg0);
    func_ov017_021a3544(arg0, arg0->unknown_0_);
}
