#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov015_02191f04 func_ov015_02192a48
#endif

struct Struct_02029634;

struct Struct_02029988_2
{
    char unknown_0_[0x5c];
    short unknown_5c_;
    short unknown_5e_;
    short unknown_60_;
    char unknown_62_[0x80 - 0x62];
};

struct Struct_ov015_02190acc
{
    char unknown_0_[0x19c];
    unsigned char unknown_19c_;
    unsigned char unknown_19d_;
    unsigned char unknown_19e_;
    unsigned char unknown_19f_;
    unsigned char unknown_1a0_;
    char unknown_1a1_[0x2c4 - 0x1a1];
    Struct_02029988_2 unknown_2c4_;
    char unknown_344_[0x350 - 0x344];
    unsigned char unknown_350_;
};

extern "C" int func_ov015_02191284(Struct_02029988_2* arg0);
extern "C" void* func_0202a9ac(Struct_02029634* arg0, int arg1);
extern "C" void func_020294cc(void* arg0, const char* arg1);

extern char data_ov015_0219432e[];
extern char data_ov015_02194338[];
extern char data_ov015_02194342[];
extern char data_ov015_0219434b[];
extern char data_ov015_0219435a[];
extern char data_ov015_02194369[];
extern char data_ov015_02194378[];
extern char data_ov015_02194387[];
extern char data_ov015_02194396[];

#if defined(jpn)
extern char data_ov015_02194ec3[];
#endif

// USA: func_ov015_02191f04
extern "C" ARM void func_ov015_02191f04(Struct_ov015_02190acc* arg0)
{
    int var0 = func_ov015_02191284(&arg0->unknown_2c4_);
    void* var1 = func_0202a9ac((Struct_02029634*)&arg0->unknown_2c4_, arg0->unknown_2c4_.unknown_60_);
    switch (var0)
    {
    case 0:
    {
        arg0->unknown_19c_ = !arg0->unknown_19c_;
        if (arg0->unknown_19c_)
            func_020294cc(var1, data_ov015_0219432e);
        else
            func_020294cc(var1, data_ov015_02194338);
        break;
    }
    case 1:
        arg0->unknown_19d_ = arg0->unknown_19d_ == 0;
#if defined(jpn)
        if (arg0->unknown_19d_)
            func_020294cc(var1, data_ov015_02194ec3);
        else
#endif
        func_020294cc(var1, data_ov015_02194342);
        break;
    case 2:
    {
        arg0->unknown_19e_ = !arg0->unknown_19e_;
        if (arg0->unknown_19e_)
            func_020294cc(var1, data_ov015_0219434b);
        else
            func_020294cc(var1, data_ov015_0219435a);
        break;
    }
    case 3:
    {
        arg0->unknown_19f_ = !arg0->unknown_19f_;
        if (arg0->unknown_19f_)
            func_020294cc(var1, data_ov015_02194369);
        else
            func_020294cc(var1, data_ov015_02194378);
        break;
    }
    case 4:
    {
        arg0->unknown_1a0_ = !arg0->unknown_1a0_;
        if (arg0->unknown_1a0_)
            func_020294cc(var1, data_ov015_02194387);
        else
            func_020294cc(var1, data_ov015_02194396);
        break;
    }
    }
    arg0->unknown_350_ = 1;
}
