#include <globaldefs.h>

extern "C" int func_ov031_0220fe44(int arg0);
extern "C" ARM int func_ov031_0220ff18(void* arg0);
extern "C" ARM void func_ov031_0220fea0(void);
extern "C" ARM void func_ov031_0220fed8(void);
extern "C" ARM int func_ov031_0220fff8(int* arg0);

struct Struct_ov031_0220fb28_3 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; };

extern void* data_ov031_0224e580;

// USA: func_ov031_0220fd78
extern "C" ARM void func_ov031_0220fd78(int arg0, Struct_ov031_0220fb28_3 *arg1) {
    arg1->unknown_0_ = 0x14;
    arg1->unknown_4_ = 0x44535359;
    arg1->unknown_8_ = 0xd5;
    arg1->unknown_c_ = 1;
    arg1->unknown_10_ = arg0;

    *(int*)((char*)data_ov031_0224e580 + 0x30) = 0;

    if (func_ov031_0220fe44((int)func_ov031_0220fff8) != 0) {
        if (func_ov031_0220ff18(arg1) != 0) {
            func_ov031_0220fea0();
        }
    }
    func_ov031_0220fed8();
}
