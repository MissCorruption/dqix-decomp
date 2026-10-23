#if defined(jpn)
#define func_ov008_02188d74 func_ov008_02189a9c
#endif

#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"

struct Struct_0201099c_3;
struct Struct_02043368_2;
struct Struct_02020cb8_4;
struct Struct_02020aec;

struct Struct_ov006_021580b8
{
    char unknown_0_[0x28];
};

struct Struct_ov008_02188d74
{
    char unknown_0_[0x3c];
    void* unknown_3c_;
    Struct_ov006_021580b8* unknown_40_;
    char unknown_44_[4];
    unsigned int unknown_48_;
    short unknown_4c_;
    unsigned short unknown_4e_;
    unsigned char unknown_50_;
    char unknown_51_[3];

    void inline_ov008_02188d74(Struct_ov006_021580b8* arg0, short arg1)
    {
        unknown_40_ = arg0;
        unknown_4c_ = arg1;
    }
};

extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_0205a198(Struct_02043368_2* arg0);
extern "C" int func_02046900(Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(Struct_ov008_02188d74* arg0, void* arg1, unsigned int arg2, SafeAllocator* arg3);

struct Struct_ov008_021842a0_2
{
    char unknown_0_[0x50];
    SafeAllocator unknown_50_;
    char unknown_64_[0xa0 - 0x50 - sizeof(SafeAllocator)];
    char unknown_a0_[0x18];
    char unknown_b8_[0x73c - 0xb8];
    Struct_ov008_02188d74* unknown_73c_;
    Struct_ov006_021580b8* unknown_740_;
    char unknown_744_[0xb12 - 0x744];
    unsigned char unknown_b12_;
    char unknown_b13_[0xb20 - 0xb13];
    int unknown_b20_;
};

// USA: func_ov008_02188d74
extern "C" ARM int func_ov008_02188d74(Struct_ov008_021842a0_2* arg0)
{
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    unsigned char var1 = arg0->unknown_b12_;
    if (var1 == 0)
    {
        arg0->unknown_73c_ = NULL;
        arg0->unknown_740_ = NULL;
        arg0->unknown_50_.Reset();
        arg0->unknown_73c_ = (Struct_ov008_02188d74*)arg0->unknown_50_.Allocate(sizeof(Struct_ov008_02188d74));
        arg0->unknown_740_ = (Struct_ov006_021580b8*)arg0->unknown_50_.Allocate(sizeof(Struct_ov006_021580b8));
        func_0205a444((char*)arg0->unknown_73c_);
        arg0->unknown_73c_->unknown_50_ = 1;
        Struct_ov008_02188d74* var2 = arg0->unknown_73c_;
        var2->inline_ov008_02188d74(arg0->unknown_740_, 1);
        for (int var3 = 0; var3 < 1; var3++)
            func_0205a198((Struct_02043368_2*)&arg0->unknown_740_[var3]);
        arg0->unknown_b20_ = var0->QueueLoadFile(func_020e0434((Struct_0201099c_3*)&arg0->unknown_a0_, LOW_REGION(4, 7)), NULL);
        arg0->unknown_b12_++;
    }
    if (var1 == 1 && var0->GetTaskStatus(arg0->unknown_b20_))
    {
        char var4[4];
        void* var5;
        unsigned int var6;
        var0->GetLoadedFileByID(arg0->unknown_b20_, &var5, &var6);
        int var7 = func_02046900((Struct_02020cb8_4*)var5);
        for (int var8 = 0; var8 < var7; var8++)
        {
            unsigned int var9;
            void* var10 = func_020467f0((Struct_02020aec*)var5, var8, (void**)var4, (int*)&var9);
            if (var10 != NULL)
                func_0205a528(arg0->unknown_73c_, var10, var9, &arg0->unknown_50_);
        }
        var0->RemoveTask(arg0->unknown_b20_);
        arg0->unknown_b20_ = -1;
        arg0->unknown_b12_ = 0;
        return 1;
    }
    return 0;
}
