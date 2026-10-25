#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "Resource/Brightness.h"


struct Struct_02057a6c;

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_ov017_02196048(int*, int*, int*);
extern "C" Struct_02057a6c* func_02057924(void);
extern "C" int func_020ca4b4(const void* arg0, void* arg1, int arg2);
extern "C" void func_02057a6c(Struct_02057a6c* arg0);
extern "C" void func_ov017_021a3af0(int arg0);

extern const Vector3fix data_ov017_021d6420;
extern const Vector3fix data_ov017_021d642c;

struct Struct_ov017_02195ecc {
    unsigned int unknown_0_[2];
#if defined(jpn)
    char unknown_8_[0x34ec - 0x8];
#else
    char unknown1_8_[0x36fc - 0x8];
#endif
    int unknown_36fc_;
};

// USA: func_ov017_02195ecc
extern "C" ARM void func_ov017_02195ecc(Struct_ov017_02195ecc* arg0, unsigned int arg1) {
    if (arg1 == 0) {
        return;
    }

    Vector3fix var0 = data_0210a010.eyeVector;
    Vector3fix var1 = data_0210a010.upVector;
    Vector3fix var2 = data_0210a010.targetVector;
    Matrix4x4 var3 = data_0210a010.projectionMatrix;
    Vector3fix var4 = data_ov017_021d6420;
    Vector3fix var5;
    __clear(&var5, sizeof(var5));
    Vector3fix var6 = data_ov017_021d642c;

    Mat4x4_WriteProjectionUnknown(0xe000, -0x22000, -0x20000, 0x20000, 0x1000, 0x190000, 0x1000,
                                  &data_0210a010.projectionMatrix);
    data_0210a010.flags &= ~((1 << RENDER_CONFIG_FLAG_4) | (1 << RENDER_CONFIG_FLAG_6));
    func_ov017_02196048((int*)&var4, (int*)&var6, (int*)&var5);
    RenderConfig::SubmitToFifo();
    SendQueuedDataToGeometryFifo();

    if (arg1 & 1) {
        Struct_02057a6c* var7 = func_02057924();
        if (TestFlags04((GameResources*)(arg0->unknown_0_), 0x20) == 0) {
            func_02057a6c(var7);
        }
    }
    if (arg1 & 2) {
        func_ov017_021a3af0(arg0->unknown_36fc_);
    }

    func_ov017_02196048((int*)&var0, (int*)&var1, (int*)&var2);
    func_020ca4b4(&var3, &data_0210a010.projectionMatrix, sizeof(Matrix4x4));
    data_0210a010.flags &= ~((1 << RENDER_CONFIG_FLAG_4) | (1 << RENDER_CONFIG_FLAG_6));
    RenderConfig::SubmitToFifo();
    SendQueuedDataToGeometryFifo();
}
