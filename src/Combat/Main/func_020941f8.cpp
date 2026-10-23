#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_020941f8_2 {
#if defined(jpn)
    char unknown_0_[0x100];
#else
    char unknown1_0_[0x340];
#endif
    int unknown_340_;
#if defined(jpn)
    char unknown_104_[0x138 - 0x104];
#else
    char unknown_344_[0x3c8 - 0x344];
#endif
    unsigned char unknown_3c8_0_ : 7;
    unsigned char unknown_3c8_7_ : 1;
    char unknown_3c9_[0x3cb - 0x3c9];
    char unknown_3cb_;
    char unknown_3cc_;
    unsigned char unknown_3cd_;
};

struct Struct_020941f8 {
    char unknown_0_[0x44];
    int unknown_44_;
    char unknown_48_[0x50 - 0x48];
    unsigned char unknown_50_;
};

struct Struct_02020cb8_4;
struct Struct_02020aec;

extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" unsigned char func_020938cc();
extern "C" ARM void func_0205a444(char* arg0);
extern "C" ARM void func_0205a494(void* arg0);
extern "C" ARM int func_0205a528(void* arg0, void* arg1, int arg2, int arg3);
extern "C" int func_020937f0(int arg0);
extern const char data_020f1394[];

// USA: func_020941f8
extern "C" ARM int func_020941f8(struct Struct_020941f8_2* arg0) {
    if ((arg0->unknown_3cd_ & 8) == 0 && (arg0->unknown_3cd_ & 2) == 0) {
        return 0;
    }
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    unsigned int var1 = arg0->unknown_3c8_0_;
    if (var1 == 0) {
        if (arg0->unknown_340_ >= 0) {
            var0->RemoveTask(arg0->unknown_340_);
            arg0->unknown_340_ = -1;
        }
        arg0->unknown_340_ = var0->QueueLoadFile(data_020f1394, 0);
        arg0->unknown_3cd_ &= ~8;
        arg0->unknown_3cd_ |= 2;
        arg0->unknown_3c8_0_ = arg0->unknown_3c8_0_ + 1;
    } else {
        void* var2;
        void* var3;
        unsigned int var4;
        int var5;
        if (var1 == 1 && var0->GetTaskStatus(arg0->unknown_340_) != 0) {
            var0->GetLoadedFileByID(arg0->unknown_340_, &var3, &var4);
            int var6 = func_02046900((struct Struct_02020cb8_4*)var3);
            arg0->unknown_3c8_7_ = func_020938cc();
            int var7 = func_020937f0(arg0->unknown_3c8_7_);
            if (var7 != 0) {
                struct Struct_020941f8 var8;
                int var9;
                func_0205a444((char*)&var8);
                func_0205a444((char*)&var8);
                var8.unknown_50_ = (unsigned char)arg0->unknown_3c8_7_;
                var8.unknown_44_ = var7 - 0xa00;
                for (var9 = 0; var9 < var6; var9++) {
                    void* var10;
                    var5 = 0;
                    var10 = func_020467f0((struct Struct_02020aec*)var3, var9, &var2, &var5);
                    func_0205a528(&var8, var10, var5, 0);
                }
                func_0205a494(&var8);
            }
            var0->RemoveTask(arg0->unknown_340_);
            arg0->unknown_340_ = -1;
            arg0->unknown_3cd_ &= ~2;
            arg0->unknown_3c8_0_ = 0;
            if (arg0->unknown_3cb_ > 0) {
                arg0->unknown_3cd_ |= 1;
            }
        }
    }
    return 1;
}
