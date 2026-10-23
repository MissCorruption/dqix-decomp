#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov023_021fbf4c
{
    int unknown_0_;
    SafeAllocator unknown_4_;
};

struct Struct_02000c9c_74
{
    char unknown_0_[0x18];
};

class Struct_ov023_021fbf4c_2
{
public:
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    const char* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    int unknown_1c_;
    SafeAllocator unknown_20_;
    Struct_02000c9c_74 unknown_34_;
    int unknown_4c_;

    virtual void inline_ov023_021fbf4c(void* arg0);
};

struct Struct_ov023_021fbf4c_3;

extern "C" double _dadd(double arg0, double arg1);
extern "C" unsigned int func_0200af90(double value);
extern "C" Struct_ov023_021fbf4c_3* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f6bb8(Struct_ov023_021fbf4c_3* arg0);
extern "C" void func_ov023_021f6bb0(Struct_ov023_021fbf4c_3* arg0, int arg1);
extern "C" Struct_ov023_021fbf4c* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_020de888(Struct_02000c9c_74* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_020dea64(Struct_02000c9c_74* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3,
                              unsigned char* arg4, int arg5);

// USA: func_ov023_021fbf4c
extern "C" ARM int func_ov023_021fbf4c(Struct_ov023_021fbf4c_2* arg0, void* arg1)
{
#if defined(jpn)
 enum {Enum_ov023_021fbf4c_106496=0x19000};
#else
 enum {Enum_ov023_021fbf4c_106496=0x1a000};
#endif
    Struct_ov023_021fbf4c* var0;
    Struct_ov023_021fbf4c_3* var1 = func_ov011_021849c8(arg1);
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    int var3 = func_ov023_021f6bb8(var1);
    if (var2->GetTaskStatus(var3))
    {
        if (var2->GetDetailedTaskStatus(var3) == 2)
        {
            void* var4;
            unsigned int var5;
            var2->GetLoadedFileByID(var3, &var4, &var5);
            var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
            if (var0 == NULL)
            {
                var2->RemoveTask(var3);
                func_ov023_021f6bb0(var1, -1);
                return 2;
            }
            if (arg0->unknown_4c_ == 0)
            {
                arg0->unknown_20_.CreateTypeA(var0->unknown_4_.Allocate(Enum_ov023_021fbf4c_106496), Enum_ov023_021fbf4c_106496);
                arg0->unknown_20_.Reset();
                func_020de888(&arg0->unknown_34_, &arg0->unknown_20_, var4, var5);
            }
            else
            {
                unsigned int var6 = 0;
                short var7 = 0;
                unsigned char var8[12] = {0};
                if (arg0->unknown_4c_ & 1)
                {
#if defined(jpn)
                    var6 += 0x12c00;
#else
                    var6 = func_0200af90(_dadd(var6, 79872.0));
#endif

                    for (short var9 = 0; var9 <= 7; var9++)
                        var8[var7++] = var9;
                }
                if (arg0->unknown_4c_ & 2)
                {
#if defined(jpn)
                    var6 += 0x1c00;
#else
                    var6 = func_0200af90(_dadd(var6, 7987.2));
#endif

                    var8[var7++] = 8;
                }
                if (arg0->unknown_4c_ & 4)
                {
#if defined(jpn)
                    var6 += 0x1400;
#else
                    var6 = func_0200af90(_dadd(var6, 4915.2));
#endif

                    var8[var7++] = 9;
                }
                if (arg0->unknown_4c_ & 8)
                {
#if defined(jpn)
                    var6 += 0x4000;
#else
                    var6 = func_0200af90(_dadd(var6, 15872.0));
#endif

                    var8[var7++] = 11;
                }
                if (var6 > Enum_ov023_021fbf4c_106496)
                    var6 = Enum_ov023_021fbf4c_106496;
                arg0->unknown_20_.CreateTypeA(var0->unknown_4_.Allocate(var6), var6);
                arg0->unknown_20_.Reset();
                func_020dea64(&arg0->unknown_34_, &arg0->unknown_20_, var4, var5, var8, var7);
            }
        }
        var2->RemoveTask(var3);
        func_ov023_021f6bb0(var1, -1);
        return 2;
    }
    return arg0->unknown_1c_;
}
