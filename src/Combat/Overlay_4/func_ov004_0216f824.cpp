#include <globaldefs.h>

extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" int func_020421a0(void);

struct Struct_ov004_02171048_8 { char unknown_0_[0x4]; char* unknown_4_; };
extern Struct_ov004_02171048_8 data_ov004_02171048;

// USA: func_ov004_0216f824
extern "C" ARM int func_ov004_0216f824(void* arg0) {
#if defined(jpn)
    enum { Enum_ov004_0216f824_712 = 0x218 };
#else
    enum { Enum_ov004_0216f824_712 = 0x2c8 };
#endif
    func_ov011_021848a0(arg0, 0x67);
    *(int*)((char*)func_020421a0() + Enum_ov004_0216f824_712) = 1;
    data_ov004_02171048.unknown_4_[0x31] = 1;
    return 0;
}
