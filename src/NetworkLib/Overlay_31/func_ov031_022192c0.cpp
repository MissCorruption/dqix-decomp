#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/ProcessorContext.h"

struct ProcessorContext;

typedef void* (*Type_ov031_022192c0)(const char* tag, unsigned int size);
typedef void (*Type_ov031_022192c0_2)(const char* tag, void* p, int flags);

struct Struct_ov031_022192c0_2 {
    char unknown_0_[0x1004];
    int unknown_1004_;
    char unknown_1008_[0x1108 - 0x1008];
    Type_ov031_022192c0 unknown_1108_;
    Type_ov031_022192c0_2 unknown_110c_;
    char unknown_1110_[0x1114 - 0x1110];
    char* unknown_1114_;
    char* unknown_1118_;
};

struct Struct_ov031_022192c0_3 {
    char unknown_0_[0x1020];
    int unknown_1020_;
    char unknown_1024_[0x112c - 0x1024];
    int unknown_112c_;
    char unknown_1130_[0x1a08 - 0x1130];
    char* unknown_1a08_;
    char unknown_1a0c_[0x1b38 - 0x1a0c];
    ProcessorContext unknown_1b38_;
};

struct Struct_ov031_0224e624 {
    const char* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    Type_ov031_022192c0 unknown_c_;
    Type_ov031_022192c0_2 unknown_10_;
    int unknown_14_;
    int unknown_18_;
};

struct Struct_ov031_0224e60c_3 {
    Struct_ov031_022192c0_2* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    Struct_ov031_022192c0_3* unknown_14_;
    Struct_ov031_0224e624 unknown_18_;
};

struct Struct_ov031_0224e640 {
    unsigned short unknown_0_;
    char unknown_2_[0x34 - 2];
    unsigned char unknown_34_;
    char unknown_35_[0x40 - 0x35];
    Type_ov031_022192c0 unknown_40_;
    Type_ov031_022192c0_2 unknown_44_;
};

struct Struct_ov031_022192c0 {
    unsigned long long unknown_0_;
    int unknown_8_[3];
};

extern "C" int func_ov031_02217c00(Struct_ov031_022192c0_3* arg0, Struct_ov031_0224e624* arg1);
extern "C" void func_ov031_022183b4(Struct_ov031_022192c0_3* arg0);
extern "C" void func_ov031_0221a1d4(int arg0);
extern "C" int func_ov031_02217d1c(Struct_ov031_022192c0_3* arg0);
extern "C" void func_ov031_02217db4(Struct_ov031_022192c0_3* arg0, int arg1);
extern "C" int func_ov031_02218b8c(Struct_ov031_022192c0_3* arg0, int arg1);
extern "C" char* func_ov031_02218e2c(Struct_ov031_022192c0_3* arg0, const char* arg1);
extern "C" int func_02005a94(const char* arg0);
extern "C" int func_ov031_022175dc(void* arg0);
extern "C" int func_ov031_022178b4(Struct_ov031_022192c0_3* arg0, void* arg1, int arg2);
extern "C" int func_ov031_02218604(Struct_ov031_022192c0_3* arg0, const char* arg1, const char* arg2, int arg3);
extern "C" void func_ov031_0221ae00(Struct_ov031_022192c0* arg0);
extern "C" int func_ov031_022167c8(Struct_ov031_0224e640* arg0, Struct_ov031_022192c0_3* arg1);
extern "C" void func_ov031_02216a84();
extern "C" int func_ov031_02216ab4();
extern "C" void func_ov031_02216b00(int* arg0);
extern "C" void func_ov031_02216a2c();
extern "C" int func_ov031_02218e84(void* arg0, int arg1, char* arg2, int arg3);
extern "C" int func_ov031_02218710(Struct_ov031_022192c0_3* arg0, char* arg1);

#if defined(jpn)
#define data_ov031_0224a170 data_ov031_0224ad70
#define data_ov031_0224a198 data_ov031_0224ad98
#endif
extern Struct_ov031_0224e60c_3 data_ov031_0224e60c;
extern Struct_ov031_0224e624 data_ov031_0224e624;
extern Struct_ov031_0224e640 data_ov031_0224e640;
extern const char* data_ov031_0224a010;
extern const char* data_ov031_02249b54;
extern int data_020f3390;
extern char data_ov031_0224a124[];
extern char data_ov031_0224a130[];
extern char data_ov031_0224a150[];
extern char data_ov031_0224a158[];
extern char data_ov031_0224a160[];
extern char data_ov031_0224a170[];
extern char data_ov031_0224a178[];
extern char data_ov031_0224a180[];
extern char data_ov031_0224a18c[];
extern char data_ov031_0224a190[];
extern char data_ov031_0224a198[];
extern char data_ov031_0224a06c[];
extern char data_ov031_0224a088[];
extern char data_ov031_0224a0bc[];
extern char data_ov031_0224a0d8[];
extern char data_ov031_0224a0e4[];
extern char data_ov031_0224a0f4[];
extern char data_ov031_0224a104[];
extern char data_ov031_0224a1a0[];
extern char data_ov031_0224a1ac[];
extern char data_ov031_0224a1b8[];

#define G data_ov031_0224e60c

#define FAIL(code)                          \
    {                                       \
        func_ov031_022183b4(G.unknown_14_);        \
        func_ov031_0221a1d4(code);          \
        goto done;                          \
    }

// USA: func_ov031_022192c0
extern "C" ARM void func_ov031_022192c0(void) {
    int var0;
    Type_ov031_022192c0 var1 = G.unknown_0_->unknown_1108_;
    Type_ov031_022192c0_2 var2 = G.unknown_0_->unknown_110c_;
    char* var3 = 0;
    char* var4 = 0;
    char* var5 = 0;
    unsigned int var6 = 0;
    char* var7;
    int var8;
    int var9;
    unsigned int var10;
    char* var11;
    char* var12;
    int var13;
    int var14;
    char* var15;
    char* var16;
    char* var17;
    int var18[0x71];
    char var19[0x94];
    Struct_ov031_022192c0 var20;
    char var21[4];

    for (;;) {
        G.unknown_18_.unknown_0_ = data_ov031_0224a010;
        G.unknown_18_.unknown_4_ = 1;
        G.unknown_18_.unknown_8_ = 0x1000;
        G.unknown_18_.unknown_c_ = var1;
        G.unknown_18_.unknown_10_ = var2;
        G.unknown_18_.unknown_18_ = 20000;
        G.unknown_0_->unknown_1004_ = -2;
        if (func_ov031_02217c00(G.unknown_14_, &data_ov031_0224e624) != 0) FAIL(1);
        if (func_ov031_02217d1c(G.unknown_14_) != 0) FAIL(1);
        func_ov031_02217db4(G.unknown_14_, GetContextPriority(data_02111304.activeContext) - 1);
        if (G.unknown_14_->unknown_1b38_.uniqueID != 0) AwaitContextCompletion(&G.unknown_14_->unknown_1b38_);
        switch (G.unknown_14_->unknown_1020_) {
        case 2:
            G.unknown_0_->unknown_1004_ = -1;
        default:
            FAIL(3);
        case 8:
            break;
        }
        if (func_ov031_02218b8c(G.unknown_14_, 0) != 1) FAIL(2);

        var0 = func_02005a94(func_ov031_02218e2c(G.unknown_14_, data_ov031_0224a124));
        if (data_020f3390 == 0x22) {
            func_ov031_0221a1d4(2);
            goto done;
        }
        switch (var0) {
        case 200:
            G.unknown_8_ = G.unknown_14_->unknown_112c_;
            break;
        case 302:
            G.unknown_4_ = 1;
            if (G.unknown_0_->unknown_1118_ != 0) {
                G.unknown_0_->unknown_1004_ = -6;
                func_ov031_022183b4(G.unknown_14_);
                G.unknown_18_.unknown_0_ = data_ov031_02249b54;
                G.unknown_18_.unknown_4_ = 0;
                G.unknown_18_.unknown_8_ = 0x200;
                G.unknown_18_.unknown_c_ = var1;
                G.unknown_18_.unknown_10_ = var2;
                G.unknown_18_.unknown_18_ = 20000;
                if (strcmp(data_ov031_02249b54, data_ov031_0224a130) != 0) G.unknown_18_.unknown_14_ = 1;
                if (func_ov031_02217c00(G.unknown_14_, &data_ov031_0224e624) != 0) FAIL(1);
                if (func_ov031_022175dc(var19) == 0 || func_ov031_022178b4(G.unknown_14_, var19, 1) == 0) FAIL(8);
                if (func_ov031_02218604(G.unknown_14_, data_ov031_0224a150, data_ov031_0224a158, 7) != 0 ||
                    (var15 = G.unknown_0_->unknown_1118_,
                     func_ov031_02218604(G.unknown_14_, data_ov031_0224a160, var15, strlen(var15)) != 0)) FAIL(8);
                var2(data_ov031_0224a088, G.unknown_0_->unknown_1118_, 0);
                G.unknown_0_->unknown_1118_ = 0;
                if (func_ov031_02217d1c(G.unknown_14_) != 0) FAIL(1);
                func_ov031_02217db4(G.unknown_14_, GetContextPriority(data_02111304.activeContext) - 1);
                if (G.unknown_14_->unknown_1b38_.uniqueID != 0) AwaitContextCompletion(&G.unknown_14_->unknown_1b38_);
                switch (G.unknown_14_->unknown_1020_) {
                case 2:
                    G.unknown_0_->unknown_1004_ = -1;
                default:
                    FAIL(3);
                case 8:
                    FAIL(7);
                }
            } else {
                var7 = G.unknown_14_->unknown_1a08_;
                if (var7 == 0) FAIL(2);
                G.unknown_0_->unknown_1114_ = (char*)var1(data_ov031_0224a0bc, strlen(var7) + 1);
                var11 = G.unknown_0_->unknown_1114_;
                if (var11 == 0) FAIL(4);
                strncpy(var11, var7, strlen(var7) + 1);
            }
            break;
        default:
            FAIL(10);
        }

        func_ov031_022183b4(G.unknown_14_);
        func_ov031_0221ae00(&var20);
        if (var20.unknown_0_ == var6) {
            G.unknown_0_->unknown_1004_ = -3;
            data_ov031_0224e640.unknown_0_ = 0;
            data_ov031_0224e640.unknown_34_ = 0;
            data_ov031_0224e640.unknown_40_ = G.unknown_0_->unknown_1108_;
            data_ov031_0224e640.unknown_44_ = G.unknown_0_->unknown_110c_;
            if (func_ov031_022167c8(&data_ov031_0224e640, G.unknown_14_) != 0) {
                func_ov031_0221a1d4(5);
                goto done;
            }
            func_ov031_02216a84();
            if (func_ov031_02216ab4() != 0x15) {
                if (func_ov031_02216ab4() == 9) {
                    G.unknown_0_->unknown_1004_ = -1;
                } else {
                    func_ov031_02216b00(var18);
                    if (G.unknown_c_ == 1 && (var18[0] == (int)0xffffa4fa || func_ov031_02216ab4() == 0xb)) {
                        G.unknown_0_->unknown_1004_ = 0;
                        func_ov031_02216a2c();
                        func_ov031_0221a1d4(0xb);
                        goto done;
                    }
                    G.unknown_0_->unknown_1004_ = var18[0];
                }
                func_ov031_02216a2c();
                func_ov031_0221a1d4(6);
                goto done;
            }
            func_ov031_02216a2c();
        }
        if (var0 == 200) {
            G.unknown_0_->unknown_1004_ = 0;
            func_ov031_0221a1d4(0xb);
            goto done;
        }

        G.unknown_0_->unknown_1004_ = -4;
        G.unknown_18_.unknown_0_ = data_ov031_02249b54;
        G.unknown_18_.unknown_4_ = 0;
        G.unknown_18_.unknown_8_ = 0x1000;
        G.unknown_18_.unknown_c_ = var1;
        G.unknown_18_.unknown_10_ = var2;
        G.unknown_18_.unknown_18_ = 40000;
        if (strcmp(data_ov031_02249b54, data_ov031_0224a130) != 0) G.unknown_18_.unknown_14_ = 1;
        if (func_ov031_02217c00(G.unknown_14_, &data_ov031_0224e624) != 0) FAIL(1);
        if (func_ov031_022175dc(var19) == 0 || func_ov031_022178b4(G.unknown_14_, var19, 1) == 0) FAIL(8);
        if (func_ov031_02218604(G.unknown_14_, data_ov031_0224a150, data_ov031_0224a170, 5) != 0 ||
            (var16 = G.unknown_0_->unknown_1114_,
             func_ov031_02218604(G.unknown_14_, data_ov031_0224a178, var16, strlen(var16)) != 0)) FAIL(8);
        var2(data_ov031_0224a06c, G.unknown_0_->unknown_1114_, 0);
        G.unknown_0_->unknown_1114_ = 0;
        if (func_ov031_02217d1c(G.unknown_14_) != 0) FAIL(1);
        func_ov031_02217db4(G.unknown_14_, GetContextPriority(data_02111304.activeContext) - 1);
        if (G.unknown_14_->unknown_1b38_.uniqueID != 0) AwaitContextCompletion(&G.unknown_14_->unknown_1b38_);
        switch (G.unknown_14_->unknown_1020_) {
        case 3:
            func_ov031_022183b4(G.unknown_14_);
            if (G.unknown_c_ == 1) {
                G.unknown_0_->unknown_1004_ = 0;
                func_ov031_0221a1d4(0xb);
            } else {
                func_ov031_0221a1d4(3);
            }
            goto done;
        case 2:
            G.unknown_0_->unknown_1004_ = -1;
        default:
            FAIL(3);
        case 8:
            break;
        }
        if (func_ov031_02218b8c(G.unknown_14_, 0) != 1) FAIL(2);

        var0 = func_02005a94(func_ov031_02218e2c(G.unknown_14_, data_ov031_0224a124));
        if (data_020f3390 == 0x22) FAIL(2);
        if (var0 != 200) {
            func_ov031_022183b4(G.unknown_14_);
            if (G.unknown_c_ == 1 && var0 == 302) {
                G.unknown_0_->unknown_1004_ = 0;
                func_ov031_0221a1d4(0xb);
            } else {
                func_ov031_0221a1d4(2);
            }
            goto done;
        }

        if (func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a180, var21, 4) <= 0) FAIL(9);
        var14 = func_02005a94(var21);
        if (data_020f3390 == 0x22) FAIL(9);
        if (G.unknown_c_ == 1 && var14 == 0x72) {
            G.unknown_0_->unknown_1004_ = 0;
            func_ov031_0221a1d4(0xb);
            goto done;
        }
        if (var14 >= 100) FAIL(6);

        var8 = func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a18c, 0, 0);
        if (var8 <= 0) FAIL(9);
        var9 = func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a190, 0, 0);
        if (var9 <= 0) FAIL(9);
        var13 = func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a198, 0, 0);
        var3 = (char*)var1(data_ov031_0224a0d8, var8 + 1);
        if (var3 == 0) FAIL(4);
        var4 = (char*)var1(data_ov031_0224a0e4, var9 + 1);
        if (var4 == 0) FAIL(4);
        if (var13 > 0) {
            var5 = (char*)var1(data_ov031_0224a0f4, var13 + 1);
            if (var5 == 0) FAIL(4);
        }
        var0 = func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a18c, var3, var8 + 1);
        if (var0 < 0) FAIL(9);
        var3[var0] = 0;
        var0 = func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a190, var4, var9 + 1);
        if (var0 < 0) FAIL(9);
        var4[var0] = 0;
        var10 = 0;
        if (var13 > 0) {
            var0 = func_ov031_02218e84(G.unknown_14_, (int)data_ov031_0224a198, var5, var13 + 1);
            if (var0 < 0) FAIL(9);
            var5[var0] = 0;
            var0 = func_02005a94(var5);
            if (data_020f3390 == 0x22) FAIL(9);
            var10 = var0 * 1000;
            if ((int)var10 > 180000) var10 = 180000;
        }
        func_ov031_022183b4(G.unknown_14_);

        G.unknown_0_->unknown_1004_ = -5;
        G.unknown_18_.unknown_0_ = var3;
        G.unknown_18_.unknown_4_ = 0;
        G.unknown_18_.unknown_8_ = 0x1000;
        G.unknown_18_.unknown_c_ = var1;
        G.unknown_18_.unknown_10_ = var2;
        G.unknown_18_.unknown_18_ = 120000;
        if (func_ov031_02217c00(G.unknown_14_, &data_ov031_0224e624) != 0) FAIL(1);
        if (func_ov031_02218710(G.unknown_14_, var4) != 0) FAIL(8);
        if (func_ov031_02217d1c(G.unknown_14_) != 0) FAIL(1);
        func_ov031_02217db4(G.unknown_14_, GetContextPriority(data_02111304.activeContext) - 1);
        if (G.unknown_14_->unknown_1b38_.uniqueID != 0) AwaitContextCompletion(&G.unknown_14_->unknown_1b38_);
        switch (G.unknown_14_->unknown_1020_) {
        case 2:
            G.unknown_0_->unknown_1004_ = -1;
        default:
            FAIL(3);
        case 8:
            break;
        }
        if (func_ov031_02218b8c(G.unknown_14_, 1) != 1) FAIL(2);
        var17 = G.unknown_14_->unknown_1a08_;
        if (var17 == 0) FAIL(2);
        G.unknown_0_->unknown_1118_ = (char*)var1(data_ov031_0224a104, strlen(var17) + 1);
        var12 = G.unknown_0_->unknown_1118_;
        if (var12 == 0) FAIL(4);
        strncpy(var12, var17, strlen(var17) + 1);
        func_ov031_022183b4(G.unknown_14_);
        SleepCurrentContext(var10);
    }

done:
    if (var3 != 0) var2(data_ov031_0224a1a0, var3, 0);
    if (var4 != 0) var2(data_ov031_0224a1ac, var4, 0);
    if (var5 == 0) return;
    var2(data_ov031_0224a1b8, var5, 0);
}
