#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(void* arg0, const void* arg1);

extern char data_020eff4d;
extern char data_020eff57;
extern char data_020eff61;
extern char data_020eff6b;

// USA: func_02041dd0
extern "C" ARM int func_02041dd0(char* arg0, int arg1) {
    char* var0 = arg0 + func_020d2ff0(arg0);
    switch (arg1) {
        case 0:
            var0 += sprintf(var0, &data_020eff4d);
            break;
        case 5:
            var0 += sprintf(var0, &data_020eff57);
            break;
        case 4:
            var0 += sprintf(var0, &data_020eff61);
            break;
        case 6:
            var0 += sprintf(var0, &data_020eff6b);
            break;
        default:
            break;
    }
    return var0 - arg0;
}
