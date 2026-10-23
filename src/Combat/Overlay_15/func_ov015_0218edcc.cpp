#include <globaldefs.h>
#include "World/Object3D.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/Graphics.h"

struct Struct_ov015_0218c03c_2
{
    char unknown_0_[0x24];
    Object3D* unknown_24_;
    char unknown_28_[0x34 - 0x28];
    unsigned short unknown_34_;
    unsigned short unknown_36_;
};

// USA: func_ov015_0218edcc
extern "C" ARM void func_ov015_0218edcc(Struct_ov015_0218c03c_2* arg0)
{
    GXFIFO_MATRIX_PUSH = 0;
    arg0->unknown_24_->Draw(false);
    RenderConfig::SubmitToFifo();
    GXFIFO_MATRIX_POP = 1;
    arg0->unknown_34_ = arg0->unknown_36_ = 0;
    arg0->unknown_34_ = arg0->unknown_24_->pModel_->rawInternalModel_->numTriangles_;
    arg0->unknown_36_ = arg0->unknown_24_->pModel_->rawInternalModel_->numQuads_;
}
