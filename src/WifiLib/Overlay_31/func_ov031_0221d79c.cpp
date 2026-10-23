#include <globaldefs.h>

extern unsigned char data_ov031_0224f440[6];
extern "C" int func_ov031_0221e4fc(const void*, const void*, unsigned int);

// USA: func_ov031_0221d79c
extern "C" THUMB int func_ov031_0221d79c(int arg0, const void* arg1) {
    int var0 = 0;
    int var1;
    int var2;
    unsigned char* var3;
    var3 = data_ov031_0224f440;
    var2 = 0;
    var1 = 0;
    do {
        if (*var3 != 0) {
            var2 = 1;
            break;
        }
        var1++;
        var3++;
    } while (var1 < 6);
    if (var2 != 0) {
        if (func_ov031_0221e4fc(data_ov031_0224f440, arg1, 6) != 0) {
            var0 = 1;
        }
    } else if (arg0 != 0x1000) {
        var0 = 2;
    }
    return var0;
}
