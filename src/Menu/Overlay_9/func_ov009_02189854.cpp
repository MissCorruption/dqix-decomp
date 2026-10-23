struct Struct_ov009_02189854 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_;
};
struct Struct_ov009_02189854_2 {
    unsigned char unknown_0_[0xbec];
    unsigned char unknown_bec_[12];
    int unknown_bf8_;
    unsigned char unknown_bfc_[0xc2c - 0xbfc];
    Struct_ov009_02189854 unknown_c2c_;
    short unknown_c4c_, unknown_c4e_, unknown_c50_, unknown_c52_;
    unsigned char unknown_c54_[4];
    signed char unknown_c58_;
    unsigned char unknown_c59_[0xd9c - 0xc59];
    unsigned int unknown_d9c_;
};

extern "C" {
    int func_0205bafc(void*);
    int func_0205bb84(void*);
    void func_0205bb04(void*, int);
    void func_ov009_02188c2c(Struct_ov009_02189854_2*);
    void func_ov009_02188e70(Struct_ov009_02189854_2*, int);

    int func_ov009_02189854(Struct_ov009_02189854_2* arg0, int arg1, int arg2) {
        if (arg2 >= 0xa9 && arg2 <= 0xb1) {
            if (arg1 >= 0x8e && arg1 <= 0xbe)
                return -2;
            if (arg1 >= 0xc8 && arg1 <= 0xf0)
                return -3;
        }
        if (arg2 >= 8 && arg2 <= 24) {
            for (int var0 = 0; var0 < 8; ++var0) {
                int var1 = (var0 << 4) + 0x78;
                int var2 = var1 + 16;
                if (arg1 >= var1 && arg1 <= var2)
                    return var0 + 0x65;
            }
        }

        Struct_ov009_02189854* var3 = &arg0->unknown_c2c_;
        int var4 = var3->unknown_8_;
        int var5 = var3->unknown_c_;
        int var6 = var3->unknown_10_;
        int var7 = var3->unknown_14_;
        int var8 = var3->unknown_18_;
        int var9 = var3->unknown_1c_;
        int var10 = -4;
        for (int var11 = 0; var11 < var9; ++var11) {
            for (int var12 = 0; var12 < var8; ++var12) {
                int var13 = var3->unknown_0_ + var6 * var12;
                if (arg0->unknown_c58_ == 8)
                    break;
                int var14 = var13 + var4;
                if (arg1 >= var13 && arg1 <= var14) {
                    int var15 = var3->unknown_4_ + var7 * var11;
                    int var16 = var15 + var5;
                    if (arg2 >= var15 && arg2 <= var16) {
                        var10 = var12 + var11 * var8;
                        arg0->unknown_c4c_ = var13;
                        arg0->unknown_c4e_ = var15;
                        arg0->unknown_c50_ = var4;
                        arg0->unknown_c52_ = var5;
                        break;
                    }
                }
            }
            if (var10 >= 0)
                break;
        }

        int var17 = arg0->unknown_bf8_;
        int var18 = func_0205bafc(arg0->unknown_bec_);
        if (var17 == 1 && var18 == 8 && var10 >= 0 && var10 != 0x65 && var10 != 0x6c) {
            func_ov009_02188c2c(arg0);
            func_0205bb04(arg0->unknown_bec_, var10);
            arg0->unknown_d9c_ |= 0x2000;
            int var19 = func_0205bb84(arg0->unknown_bec_);
            func_ov009_02188e70(arg0, var19);
        }
        return var10;
    }
}
