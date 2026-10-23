#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" int func_ov017_021d446c(void* arg0, void* arg1, int arg2);
struct Struct_02033834;
extern "C" void func_02033874(Struct_02033834* arg0, int arg1);
extern "C" void func_02076ccc(void*, int);

struct Struct_ov017_021c91f4 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021c91f4
extern "C" ARM void func_ov017_021c91f4(int arg0, Struct_ov017_021c91f4* arg1) {
    int var0[3];
    if (!func_ov017_021d446c((char*)arg1 + 4, var0, -1)) return;
    if (*(int*)((char*)var0[2] + 0x130) == 9) return;
    Vector3i var1;
    var1.x = arg1->unknown_c_;
    var1.z = arg1->unknown_10_;
    int var2 = arg1->unknown_a_;
    unsigned short var3 = arg1->unknown_8_;
    var1.y = *(int*)((char*)var0[2] + 0x48);
    *(Vector3i*)((char*)var0[2] + 0x44) = var1;
    func_02033874((Struct_02033834*)var0[2], var2);
    *(unsigned short*)((char*)var0[2] + 0x100 + 0x64) = var3;
    func_02076ccc((void*)var0[2], 2);
}
