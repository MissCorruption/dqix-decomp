#include <globaldefs.h>

#include <World/Object3D.h>
#include <NitroSDK/NSBXX/RenderConfig.h>
#include "Resource/Brightness.h"

#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

extern "C" void func_020ca528(void* a, void* b);
extern int data_0210a0cc;

// USA: func_0208f87c
extern "C" ARM void func_0208f87c(const void* arg0, int arg1, int arg2, int arg3, int arg4) {
    void* var0 = GetGameResources();
    Object3D* var1 = *(Object3D**)((char*)var0 + (IS_JPN ? 0x34bc : 0x36cc));
    if (TestFlags04((GameResources*)var0, 0x200400) != 0) {
        return;
    }
    if (var1->pModel_ == 0) {
        return;
    }
    var1->pModel_->SetMaterialDiffuseColor(arg1);
    RenderConfig::SetObjectPosition((Vector3i*)arg0);
    Vector3i var2 = { arg2, arg2, arg2 };
    RenderConfig::SetObjectScale(&var2);
    Matrix3x3 var3;
    Mat3x3_WriteIdentity(&var3);
    func_020ca528(&var3, &data_0210a0cc);
    data_0210a010.flags &= ~0xa4;
    var1->SetInheritedAlpha(arg3);
    RenderConfig::SubmitToFifo();
    var1->DrawMeshWithMaterialSimple(0, 0, 0, 1);
}
