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

extern "C" void NSBXX_Model_SetMaterialAlpha(NSBXXInternalModel* model, unsigned int materialIndex, int alpha);

extern "C" int NSBXX_Model_GetMaterialPolygonID(NSBXXInternalModel* model, unsigned int materialIndex);

extern "C" void NSBXX_Model_SetDiffuseReflectionColor(NSBXXInternalModel* model, int col);

extern "C" void NSBXX_Model_SetAmbientReflectionColor(NSBXXInternalModel* model, int col);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b72ec
extern "C" void NSBXX_Model_SetPolygonID(NSBXXInternalModel* model, int id)
{
    unsigned int matIdx = 0;
    if (model->numMaterials_ > UNSIGNED_ZERO())
    {
        do
        {
            NSBXX_Model_SetMaterialPolygonID(model, matIdx, id);
            matIdx++;
        } while (matIdx < model->numMaterials_);
    }
}

extern "C" void NSBXX_Model_SetAlpha(NSBXXInternalModel* model, int alpha);
