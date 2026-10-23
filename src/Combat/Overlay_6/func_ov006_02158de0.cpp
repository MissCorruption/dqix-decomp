#if defined(jpn)
#define R(j,u) (j)
#define data_ov006_02160010 data_ov006_02161364
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <std_library_functions.h>

class GameState {
public:
    static GameState* GetInstance();
};

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x454];
    unsigned short unknown_454_[8];
};

struct GameObject {
    char unknown_0_[R(0x144, 0x150)];
    Struct_ov005_0215840c_2* unknown_150_;
};

struct Struct_ov000_02182a74 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_ov006_02157a60 {
    char unknown_0_[R(0x40, 0x48)];
    short** unknown_48_;
    unsigned char** unknown_4c_;
    unsigned short* unknown_50_;
    char unknown_54_[0x20];
    char unknown_74_[R(0xd4, 0xd8)];
    char unknown_14c_[0xc];
};

extern "C" Struct_ov000_02182a74* func_02010828(GameState* arg0);
extern "C" void* func_0200ff1c(GameState* arg0, int arg1);
extern "C" short func_0207c620(unsigned char* arg0, unsigned int arg1);
extern "C" short* func_0207c5f8(unsigned char* arg0, unsigned int arg1);
extern "C" unsigned char* func_0207c60c(void* arg0, unsigned int arg1);
extern "C" void func_ov006_02158fd8(Struct_ov006_02157a60* arg0, unsigned int arg1, short arg2, unsigned char arg3);
extern "C" void func_ov006_0215373c(void* arg0, void* arg1);
extern "C" void func_ov006_021537c8(void* arg0, short** arg1, unsigned char** arg2, unsigned short* arg3);

extern "C" const unsigned short data_ov006_0215fffe[9];
extern "C" const int data_ov006_02160010[8];

// USA: func_ov006_02158de0
extern "C" ARM void func_ov006_02158de0(Struct_ov006_02157a60* arg0) {
    unsigned short var0[9];
    memcpy(var0, data_ov006_0215fffe, sizeof(var0));

    for (unsigned char var1 = 0; var1 < 9; var1++) {
        unsigned short var2 = var0[var1];
        memset(arg0->unknown_48_[var1], -1, var2 * 2);
        memset(arg0->unknown_4c_[var1], 0, var2);
        arg0->unknown_50_[var1] = 0;
    }
    GameState* var3 = GameState::GetInstance();
    Struct_ov000_02182a74* var4 = func_02010828(var3);
    for (unsigned short var5 = 0; var5 < 0x98; var5++)
        func_ov006_02158fd8(arg0, 8, *(short*)((char*)var4 + 0xc + var5 * 2), *((char*)var4 + 0x13c + var5));
    for (unsigned char var6 = 0; var6 < var4->unknown_f7c_; var6++) {
        GameObject* var7 = (GameObject*)func_0200ff1c(var3, var4->unknown_f78_[var6]);
        if (var7 != 0) {
            unsigned short* var8 = var7->unknown_150_->unknown_454_;
            for (unsigned char var9 = 0; var9 < 8; var9++)
                func_ov006_02158fd8(arg0, 8, var8[var9], 1);
        }
    }
    for (unsigned char var10 = 0; var10 < 8; var10++) {
        int var11 = data_ov006_02160010[var10];
        short var12 = func_0207c620((unsigned char*)var4 + 0x1d4, var11);
        short* var13 = func_0207c5f8((unsigned char*)var4 + 0x1d4, var11);
        unsigned char* var14 = func_0207c60c((char*)var4 + 0x1d4, var11);
        for (short var15 = 0; var15 < var12; var15++)
            func_ov006_02158fd8(arg0, var10, var13[var15], var14[var15]);
    }
    func_ov006_0215373c(arg0->unknown_74_, arg0->unknown_14c_);
    func_ov006_021537c8(arg0->unknown_74_, arg0->unknown_48_, arg0->unknown_4c_, arg0->unknown_50_);
}
