#include <globaldefs.h>

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

struct Struct_02112180 {
    unsigned long unknown_0_;
    unsigned char unknown_4_[0x9c];
    char unknown_a0_[12];
    unsigned long unknown_ac_;
    unsigned short unknown_b0_;
    unsigned char unknown_b2_;
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
    unsigned char unknown_b5_[3];
    unsigned char unknown_b8_[4];
    unsigned char unknown_bc_;
    unsigned char unknown_bd_;
    unsigned short unknown_be_;
};

struct Struct_020d16b0 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[3];
    unsigned char unknown_5_0_ : 1;
    unsigned char unknown_5_1_ : 1;
    unsigned short unknown_6_;
    unsigned long unknown_8_;
};

struct Struct_0211214c {
    volatile unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_020d135c_3 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_020d16b0_2 {
    int unknown_0_;
    int unknown_4_[7];
};
inline Struct_020d16b0_2& inline_020d16b0() {
    static Struct_020d16b0_2 s;
    return s;
}
extern Struct_0211214c data_0211214c;
extern Struct_02112180 data_02112180 __attribute__((aligned(32)));
extern unsigned char data_02112184[0x9c];

unsigned int SetSpecificInterruptsEnabled(unsigned int mask);
extern "C" void func_020d1468(int* arg0);
extern "C" void func_020d14b0(int* arg0);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
void DMAMemcpySynchronous16Bit(int channel, unsigned int src, unsigned int dst, unsigned int size);
void CleanInvalidateDataCache();
extern "C" void func_020d1564(int arg0);
extern "C" unsigned int func_020d1540(int arg0, Struct_020d135c_3* arg1);

extern "C" {
    void func_020d14e4(unsigned short arg0, Struct_020d135c_3* arg1);
    int func_020d135c();
    void func_020ca408(const void* src, void* dst, unsigned int length);
    void WaitByLoop(int arg0);
}

// USA: func_020d16b0
extern "C" ARM void func_020d16b0() {
    Struct_020d135c_3 var0;
    unsigned int var1;
    unsigned short var2;

    if (inline_020d16b0().unknown_0_) {
        return;
    }
    inline_020d16b0().unknown_0_ = true;

    if (!(*(volatile unsigned short*)0x04000300 & 1)) {
        return;
    }

    var1 = SetSpecificInterruptsEnabled(0x40000);
    var2 = *(volatile unsigned short*)0x04000208;
    *(volatile unsigned short*)0x04000208 = 1;

    func_020d14e4(data_0211214c.unknown_2_, &var0);
    {
        int var3 = (*(volatile unsigned short*)0x04000204 & 0x8000) >> 15;
        int var4[2];

        func_020d1468(var4);
        *(volatile unsigned short*)0x04000204 &= ~0x8000;
        InvalidateDataCacheRange(&((unsigned char*)&data_02112180)[0x80], sizeof(data_02112180) - 0x80);
        DMAMemcpySynchronous16Bit(1, 0x08000000 + 0x80, (unsigned int)&((unsigned char*)&data_02112180)[0x80],
            sizeof(data_02112180) - 0x80);
        *(volatile unsigned short*)0x04000204 =
            (unsigned short)((*(volatile unsigned short*)0x04000204 & ~0x8000) | (var3 << 15));
        func_020d14b0(var4);
    }
    func_020d1540(data_0211214c.unknown_2_, &var0);

    if (*(unsigned char*)0x027fff9b || !*(unsigned char*)0x027fff9a) {
        int var5;
        Struct_02112180* var6 = &data_02112180;
        Struct_020d16b0* var7 = (Struct_020d16b0*)0x027ffc30;

        var7->unknown_0_ = var6->unknown_be_;
        for (var5 = 0; var5 < 3; var5++) {
            var7->unknown_2_[var5] = var6->unknown_b5_[var5];
        }
        var7->unknown_6_ = var6->unknown_b0_;
        var7->unknown_8_ = var6->unknown_ac_;
        *(unsigned char*)0x027fff9b = (unsigned char)(func_020d135c() ? 1 : 0);
        *(unsigned char*)0x027fff9a = true;
    }

    func_020ca408((const void*)0xffff0020, data_02112184, sizeof(data_02112184));
    CleanInvalidateDataCache();
    func_020d1564(1 | ((((unsigned long)&data_02112180 - 0x02000000) >> 5) << 6));

    while (data_0211214c.unknown_0_ != true) {
        WaitByLoop(1);
    }

    (void)*(volatile unsigned short*)0x04000208;
    *(volatile unsigned short*)0x04000208 = var2;
    SetSpecificInterruptsEnabled(var1);
}
