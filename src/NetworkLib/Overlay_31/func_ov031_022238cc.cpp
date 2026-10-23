#include <globaldefs.h>

extern int* data_ov031_02250bf0;

extern "C" void func_ov031_0223ba20(int arg0);

// USA: func_ov031_022238cc
extern "C" ARM void func_ov031_022238cc(void) {
    int var0 = 0;
    do {
        if (data_ov031_02250bf0[var0] != 0) {
            func_ov031_0223ba20(data_ov031_02250bf0[var0]);
            data_ov031_02250bf0[var0] = 0;
        }
        var0++;
    } while (var0 < 4);
}
