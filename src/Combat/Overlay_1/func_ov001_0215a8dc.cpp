#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov001_021588bc { int unknown_0_; int unknown_4_; };
#if defined(jpn)
extern "C" int func_ov001_021588bc(struct Struct_ov001_021588bc* arg0, int arg1, int arg2);
#else
extern "C" int func_ov001_021588bc(struct Struct_ov001_021588bc* arg0, int arg1, int arg2);
#endif

struct Struct_ov001_02159d44;
extern "C" int func_ov001_02159d44(struct Struct_ov001_02159d44* arg0, void* arg1, int arg2);

extern "C" void func_ov001_0215a79c(void);

struct Struct_ov001_02165880_3 { char unknown_0_[8]; int unknown_8_; char unknown_c_[0x10]; char* unknown_1c_; void* unknown_20_; struct Struct_ov001_021588bc* unknown_24_; };
extern Struct_ov001_02165880_3 data_ov001_02165880;

// USA: func_ov001_0215a8dc
extern "C" ARM void func_ov001_0215a8dc(void) {
    *(unsigned short*)0x4000060 &= 0xcffb;
    func_ov001_021588bc(data_ov001_02165880.unknown_24_, data_ov001_02165880.unknown_8_, 8);
    for (int var0 = 0; var0 < 0x18; var0++) {
        func_ov001_02159d44((struct Struct_ov001_02159d44*)(data_ov001_02165880.unknown_1c_ + var0 * 0x588), data_ov001_02165880.unknown_20_, 0x1c);
    }
    func_ov001_0215a79c();
}
