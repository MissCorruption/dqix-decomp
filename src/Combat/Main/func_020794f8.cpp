#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_020794f8 {
    Object3D unknown_0_;
    char unknown_ac_[0xae - 0xac];
    short unknown_ae_;
};

extern "C" void func_ov017_021c95ec(int arg0, int arg1, int arg2, int arg3, int arg4,
                                    Vector3fix arg5, int arg6, int arg7, int arg8);

// USA: func_020794f8
extern "C" ARM void func_020794f8(struct Struct_020794f8* arg0, int arg1, int arg2) {
    int var0 = arg0->unknown_0_.GetField06();
    int var1 = arg0->unknown_0_.unknown_4_ - 0x70;
    int var2 = arg0->unknown_0_.unknown_2_;
    Vector3fix var3 = arg0->unknown_0_.position_;
    short var4 = arg0->unknown_ae_;
    var1 %= 12;
    if (var1 < 0 || var1 >= 12) {
        return;
    }
    func_ov017_021c95ec(var0, var1, var2, 1, -1, var3, var4, arg1, arg2);
}
