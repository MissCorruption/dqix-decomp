#include <globaldefs.h>
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "World/Object3D.h"

struct Struct_02040774_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};

extern "C" void func_020407b4(struct Struct_02040774_2* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_02033fa0(void* arg0);
extern "C" int func_0204bedc(unsigned short* arg0);

// USA: func_020ae20c
extern "C" ARM void func_020ae20c(void* arg0, struct Struct_02040774_2* arg1, int* arg2, int arg3) {
    if (arg1 == NULL) return;

    func_020407b4(arg1, arg2[0], 0xffffd009, arg2[2]);
    func_0203db34((unsigned char*)arg1, 0, arg3, 0);

    int var0 = 0xc;
    void* var1 = func_02033fa0(arg0);
    if (var1 != NULL) {
        if (func_0204bedc((unsigned short*)var1))
            var0 = 0x14;
    }

    RenderConfig::SetPolygonAttributes(1, 3, 1, 0, var0, 0x8000);
    {
        NSBXXInternalModel* var2 = ((Object3D*)arg1)->pModel_->rawInternalModel_;
        NSBXX_Model_AdjustPolygonAttrMask(var2, 0, 0x30);
        NSBXX_Model_AdjustPolygonAttrMask(var2, 0, 0xc0);
        NSBXX_Model_AdjustPolygonAttrMask(var2, 0, 0x3f000000);
        NSBXX_Model_AdjustPolygonAttrMask(var2, 0, 0x1f0000);
        NSBXX_Model_AdjustPolygonAttrMask(var2, 0, 0x8000);
    }
    ((Object3D*)arg1)->Draw(true);

    RenderConfig::SetPolygonAttributes(1, 3, 3, 0x3c, var0, 0x8000);
    {
        NSBXXInternalModel* var3 = ((Object3D*)arg1)->pModel_->rawInternalModel_;
        NSBXX_Model_AdjustPolygonAttrMask(var3, 0, 0x30);
        NSBXX_Model_AdjustPolygonAttrMask(var3, 0, 0xc0);
        NSBXX_Model_AdjustPolygonAttrMask(var3, 0, 0x3f000000);
        NSBXX_Model_AdjustPolygonAttrMask(var3, 0, 0x1f0000);
        NSBXX_Model_AdjustPolygonAttrMask(var3, 0, 0x8000);
    }
    ((Object3D*)arg1)->Draw(true);
}
