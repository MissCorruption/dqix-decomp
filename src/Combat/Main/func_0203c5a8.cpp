#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020426bc(void* arg0, void* arg1, int arg2);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
#if !defined(jpn)
extern "C" void func_0203bebc(void* arg0, void* arg1, void* arg2);
#endif

struct Struct_0203c5a8 {
    char unknown_0_[0x20];
    unsigned char unknown_20_;
    char unknown_21_[3];
    unsigned char unknown_24_;
    char unknown_25_[3];
};

// USA: func_0203c5a8
#if defined(jpn)
struct Struct_0203c5a8_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_0203c5a8_3 {
    void* unknown_0_;
    Struct_0203c5a8_2 unknown_4_[96];
    int unknown_604_;
    char* unknown_608_;
    unsigned int unknown_60c_;
    unsigned short unknown_610_;
    unsigned short unknown_612_;
};

extern "C" int func_02043014(int, unsigned short*);
extern "C" char* func_02043110(int, int);
extern "C" void func_0203bebc(void*, int, char*, char**, int, void*);
#endif

#if defined(jpn)
extern "C" ARM void func_0203c5a8(void* arg0, void* arg1, void* arg2, int arg3)
#else
extern "C" ARM void func_0203c5a8(void* arg0, void* arg1, short* arg2)
#endif
{
#if defined(jpn)
    Struct_0203c5a8_3* var0 = static_cast<Struct_0203c5a8_3*>(arg0);
    char* var1 = static_cast<char*>(arg1);
    short* var2 = static_cast<short*>(arg2);
    if (var1 == NULL || var2 == NULL) return;

    for (short var3 = 0; var3 < 20; var3 += 3) {
        if (var1[var3] == 0) break;
        char var4[7];
        __clear(var4, 7);
        var4[0] = var1[var3];
        var4[1] = var1[var3 + 1];
        if (var1[var3 + 2] != 0) {
            var4[2] = var1[var3 + 2];
            var4[3] = var1[var3 + 3];
            if (var1[var3 + 4] != 0) {
                var4[4] = var1[var3 + 4];
                var4[5] = var1[var3 + 5];
            }
        }
        int var5 = func_02043014(10, reinterpret_cast<unsigned short*>(var4));
        int var6 = func_02043014(10, reinterpret_cast<unsigned short*>(var4 + 2));
        int var7 = func_02043014(10, reinterpret_cast<unsigned short*>(var4 + 4));
        if (var5 == -1 && var6 == -1 && var7 == -1) {
            var3 += 3;
            continue;
        }
        if (var5 == -1) {
            var1[var3] = var1[var3 + 1] = 0;
        }
        if (var6 == -1) {
            var1[var3 + 2] = var1[var3 + 3] = 0;
        }
        if (var7 == -1) {
            var1[var3 + 4] = var1[var3 + 5] = 0;
        }

        short var8;
        int var9 = 0;
        bool var10 = true;
        for (var8 = 0; var8 < 95; var8 += 2) {
            Struct_0203c5a8_2* var11 = &var0->unknown_4_[var8];
            Struct_0203c5a8_2* var12 = &var0->unknown_4_[var8 + 1];
            if (var11->unknown_e_ != 0 &&
                var11->unknown_4_[0] == var1[var3] && var11->unknown_4_[1] == var1[var3 + 1] &&
                var11->unknown_4_[2] == var1[var3 + 2] && var11->unknown_4_[3] == var1[var3 + 3] &&
                var11->unknown_4_[4] == var1[var3 + 4] && var11->unknown_4_[5] == var1[var3 + 5] &&
                arg3 == var11->unknown_0_) {
                ++var11->unknown_e_;
                ++var12->unknown_e_;
                var2[var3 / 3] = var8;
                var10 = false;
                break;
            }
            if (var0->unknown_612_ == ++var9) break;
        }

        if (var10) {
            for (var8 = 0; var8 < 95; ++var8) {
                Struct_0203c5a8_2* var13 = &var0->unknown_4_[var8];
                Struct_0203c5a8_2* var14 = &var0->unknown_4_[var8 + 1];
                if (var13->unknown_e_ == 0 && var14->unknown_e_ == 0) {
                    char* var15[3];
                    __clear(var15, 12);
                    var15[0] = func_02043110(10, var5);
                    var15[1] = func_02043110(10, var6);
                    var15[2] = func_02043110(10, var7);
                    func_0203bebc(var13, var0->unknown_604_, var1 + var3, var15,
                        arg3, var0->unknown_608_ + var8 * 128);
                    var0->unknown_612_ += 2;
                    var13->unknown_e_ = 1;
                    var14->unknown_e_ = 1;
                    var2[var3 / 3] = var8;
                    break;
                }
            }
        }
        var3 += 3;
    }
#else
    if (arg1 == 0) return;
    char var16[0x100];
    __clear(var16, 0x100);
    int var17 = func_020426bc(arg1, var16, 0);

    struct Struct_0203c5a8* var18 = (struct Struct_0203c5a8*)((char*)arg0 + 4);
    for (short var19 = 0; var19 < 0x20; var18 = (struct Struct_0203c5a8*)((char*)var18 + 0x28), var19++) {
        if (var18->unknown_24_ != 0 && var18->unknown_20_ == var17) {
            if (func_02001aec(var18, var16, var17) == 0) {
                var18->unknown_24_ = var18->unknown_24_ + 1;
                *arg2 = var19;
                return;
            }
        }
    }

    var18 = (struct Struct_0203c5a8*)((char*)arg0 + 4);
    for (short var20 = 0; var20 < 0x20; var18 = (struct Struct_0203c5a8*)((char*)var18 + 0x28), var20++) {
        if (var18->unknown_24_ == 0) {
            unsigned short var21 = *(unsigned short*)((char*)arg0 + 0x512);
            void* var22 = *(void**)((char*)arg0 + 0x508);
            var21 = var21 + 1;
            *(unsigned short*)((char*)arg0 + 0x512) = var21;
            var18->unknown_24_ = 1;
            var18->unknown_20_ = (unsigned char)var17;
            func_0203bebc(var18, var16, (char*)var22 + var20 * 0x400);
            *arg2 = var20;
            return;
        }
    }
#endif
}
