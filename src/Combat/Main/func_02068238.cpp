#include <globaldefs.h>

extern "C" int func_02068200(signed char* arg0);
extern "C" int func_02042658(void* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

extern char data_020f08df;
extern char data_020f08e8;
extern char data_020f08f1;

struct Struct_02068238 {
    char unknown_0_[0x8b0];
    int unknown_8b0_[0x10];
    unsigned char unknown_8f0_;
    unsigned char unknown_8f1_[0x10];
    unsigned char unknown_901_;
    unsigned char unknown_902_[0x10];
};

// USA: func_02068238
extern "C" ARM void func_02068238(signed char* arg0, char** arg1, struct Struct_02068238* arg2) {
    int var0 = func_02068200(arg0) - 1;
    int var1 = arg2->unknown_8b0_[var0];
    unsigned char var2 = arg2->unknown_902_[var0];
    unsigned char var3 = arg2->unknown_8f1_[var0];
    if (var2 != 0) {
        int var4 = (var2 << 3) - func_02042658(0, var1);
        switch (var3) {
            case 0:
                *arg1 += sprintf(*arg1, &data_020f08df, var1, var4);
                break;
            case 1:
                *arg1 += sprintf(*arg1, &data_020f08e8, var4, var1);
                break;
            default:
                *arg1 += sprintf(*arg1, &data_020f08f1, var1);
                break;
        }
    } else {
        *arg1 += sprintf(*arg1, &data_020f08f1, var1);
    }
}
