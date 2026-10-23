#include <globaldefs.h>

extern "C" int func_ov031_02218b8c(void* arg0, int arg1);
extern "C" void* func_ov031_02218e2c(void* arg0, const char* arg1);
extern "C" int func_ov031_02218e84(void* arg0, int arg1, char* arg2, int arg3);
extern "C" void func_ov031_0221a218(void);
extern "C" int func_02005a94(const char* arg0);
extern "C" void func_ov031_02211b08(int arg0, int arg1);

extern char* data_ov031_0224e69c;
extern char data_ov031_0224a298[];
extern char data_ov031_0224a2a0[];
extern char data_ov031_0224a2ac[];
extern char data_ov031_0224a2b8[];
extern char data_ov031_0224a2c0[];
extern char data_ov031_0224a2d0[];
extern int data_020f3390;

// USA: func_ov031_0221a89c
extern "C" ARM int func_ov031_0221a89c(void) {
    char var0[4];
    char* var1 = data_ov031_0224e69c;
    if (func_ov031_02218b8c(var1 + 8, 0) == 0) {
        func_ov031_02211b08(0x10, 0xffff9df3);
        return 0;
    }
    if (func_ov031_02218e2c(var1 + 8, data_ov031_0224a298) != 0) {
        func_ov031_0221a218();
    }
    void* var2 = func_ov031_02218e2c(var1 + 8, data_ov031_0224a2a0);
    if (var2 == 0) {
        func_ov031_02211b08(0x10, 0xffff9df3);
        return 0;
    }
    int var3 = func_02005a94((const char*)var2);
    if (data_020f3390 == 0x22) {
        func_ov031_02211b08(0x10, 0xffff9df3);
        return 0;
    }
    if (var3 != 0xc8) {
        func_ov031_02211b08(0x10, 0xffff9e58 - var3);
        return 0;
    }
    if (func_ov031_02218e84(var1 + 8, (int)data_ov031_0224a2ac, var0, 4) <= 0) {
        func_ov031_02211b08(0x10, 0xffff9df3);
        return 0;
    }
    var3 = func_02005a94(var0);
    if (data_020f3390 == 0x22) {
        func_ov031_02211b08(0x10, 0xffff9df3);
        return 0;
    }
    if (var3 >= 0x64) {
        func_ov031_02211b08(0x10, 0xffffa240 - var3);
        return 0;
    }
    char* var4 = *(char**)(data_ov031_0224e69c + 0x1000 + 0xc1c);
    if (func_ov031_02218e84(var1 + 8, (int)data_ov031_0224a2b8, var4 + 4, 0x40) < 0) {
        goto fail_9df3;
    }
    var4 = *(char**)(data_ov031_0224e69c + 0x1000 + 0xc1c);
    if (func_ov031_02218e84(var1 + 8, (int)data_ov031_0224a2c0, var4 + 0x45, 0x12c) < 0) {
        goto fail_9df3;
    }
    if (func_ov031_02218e84(var1 + 8, (int)data_ov031_0224a2d0, var0, 1) < 0) {
    fail_9df3:
        func_ov031_02211b08(0x10, 0xffff9df3);
        return 0;
    }
    *(int*)(*(char**)(data_ov031_0224e69c + 0x1000 + 0xc1c)) = (var0[0] == 0x59) ? 1 : 0;
    return 1;
}
