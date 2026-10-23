#include <globaldefs.h>

struct Struct_0207fdcc_2;

extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c04(struct Struct_0207fdcc_2* arg0, int arg1);

struct Struct_ov006_0215e5f8 {
    char unknown_0_[0x394];
    unsigned short unknown_394_;
};

// USA: func_ov006_0215e5f8
extern "C" ARM void func_ov006_0215e5f8(struct Struct_ov006_0215e5f8* arg0, struct Struct_0207fdcc_2* arg1, int arg2, unsigned char* arg3) {
    if (arg1 == NULL) {
        return;
    }
    if (arg2 != 0) {
        arg0->unknown_394_ |= 0x80;
        *arg3 = 1;
        func_02080c20(arg1, 0xd);
        func_02080c20(arg1, 0xe);
        func_02080c20(arg1, 0xf);
        func_02080c20(arg1, 9);
    } else {
        arg0->unknown_394_ &= ~0x80;
        *arg3 = 0;
        func_02080c04(arg1, 0xd);
        func_02080c04(arg1, 0xe);
        func_02080c04(arg1, 0xf);
        func_02080c04(arg1, 9);
    }
}
