#include <globaldefs.h>

struct Struct_0200e984 { int unknown_0_, unknown_4_, unknown_8_; unsigned char* unknown_c_; };
struct Struct_0200e984_2;
struct Struct_0200ea68 { int unknown_0_[21]; };
struct Struct_0200ea68_2 {
    void* unknown_0_; int unknown_4_[6]; Struct_0200ea68 unknown_1c_;
};
struct Struct_0200ea68_3 {
    int unknown_0_, unknown_4_; unsigned char* unknown_8_;
    int unknown_c_, unknown_10_, unknown_14_;
};
struct Struct_0200ea68_4 { Struct_0200ea68_3 unknown_0_; Struct_0200ea68_2 unknown_18_; };
struct Struct_0200ea68_5 { unsigned char* unknown_0_; int unknown_4_, unknown_8_; };
extern "C" int func_0200dbdc(Struct_0200ea68_4*);
extern "C" int func_0200dbf8(Struct_0200ea68_4*);
extern "C" unsigned char* func_0200d9e4(unsigned char*, int*);
extern "C" unsigned char* func_0200d958(unsigned char*, int*);
extern "C" int func_0200eff0(void*, unsigned char*, Struct_0200e984_2*);
extern "C" int func_0200e984(void*, Struct_0200e984*);
extern "C" void func_0200ea08(Struct_0200ea68_2*, Struct_0200ea68_3*, Struct_0200e984*, unsigned char*);
extern "C" void func_0200efb8();

// USA: func_0200ea68
extern "C" ARM unsigned char* func_0200ea68(Struct_0200ea68_2* arg0, Struct_0200ea68_3* arg1, Struct_0200e984_2* arg2) {
    Struct_0200ea68_4 var0;
    Struct_0200ea68_5 var1;
    Struct_0200e984 var2;
    var0.unknown_0_.unknown_0_ = arg1->unknown_0_;
    var0.unknown_0_.unknown_4_ = arg1->unknown_4_;
    var0.unknown_0_.unknown_8_ = arg1->unknown_8_;
    var0.unknown_0_.unknown_c_ = arg1->unknown_c_;
    var0.unknown_0_.unknown_10_ = arg1->unknown_10_;
    var0.unknown_0_.unknown_14_ = arg1->unknown_14_;
    var0.unknown_18_.unknown_0_ = arg0->unknown_0_;
    var0.unknown_18_.unknown_4_[0] = arg0->unknown_4_[0];
    var0.unknown_18_.unknown_4_[1] = arg0->unknown_4_[1];
    var0.unknown_18_.unknown_4_[2] = arg0->unknown_4_[2];
    var0.unknown_18_.unknown_4_[3] = arg0->unknown_4_[3];
    var0.unknown_18_.unknown_4_[4] = arg0->unknown_4_[4];
    var0.unknown_18_.unknown_4_[5] = arg0->unknown_4_[5];
    var0.unknown_18_.unknown_1c_ = arg0->unknown_1c_;
    int var3 = func_0200dbdc(&var0);
    for (;;) {
        switch (var3) {
        case 12: {
            unsigned char* var4 = var0.unknown_0_.unknown_8_;
            var1.unknown_0_ = (unsigned char*)(var4[1] | (var4[2] << 8) | (var4[3] << 16) | (var4[4] << 24));
            unsigned char* var5 = func_0200d9e4(var4 + 5, &var1.unknown_4_);
            func_0200d958(var5, &var1.unknown_8_);
            if (!func_0200eff0(arg0->unknown_0_, var1.unknown_0_, arg2)) break;
            goto done;
        }
        case 15: {
            unsigned char* var6 = func_0200d9e4(var0.unknown_0_.unknown_8_ + 1, &var2.unknown_0_);
            var6 = func_0200d9e4(var6, &var2.unknown_4_);
            var2.unknown_c_ = func_0200d958(var6, &var2.unknown_8_);
            if (!func_0200e984(arg0->unknown_0_, &var2)) func_0200ea08(arg0, arg1, &var2, var0.unknown_0_.unknown_8_);
            break;
        }
        case 0: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 13: case 16: case 17: case 18: case 19:
            break;
        default:
            func_0200efb8();
            goto done;
        }
        var3 = func_0200dbf8(&var0);
    }
done:
    return var0.unknown_0_.unknown_8_;
}
