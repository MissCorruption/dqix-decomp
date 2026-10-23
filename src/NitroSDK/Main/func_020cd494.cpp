#include <globaldefs.h>
#include "NitroSDK/Filesystem/OverlayFSManagement.h"

struct Struct_020cd494
{
    Struct_020cd494* unknown_0_;
    void (*unknown_4_)(void* object);
    void* unknown_8_;
};

int DisableIRQInterrupts();
int SetIRQInterruptState(int);

extern Struct_020cd494* data_020f33b0;

// USA: func_020cd494
extern "C" ARM void func_020cd494(const OverlayMetadata& arg0)
{
    for (;;)
    {
        Struct_020cd494* var0 = NULL;
        Struct_020cd494* var1 = NULL;
        const unsigned int var2 = arg0.loadAddress;
        const unsigned int var3 = var2 + (arg0.uncompressedSize + arg0.bssSectionSize);

        {
            int var4 = DisableIRQInterrupts();
            Struct_020cd494* var5 = NULL;
            Struct_020cd494* var6 = data_020f33b0;
            Struct_020cd494* var7 = var6;

            while (var7)
            {
                Struct_020cd494* var8 = var7->unknown_0_;
                const unsigned int var9 = (unsigned int)var7->unknown_4_;
                const unsigned int var10 = (unsigned int)var7->unknown_8_;

                if (var10 == 0 && var9 >= var2 && var9 < var3 ||
                    var10 >= var2 && var10 < var3)
                {
                    if (!var1)
                    {
                        var0 = var7;
                    }
                    else
                    {
                        var1->unknown_0_ = var7;
                    }
                    if (var6 == var7)
                    {
                        var6 = data_020f33b0 = var8;
                    }
                    var1 = var7, var7->unknown_0_ = NULL;
                    if (var5)
                    {
                        var5->unknown_0_ = var8;
                    }
                }
                else
                {
                    var5 = var7;
                }
                var7 = var8;
            }
            SetIRQInterruptState(var4);
        }

        if (!var0)
        {
            break;
        }

        do
        {
            Struct_020cd494* var11 = var0->unknown_0_;
            if (var0->unknown_4_)
            {
                var0->unknown_4_(var0->unknown_8_);
            }
            var0 = var11;
        } while (var0);
    }
}
