#if defined(jpn)

#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#if defined(jpn)
struct GameState { static GameState* GetInstance(); };
struct GameObject { char unknown_0_[0x134]; const char* unknown_134_; };
extern "C" int func_020100a8(GameState*);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" int func_020d2ff0(const char*);
#endif

#if defined(jpn)
#define func_ov008_02188730 func_ov008_02189444
#endif

struct Struct_ov008_02188730 {
    unsigned char unknown_0_[0x14];
    int unknown_14_, unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned char unknown_22_;
    unsigned char unknown_23_[2];
    signed char unknown_25_;
    signed char unknown_26_;
    unsigned char unknown_27_;
};
struct Struct_ov008_02188730_2 {
    unsigned char unknown_0_[0x730];
    void* unknown_730_;
    Struct_ov008_02188730* unknown_734_;
    unsigned char unknown_738_[4];
    void* unknown_73c_;
    Struct_ov008_02188730* unknown_740_;
    unsigned char unknown_744_[8];
    unsigned char unknown_74c_;
    unsigned char unknown_74d_[3];
    unsigned char unknown_750_[0x40];
    unsigned char unknown_790_[0xb10 - 0x790];
    signed char unknown_b10_;
    unsigned char unknown_b11_[7];
    unsigned int unknown_b18_;
    unsigned char unknown_b1c_[0xb29 - 0xb1c];
    unsigned char unknown_b29_;
    unsigned char unknown_b2a_[2];
    int unknown_b2c_;
};

extern "C" {
    void* func_0202ae18();
    bool func_0202c540(void*);
    int func_0205bb84(void*);
    void func_0205afb0(void*, void*, int);
    void func_0205af84(void*, void*, int);
    void func_0205ac40(void*, void*);

    void func_ov008_02188730(Struct_ov008_02188730_2* arg0) {
        if (arg0->unknown_b18_ & 0x80000) {
            int var0 = 0;
            for (int var1 = 0; var1 < 6; ++var1) {
                int var2 = arg0->unknown_744_[arg0->unknown_b29_ + var1];
                if (var2 == 0xff)
                    continue;
                Struct_ov008_02188730* var3 = &arg0->unknown_734_[var2];
                var3->unknown_14_ = 0x10000;
                var3->unknown_18_ = ((var0 % 6) << 16) + 0x8000;
                int var4 = func_0205bb84(arg0->unknown_750_) - arg0->unknown_b29_;
                int var5 = 1;
                if (var4 == var1)
                    var5 = 2;
                else if (arg0->unknown_b10_ == 12)
                    var5 = 3;
                if (func_0202c540(func_0202ae18()) && var2 == 5)
                    var5 = 3;
                func_0205afb0(arg0->unknown_730_, &arg0->unknown_734_[var2], var5);
                func_0205af84(arg0->unknown_730_, &arg0->unknown_734_[var2], 1);
                func_0205ac40(arg0->unknown_730_, &arg0->unknown_734_[var2]);
                ++var0;
            }
        }
        if (arg0->unknown_b18_ & 0x10000) {
            Struct_ov008_02188730* var6 = arg0->unknown_740_;
#if defined(jpn)
            GameState* var7 = GameState::GetInstance();
            GameObject* var8 = func_0200ff1c(var7, func_020100a8(var7));
            var6->unknown_14_ = ((func_020d2ff0(var8->unknown_134_) >> 1) * 10 + 0x74) << 12;
            var6->unknown_18_ = 0;
#else
            var6->unknown_14_ = arg0->unknown_b2c_;
            var6->unknown_18_ = 0x4000;
#endif
            var6->unknown_26_ = 1;
            var6->unknown_25_ = 0;
            var6->unknown_22_ = 0x7f;
            func_0205ac40(arg0->unknown_73c_, var6);
        }
    }
}
