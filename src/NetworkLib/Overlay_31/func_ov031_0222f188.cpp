#include <globaldefs.h>

extern "C" ARM char* func_ov031_02235c70(void);
extern "C" int func_ov031_02230330(char* arg0);
extern "C" int func_ov031_0222fd9c(void);
extern "C" int func_ov031_02236878(int arg0);
extern "C" ARM void func_ov031_02230984(int arg0);
extern "C" void func_ov031_02230d2c(void);
extern "C" void func_ov031_0222f20c(int arg0);

// USA: func_ov031_0222f188
extern "C" ARM int func_ov031_0222f188(void) {
    int var0 = func_ov031_02230330(func_ov031_02235c70());
    if (var0 == 0xe) return 0;
    if (func_ov031_0222fd9c() == 0) {
        func_ov031_02236878(9);
        return 1;
    }
    func_ov031_02230984(var0);
    switch (var0) {
        case 2:
        case 3:
        case 7:
        case 8:
            func_ov031_02230d2c();
            break;
        default:
            break;
    }
    func_ov031_0222f20c(var0);
    return 1;
}
