#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/LootableContainer.h"
#include "Resource/GameResources.h"

#if defined(usa)
#endif

// USA: func_02013d24
extern "C" ARM void func_02013d24(Zone3D* arg0)
{
    LootableContainerManager* var0 = LootableContainerManager::GetMainInstance();
    for (int var1 = 0; var1 < (unsigned char)arg0->unknown_476_; ++var1)
    {
        Struct_020133cc* var2 = &arg0->unknown_478_[var1];
        LootableContainerManager::Container* var3 =
            var0->GetContainerByID(var2->unknown_0_, NULL);
        if (var3 == NULL)
            continue;

        int var4 = var3->containerType;
        if (var4 == 1)
        {
            func_02048004(arg0->unknown_480_[0], &var2->unknown_8_[0]);
            func_02048004(arg0->unknown_480_[1], &var2->unknown_8_[1]);
            Struct_02012fa4* var5 = var2->unknown_118_;
            for (int var6 = 0; var6 < 4; ++var6)
                func_02048004(arg0->unknown_480_[2], var5 + var6);
        }
        else if (var4 == 2)
        {
            func_02048004(arg0->unknown_480_[3], &var2->unknown_8_[0]);
            func_02048004(arg0->unknown_480_[4], &var2->unknown_8_[1]);
            Struct_02012fa4* var7 = var2->unknown_118_;
            for (int var8 = 0; var8 < 4; ++var8)
                func_02048004(arg0->unknown_480_[5], var7 + var8);
        }
    }
}
