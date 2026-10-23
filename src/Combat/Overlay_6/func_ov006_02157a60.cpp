#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_02020cb8;
struct Struct_ov006_021536e0;
struct Struct_02081ee4;
struct Struct_02081ee4_2;
struct Struct_02071be8;
struct Struct_0201099c_14;
struct Struct_ov006_02157a60_2;

extern "C" void* func_0205ec34();
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_ov006_021536e0(Struct_ov006_021536e0*);
extern "C" void func_02081ee4(Struct_02081ee4*, Struct_02081ee4_2*);
extern "C" void func_0205a444(char*);
extern "C" void func_ov023_021e20c0(void*);
extern "C" void func_02071be8(Struct_02071be8*);
extern "C" void func_020dfc40(Struct_0201099c_14*);
extern "C" void func_ov006_02157c78(Struct_ov006_02157a60_2*);

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

class GameObject {
public:
    char unknown_0_[R(0x144, 0x150)];
    Struct_ov005_0215840c_2* unknown_150_;
};

class GameState {
public:
    static GameState* GetInstance();
    GameObject* GetProtagonist();
};

struct Struct_ov003_021594c4 {
    int unknown_0_[0x20 / 4];
};

struct Struct_ov006_02156f04 {
    int unknown_0_[0x74 / 4];
};

struct Struct_ov006_02157a60 {
#if !defined(jpn)
    int unknown_0_;
    char** unknown_4_;
#endif
    void* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
    void* unknown_20_;
    void* unknown_24_;
    void* unknown_28_;
    void* unknown_2c_;
    void* unknown_30_;
    void* unknown_34_;
    void* unknown_38_;
    char unknown_3c_[8];
    short* unknown_44_;
    short** unknown_48_;
    unsigned char** unknown_4c_;
    unsigned short* unknown_50_;
    Struct_ov003_021594c4 unknown_54_;
    int unknown_74_[0x28 / 4];
    int unknown_9c_[0xc / 4];
    unsigned short unknown_a8_;
    unsigned char unknown_aa_;
    int unknown_ac_[0x54 / 4];
    int unknown_100_[R(0x48, 0x4c) / 4];
    int unknown_14c_[0xc / 4];
    int unknown_158_[0x18 / 4];
    char unknown_170_[R(0x18, 0xc)];
    Struct_ov006_02156f04 unknown_17c_[4];
    int unknown_34c_;
    int unknown_350_;
    int unknown_354_;
    int unknown_358_;
    short unknown_35c_;
    short unknown_35e_;
    short unknown_360_;
    short unknown_362_;
    short unknown_364_;
    short unknown_366_;
    short unknown_368_;
    short unknown_36a_;
    short unknown_36c_;
    short unknown_36e_;
    short unknown_370_;
    unsigned short unknown_372_[3];
    short unknown_378_[3];
    short unknown_37e_;
    unsigned short unknown_380_;
    short unknown_382_;
    signed char unknown_384_;
    signed char unknown_385_;
    unsigned char unknown_386_;
    unsigned char unknown_387_;
    unsigned char unknown_388_;
    unsigned char unknown_389_;
    unsigned char unknown_38a_;
    unsigned char unknown_38b_;
    unsigned char unknown_38c_[3];
    unsigned char unknown_38f_;
    unsigned char unknown_390_;
    unsigned char unknown_391_;
    unsigned char unknown_392_;
    unsigned char unknown_393_;
    unsigned short unknown_394_;
    unsigned char unknown_396_;
    unsigned char unknown_397_;
    unsigned char unknown_398_[3];
    int unknown_39c_;
    int unknown_3a0_;
    int unknown_3a4_;
    unsigned int unknown_3a8_;
    int unknown_3ac_;
    int unknown_3b0_;
    int unknown_3b4_;
    int unknown_3b8_[0x70 / 4];
    int unknown_428_;
    signed char unknown_42c_;
    unsigned char unknown_42d_;
    unsigned char unknown_42e_;
    unsigned char unknown_42f_;
    unsigned char unknown_430_;
    unsigned char unknown_431_;
    unsigned char unknown_432_;
    unsigned char unknown_433_;
    unsigned char unknown_434_;
};

// USA: func_ov006_02157a60
extern "C" ARM void func_ov006_02157a60(Struct_ov006_02157a60* arg0)
{
    char* var0 = (char*)func_0205ec34();
    if (!func_0206dfb0((int)var0, (unsigned char*)(var0 + 0x8c), 0x777))
        func_0206df6c(var0, (unsigned char*)(var0 + 0x8c), 0x777, 1);
#if !defined(jpn)
    arg0->unknown_0_ = 0;
#endif
    arg0->unknown_3b4_ = 0;
    arg0->unknown_428_ = -1;
    arg0->unknown_42d_ = 0;
    arg0->unknown_42e_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_14_ = 0;
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_30_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_38_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_4c_ = 0;
    arg0->unknown_50_ = 0;
    func_0204af64((Struct_02020cb8*)&arg0->unknown_54_);
    func_ov006_021536e0((Struct_ov006_021536e0*)arg0->unknown_74_);
    func_02081ee4((Struct_02081ee4*)arg0->unknown_9c_, (Struct_02081ee4_2*)&arg0->unknown_a8_);
    func_0205a444((char*)arg0->unknown_ac_);
    func_ov023_021e20c0(arg0->unknown_100_);
    func_02071be8((Struct_02071be8*)arg0->unknown_14c_);
    func_020dfc40((Struct_0201099c_14*)arg0->unknown_158_);
    for (unsigned char var1 = 0; var1 < 4; var1++)
        func_ov006_02157c78((Struct_ov006_02157a60_2*)&arg0->unknown_17c_[var1]);
    arg0->unknown_350_ = 0;
    arg0->unknown_354_ = -1;
    arg0->unknown_358_ = -1;
    arg0->unknown_35c_ = 0;
    arg0->unknown_35e_ = -1;
    arg0->unknown_360_ = -1;
    arg0->unknown_362_ = -1;
    arg0->unknown_364_ = -1;
    arg0->unknown_366_ = -1;
    arg0->unknown_368_ = -1;
    arg0->unknown_36a_ = -1;
    arg0->unknown_36c_ = -1;
    arg0->unknown_36e_ = -1;
    arg0->unknown_370_ = -1;
    arg0->unknown_372_[2] = 0;
    arg0->unknown_372_[1] = 0;
    arg0->unknown_372_[0] = 0;
    arg0->unknown_378_[2] = -1;
    arg0->unknown_378_[1] = arg0->unknown_378_[2];
    arg0->unknown_378_[0] = arg0->unknown_378_[1];
    arg0->unknown_37e_ = -1;
    arg0->unknown_380_ = 0;
    arg0->unknown_382_ = 0;
    arg0->unknown_384_ = -1;
    arg0->unknown_385_ = -1;
    arg0->unknown_386_ = 0;
    arg0->unknown_387_ = 0;
    arg0->unknown_388_ = 0;
    arg0->unknown_389_ = 0;
    arg0->unknown_38a_ = 0;
    arg0->unknown_38b_ = 0;
    arg0->unknown_38c_[2] = 0;
    arg0->unknown_38c_[1] = 0;
    arg0->unknown_38c_[0] = 0;
    arg0->unknown_38f_ = 0;
    arg0->unknown_390_ = 0;
    arg0->unknown_391_ = 0;
    arg0->unknown_392_ = 0;
    arg0->unknown_393_ = 0;
    arg0->unknown_394_ = 0;
    arg0->unknown_396_ = 0;
    arg0->unknown_397_ = 0;
    arg0->unknown_396_ = GameState::GetInstance()->GetProtagonist()->unknown_150_->unknown_49c_0_;
    arg0->unknown_39c_ = 0;
    arg0->unknown_3a4_ = 1;
    arg0->unknown_3a8_ = 0;
    arg0->unknown_3ac_ = 0;
    arg0->unknown_3b0_ = -1;
    arg0->unknown_42f_ = 0;
    arg0->unknown_430_ = arg0->unknown_431_ = 0;
    arg0->unknown_432_ = 0;
    arg0->unknown_433_ = 0;
    arg0->unknown_434_ = 0;
    arg0->unknown_42c_ = 0;
}
