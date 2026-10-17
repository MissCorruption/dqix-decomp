#include <globaldefs.h>
#include <Graphics/NSBXX/NSBXX.h>
#include <Graphics/NSBXX/RenderCommands_Common.h>
#include <Graphics/NSBXX/Animation.h>
unsigned short GetColorFromMaterialAnimation(NSBXXAnimationMAM*, unsigned int, unsigned int);
unsigned short GetAlphaFromMaterialAnimation(NSBXXAnimationMAM*, unsigned int, unsigned int);

inline unsigned int PackDiffuseAmbient(unsigned int diffuse, unsigned int ambient, int setVertexColor) {
    return diffuse | (ambient << 16) | ((setVertexColor != 0) << 15);
}

inline unsigned int PackSpecularEmission(unsigned int specular, unsigned int emission, int shininess) {
    return specular | (emission << 16) | ((shininess != 0) << 15);
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b9188
ARM void MAMAnimationProcessingCallback(void* data, AnimationData* anim, int arg)
{
    MaterialRenderData* renderData = (MaterialRenderData*)data;
    NSBXXAnimationMAM* mam = (NSBXXAnimationMAM*)anim->pRawData_;
    unsigned int frame = anim->time_ >> 12;
    NSBXXAnimationMAM::Track* track = mam->tracks_.GetEntryByIndex_notVolatile<NSBXXAnimationMAM::Track>((unsigned short)arg);

    unsigned int diffuseCol = GetColorFromMaterialAnimation(mam, track->diffuse_, frame);
    unsigned int ambientCol = GetColorFromMaterialAnimation(mam, track->ambient_, frame);

    renderData->paramDIF_AMB_ = PackDiffuseAmbient(diffuseCol, ambientCol, renderData->paramDIF_AMB_ & 0x8000);

    unsigned int specEmission = GetColorFromMaterialAnimation(mam, track->emission_, frame);
    unsigned int specReflection = GetColorFromMaterialAnimation(mam, track->reflection_, frame);

    renderData->paramSPE_EMI_ = PackSpecularEmission(specReflection, specEmission, renderData->paramSPE_EMI_ & 0x8000);

    unsigned int alpha = GetAlphaFromMaterialAnimation(mam, track->alpha_, frame);
    renderData->paramPOLYGON_ATTR_ = (renderData->paramPOLYGON_ATTR_ & ~0x1f0000) | (alpha << 16);
}
