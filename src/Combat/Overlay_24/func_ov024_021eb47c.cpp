#include <globaldefs.h>
struct Struct_ov024_021ea4d0;

extern short data_ov024_021fe7aa[];

// USA: func_ov024_021eb47c
extern "C" ARM int func_ov024_021eb47c(Struct_ov024_021ea4d0* arg0, int arg1) {
    short* var0 = data_ov024_021fe7aa;
    while (*var0 != -1) {
        if (*var0 == arg1) return 1;
        var0++;
    }
    return 0;
}
