#include "Graphics/NSBXX/NSBXX.h"
#include "Graphics/NSBXX/RenderCommands_Common.h"
#include "Graphics/NSBXX/Animation.h"



#if defined(jpn)
#define data_020f1c80 data_020f1dec
#endif

extern "C"
{
    // memset
    void func_020ca390(int, void*, unsigned);
}

// processing callback for M.AM animations
extern void (*data_020f1c80)(void* data, AnimationData* anim, int arg);

unsigned short GetColorFromMaterialAnimation(NSBXXAnimationMAM* mam, unsigned int trackEntry, unsigned int frame);


unsigned short GetAlphaFromMaterialAnimation(NSBXXAnimationMAM* mam, unsigned int trackEntry, unsigned int frame);


void InitializeModelAnimationFromMAM(AnimationData* anim, void* pvMAM, NSBXXInternalModel* model);


// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9188
void MAMAnimationProcessingCallback(void* data, AnimationData* anim, int arg)
{
    MaterialRenderData* renderData = (MaterialRenderData*)data;
    NSBXXAnimationMAM* mam = (NSBXXAnimationMAM*)anim->pRawData_;
    unsigned int frame = anim->time_ >> 12;
    NSBXXAnimationMAM::Track* track = mam->tracks_.GetEntryByIndex_notVolatile<NSBXXAnimationMAM::Track>((unsigned short)arg);

    unsigned int diffuseCol = GetColorFromMaterialAnimation(mam, track->diffuse_, frame);
    unsigned int ambientCol = GetColorFromMaterialAnimation(mam, track->ambient_, frame);

    renderData->paramDIF_AMB_ = (diffuseCol) | (ambientCol << 16) | (((renderData->paramDIF_AMB_ & 0x8000) ? 1 : 0) << 15);

    unsigned int specEmission = GetColorFromMaterialAnimation(mam, track->emission_, frame);
    unsigned int specReflection = GetColorFromMaterialAnimation(mam, track->reflection_, frame);

    renderData->paramSPE_EMI_ = (specReflection) | (specEmission << 16) | (((renderData->paramSPE_EMI_ & 0x8000) ? 1 : 0) << 15);

    unsigned int alpha = GetAlphaFromMaterialAnimation(mam, track->alpha_, frame);
    renderData->paramPOLYGON_ATTR_ = (renderData->paramPOLYGON_ATTR_ & ~0x1f0000) | (alpha << 16);
}
