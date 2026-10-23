#include <globaldefs.h>

extern "C" void* __clear(void* arg0, int arg1);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" int func_02042058(char* arg0, const char* arg1);

extern const char data_ov003_02180208;
extern const char data_ov003_02180215;

// USA: func_ov003_0216df38
extern "C" ARM short func_ov003_0216df38(char* arg0, struct Struct_0201099c_3* arg1, int arg2) {
    char var0[0x80];
    __clear(var0, 0x80);

    int var1;
    int var2 = 5;
    int var3, var4;
    if (arg2) var2 = 6;
    var3 = func_020e0434(arg1, var2);
    var4 = func_020e0434(arg1, 7);

    var1 = func_020420e8((void*)var3, 0);
    int var5 = func_020420e8((void*)var4, 0);
    if (var1 < var5) var1 = var5;

    sprintf(var0, &data_ov003_02180208, var3);
    func_02042058(arg0, var0);

    sprintf(var0, &data_ov003_02180215, var4);
    func_02042058(arg0, var0);

    int var6 = func_020e0434(arg1, 0xe);
    sprintf(var0, (const char*)var6);
    func_02042058(arg0, var0);

    int var7 = (var1 + 0x1b) & ~7;
    int var8 = var7 >> 3;
    return (short)(var8 + (var8 & 1));
}
