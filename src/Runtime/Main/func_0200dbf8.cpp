#include <globaldefs.h>

struct Struct_0200d958_2 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    long unknown_10_;
    void* unknown_14_;
};

struct Struct_0200d958 {
    unsigned long unknown_0_[16];
    char* unknown_40_;
    unsigned long unknown_44_;
    unsigned long unknown_48_;
    unsigned short unknown_4c_;
    bool unknown_4e_;
    bool unknown_4f_;
    bool unknown_50_;
};

struct Struct_0200d958_3 {
    unsigned char* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    Struct_0200d958_2* unknown_c_;
    char* unknown_10_;
    char* unknown_14_;
    char* unknown_18_;
    Struct_0200d958 unknown_1c_;
};

struct Struct_0200dbf8 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
};

struct Struct_0200dbf8_2 {
    Struct_0200dbf8 unknown_0_;
    Struct_0200d958_3 unknown_18_;
};

struct Struct_0200d958_4 {
    long unknown_0_;
    unsigned long unknown_4_;
};

extern "C" char* func_0200f1a0(Struct_0200d958_3* arg0, Struct_0200dbf8* arg1);
extern "C" void func_0200dad4(char* arg0, Struct_0200dbf8* arg1);
extern "C" void func_0200f1fc(Struct_0200d958_3* arg0, Struct_0200dbf8* arg1);
extern "C" char* func_0200d958(char* arg0, long* arg1);
extern "C" char* func_0200d9e4(char* arg0, unsigned long* arg1);

static inline char* inline_0200dbf8(char* arg0) {
    long var0;
    arg0 = func_0200d958(arg0 + 1, &var0);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_2(char* arg0) {
    long var0, var1;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_3(char* arg0) {
    long var0;
    arg0 = func_0200d958(arg0 + 1, &var0);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_4(char* arg0) {
    long var0;
    unsigned long var1, var2;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d9e4(arg0, &var1);
    arg0 = func_0200d9e4(arg0, &var2);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_5(char* arg0) {
    long var0, var1;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_6(char* arg0) {
    long var0, var1;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_7(char* arg0) {
    long var0, var1, var2;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    arg0 = func_0200d958(arg0, &var2);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_8(char* arg0) {
    long var0, var1;
    unsigned long var2, var3;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    arg0 = func_0200d9e4(arg0, &var2);
    arg0 = func_0200d9e4(arg0, &var3);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_9(char* arg0) {
    long var0;
    arg0 = func_0200d958(arg0 + 1, &var0);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_10(char* arg0) {
    long var0, var1;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_11(char* arg0) {
    unsigned long var0;
    long var1;
    arg0 = func_0200d9e4(arg0 + 5, &var0);
    arg0 = func_0200d958(arg0, &var1);
    return arg0;
}

static inline char* inline_0200dbf8_12(char* arg0) {
    long var0;
    arg0 = func_0200d958(arg0 + 1, &var0);
    return arg0;
}

static inline char* inline_0200dbf8_13(char* arg0) {
    unsigned long var0, var1;
    long var2;
    arg0 = func_0200d9e4(arg0 + 1, &var0);
    arg0 = func_0200d9e4(arg0, &var1);
    arg0 = func_0200d958(arg0, &var2);
    return arg0 + var0 * sizeof(void*);
}

static inline char* inline_0200dbf8_14(char* arg0) {
    long var0, var1;
    Struct_0200d958_4 var2;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var1);
    var2.unknown_4_ = arg0[0] | (arg0[1] << 8) | (arg0[2] << 16) | (arg0[3] << 24);
    arg0 = func_0200d958(arg0 + 4, &var2.unknown_0_);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_15(char* arg0) {
    long var0, var1, var2, var3;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0, &var2);
    arg0 = func_0200d958(arg0 + 1, &var1);
    arg0 = func_0200d958(arg0, &var3);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_16(char* arg0) {
    long var0, var1;
    unsigned long var2;
    arg0 = func_0200d958(arg0 + 1, &var0);
    arg0 = func_0200d958(arg0 + 1, &var1);
    arg0 = func_0200d9e4(arg0, &var2);
    return arg0 + 4;
}

static inline char* inline_0200dbf8_17(char* arg0) {
    long var0;
    arg0 = func_0200d958(arg0 + 1, &var0);
    return arg0;
}

static inline void inline_0200dbf8_18(Struct_0200dbf8* arg0) {
    long var0;
    func_0200d958(arg0->unknown_8_ + 1, &var0);
    arg0->unknown_8_ += var0;
}

// USA: func_0200dbf8
extern "C" ARM unsigned char func_0200dbf8(Struct_0200dbf8_2* arg0) {
    char* var0;
    unsigned char var1;

    for (;;) {
        if ((var0 = arg0->unknown_0_.unknown_8_) == 0 || ((var1 = *var0) & 0x80) != 0) {
            func_0200dad4(func_0200f1a0(&arg0->unknown_18_, &arg0->unknown_0_), &arg0->unknown_0_);
            if (arg0->unknown_0_.unknown_4_ == 0)
                return 0xff;
            func_0200f1fc(&arg0->unknown_18_, &arg0->unknown_0_);
            if (arg0->unknown_0_.unknown_8_ != 0)
                break;
        } else {
            switch (var1 & 0x1f) {
                case 2: arg0->unknown_0_.unknown_8_ = inline_0200dbf8(var0); break;
                case 3: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_2(var0); break;
                case 4: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_3(var0); break;
                case 5: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_4(var0); break;
                case 6: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_5(var0); break;
                case 7: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_6(var0); break;
                case 8: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_7(var0); break;
                case 9: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_8(var0); break;
                case 10: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_9(var0); break;
                case 11: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_10(var0); break;
                case 12: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_11(var0); break;
                case 13: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_12(var0); break;
                case 15: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_13(var0); break;
                case 16: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_14(var0); break;
                case 17: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_15(var0); break;
                case 18: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_16(var0); break;
                case 19: arg0->unknown_0_.unknown_8_ = inline_0200dbf8_17(var0); break;
                default:
                    return 0xff;
            }
            break;
        }
    }

    while ((var1 = *arg0->unknown_0_.unknown_8_ & 0x1f) == 1)
        inline_0200dbf8_18(&arg0->unknown_0_);
    return var1;
}
