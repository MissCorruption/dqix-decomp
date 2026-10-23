#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"

extern const fix16_t data_020e9450[4096 * 2];

struct OamAttr02075df4 {
    unsigned int attr01;
    unsigned short attr2;
    short affine;
};

struct Scale02075df4 {
    fix32_t x;
    fix32_t y;
};

struct OamCells02075df4 {
    int** charNames;
    int** shapes;
    int** offsetsX;
    int** offsetsY;
    short* counts;
    OamAttr02075df4* oam;
    char unknown18[0x10];
    Scale02075df4 scale;
    unsigned short angle;
    char unknown32[0xa];
    int palette;
    int priority;
    int matrixIndex;
    int mode;
    int effect;
    int colorMode;
};

static inline fix32_t SineSample(int sample) {
    return data_020e9450[sample * 2];
}

static inline fix32_t CosineSample(int sample) {
    return data_020e9450[sample * 2 + 1];
}

static inline bool IsAffine(int effect) {
    return effect == 0x100 || effect == 0x300;
}

// USA: func_02075df4
extern "C" ARM int func_02075df4(OamCells02075df4* cells, int index, int x, int y) {
    int* offsetsX = cells->offsetsX[index];
    int* offsetsY = cells->offsetsY[index];
    int* charNames = cells->charNames[index];
    int* shapes = cells->shapes[index];
    bool affine = false;
    if (IsAffine(cells->effect)) {
        affine = true;
    }
    Matrix2x2* matrix = NULL;
    Matrix2x2 scaled;
    Matrix2x2 inverse;
    Matrix2x2 rotation;
    short i;

    if (affine) {
        unsigned short angle = cells->angle;
        Scale02075df4 scale = cells->scale;
        fix32_t cosine = CosineSample(angle >> 4);
        func_020c111c(&rotation, SineSample(angle >> 4), cosine);
        func_020c1128(&rotation, &scaled, scale.x, scale.y);
        func_020c1128(&rotation, &inverse, fix32_Divide(0x1000, scale.x),
                                        fix32_Divide(0x1000, scale.y));
        matrix = &scaled;
    }
    if (matrix != NULL) {
        OamAttr02075df4* oam = cells->oam;
        oam[0].affine = inverse.values[0] >> 4;
        oam[1].affine = inverse.values[1] >> 4;
        oam[2].affine = inverse.values[2] >> 4;
        oam[3].affine = inverse.values[3] >> 4;
    }
    for (i = 0; i < cells->counts[index]; i++) {
        int offsetX = offsetsX[i];
        int offsetY = offsetsY[i];
        if (matrix != NULL) {
            offsetX = (cells->scale.x * offsetX) >> 12;
            offsetY = (cells->scale.y * offsetY) >> 12;
        }
        {
            int px;
            int py;
            OamAttr02075df4* oam;
            int priority;
            int mode;
            int effect;
            int shape;
            int color;
            int charName;
            int cParam;
            int rsParam;
            px = offsetX + x;
            py = offsetY + y;
            oam = &cells->oam[i];
            rsParam = cells->matrixIndex;
            cParam = cells->palette;
            charName = charNames[i];
            color = cells->colorMode;
            shape = shapes[i];
            effect = cells->effect;
            mode = cells->mode;
            priority = cells->priority;
            if (IsAffine(effect)) {
                if (mode == 3) {
                    oam->attr01 = effect | ((shape | (((py & 0xff) | (rsParam << 25)) | (mode << 10))) |
                                            ((px & 0x1ff) << 16));
                } else {
                    oam->attr01 = effect | ((shape | (((py & 0xff) | ((rsParam << 25) | (color << 13))) |
                                                      (mode << 10))) |
                                            ((px & 0x1ff) << 16));
                }
            } else {
                if (mode == 3) {
                    oam->attr01 = effect | ((shape | ((py & 0xff) | (mode << 10))) | ((px & 0x1ff) << 16));
                } else {
                    oam->attr01 = effect | ((shape | ((py & 0xff) | (color << 13) | (mode << 10))) |
                                            ((px & 0x1ff) << 16));
                }
            }
            oam->attr2 = (charName | (priority << 10)) | (cParam << 12);
        }
    }
    return cells->counts[index];
}
