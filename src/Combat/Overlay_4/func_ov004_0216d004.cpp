#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020421a0(void);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;
extern "C" void func_02012028(void* arg0, unsigned char arg1);
struct Struct_020a9ea4;
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);
extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" int func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov004_0216b7bc(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov004_02171034_3 {
#if defined(jpn)
#else
    unsigned char unknown_0_[2];
#endif
    unsigned char unknown_2_;
#if defined(jpn)
    unsigned char unknown_1_[4];
#else
#endif
    unsigned char unknown_3_;
#if defined(jpn)
    unsigned char unknown_6_[6];
#else
    unsigned char unknown_4_[0xc];
#endif
    struct Struct_020a9ea4* unknown_10_;
};
extern struct Struct_ov004_02171034_3 data_ov004_02171034;

// USA: func_ov004_0216d004
extern "C" ARM int func_ov004_0216d004(void* arg0) {
    char* var0 = (char*)func_020421a0();
#if defined(jpn)
    var0[0x1000 + 0x7fb] = 0;
#else
    var0[0x1000 + 0x9ca] = 0;
#endif
    func_0205eaa0(&data_02108760, 5, 0);

    func_02012028((void*)GameState::GetInstance(), 0);
    func_020a9ea4(data_ov004_02171034.unknown_10_);
    data_ov004_02171034.unknown_2_ = 1;

    if (data_ov004_02171034.unknown_3_ == 4) {
        func_ov004_0216afb0(arg0, 0x38, 2, 0xd3, 0x3d, 0xc, 0x6, 0xc, 1);
        func_ov004_0216afb0(arg0, 0x39, 2, 0xd3, 0x3e, 0xc, 0x14, 0xc, 1);
    } else {
        func_ov004_0216afb0(arg0, 0x38, 2, 0xd3, 0x23, 0xa, 0x6, 0xa, 1);
        func_ov004_0216afb0(arg0, 0x39, 2, 0xd3, 0x35, 0xa, 0x14, 0xa, 1);
    }

    for (int var1 = 0; var1 < 2; var1++) {
        func_ov004_0216b2c8(arg0, 0x12d, var1 + 0x38, var1);
    }
    func_ov004_0216b7bc(arg0, 0xd3, 0x60, 0);
    return 0;
}
