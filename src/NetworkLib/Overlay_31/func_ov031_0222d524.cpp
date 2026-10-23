#include <globaldefs.h>

struct Struct_ov031_0222d524 {
    char unknown_0_[8];
    unsigned char unknown_8_[0x20];
};

extern Struct_ov031_0222d524* data_ov031_02290c94;

extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" int func_ov031_0223dd34(unsigned char* arg0, int arg1);
extern "C" void func_ov031_0222336c(int, int, int);

// USA: func_ov031_0222d524
extern "C" ARM int func_ov031_0222d524() {
    int var0;
    int var1;
    func_ov031_02227520(&var0, &var1);
    if (var1 == 1) {
        func_ov031_0222336c(0x35, -1, 0);
    }
    func_ov031_02227520(&var0, &var1);
    if (var0 == 0) {
        return data_ov031_02290c94->unknown_8_[0] != 0;
    }
    if (var1 == 1) {
        if (data_ov031_02290c94->unknown_8_[0] == 0) {
            return 0;
        }
    }
    int var2 = func_ov031_0223dd34(data_ov031_02290c94->unknown_8_, 0x20);
    switch (var2) {
    case 0:
    case 5:
    case 13:
    case 16:
        return 1;
    case 10:
    case 26:
    case 32:
        for (int var3 = 0; var3 < var2; var3++) {
            unsigned int var4 = data_ov031_02290c94->unknown_8_[var3];
            if (!((var4 >= '0' && var4 <= '9') || (var4 >= 'A' && var4 <= 'F') || (var4 >= 'a' && var4 <= 'f'))) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
