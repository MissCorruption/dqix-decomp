#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Memory.h"

struct Struct_ov027_021d9e9c_3
{
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    unsigned char* unknown_8_;
    unsigned long unknown_c_;
};

struct Struct_ov027_021d9e9c_4
{
    unsigned long unknown_0_;
    char unknown_4_[0xc];
    char unknown_10_[4];
    unsigned long unknown_14_;
    void* unknown_18_;
    char unknown_1c_[0x14];
    Struct_ov027_021d9e9c_3 unknown_30_[4];
};

struct Struct_ov027_021d9e9c_5
{
    char unknown_0_[0x20];
    unsigned long unknown_20_;
    unsigned long unknown_24_;
    unsigned long unknown_28_;
    unsigned long unknown_2c_;
    unsigned long unknown_30_;
    unsigned long unknown_34_;
    unsigned long unknown_38_;
    unsigned long unknown_3c_;
    char unknown_40_[0x20];
    unsigned long unknown_60_;
    char unknown_64_[0x1c];
    unsigned long unknown_80_;
    char unknown_84_[0x160 - 0x84];
};

static inline const Struct_ov027_021d9e9c_5* inline_ov027_021d9e9c()
{
    return (const Struct_ov027_021d9e9c_5*)0x027ffe00;
}

struct Struct_ov027_021d9e9c
{
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    unsigned long unknown_8_;
    unsigned long unknown_c_;
};

struct Struct_ov027_021d9e9c_2
{
    unsigned long unknown_0_;
    unsigned char* unknown_4_;
    unsigned char* unknown_8_;
    unsigned long unknown_c_;
};

#define SEGMENT_BUFFER_MIN 0x164
#define SECURE_AREA_START 0x4000
#define SECURE_AREA_END 0x8000

extern "C" const unsigned long (*data_ov027_021dd8e4)[2];
extern "C" char data_ov027_021dd8e8[];

extern "C"
{
    void AutoloadCallback();
    void func_ov027_021dd104(Struct_ov027_021d9e9c_4* arg0);
    void func_ov027_021dd118(Struct_ov027_021d9e9c_4* arg0, unsigned long arg1, unsigned long arg2, void* arg3, unsigned long arg4);
    void func_ov027_021da314(const Struct_ov027_021d9e9c_2* arg0, unsigned long arg1, unsigned long arg2, int arg3);
}

// USA: func_ov027_021d9e9c
extern "C" ARM int func_ov027_021d9e9c(NitroVM* arg0, void* arg1, unsigned long arg2)
{
    int var0 = false;
    if (arg2 >= SEGMENT_BUFFER_MIN)
    {
        int var1 = false;
        unsigned long var2 = arg2;
        unsigned char* var3 = (unsigned char*)arg1;
        Struct_ov027_021d9e9c_4* var4 = NULL;
        Struct_ov027_021d9e9c* var5 = NULL;
        Struct_ov027_021d9e9c_5* var6 = (Struct_ov027_021d9e9c_5*)arg1;
        int var7;
        unsigned long var8;
        NitroVM var9;

        var3 += sizeof(Struct_ov027_021d9e9c_5);
        var2 -= sizeof(Struct_ov027_021d9e9c_5);

        if (arg0 != NULL)
        {
            var7 = arg0->fileInfo.unknown_c_ - arg0->fileInfo.unknown_4_;
            if (NitroVM_ReadSync(arg0, var6, sizeof(Struct_ov027_021d9e9c_5)) < (int)sizeof(Struct_ov027_021d9e9c_5))
                var2 = 0;
            var8 = var6->unknown_80_;
            if (var8 == 0)
                var8 = 0x01000000;
        }
        else
        {
            var8 = inline_ov027_021d9e9c()->unknown_80_;
            if (var8 == 0)
                var8 = 0x01000000;
            var1 = true;
            NitroVM_Initialize(&var9);
            NitroVM_PrepareRead(&var9, NitroHandle_FindBySignature(data_ov027_021dd8e8, 3), 0, var8 + 0x88,
                                (unsigned int)-1);
            arg0 = &var9;
            var7 = arg0->fileInfo.unknown_c_ - arg0->fileInfo.unknown_4_;
            VectorizedInvertedMemcpy(inline_ov027_021d9e9c(), var6, sizeof(Struct_ov027_021d9e9c_5));
            var6->unknown_60_ |= 0x406000;
        }

        if (var2 >= 0x88)
        {
            NitroVM_Seek(arg0, var7 + var8, 0);
            NitroVM_ReadSync(arg0, var3, 0x88);
            var3 += 0x88;
            var2 -= 0x88;
        }
        else
        {
            var2 = 0;
        }

        if (var2 >= sizeof(Struct_ov027_021d9e9c_4))
        {
            var4 = (Struct_ov027_021d9e9c_4*)var3;
            func_ov027_021dd104(var4);
            var3 += sizeof(Struct_ov027_021d9e9c_4);
            var2 -= sizeof(Struct_ov027_021d9e9c_4);
            func_ov027_021dd118(var4, 0, sizeof(Struct_ov027_021d9e9c_5), var6, 3);
            {
                int var10;
                const char* var11 = (const char*)arg0->linkedHandle;
                for (var10 = 0; var10 < 3 && var11[var10] != '\0'; ++var10)
                {
                }
                VectorizedInvertedMemcpy(var11, var4->unknown_10_, var10);
                var4->unknown_14_ = var10;
                var4->unknown_18_ = (void*)var11;
            }
        }
        else
        {
            var2 = 0;
        }

        if (var2 >= 0x10)
        {
            var5 = (Struct_ov027_021d9e9c*)var3;
            var5->unknown_0_ = 0;
            var5->unknown_4_ = var6->unknown_20_ + (var7 + arg0->fileInfo.unknown_4_);
            var5->unknown_8_ = var6->unknown_30_ + (var7 + arg0->fileInfo.unknown_4_);
            var3 += 0x10;
            var2 -= 0x10;
        }
        else
        {
            var2 = 0;
        }

        if (var2 >= var6->unknown_2c_ + var6->unknown_3c_)
        {
            const int var12 = arg0->fileInfo.unknown_4_;
            NitroVM_Seek(arg0, var5->unknown_4_ - var12, 0);
            NitroVM_ReadSync(arg0, var3, var6->unknown_2c_);
            func_ov027_021dd118(var4, var5->unknown_4_, var6->unknown_2c_, var3, 3);
            const unsigned long var13 = var6->unknown_2c_;
            NitroVM_Seek(arg0, var5->unknown_8_ - var12, 0);
            NitroVM_ReadSync(arg0, var3 + var13, var6->unknown_3c_);
            func_ov027_021dd118(var4, var5->unknown_8_, var6->unknown_3c_, var3 + var13, 3);
            var0 = true;
        }
        else if (var2 >= 0xcc00)
        {
            unsigned long var14;
            const unsigned long var15 = arg0->fileInfo.unknown_4_;
            var14 = var5->unknown_4_;
            NitroVM_Seek(arg0, var14 - var15, 0);
            NitroVM_ReadSync(arg0, var3, 0x4400);
            func_ov027_021dd118(var4, var14, 0x4400, var3, 3);
            var3 += 0x4400;
            var14 += 0x4400;
            NitroVM_Seek(arg0, var14 - var15, 0);
            NitroVM_ReadSync(arg0, var3, 0x4400);
            func_ov027_021dd118(var4, var14, 0x4400, var3, 2);
            var3 += 0x4400;
            var14 += 0x4400;
            NitroVM_Seek(arg0, var14 - var15, 0);
            NitroVM_ReadSync(arg0, var3, 0x4400);
            func_ov027_021dd118(var4, var14, 0x4400, var3, 2);
            var0 = true;
        }

        NitroVM_Seek(arg0, var7, 0);

        if (var1)
        {
            NitroVM_FinishRead(&var9);
            if (var0)
            {
                Struct_ov027_021d9e9c_2 var16;
                const unsigned long(*var17)[2] = data_ov027_021dd8e4;
                var16.unknown_0_ = var6->unknown_20_;
                var16.unknown_4_ = (unsigned char*)(var6->unknown_28_ - var6->unknown_20_);
                var16.unknown_8_ = var4->unknown_30_[1].unknown_8_ - var6->unknown_20_;
                var16.unknown_c_ = arg2;
                func_ov027_021da314(&var16, SECURE_AREA_START, SECURE_AREA_END, true);
                if ((*var17)[1] != 0)
                {
                    do
                    {
                        func_ov027_021da314(&var16, (*var17)[0], (*var17)[0] + (*var17)[1], false);
                    } while ((*++var17)[1] != 0);
                }
                unsigned char* var18 = var4->unknown_30_[1].unknown_8_;
                var18 += (unsigned long)AutoloadCallback - var6->unknown_28_;
                *(unsigned long*)var18 = 0xe12fff1e;
            }
        }
        if (var0)
            CleanInvalidateCacheRange(arg1, arg2);
    }
    return var0;
}
