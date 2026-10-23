#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern "C" int func_0207d978(struct Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" void func_ov017_021b848c(unsigned char* arg0, signed char* arg1, int arg2, int arg3, unsigned short arg4, signed char arg5, int arg6, int arg7);

struct Struct_0207dcf0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    short unknown_a_;
};
extern "C" void func_ov017_021c60a4(struct Struct_0207dcf0* arg0);

extern int data_02108ea8;

#if defined(jpn)
enum { Enum_0207dcf0_14104 = 0x3508 };
#else
enum { Enum_0207dcf0_14104 = 0x3718 };
#endif

// USA: func_0207dcf0
extern "C" ARM void func_0207dcf0(unsigned short arg0) {
    struct Struct_0207d7f4* var0 = (struct Struct_0207d7f4*)&data_02108ea8;
    if (!func_0207d978(var0, arg0)) return;

    struct Struct_0207d7f4* var1 = func_0207d9bc(var0, arg0);
    if (!var1) return;

    unsigned char* var2 = *(unsigned char**)((char*)GetGameResources() + Enum_0207dcf0_14104);
    void* var3 = func_ov017_021b8478(var2);
    func_ov017_021b8470(var2);

    if (((signed char*)var1)[8] != 0) {
        func_ov017_021b848c(
            var2,
            (signed char*)var1 + 8,
            ((signed char*)var1)[4],
            0,
            var1->unknown_2_,
            ((signed char*)var1)[5],
            1,
            *(int*)((char*)var3 + 0xc)
        );
    }

    struct Struct_0207dcf0 var4;
    var4.unknown_0_ = arg0;
    var4.unknown_8_ = ((signed char*)var1)[4];
    var4.unknown_4_[0] = ((signed char*)var1)[8];
    var4.unknown_4_[1] = ((signed char*)var1)[9];
    var4.unknown_4_[2] = ((signed char*)var1)[0xa];
    var4.unknown_4_[3] = ((signed char*)var1)[0xb];
    var4.unknown_2_ = var1->unknown_2_;
    var4.unknown_9_ = ((unsigned char*)var1)[5];
    var4.unknown_a_ = -1;
    if (((signed char*)var1)[4] == 0) {
        var4.unknown_a_ = (short)*(int*)((char*)var3 + 0xc);
    }
    func_ov017_021c60a4(&var4);
}
