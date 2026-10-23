#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov008_02186cec {
    unsigned char unknown_0_[0x744];
    unsigned char unknown_744_[8];
    unsigned char unknown_74c_;
    unsigned char unknown_74d_[0xb18 - 0x74d];
    unsigned int unknown_b18_;
};

extern "C" {
    char* func_0205ec34();
    bool func_0206dfb0(void*, void*, int);

    void func_ov008_02186cec(Struct_ov008_02186cec* arg0) {
        arg0->unknown_74c_ = 0;
        for (int var0 = 0; var0 < 8; ++var0)
            arg0->unknown_744_[var0] = 0xff;

        arg0->unknown_744_[arg0->unknown_74c_++] = 0;
        arg0->unknown_744_[arg0->unknown_74c_++] = 1;
        arg0->unknown_744_[arg0->unknown_74c_++] = 2;

        char* var1 = func_0205ec34();
        if (func_0206dfb0(var1, var1 + 0x8c, 0x1198))
            arg0->unknown_744_[arg0->unknown_74c_++] = 3;
        if (arg0->unknown_b18_ & 0x2000)
            arg0->unknown_744_[arg0->unknown_74c_++] = 4;
        if (func_0206dfb0(var1, var1 + 0x8c, 0x119d))
            arg0->unknown_744_[arg0->unknown_74c_++] = 5;
        if (func_0206dfb0(var1, var1 + 0x8c, 0x119b))
            arg0->unknown_744_[arg0->unknown_74c_++] = 6;
        if (arg0->unknown_b18_ & 4)
            arg0->unknown_744_[arg0->unknown_74c_++] = 7;
    }
}
