#include <globaldefs.h>

struct Struct_ov031_02290ca0_8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    struct Struct_ov031_0222f6f8* unknown_8_;
};

struct Struct_ov031_0222f6f8 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_[2];
    void* unknown_14_;
    void* unknown_18_[7];
    void* unknown_34_;
    void* unknown_38_;
    void* unknown_3c_;
    unsigned char unknown_40_;
};

extern struct Struct_ov031_02290ca0_8 data_ov031_02290ca0;
extern int data_ov031_0224bb64;
extern void* data_ov031_02290ca8;

extern "C" int func_ov031_0223c054(int);
extern "C" ARM int func_ov031_0223e2e0(int, void*);
extern "C" int func_ov031_0223da58(void* arg0);
extern "C" void func_ov031_022238cc(void);
extern "C" void* func_ov031_0223c7c4(int arg0);
extern "C" int func_ov031_02223440(void);
extern "C" void func_ov031_02234f08(void);
extern "C" void func_ov031_0223b710(void* arg0);
extern "C" void func_ov031_022234d8(int arg0, void (*arg1)(int, int, unsigned int));
extern "C" void func_ov031_0223cbbc(int arg0, int arg1);
extern "C" unsigned int func_ov031_0223cf70(void** arg0);
extern "C" void func_ov031_02235194(void);

extern "C" void LoadToMainObjStandardPalette(int, int, unsigned int);
extern "C" int func_ov031_0221b158(void* arg0);
extern "C" char* func_ov031_02235c70(void);
extern "C" void func_ov031_02236094(int arg0);
extern "C" void* VectorizedMemset(void* dst, int val, int n);
extern "C" void func_ov031_0222750c(int, int);
extern "C" void func_ov031_022274d0(int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222cbe0(void);
extern "C" void func_ov031_0222d720(void);
extern "C" void func_ov031_02233a00(void);
extern "C" void func_ov031_02230f00(void);
extern "C" void func_ov031_02232508(void);
extern "C" void func_ov031_02233248(void);

// USA: func_ov031_0222f6f8
extern "C" ARM void func_ov031_0222f6f8(void) {
    if (func_ov031_0223c054(1) != 0) return;
    if (func_ov031_0223c054(0) != 0) return;

    func_ov031_0223e2e0(0, data_ov031_02290ca0.unknown_8_->unknown_0_);
    func_ov031_0223e2e0(1, data_ov031_02290ca0.unknown_8_->unknown_3c_);

    int var0 = 0;
    do {
        void* var1 = data_ov031_02290ca0.unknown_8_->unknown_18_[var0];
        func_ov031_0223da58(var1);
        var0++;
    } while (var0 < 7);
    if (data_ov031_02290ca0.unknown_8_->unknown_34_ != 0) {
        func_ov031_0223da58(data_ov031_02290ca0.unknown_8_->unknown_34_);
    }

    func_ov031_02235194();
    func_ov031_0223c7c4(0);
    func_ov031_022238cc();

    if (data_ov031_02290ca0.unknown_8_->unknown_40_ != 0xc) func_ov031_02223440();

    func_ov031_02234f08();
    func_ov031_0223b710(data_ov031_02290ca0.unknown_8_->unknown_8_);

    int var2 = 0;
    do {
        void* var3 = data_ov031_02290ca0.unknown_8_->unknown_c_[var2];
        func_ov031_0223b710(var3);
        var2++;
    } while (var2 < 2);

    func_ov031_022234d8((int)&data_ov031_0224bb64, LoadToMainObjStandardPalette);

    func_ov031_0223cbbc(1, 1);
    func_ov031_0223cbbc(0, 0x1d);

    *(volatile unsigned int*)0x4000010 = 0;
    *(volatile unsigned int*)0x4000018 = 0;
    *(volatile unsigned short*)0x400000c = (*(volatile unsigned short*)0x400000c & 0x43) | 0xe10;

    int var4 = 0;
    switch (data_ov031_02290ca0.unknown_8_->unknown_40_) {
    case 0:
    case 1:
        func_ov031_0222750c(data_ov031_02290ca0.unknown_8_->unknown_40_, var4);
        func_ov031_022274d0(2, 0);
        func_ov031_022274c0((int)func_ov031_0222cbe0);
        break;
    case 4: case 5: case 6: case 9: case 10: {
        unsigned int var5 = data_ov031_02290ca0.unknown_8_->unknown_40_;
        int var6 = var5 - 4;
        if (var5 >= 9) var6 -= 2;
        func_ov031_022274d0(2, 0);
        func_ov031_0222750c(var6, 0);
        func_ov031_022274c0((int)func_ov031_0222d720);
        break;
    }
    case 11: {
        unsigned char* var7 = (unsigned char*)func_ov031_02235c70();
        int var8 = func_ov031_0221b158(var7 + 0xf0);
        var7[0xd0] = (unsigned char)var8;
        if (var7[0xf5] != 0) {
            VectorizedMemset(var7 + 0xc0, 0, 4);
            VectorizedMemset(var7 + 0xc4, 0, 4);
            VectorizedMemset(var7 + 0xf0, 0, 4);
            var7[0xd0] = 0;
        }
        if (var7[0xf6] != 0) {
            VectorizedMemset(var7 + 0xc8, 0, 8);
        }
        func_ov031_022274d0(2, 0);
        func_ov031_0222750c(0, 0);
        func_ov031_022274c0((int)func_ov031_02233a00);
        break;
    }
    case 12:
        func_ov031_022274d0(var4, var4);
        func_ov031_022274c0((int)func_ov031_02230f00);
        break;
    case 13:
        if (data_ov031_02290ca0.unknown_1_ == 0) {
            var4 = 1;
            func_ov031_022274d0(2, var4);
            func_ov031_022274c0((int)func_ov031_02232508);
        } else {
            func_ov031_02236094(((unsigned char*)func_ov031_02235c70())[0xf4]);
            var4 = 1;
            func_ov031_022274d0(0, var4);
            func_ov031_022274c0((int)func_ov031_02233248);
        }
        break;
    }

    func_ov031_0223cf70((void**)&data_ov031_02290ca8);
}
