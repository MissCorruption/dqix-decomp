#include <globaldefs.h>
#if defined(jpn)
extern const char* data_ov003_0217ece0;
enum { Enum_ov003_02177410_13=0xc };
enum { Enum_ov003_02177410_336 = 0x144 };
enum { Enum_ov003_02177410_2204 = 0x818 };
enum { Enum_ov003_02177410_2208 = 0x81c };
enum { Enum_ov003_02177410_4163 = 0xfbf };
#else
enum { Enum_ov003_02177410_13=0xd };
enum { Enum_ov003_02177410_336 = 0x150 };
enum { Enum_ov003_02177410_2204 = 0x89c };
enum { Enum_ov003_02177410_2208 = 0x8a0 };
enum { Enum_ov003_02177410_4163 = 0x1043 };
#endif
#include "GameState/GameState.h"

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
struct Struct_02081214;
extern "C" void* func_02081214(struct Struct_02081214* arg0, int arg1);
extern "C" void func_0208077c(void* arg0, int arg1, short arg2);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2);
extern "C" void func_020805f4(void* arg0, int arg1);
extern "C" void func_020813ec(void* arg0, int arg1);

struct Struct_ov003_0217faa4 {
    unsigned char unknown_0_[8];
};
extern Struct_ov003_0217faa4 data_ov003_0217faa4;

struct Struct_ov003_02177410 {
    char unknown_0_[4];
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    char unknown_c_[0x18 - 0xc];
    short unknown_18_;
    char unknown_1a_[0x20 - 0x1a];
};

struct Struct_ov003_02177410_2 {
    char unknown_0_[0x194];
    Struct_ov003_02177410 unknown_194_[8];
};

struct Struct_ov003_02177410_3 {
    char unknown_0_[Enum_ov003_02177410_336];
    Struct_ov003_02177410_2* unknown_150_;
};

struct Struct_ov003_02177410_4 {
    char unknown_0_[Enum_ov003_02177410_2204];
    struct Struct_0207fdcc_2* unknown_89c_;
    char unknown_8a0_[Enum_ov003_02177410_4163 - Enum_ov003_02177410_2208];
    signed char unknown_1043_;
};

// USA: func_ov003_02177410
extern "C" ARM void func_ov003_02177410(Struct_ov003_02177410_4* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0207fdcc_2* var1 = arg0->unknown_89c_;
    func_02080c20(var1, 0xe);
    func_02080c68(var1, 0xe, 0);

    Struct_ov003_02177410_3* var2 = (Struct_ov003_02177410_3*)func_0200ff1c(var0, arg0->unknown_1043_);
    if (var2 == NULL) {
        return;
    }

    Struct_ov003_0217faa4 var3 = data_ov003_0217faa4;
#if !defined(jpn)
    int var4 = (int)func_02081214((struct Struct_02081214*)var1, 0x14);
#endif
    for (short var5 = 0; var5 < 8; var5++) {
        short var6 = var5 + 0x68;
#if defined(jpn)
        int var7 = (int)data_ov003_0217ece0;
#else
        int var7 = var4;
#endif
        int var8 = 3;
        unsigned char var9 = var3.unknown_0_[var5];
        if (var9 != 0xff) {
            Struct_ov003_02177410* var10 = &var2->unknown_150_->unknown_194_[var9];
            if (var10 == NULL) {
                continue;
            }
            if (var10->unknown_18_ > 0 && var10->unknown_8_0_ != 0xb) {
                var7 = var10->unknown_4_;
                var8 = 0xf;
            }
        }
        func_0208077c(var1, var6, Enum_ov003_02177410_13);
        func_02080cc0((struct Struct_02080cc0*)var1, var6, var8);
        func_02080f8c((struct Struct_02080f8c*)var1, var6, var7);
#if !defined(jpn)
        func_020805f4(var1, var6);
#endif
    }

    func_020813ec(var1, 0xe);
}
