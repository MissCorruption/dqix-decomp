#include <globaldefs.h>

class Struct_ov028_021d8a74;
extern "C" void func_ov028_021d8a74(Struct_ov028_021d8a74* arg0, float arg1);
extern "C" void func_ov028_021d8ad4(void* arg0, char* arg1);

struct Struct_ov028_021d942c {
    float unknown_0_;
    char unknown_4_[0x40 - 4];
    void* unknown_40_;
    char unknown_44_[0x60 - 0x44];
    int unknown_60_;
    int unknown_64_;
    char unknown_68_[0x80 - 0x68];
    unsigned char unknown_80_;
    unsigned char unknown_81_;
};

// USA: func_ov028_021d942c
extern "C" ARM void func_ov028_021d942c(Struct_ov028_021d942c* arg0, int arg1) {
    float var0 = arg0->unknown_0_;
    float var1 = (float)arg1 * var0 * 0.5f;
    func_ov028_021d8a74((Struct_ov028_021d8a74*)((char*)arg0 + 0x60), var1);
    func_ov028_021d8ad4((char*)arg0 + 0x60, (char*)arg0->unknown_40_);
    if ((unsigned int)((arg0->unknown_64_ >> 12) + 16) <= (unsigned int)(arg0->unknown_60_ >> 12)) {
        arg0->unknown_80_ = 3;
        arg0->unknown_81_ = 0;
    }
}
