#include <globaldefs.h>

struct Struct_ov028_021d9624 {
    char unknown_0_[0x80];
    unsigned char unknown_80_;
    char unknown_81_[3];
    unsigned int unknown_84_;
    unsigned int unknown_88_;
    char unknown_8c_[0x98 - 0x8c];
    unsigned int unknown_98_;
};

class Struct_ov001_02155d54;
extern "C" int func_ov028_021d8d40(Struct_ov001_02155d54* arg0, unsigned short arg1);
unsigned long long GetCurrentTimestamp(void);

// USA: func_ov028_021d9624
extern "C" ARM void func_ov028_021d9624(Struct_ov028_021d9624* arg0) {
    unsigned char var0 = arg0->unknown_80_;
    if (var0 != 0) return;
    func_ov028_021d8d40((Struct_ov001_02155d54*)arg0, 2);
    if (var0 == 0 && arg0->unknown_80_ == 1) {
        unsigned long long var1 = GetCurrentTimestamp();
        arg0->unknown_84_ = (unsigned int)var1;
        arg0->unknown_88_ = (unsigned int)(var1 >> 32);
        arg0->unknown_98_ = 0;
    }
}
