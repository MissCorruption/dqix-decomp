#include <globaldefs.h>

enum Enum_ov031_0223ea84_B {
    Enum_ov031_0223ea84_B_0, Enum_ov031_0223ea84_B_1, Enum_ov031_0223ea84_B_2, Enum_ov031_0223ea84_B_3,
    Enum_ov031_0223ea84_B_4, Enum_ov031_0223ea84_B_5, Enum_ov031_0223ea84_B_6, Enum_ov031_0223ea84_B_7, Enum_ov031_0223ea84_B_8
};
enum Enum_ov031_0223ea84 {
    Enum_ov031_0223ea84_0, Enum_ov031_0223ea84_1, Enum_ov031_0223ea84_2, Enum_ov031_0223ea84_3
};

struct Struct_ov031_0223ea84;
struct Struct_ov031_0223ea84_2 {
    int unknown_0_;
    Enum_ov031_0223ea84 unknown_4_;
    void (*unknown_8_)(Enum_ov031_0223ea84, Enum_ov031_0223ea84_B, int);
    void* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
    void* unknown_20_;
};

struct Struct_ov031_02290dc0 {
    void (*unknown_0_)(void*);
};

extern Struct_ov031_02290dc0 data_ov031_02290dc0;
extern int data_ov031_02290dc4;
extern int data_ov031_02290dbc;
extern const unsigned char data_ov031_0224c6b4[];
extern const unsigned char data_ov031_0224c6c4[];
extern "C" int func_ov031_022411e4(Struct_ov031_0223ea84*, const void*, void**);
extern "C" int func_ov031_0223fb8c(const char*, int);
extern "C" int func_ov031_022412e8(Struct_ov031_0223ea84*, int*);
extern "C" int func_ov031_0223fb54(const unsigned char*, const unsigned char*, int);
extern "C" int func_ov031_0223e54c(char*, const char*, int);
extern "C" int func_ov031_0223f6ec(Struct_ov031_0223ea84*, Struct_ov031_0223ea84_2*);
extern "C" int func_ov031_0223f76c(Struct_ov031_0223ea84*, Struct_ov031_0223ea84_2*);
extern "C" int func_ov031_0223f740(Struct_ov031_0223ea84*, Struct_ov031_0223ea84_2*);
extern "C" void func_ov031_0223fa0c();
extern "C" void func_ov031_0223fa20();
extern "C" void func_ov031_02241060(Struct_ov031_0223ea84*);
extern "C" void func_ov031_0223faa8();
extern "C" void func_ov031_0223fad4(void*);

// USA: func_ov031_0223ea84
extern "C" ARM void func_ov031_0223ea84(int arg0, Struct_ov031_0223ea84* arg1, Struct_ov031_0223ea84_2* arg2) {
    void (*var0)(Enum_ov031_0223ea84, Enum_ov031_0223ea84_B, int) = arg2->unknown_8_;
    void* var1 = arg2->unknown_c_;
    Enum_ov031_0223ea84 var2 = arg2->unknown_4_;
    int var3 = -1;
    Enum_ov031_0223ea84_B var4;
    void* var5;
    int var6;
    char var7[4];

    switch (arg0) {
    case 0:
        if (func_ov031_022411e4(arg1, data_ov031_0224c6b4, &var5) != 3) {
            var4 = Enum_ov031_0223ea84_B_3;
            break;
        } else {
            int var8 = func_ov031_0223fb8c((const char*)var5, 3);
            if (var8 == 302) {
                int var9 = 0;
                int var10 = func_ov031_022412e8(arg1, &var6);
                int var11;
                if (var10 < 0) {
                    var4 = Enum_ov031_0223ea84_B_3;
                    break;
                }
                var11 = 0;
                if (var10 > 0) do {
                    int var12 = var11;
                    const char* var13 = (const char*)var6 + var11;
                    int var14;
                    int var15;
                    const char* var16;
                    int var17;
                    while (*var13 != '=' && var11 < var10) {
                        var13++;
                        var11++;
                    }
                    var14 = var11 - var12;
                    var11++;
                    if (var14 == 8) {
                        var9 = func_ov031_0223fb54((const unsigned char*)var6 + var12, data_ov031_0224c6c4, 8) == 0;
                    }
                    var15 = var11;
                    var16 = (const char*)var6 + var11;
                    while (*var16 != '&' && *var16 != '\r' && *var16 != '\0' && var11 < var10) {
                        var16++;
                        var11++;
                    }
                    var17 = var11 - var15;
                    var11++;
                    if (var9) {
                        if (var17 == 4) {
                            int var18 = func_ov031_0223e54c(var7, (const char*)var6 + var15, var17);
                            var7[var18] = '\0';
                            var3 = func_ov031_0223fb8c(var7, var18);
                        }
                        break;
                    }
                } while (var11 < var10);
                var4 = var3 < 0 ? Enum_ov031_0223ea84_B_3 : Enum_ov031_0223ea84_B_5;
            } else if (var8 <= 0 || var8 != 200) {
                var4 = Enum_ov031_0223ea84_B_3;
            } else {
                switch (var2) {
                case 1:
                    var4 = func_ov031_0223f6ec(arg1, arg2) ? Enum_ov031_0223ea84_B_0 : Enum_ov031_0223ea84_B_3;
                    break;
                case 2:
                    var4 = func_ov031_0223f76c(arg1, arg2) ? Enum_ov031_0223ea84_B_0 : Enum_ov031_0223ea84_B_3;
                    break;
                case 3:
                    var4 = func_ov031_0223f740(arg1, arg2) ? Enum_ov031_0223ea84_B_0 : Enum_ov031_0223ea84_B_3;
                    break;
                }
            }
        }
        break;
    case 8:
        var4 = Enum_ov031_0223ea84_B_6;
        break;
    case 6:
        var4 = Enum_ov031_0223ea84_B_4;
        break;
    default:
        var4 = Enum_ov031_0223ea84_B_3;
        break;
    }

    switch (var2) {
    case 1:
        break;
    case 2:
        if (arg2->unknown_20_ != 0) {
            data_ov031_02290dc0.unknown_0_(arg2->unknown_20_);
        }
        if (arg2->unknown_1c_ != 0) {
            data_ov031_02290dc0.unknown_0_(arg2->unknown_1c_);
        }
        data_ov031_02290dc0.unknown_0_(arg2->unknown_18_);
        break;
    case 3:
        data_ov031_02290dc0.unknown_0_(arg2->unknown_10_);
        break;
    }
    func_ov031_0223fa0c();
    data_ov031_02290dc4 = -1;
    func_ov031_0223fa20();
    func_ov031_02241060(arg1);
    data_ov031_02290dc0.unknown_0_(arg2);
    func_ov031_0223faa8();
    if (var4 != 0) {
        data_ov031_02290dbc = var4;
    }
    if (var0 != 0) {
        var0(var2, var4, var3);
    }
    if (var1) {
        func_ov031_0223fad4(var1);
    }
}
