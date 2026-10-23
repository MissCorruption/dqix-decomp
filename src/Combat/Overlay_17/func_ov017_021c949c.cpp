#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" int func_ov017_021d446c(void* arg0, void* arg1, int arg2);
extern "C" int func_02012fe4(void);
extern "C" int func_02018fbc(int arg0, Vector3i* arg1);
struct Struct_02033834;
extern "C" void func_02033874(Struct_02033834* arg0, int arg1);
extern "C" void func_02076ccc(void*, int);

struct Struct_ov017_021c949c {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021c949c
extern "C" ARM void func_ov017_021c949c(int arg0, Struct_ov017_021c949c* arg1) {
#if defined(jpn)
 enum {Enum_ov017_021c949c_1060=0x444};
#else
 enum {Enum_ov017_021c949c_1060=0x424};
#endif
    int var0[3];
    if (!func_ov017_021d446c((char*)arg1 + 4, var0, -1)) return;

    Vector3i var1;
    var1.x = arg1->unknown_c_;
    var1.y = arg1->unknown_a_ << 4;
    var1.z = arg1->unknown_10_;
    short var2 = arg1->unknown_8_;

    int var3 = func_02012fe4();
    if (arg1->unknown_4_ == *(unsigned short*)var3 && *(int*)((char*)var3 + Enum_ov017_021c949c_1060) == 0) {
        var1.y = func_02018fbc(var3, &var1);
    }

    *(Vector3i*)((char*)var0[2] + 0x44) = var1;
    func_02033874((Struct_02033834*)var0[2], var2);

    if (*(int*)((char*)var0[2] + 0x130) != 9) {
        func_02076ccc((void*)var0[2], 1);
    }
}
