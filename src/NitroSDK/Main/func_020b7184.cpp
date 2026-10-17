#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>
#include <asmhacks.h>
#include "Graphics/NSBXX/Animation.h"
#include "Memory/AllocatorUnion.h"

int GetAlignedSizeByCode020b2a6c(unsigned char* code, struct FormatInfo020b2a6c* info);

extern "C" AnimationData* NSBXX_Model_AllocateAnimationData(AllocatorUnion* alloc, const void* rawAnim, NSBXXInternalModel* model);

extern "C" void NSBXX_Model_SetAllMaterialFlags(NSBXXInternalModel *model, int value, unsigned int mask);

extern "C" void NSBXX_Model_AdjustPolygonAttrMask(NSBXXInternalModel* model, bool setBits, unsigned int mask);

extern "C" void NSBXX_Model_SetMaterialDiffuseReflectionColor(NSBXXInternalModel* model, unsigned int materialIndex, int col);

extern "C" void NSBXX_Model_SetMaterialAmbientReflectionColor(NSBXXInternalModel* model, unsigned int materialIndex, int col);

extern "C" void NSBXX_Model_SetMaterialPolygonID(NSBXXInternalModel* model, unsigned int materialIndex, int id);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b7184
extern "C" void NSBXX_Model_SetMaterialAlpha(NSBXXInternalModel* model, unsigned int materialIndex, int alpha)
{
    NSBXXMaterial* material = model->GetMaterialData()->GetMaterialByIndex(materialIndex);
    material->paramPOLYGON_ATTR_ = material->paramPOLYGON_ATTR_ & ~0x1f0000 | (alpha << 16);
}

extern "C" int NSBXX_Model_GetMaterialPolygonID(NSBXXInternalModel* model, unsigned int materialIndex);

extern "C" void NSBXX_Model_SetDiffuseReflectionColor(NSBXXInternalModel* model, int col);

extern "C" void NSBXX_Model_SetAmbientReflectionColor(NSBXXInternalModel* model, int col);

extern "C" void NSBXX_Model_SetPolygonID(NSBXXInternalModel* model, int id);

extern "C" void NSBXX_Model_SetAlpha(NSBXXInternalModel* model, int alpha);
