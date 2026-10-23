#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define func_ov014_02185c90 func_ov014_02186d00
#endif

struct Struct_ov003_0215d4fc {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
};
struct Struct_ov014_02185c90_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 1;
    unsigned int unknown_1_3_ : 7;
    unsigned int unknown_2_2_ : 7;
};
struct Struct_ov014_02185c90_4 {
    char unknown_0_[8];
    int unknown_8_;
    short unknown_c_;
    char unknown_e_[4];
    signed char unknown_12_;
    char unknown_13_[7];
    short unknown_1a_;
};
struct Struct_ov014_02185c90_5 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 12;
    unsigned short unknown_3_4_ : 4;
};
struct Struct_ov000_021700dc {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 1;
};
struct Struct_ov014_02185c90_6 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};
struct Struct_ov014_02185c90_7 {
    int unknown_0_;
    void* unknown_4_;
    char unknown_8_[10];
    short unknown_12_;
};
struct Struct_ov014_02185c90_8 {
    int unknown_0_;
    short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov000_0217c638_2 {
    void** unknown_0_;
    char unknown_4_[0x18];
    char unknown_1c_[0x2c];
    struct Struct_ov014_02185c90_4* unknown_48_;
    char unknown_4c_[4];
    struct Struct_ov014_02185c90_2* unknown_50_;
    char unknown_54_[4];
    struct Struct_ov014_02185c90_7* unknown_58_;
    void* unknown_5c_;
    const char* unknown_60_;
    const char* unknown_64_;
    void* unknown_68_;
    char unknown_6c_[4];
    int unknown_70_;
    char unknown_74_[10];
    unsigned char unknown_7e_;
    unsigned char unknown_7f_;
    unsigned char unknown_80_;
    unsigned char unknown_81_;
    char unknown_82_[10];
    short unknown_8c_;
    char unknown_8e_[5];
    unsigned char unknown_93_;
    unsigned char unknown_94_;
    char unknown_95_[7];
    struct Struct_ov014_02185c90_8 unknown_9c_;
};
struct Struct_ov014_02185c90 {
    char unknown_0_[8];
    void* unknown_8_;
    char unknown_c_[0x9c];
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[8];
    short unknown_b4_;
    short unknown_b6_;
    char unknown_b8_[0x28];
};

struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4*);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" void func_0204c684(void*);
struct Struct_02097054_5;
extern "C" int func_02097224(Struct_02097054_5*, int);
extern "C" void __clear(void*, int);
extern "C" void func_0206819c(const char*, char*, int);
extern "C" void* func_020421a0();
extern "C" void func_02046608(void*, int, char*, char*, int, int, int);
extern "C" void func_ov023_021e24b0(void*, int, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
extern "C" void func_ov023_021e23d0(void*, int, int, unsigned char, unsigned char);
struct Struct_0201099c_3;
extern "C" void* func_020e0434(Struct_0201099c_3*, int);
extern "C" struct Struct_ov003_0215d4fc* func_ov014_021842a0(void*, short);
struct Struct_ov014_02185c90_3;
extern "C" void* func_ov014_021893c4(Struct_ov014_02185c90_3*, int);
extern "C" struct Struct_ov000_021700dc* func_ov014_0218940c(void*, int, void*);
extern "C" int* func_ov014_02189430(void*, int, void*);
extern "C" void func_ov023_021e257c(void*);
struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b5b4(void*, int);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
extern "C" void func_0204b4c0(void*, void*);
extern "C" void func_0204b2e0(void*, char*);
struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(Struct_02020cb8_6*, char*);

#define FLAGOP(e, id, stmt) do { struct Struct_ov003_0215d4fc* p = func_ov014_021842a0(e, id); if (p) { stmt; } } while (0)
#define SetBit4(e, id) FLAGOP(e, id, p->unknown_16_ |= 0x10)
#define SetBit0(e, id) FLAGOP(e, id, p->unknown_16_ |= 1)
#define ClrBit0(e, id) FLAGOP(e, id, p->unknown_16_ &= ~1)

// USA: func_ov014_02185c90
extern "C" ARM void func_ov014_02185c90(struct Struct_ov000_0217c638_2* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if ((arg0->unknown_81_ & 1) && arg0->unknown_7f_ == 5 && var0->GetTaskStatus(arg0->unknown_8c_)) {
        void* var1;
        void* var2;
        unsigned int var3;
        int var4;
        struct Struct_ov014_02185c90 var5;
        char var6[0x48];
        char var7[0x48];
        char var8[0x200];
        char var9[0x48];
        char var10[0x48];
        struct Struct_ov014_02185c90_6 var11;
        int var12;
        var0->GetLoadedFileByID(arg0->unknown_8c_, &var2, &var3);
        var12 = func_02046900((Struct_02020cb8_4*)var2);
        if (var12 != 0) {
            char* var13 = (char*)func_020467f0((Struct_02020aec*)var2, 0, &var1, &var4);
            if (var13 != 0) {
                func_0204c684(&var5);
                var5.unknown_a8_ = 0x20;
                var5.unknown_aa_ = 0x18;
                var5.unknown_b4_ = 0xa;
                var5.unknown_b6_ = 0xb;
                var5.unknown_8_ = var13 + 0x10;
                func_02097224((Struct_02097054_5*)((char*)arg0 + 0xc), arg0->unknown_48_->unknown_c_);
                __clear(var6, 0x48);
                __clear(var7, 0x48);
                __clear(var8, 0x200);
                __clear(var9, 0x48);
                __clear(var10, 0x48);
                func_0206819c(arg0->unknown_60_, var6, 0);
                func_0206819c(arg0->unknown_64_, var7, 0);
                char* var14 = var9;
                char* var15 = var10;
                char* var16 = var8;
                void* var17 = func_020421a0();
                func_02046608(var17, 0xa, var6, var14, 0x400, 0, 0);
                func_02046608(var17, 0xa, var7, var15, 0x400, 0, 0);
                func_02046608(var17, 0xa, (char*)arg0->unknown_68_, var16, 0x8c, 0, 0);
                void* var18;
                void* var19;
                struct Struct_ov014_02185c90_2* var20;
                struct Struct_ov014_02185c90_4* var21;
                unsigned char var22 = arg0->unknown_80_;
                var18 = arg0->unknown_58_;
                var20 = arg0->unknown_50_;
                var19 = arg0->unknown_5c_;
                var21 = arg0->unknown_48_;
                if (var18 && var21 && var19 && var20 && var20->unknown_0_0_) {
                    func_ov023_021e24b0(var18, 2, var21->unknown_1a_, 8, 0xf, 1, 3, 0, 1);
                    func_ov023_021e23d0(var18, 3, (int)var21->unknown_8_, 0xa, 0xf);
                    func_ov023_021e23d0(var18, 4, (int)(func_020e0434((Struct_0201099c_3*)var19, var21->unknown_12_)), 0xa, 0xf);
                    SetBit4(var18, 4);
                    if (&arg0->unknown_9c_ && arg0->unknown_9c_.unknown_4_ > 0) {
                        func_ov023_021e24b0(var18, 5, arg0->unknown_9c_.unknown_0_, 8, 0xf, 1, 6, 0, 0);
                        func_ov023_021e24b0(var18, 6, arg0->unknown_9c_.unknown_6_, 8, 0xf, 1, 6, 0, 0);
                    }
                    func_ov023_021e24b0(var18, 7, var20->unknown_0_0_, 8, 0xf, 1, 6, 0, 0);
                    ClrBit0(var18, 8);
                    ClrBit0(var18, 0xa);
                    ClrBit0(var18, 0xc);
                    ClrBit0(var18, 9);
                    ClrBit0(var18, 0xb);
                    ClrBit0(var18, 0xd);
                    ClrBit0(var18, 0x16);
                    ClrBit0(var18, 0x14);
                    ClrBit0(var18, 0x1a);
                    ClrBit0(var18, 0x1b);
                    ClrBit0(var18, 0x17);
                    ClrBit0(var18, 0x18);
                    ClrBit0(var18, 0x19);
                    SetBit0(var18, 0x15);
                    short var23;
                    short var24;
                    short var25;
                    int var26;
                    var26 = 0;
                    var25 = 8;
                    var24 = 0xa;
                    var23 = 0xc;
                    if (var20->unknown_1_2_ || var20->unknown_0_0_) {
                        var26 = 1;
                        if (var14[0] != 0) {
                            SetBit0(var18, 8);
                            SetBit0(var18, 0xa);
                            SetBit0(var18, 0xc);
                            func_ov023_021e23d0(var18, 8, (int)var14, 0xa, 0xf);
                            func_ov023_021e24b0(var18, 0xa, var20->unknown_1_3_, 8, 0xf, 1, 3, 0, 0);
                            func_ov023_021e23d0(var18, 0xc, (int)(func_020e0434((Struct_0201099c_3*)var19, 0xf)), 0xa, 0xf);
                            var25 = 9;
                            var24 = 0xb;
                            var23 = 0xd;
                        }
                    }
                    if (var20->unknown_2_2_ || var20->unknown_1_2_) {
                        if (var15[0] != 0) {
                            var26 = 1;
                            SetBit0(var18, var25);
                            SetBit0(var18, var24);
                            SetBit0(var18, var23);
                            func_ov023_021e23d0(var18, var25, (int)var15, 0xa, 0xf);
                            func_ov023_021e24b0(var18, var24, var20->unknown_2_2_, 8, 0xf, 1, 3, 0, 0);
                            func_ov023_021e23d0(var18, var23, (int)(func_020e0434((Struct_0201099c_3*)var19, 0xf)), 0xa, 0xf);
                        }
                    }
                    if (var26 == 0) {
                        SetBit0(var18, 0x16);
                        func_ov023_021e23d0(var18, 0x16, (int)(func_020e0434((Struct_0201099c_3*)var19, 0xe)), 0xa, 0xf);
                    }
                    func_ov023_021e23d0(var18, 0x13, (int)var16, 0xa, 0xf);
                    if (var20->unknown_1_2_) {
                        ClrBit0(var18, 0x14);
                        SetBit0(var18, 0x17);
                        func_ov023_021e23d0(var18, 0x17, (int)(func_020e0434((Struct_0201099c_3*)var19, 0x1c)), 8, 0xf);
                        SetBit0(var18, 0x18);
                        func_ov023_021e24b0(var18, 0x18, var22 + 1, 8, 0xf, 0, 1, 0, 0);
                        SetBit0(var18, 0x19);
                        func_ov023_021e24b0(var18, 0x19, 2, 8, 0xf, 0, 1, 0, 0);
                    }
                    ClrBit0(var18, 0xe);
                    ClrBit0(var18, 0xf);
                    ClrBit0(var18, 0x10);
                    int var27;
                    short var28;
                    struct Struct_ov014_02185c90_5* var29 = (struct Struct_ov014_02185c90_5*)func_ov014_021893c4((Struct_ov014_02185c90_3*)arg0->unknown_1c_, -1);
                    if (var29) {
                        var28 = 0xe;
                        for (var27 = 0; var27 < 2; var27++) {
                            if (var27 < var29->unknown_3_4_) {
                                SetBit0(var18, var28);
                                struct Struct_ov000_021700dc* var30 = func_ov014_0218940c(arg0->unknown_1c_, var27, var29);
                                int* var31 = func_ov014_02189430(arg0->unknown_1c_, var27, var29);
                                if (var30->unknown_2_0_) {
                                    func_ov023_021e23d0(var18, var28, (int)((void*)*var31), 0xa, 0xf);
                                } else {
                                    func_ov023_021e23d0(var18, var28, (int)(func_020e0434((Struct_0201099c_3*)var19, 0x15)), 0xa, 0xf);
                                }
                                var28++;
                            }
                        }
                        if (var29->unknown_3_4_ >= 3) {
                            if (func_ov014_0218940c(arg0->unknown_1c_, 2, var29)->unknown_2_0_) {
                                SetBit0(var18, 0x10);
                                func_ov023_021e23d0(var18, 0x10, (int)(func_020e0434((Struct_0201099c_3*)var19, 0x10)), 0xa, 0xf);
                            }
                        }
                    }
                }
                struct Struct_ov014_02185c90_7* var32 = arg0->unknown_58_;
                var32->unknown_4_ = &var5;
                var32->unknown_12_ = 1;
                func_ov023_021e257c(arg0->unknown_58_);
                func_0204af64((Struct_02020cb8*)&var11);
                func_0204b11c((unsigned char*)&var11, 0);
                var11.unknown_1c_0_ = 0;
                var11.unknown_1c_4_ = 1;
                func_0204b5b4(&var11, 1);
                func_0204b5e8((Struct_02020cb8_5*)&var11, 0, 0);
                for (int var33 = 0; var33 < var12; var33++) {
                    void* var34 = func_020467f0((Struct_02020aec*)var2, var33, &var1, &var4);
                    if (var34) {
                        memcpy(arg0->unknown_0_[var33], var34, var4);
                        func_0204b4c0(&var11, arg0->unknown_0_[var33]);
                    }
                }
                arg0->unknown_81_ &= ~0x20;
            }
        }
        var0->RemoveTask(arg0->unknown_8c_);
        arg0->unknown_8c_ = -1;
        arg0->unknown_7f_++;
    }
    if ((arg0->unknown_81_ & 0x10) && arg0->unknown_7e_ == 1 && var0->GetTaskStatus(arg0->unknown_70_)) {
        void* var35;
        void* var36;
        unsigned int var37;
        int var38;
        struct Struct_ov014_02185c90_6 var39;
        var0->GetLoadedFileByID(arg0->unknown_70_, &var36, &var37);
        int var40 = func_02046900((Struct_02020cb8_4*)var36);
        func_0204af64((Struct_02020cb8*)&var39);
        func_0204b11c((unsigned char*)&var39, 0);
        var39.unknown_1c_0_ = 0;
        var39.unknown_1c_4_ = 1;
        func_0204b5b4(&var39, 1);
        func_0204b5e8((Struct_02020cb8_5*)&var39, 0, 0);
        for (int var41 = 0; var41 < var40; var41++) {
            void* var42 = func_020467f0((Struct_02020aec*)var36, var41, &var35, &var38);
            if (var42) {
                func_0204b2e0(&var39, (char*)var42);
                func_0204b3a0((Struct_02020cb8_6*)&var39, (char*)var42);
            }
        }
        var0->RemoveTask(arg0->unknown_70_);
        arg0->unknown_70_ = -1;
        arg0->unknown_7e_ = 0;
        arg0->unknown_81_ &= ~0x10;
        arg0->unknown_94_ = arg0->unknown_93_;
        arg0->unknown_93_ = 0;
    }
}
