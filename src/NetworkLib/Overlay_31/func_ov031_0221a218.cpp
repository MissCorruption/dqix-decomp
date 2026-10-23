#include <globaldefs.h>

extern "C" unsigned int strlen(const char* arg0);
extern "C" char* strcpy(char* arg0, const char* arg1);
extern "C" int strcmp(const char* arg0, const char* arg1);
extern "C" int func_02005a94(const char* arg0);
extern "C" int func_020cf25c(void* arg0, void* arg1);
extern "C" long long func_020cf990(int arg0, unsigned char* arg1);

struct Struct_ov031_0221a218 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov031_0221a218_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_ov031_0224e688 {
    int unknown_0_;
    long long unknown_8_;
    long long unknown_10_;
};

extern char data_ov031_0224a224[];
extern const char* data_ov031_0224a1f4[12];
extern Struct_ov031_0224e688 data_ov031_0224e688;
extern int data_020f3390;

// USA: func_ov031_0221a218
extern "C" ARM int func_ov031_0221a218(const char* arg0) {
    Struct_ov031_0221a218 var0;
    Struct_ov031_0221a218_2 var1;
    char var2[32];
    long long var3;
    long long var4;
    int var5;

    if (strlen(arg0) != strlen(data_ov031_0224a224) || arg0[7] != ' ' || arg0[11] != ' ' || arg0[16] != ' '
        || arg0[19] != ':' || arg0[22] != ':' || arg0[25] != ' ') {
        goto fail;
    }
    if (func_020cf25c(&var0, &var1) != 0) {
        goto fail;
    }
    var3 = func_020cf990((unsigned int)&var0, (unsigned char*)&var1);
    if (var3 == -1) {
        goto fail;
    }

    strcpy(var2, arg0);
    var2[7] = 0;
    var2[11] = 0;
    var2[16] = 0;
    var2[19] = 0;
    var2[22] = 0;
    var2[25] = 0;

    data_020f3390 = 0;
    var0.unknown_0_ = func_02005a94(&var2[12]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    var0.unknown_0_ -= 2000;

    var0.unknown_4_ = 13;
    var5 = 0;
    do {
        if (strcmp(data_ov031_0224a1f4[var5], &var2[8]) == 0) {
            var0.unknown_4_ = var5 + 1;
            break;
        }
    } while (++var5 < 12);
    if (var0.unknown_4_ > 12) {
        goto fail;
    }

    data_020f3390 = 0;
    var0.unknown_8_ = func_02005a94(&var2[5]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    data_020f3390 = 0;
    var1.unknown_0_ = func_02005a94(&var2[17]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    data_020f3390 = 0;
    var1.unknown_4_ = func_02005a94(&var2[20]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    data_020f3390 = 0;
    var1.unknown_8_ = func_02005a94(&var2[23]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }

    var4 = func_020cf990((int)&var0, (unsigned char*)&var1);
    if (var4 == -1) {
        goto fail;
    }
    data_ov031_0224e688.unknown_10_ = var3 - var4;
    data_ov031_0224e688.unknown_8_ = var3;
    data_ov031_0224e688.unknown_0_ = 1;
    return 1;
fail:
    return 0;
}
