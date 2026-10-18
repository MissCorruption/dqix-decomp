#include <globaldefs.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef signed short s16;
typedef s32 fx32;
typedef s16 fx16;
typedef int BOOL;
typedef u16 NNSG3dItemTag;

#define NNS_G3D_NULL_ASSERT SDK_NULL_ASSERT
#define NNS_G3D_ASSERT SDK_ASSERT

typedef struct NNSG3dResDictTreeNode_ {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
} NNSG3dResDictTreeNode;

typedef struct NNSG3dResDict_ {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;

typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;

typedef struct NNSG3dResDictMatData_ {
    u32 offset;
} NNSG3dResDictMatData;

typedef struct NNSG3dResMatData_ {
    NNSG3dItemTag itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth, origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dResMatData;

typedef struct NNSG3dResMat_ {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;

typedef struct NNSG3dResMdlInfo_ {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackID;
    u8 dummy_;
    fx32 posScale;
    fx32 invPosScale;
    u16 numVertex;
    u16 numPolygon;
    u16 numTriangle;
    u16 numQuad;
    fx16 boxX, boxY, boxZ;
    fx16 boxW, boxH, boxD;
    fx32 boxPosScale;
    fx32 boxInvPosScale;
} NNSG3dResMdlInfo;

typedef struct NNSG3dResNodeInfo_ {
    NNSG3dResDict dict;
} NNSG3dResNodeInfo;

typedef struct NNSG3dResMdl_ {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResNodeInfo nodeInfo;
} NNSG3dResMdl;

#ifdef __cplusplus
extern "C" {
#endif

inline void * NNS_G3dGetResDataByIdx (const NNSG3dResDict * dict, u32 idx)
{
    NNSG3dResDictEntryHeader * hdr;
    NNS_G3D_NULL_ASSERT(dict);

    if (dict != NULL && idx < dict->numEntry) {
        NNS_G3D_ASSERT(dict->ofsEntry != 0);
        hdr = (NNSG3dResDictEntryHeader *)((u8 *)dict + dict->ofsEntry);
        return (void *)(&hdr->data[0] + hdr->sizeUnit * idx);
    } else {
        return NULL;
    }
}

inline NNSG3dResMat * NNS_G3dGetMat (const NNSG3dResMdl * mdl)
{
    NNS_G3D_NULL_ASSERT(mdl);
    NNS_G3D_ASSERT(mdl->ofsMat != 0);

    if (mdl && mdl->ofsMat != 0)
        return (NNSG3dResMat *)((u8 *)mdl + mdl->ofsMat);
    else
        return NULL;
}

inline NNSG3dResMatData * NNS_G3dGetMatDataByIdx (const NNSG3dResMat * mat, u32 idx)
{
    NNSG3dResDictMatData * data;
    NNS_G3D_NULL_ASSERT(mat);

    if (mat) {
        data = (NNSG3dResDictMatData *)NNS_G3dGetResDataByIdx(&mat->dict, idx);
        if (data) {
            NNS_G3D_ASSERT(data->offset != 0);
            return (NNSG3dResMatData *)((u8 *)mat + data->offset);
        }
    }

    return NULL;
}

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b6f64
ARM void NSBXX_Model_AdjustPolygonAttrMask (NNSG3dResMdl * pMdl, BOOL isOn, u32 mask)
{
    u32 numMat;
    u32 i;
    NNSG3dResMat * mat;
    NNS_G3D_NULL_ASSERT(pMdl);

    numMat = pMdl->info.numMat;
    mat = NNS_G3dGetMat(pMdl);

    for (i = 0; i < numMat; ++i) {
        NNSG3dResMatData * data = NNS_G3dGetMatDataByIdx(mat, i);
        NNS_G3D_NULL_ASSERT(data);

        if (isOn) {
            data->polyAttrMask |= mask;
        } else {
            data->polyAttrMask &= ~mask;
        }
    }
}

#ifdef __cplusplus
}
#endif
