#include <globaldefs.h>

extern int data_ov031_0224f4e0;
extern "C" int func_ov031_0221f158();
extern "C" int func_020c7ea0(void* arg0, int* arg1, int arg2);

// USA: func_ov031_0221e92c
extern "C" THUMB int func_ov031_0221e92c() {
    int var0 = -1;
    if (func_ov031_0221f158() != 0) {
        int var1;
        int var2 = 1;
        do {
        func_020c7ea0(&data_ov031_0224f4e0, &var1, 1);
        switch (var1) {
        case 0xe:
            var2 = 0;
            var0 = 0;
            break;
        default:
            var2 = 0;
            break;
        }
    } while (var2 != 0);
    }
    return var0;
}
