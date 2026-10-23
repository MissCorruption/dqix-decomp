#include <globaldefs.h>

extern char data_02105254;

struct Struct_02020fc4_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned int unknown_8_;
    unsigned char unknown_c_[8];
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
};

extern "C" void func_0203b8bc(void* arg0, int arg1, int arg2, int arg3, int arg4,
                              unsigned int arg5, int arg6, int arg7, int arg8);

// USA: func_0203bcb8
extern "C" ARM void func_0203bcb8(struct Struct_02020fc4_3* arg0, int arg1, int arg2) {
    func_0203b8bc(&data_02105254, arg0->unknown_16_, arg0->unknown_18_, arg1, arg2,
                  arg0->unknown_8_, arg0->unknown_0_, arg0->unknown_1_, arg0->unknown_14_);
}
