#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2*, int, unsigned int*, unsigned int*);
struct Struct_ov031_02238370;
extern "C" unsigned char func_ov031_0223baac(Struct_ov031_02238370*);
extern "C" ARM void func_ov031_0223bab4(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov031_02238370
extern "C" ARM void func_ov031_02238370(Struct_ov031_02222f44_2* arg0, int arg1) {
    int var0 = func_ov031_0223baac((Struct_ov031_02238370*)arg0);
    int var1 = 0;
    if (var0 <= 0)
        return;
    int var2 = var1;
    int var3 = 0x200;
    do {
        unsigned int var4, var5;
        func_ov031_0223bd28(arg0, var1, &var4, &var5);
        int var6;
        if ((int)var5 < arg1)
            goto setFull;
        if ((int)var5 < 0xc0) {
            var6 = var2;
            goto haveVal;
        }
    setFull:
        var6 = var3;
    haveVal:
        func_ov031_0223bab4(arg0, var1, var6, 0);
        var1++;
    } while (var1 < var0);
}
