#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)

struct Struct_0205cfd4;
struct Struct_02020cb8;
struct Struct_020727d8;
struct Struct_0201099c_14;

struct Struct_ov005_0215840c_2
{
    char unknown_0_[0x3c];
    char unknown_3c_[0xc];
};

struct Struct_ov008_02188f5c
{
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
    unsigned int unknown_4_0_ : 9;
    int unknown_5_1_ : 10;
    int unknown_6_3_ : 11;
    int unknown_7_6_ : 1;
    unsigned int unknown_7_7_ : 1;
    char unknown_8_[0x74];
};

struct Struct_ov008_02188f5c_4
{
    unsigned char unknown_0_[6];
    char unknown_6_[0xb];
    unsigned char unknown_11_;
    unsigned short unknown_12_0_ : 14;
    unsigned short unknown_13_6_ : 1;
    unsigned short unknown_13_7_ : 1;
    char unknown_14_[0x18];
};

struct Struct_ov008_02188f5c_2
{
    char unknown_0_[0x6c];
    Struct_ov008_02188f5c unknown_6c_;
};

extern "C" void __clear(void* arg0, unsigned long arg1);
extern "C" void* func_0202ae18();
extern "C" void func_02074af4(void* arg0);
extern "C" void func_0204c684(void* arg0);
extern "C" void func_020426bc(const char* arg0, char* arg1, int);
extern "C" void func_ov008_021843f8(void* arg0);
extern "C" void func_ov017_021d1014(signed char arg0, int, int);
extern "C" void func_ov017_021d1118(signed char arg0, int, int, int);
extern "C" void func_0205cfd4(Struct_0205cfd4* arg0);
extern "C" void func_0204af64(Struct_02020cb8* arg0);
extern "C" void func_020727d8(Struct_020727d8* arg0);
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_ov008_02189228(void* arg0);
extern "C" Struct_ov005_0215840c_2* func_02053c6c(unsigned char* arg0);
extern "C" int func_0202b7d8(int*);

struct Struct_ov008_02188f5c_3
{
    char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned int unknown_14_;
    char unknown_18_[0xbc];
    char unknown_d4_[2][0x20];
    char unknown_114_[0xe0];
    void* unknown_1f4_;
    void* unknown_1f8_;
    void* unknown_1fc_;
    SafeAllocator unknown_200_;
    SafeAllocator unknown_214_;
    SafeAllocator unknown_228_;
    SafeAllocator unknown_23c_;
    SafeAllocator unknown_250_;
    SafeAllocator unknown_264_;
    char unknown_278_[8];
    char unknown_280_[8];
    char unknown_288_[0x18];
    char* unknown_2a0_;
    void* unknown_2a4_;
#if defined(jpn)
    char unknown_2a8_[0xb44];
#else
    char unknown_2a8_[0xb48];
#endif
    Struct_ov008_02188f5c_4 unknown_df0_;
    Struct_ov008_02188f5c unknown_e1c_;
    unsigned char unknown_e98_;
    signed char unknown_e99_;
    signed char unknown_e9a_;
    signed char unknown_e9b_;
    signed char unknown_e9c_;
#if defined(jpn)
    int unknown1_e9c_[5];
#else
    int unknown_ea0_;
    int unknown_ea4_;
    int unknown_ea8_;
    int unknown_eac_;
    int unknown_eb0_;
    int unknown_eb4_;
#endif
    unsigned char unknown_eb8_;
    signed char unknown_eb9_;
    unsigned char unknown_eba_;
    unsigned char unknown_ebb_;
    Struct_ov008_02188f5c_2* unknown_ebc_;
    unsigned char unknown_ec0_0_ : 1;
    unsigned char unknown_ec0_1_ : 1;
    unsigned char unknown_ec0_2_ : 1;
    unsigned char unknown_ec0_3_ : 1;
    unsigned char unknown_ec0_4_ : 4;
    void* unknown_ec4_;
    unsigned int unknown_ec8_;
};

// USA: func_ov008_02188f5c
extern "C" ARM void func_ov008_02188f5c(Struct_ov008_02188f5c_3* arg0, signed char arg1, Struct_ov008_02188f5c_2* arg2)
{
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    arg0->unknown_10_ = 0;
    arg0->unknown_11_ = 0;
    func_02074af4(arg0);
    arg0->unknown_14_ = (REG_DISPCNT & 0x1f00) >> 8;
    REG_DISPCNT = (REG_DISPCNT & ~0x1f00) | 0x100;
    func_0205cfd4((Struct_0205cfd4*)&arg0->unknown_18_);
    func_0204af64((Struct_02020cb8*)&arg0->unknown_d4_[0]);
    func_0204af64((Struct_02020cb8*)&arg0->unknown_d4_[1]);
    func_0204c684(&arg0->unknown_114_);
    func_020727d8((Struct_020727d8*)&arg0->unknown_278_);
    func_020727d8((Struct_020727d8*)&arg0->unknown_280_);
    func_020dfc40((Struct_0201099c_14*)&arg0->unknown_288_);
    arg0->unknown_1f4_ = NULL;
    arg0->unknown_1f8_ = NULL;
    arg0->unknown_1fc_ = NULL;
    arg0->unknown_200_.ResetAllocatorPointer();
    arg0->unknown_214_.ResetAllocatorPointer();
    arg0->unknown_228_.ResetAllocatorPointer();
    arg0->unknown_23c_.ResetAllocatorPointer();
    arg0->unknown_250_.ResetAllocatorPointer();
    arg0->unknown_264_.ResetAllocatorPointer();
    arg0->unknown_2a0_ = NULL;
    arg0->unknown_2a4_ = NULL;
    func_ov008_021843f8(&arg0->unknown_2a8_);
    func_ov008_02189228(&arg0->unknown_df0_);
    arg0->unknown_e1c_.unknown_0_0_ = 2000;
    arg0->unknown_e1c_.unknown_1_4_ = 1;
    arg0->unknown_e1c_.unknown_2_0_ = 1;
    arg0->unknown_e1c_.unknown_3_4_ = 0;
    arg0->unknown_e1c_.unknown_2_5_ = 0;
    arg0->unknown_e1c_.unknown_3_3_ = 0;
    arg0->unknown_e1c_.unknown_3_1_ = 0;
    arg0->unknown_e1c_.unknown_3_2_ = 0;
    arg0->unknown_e1c_.unknown_3_5_ = 0;
    arg0->unknown_e1c_.unknown_3_6_ = 1;
    arg0->unknown_e1c_.unknown_3_7_ = 0;
    arg0->unknown_e1c_.unknown_4_0_ = 0x1ff;
    arg0->unknown_e1c_.unknown_7_6_ = 0;
    arg0->unknown_e1c_.unknown_5_1_ = 300;
    arg0->unknown_e1c_.unknown_6_3_ = 706;
    arg0->unknown_e1c_.unknown_8_[0] = 0;
    arg0->unknown_e98_ = 0;
    arg0->unknown_e99_ = 0;
    arg0->unknown_e9a_ = 0;
    arg0->unknown_e9b_ = 0;
    arg0->unknown_e9c_ = 0;
#if defined(jpn)
    arg0->unknown1_e9c_[0] = -1;
    arg0->unknown1_e9c_[1] = -1;
    arg0->unknown1_e9c_[2] = -1;
    arg0->unknown1_e9c_[3] = -1;
    arg0->unknown1_e9c_[4] = -1;
#else
    arg0->unknown_ea0_ = -1;
    arg0->unknown_ea4_ = -1;
    arg0->unknown_ea8_ = -1;
    arg0->unknown_eac_ = -1;
    arg0->unknown_eb0_ = -1;
    arg0->unknown_eb4_ = -1;
#endif
    arg0->unknown_ec4_ = NULL;
    arg0->unknown_ec8_ = 0;
    arg0->unknown_eb8_ = 0;
    arg0->unknown_eba_ = 0;
    arg0->unknown_ebb_ = 0;
    arg0->unknown_ebc_ = arg2;
    arg0->unknown_ec0_0_ = 1;
    arg0->unknown_ec0_1_ = 0;
    arg0->unknown_ec0_2_ = 0;
    arg0->unknown_ec0_3_ = 0;
    arg0->unknown_eb9_ = arg1;
    if (arg0->unknown_ebc_ == NULL)
    {
        GameObject* var1 = var0->GetPartyMemberByIndex(arg1);
        if (var1 != NULL)
        {
            Struct_ov005_0215840c_2* var2 = func_02053c6c((unsigned char*)var1);
            if (var2 != NULL)
            {
                func_ov008_02189228(&arg0->unknown_df0_);
#if defined(jpn)
                memcpy(arg0->unknown_df0_.unknown_6_, var2->unknown_3c_, sizeof(arg0->unknown_df0_.unknown_6_));
#else
                char var3[0xc];
                __clear(var3, sizeof(var3));
                func_020426bc(var2->unknown_3c_, var3, 1);
                memcpy(arg0->unknown_df0_.unknown_6_, var3, sizeof(arg0->unknown_df0_.unknown_6_));
#endif
                arg0->unknown_df0_.unknown_13_6_ = 1;
                if (func_0202b7d8((int*)func_0202ae18()))
                {
                    func_ov017_021d1014(arg1, 0, 0);
                    func_ov017_021d1118(arg1, 1, 1, 0);
                }
            }
        }
    }
    else
    {
        arg0->unknown_e98_ = 0xff;
        memcpy(&arg0->unknown_e1c_, &arg0->unknown_ebc_->unknown_6c_, sizeof(Struct_ov008_02188f5c));
    }
}
