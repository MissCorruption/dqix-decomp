#include <globaldefs.h>

#if defined(jpn)
#define func_ov013_021878b0 func_ov013_021888c0
#endif
#include "Filesystem/BackgroundLoader.h"

struct Struct_020534ac;
struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);
struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

extern "C" void func_0204c684(void* arg0);
extern "C" void func_ov013_02187a58(void* arg0, void* arg1);
extern "C" void func_0204b174(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_0204af14;
extern "C" void* func_0204af14(struct Struct_0204af14* arg0, unsigned int arg1);
struct Struct_0204ae44;
extern "C" void func_0204ae44(struct Struct_0204ae44* arg0, int arg1);
struct Struct_0204b988;
extern "C" void func_0204b988(struct Struct_0204b988* arg0, unsigned int arg1, int arg2, int arg3, unsigned short arg4);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2* arg0, void* arg1);

extern const char data_ov013_02187eaf[];

struct Struct_ov013_021878b0 {
    char unknown_0_[0x28];
#if defined(jpn)
    char unknown_28_[0x20];
#else
    char unknown_28_[0x28];
    short* unknown_50_;
    short* unknown_54_;
    unsigned char* unknown_58_;
#endif
    int unknown_5c_;
    char unknown_60_[6];
    unsigned char unknown_66_;
    signed char unknown_67_;
    unsigned char unknown_68_;
    unsigned char unknown_69_;
#if !defined(jpn)
    signed char unknown_6a_;
#endif
};

struct Struct_ov013_021878b0_2 {
    char unknown_0_[0x8];
    void* unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    unsigned short unknown_a8_;
    unsigned short unknown_aa_;
    char unknown_ac_[0xb4 - 0xac];
    unsigned short unknown_b4_;
    unsigned short unknown_b6_;
    char unknown_b8_[0xe0 - 0xb8];
};

// USA: func_ov013_021878b0
extern "C" ARM void func_ov013_021878b0(Struct_ov013_021878b0* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    unsigned char var1 = arg0->unknown_66_;

    if (var1 == 0) {
#if !defined(jpn)
        for (int var2 = 0; var2 < 10; var2++) {
            arg0->unknown_50_[var2] = -1;
            arg0->unknown_54_[var2] = -1;
            arg0->unknown_58_[var2] = 2;
        }
        arg0->unknown_6a_ = -1;
#endif
        var0->MaybeFreeAllocations();
        arg0->unknown_5c_ = var0->QueueLoadFile(data_ov013_02187eaf, NULL);
        arg0->unknown_66_++;
    } else if (var1 == 1) {
        if (var0->GetTaskStatus(arg0->unknown_5c_) != 0) {
            void* var3;
            void* var4;
            unsigned int var5;
            int var6;
            var0->GetLoadedFileByID(arg0->unknown_5c_, &var4, &var5);
            func_02046900((struct Struct_02020cb8_4*)var4);
            void* var7 = func_020467f0((struct Struct_02020aec*)var4, 0, &var3, &var6);
            if (var7 != 0) {
                Struct_ov013_021878b0_2 var8;
                func_0204c684(&var8);
                var8.unknown_8_ = (char*)var7 + 0x10;
                var8.unknown_b4_ = 0xa;
                var8.unknown_b6_ = 0xb;
                var8.unknown_a8_ = 0x20;
                var8.unknown_aa_ = 0x18;
                func_ov013_02187a58(arg0, &var8);
                func_0204b174(arg0->unknown_28_, var7, 0, var6);
            }
            var0->RemoveTask(arg0->unknown_5c_);
            arg0->unknown_5c_ = -1;
            void* var9 = func_0204af14((struct Struct_0204af14*)arg0->unknown_28_, 0);
            if (var9 != 0) {
                func_0204ae44((struct Struct_0204ae44*)var9, arg0->unknown_67_);
            }
            func_0204b988((struct Struct_0204b988*)arg0->unknown_28_, 0, 0, 0, 0xffff);
            func_0204b0e8((struct Struct_02020cb8_2*)arg0->unknown_28_, 0);
            arg0->unknown_66_ = 0;
            arg0->unknown_69_ &= ~1;
        }
    }
}
