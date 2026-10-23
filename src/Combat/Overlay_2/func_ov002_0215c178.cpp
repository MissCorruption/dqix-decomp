#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void* arg0);
extern "C" int func_020420e8(int arg0, int arg1);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_020e51cc(int arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041e70(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041a28(char* arg0, int arg1);

extern short data_ov002_0216ca04[];
extern int data_ov002_0216ca58[];
extern char data_ov002_0216d26e;

#if defined(jpn)
extern int data_ov002_0216d09c[];
extern const char* data_ov002_0216d600[];
extern char data_ov002_0216d92a;

extern "C" ARM void func_ov002_0215c178(void* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;
    char* var0 = (char*)arg0 + 0x1a00;
    short var1 = *(short*)(var0 + 0xa8);
    void* var2 = func_0205ec34(var0);
    int var3 = func_0206dfb0((int)(long)var2, (unsigned char*)var2 + 0x8c, 4506) != 0;
    if (arg2 != 0) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);
    for (int var4 = 0; var4 < 6; var4++) {
        if (var4 == 3 && var3 == 0) {
            func_02041e70(arg1, 3);
        }
        int var5 = data_ov002_0216d09c[var4];
        func_02041b70(arg1, var5, data_ov002_0216d600[var5]);
        if (var4 == 1 || var4 == 3) {
            func_02042058(arg1, &data_ov002_0216d92a);
        } else {
            func_02041a28(arg1, 0x3e);
        }
        if (var4 == 3 && var3 == 0) {
            func_02041e70(arg1, 15);
        }
    }
}
#else
// USA: func_ov002_0215c178
extern "C" ARM void func_ov002_0215c178(void* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;
    char* var6 = (char*)arg0 + 0x1b00;
    short var7 = *(short*)(var6 + 0xe0);
    void* var8 = func_0205ec34(var6);
    int var9 = func_0206dfb0((int)(long)var8, (unsigned char*)var8 + 0x8c, 4506) != 0;
    int var10 = 0;
    for (int var11 = 0; var11 < 3; var11++) {
        int var12 = func_020420e8(func_020e51cc(data_ov002_0216ca04[var11]), 0);
        if (var10 < var12) var10 = var12;
    }
    if (arg2 != 0) {
        func_02041c08(arg1, var7, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var7);
    for (int var13 = 0; var13 < 6; var13++) {
        if (var13 == 3 && var9 == 0) {
            func_02041e70(arg1, 3);
        }
        int var14 = data_ov002_0216ca58[var13];
        int var15 = func_020e51cc(data_ov002_0216ca04[var14]);
        func_02041b70(arg1, var14, (const char*)(long)var15);
        if (var13 == 1 || var13 == 3) {
            func_02042058(arg1, &data_ov002_0216d26e);
        } else {
            func_02041a28(arg1, var10 + 0x20);
        }
        if (var13 == 3 && var9 == 0) {
            func_02041e70(arg1, 15);
        }
    }
}
#endif
