#if defined(jpn)
enum { Enum_ov017_021c9334_1060 = 0x444 };
#else
enum { Enum_ov017_021c9334_1060 = 0x424 };
#endif

#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" int func_ov017_021d446c(void* arg0, void* arg1, int arg2);
extern "C" int func_02012fe4(void);
extern "C" int func_02018fbc(int arg0, Vector3i* arg1);
struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);
extern "C" void func_02076ccc(void*, int);

struct Struct_ov017_021c9334 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_0_ : 6;
    unsigned char unknown_6_6_ : 2;
    signed char unknown_7_0_ : 4;
    signed char unknown_7_4_ : 4;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021c9334
extern "C" ARM void func_ov017_021c9334(int arg0, Struct_ov017_021c9334* arg1) {
    int var0[3];
    if (!func_ov017_021d446c((char*)arg1 + 4, var0, -1)) return;
    if (*(int*)((char*)var0[2] + 0x130) == 9) return;

    Vector3i var1;
    var1.x = arg1->unknown_c_;
    var1.y = arg1->unknown_a_ << 4;
    var1.z = arg1->unknown_10_;
    short var2 = arg1->unknown_8_;
    int var3 = arg1->unknown_6_0_;

    int var4 = func_02012fe4();
    if (arg1->unknown_4_ == *(unsigned short*)var4 && *(int*)((char*)var4 + Enum_ov017_021c9334_1060) == 0) {
        var1.y = func_02018fbc(var4, &var1);
    }

    *(short*)((char*)var0[2] + 0x100 + 0x66) = arg1->unknown_7_4_;
    *(Vector3i*)((char*)var0[2] + 0x158) = var1;
    func_02033834((struct Struct_02033834_2*)var0[2], var2);
    func_02076ccc((void*)var0[2], var3);
}
