#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_02156bd8_1908 = 0x6f0 };
#else
enum { Enum_ov006_02156bd8_1908 = 0x774 };
#endif

#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct Struct_020dbd9c {
    char unknown_0_[0x10];
    int unknown_10_;
    unsigned char unknown_14_;
};

struct Struct_ov006_02154614_2 {
    char unknown_0_[Enum_ov006_02156bd8_1908];
    unsigned short unknown_774_;
    char unknown_776_[0x7];
    signed char unknown_77d_;
    char unknown_77e_[0x1d];
    unsigned char unknown_79b_0_ : 1;
    unsigned char unknown_79b_1_ : 1;
};

struct Struct_ov006_02156e54 {
    char unknown_0_[0x7c];
};

struct Struct_ov006_021537d0 {
    short unknown_0_;
};

struct Struct_ov006_021555b0 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};

struct Struct_ov006_02154614 {
#if !defined(jpn)
    char unknown_0_[3][0x80];
#endif
    SafeAllocator* unknown_180_;
    SafeAllocator* unknown_184_;
    SafeAllocator* unknown_188_;
    SafeAllocator unknown_18c_;
    void* unknown_1a0_;
    void* unknown_1a4_;
    unsigned char* unknown_1a8_;
    void* unknown_1ac_;
    void* unknown_1b0_;
    Struct_ov006_021537d0* unknown_1b4_;
    Struct_ov006_021537d0* unknown_1b8_;
    int unknown_1bc_;
    Struct_ov006_021555b0* unknown_1c0_;
    unsigned char* unknown_1c4_;
    void* unknown_1c8_;
    void* unknown_1cc_;
    void* unknown_1d0_;
    void* unknown_1d4_;
    void* unknown_1d8_;
    void* unknown_1dc_;
    void* unknown_1e0_;
    char unknown_1e4_[0x54];
    Object3D unknown_238_;
    Object3D unknown_2e4_;
    Object3D unknown_390_;
    Object3D unknown_43c_;
    Object3D unknown_4e8_;
    char unknown_594_[0x38];
    char unknown_5cc_[0x2c8];
    Struct_ov006_02156e54 unknown_894_[4];
    SafeAllocator unknown_a84_[4];
    int unknown_ad4_;
    int unknown_ad8_;
    unsigned char unknown_adc_;
    unsigned char unknown_add_;
    unsigned char unknown_ade_;
    unsigned char unknown_adf_;
    unsigned char unknown_ae0_;
    unsigned char unknown_ae1_;
    unsigned short unknown_ae2_;
    Struct_ov006_02154614_2 unknown_ae4_;
    SafeAllocator* unknown_1280_;
    SafeAllocator* unknown_1284_;
    char unknown_1288_[0x18];
    Struct_020dbd9c unknown_12a0_;
    short unknown_12b8_;
    signed char unknown_12ba_;
    unsigned char unknown_12bb_;
    unsigned char unknown_12bc_;
    unsigned char unknown_12bd_;
};

struct Struct_02020cb8_4;
struct Struct_02020cb8;
struct Struct_02020cb8_5;
struct Struct_02020aec;
struct Struct_02020cb8_6;

struct Struct_ov003_021594c4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

extern "C" void func_ov023_021dcd90(Struct_ov006_02154614_2* arg0, unsigned char arg1);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void func_0204af64(Struct_02020cb8* arg0);
extern "C" void func_0204b11c(unsigned char* arg0, int arg1);
extern "C" void func_0204b5b4(void* arg0, int arg1);
extern "C" void func_0204b5e8(Struct_02020cb8_5* arg0, int arg1, int arg2);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0204b2e0(void* arg0, char* arg1);
extern "C" void func_0204b3a0(Struct_02020cb8_6* arg0, char* arg1);

extern char data_ov006_021601b6[];
extern char data_ov006_021601cc[];

// USA: func_ov006_02156bd8
extern "C" ARM void func_ov006_02156bd8(Struct_ov006_02154614* arg0) {
    if (!(arg0->unknown_ae2_ & 1))
        return;
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_adf_ == 0) {
        if (arg0->unknown_ae2_ & 8)
            arg0->unknown_ad8_ = var0->QueueLoadFile(data_ov006_021601b6, 0);
        else
            arg0->unknown_ad8_ = var0->QueueLoadFile(data_ov006_021601cc, 0);
        func_ov023_021dcd90(&arg0->unknown_ae4_, 0);
        arg0->unknown_adf_++;
    } else if (arg0->unknown_adf_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_ad8_)) {
            void* var1;
            void* var2;
            unsigned int var3;
            var0->GetLoadedFileByID(arg0->unknown_ad8_, &var2, &var3);
            int var4 = func_02046900((Struct_02020cb8_4*)var2);
            Struct_ov003_021594c4 var5;
            func_0204af64((Struct_02020cb8*)&var5);
            func_0204b11c((unsigned char*)&var5, 0);
            var5.unknown_1c_0_ = 0;
            var5.unknown_1c_4_ = 3;
            func_0204b5b4(&var5, 3);
            func_0204b5e8((Struct_02020cb8_5*)&var5, 0, 0);
            for (int var6 = 0; var6 < var4; var6++) {
                int var7;
                void* var8 = func_020467f0((Struct_02020aec*)var2, var6, &var1, &var7);
                if (var8 != 0) {
                    func_0204b2e0(&var5, (char*)var8);
                    func_0204b3a0((Struct_02020cb8_6*)&var5, (char*)var8);
                }
            }
            var0->RemoveTask(arg0->unknown_ad8_);
            arg0->unknown_ad8_ = -1;
            arg0->unknown_adf_ = 0;
            arg0->unknown_ae2_ &= ~1;
            arg0->unknown_ae2_ &= ~4;
        }
    }
}
